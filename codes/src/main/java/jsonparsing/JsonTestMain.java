package jsonparsing;

import com.fasterxml.jackson.databind.JsonNode;
import com.fasterxml.jackson.databind.node.ArrayNode;

import jsonparsing.entity.AbstractSyntaxTree;
import jsonparsing.parser.JsonToTree;

import java.io.IOException;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Stack;

import static jsonparsing.parser.Json.readFileAsString;
import static jsonparsing.parser.Json.parse;

public class JsonTestMain {

    public static ArrayList<Object> result =  new ArrayList<> ();

    public static void main(String[] args) throws Exception {
        String fileName = "src/main/resources/json/out.json";
        String json = readFileAsString(fileName);
        try {
            JsonNode node = parse(json);
            AbstractSyntaxTree ast= new AbstractSyntaxTree();
            ast = JsonToTree.traverse(node, ast, null);
            ast.printTree();
        }
        catch(IOException e){
            e.printStackTrace();
        }
    }
}
