package jsonparsing;

import com.fasterxml.jackson.databind.JsonNode;

import jsonparsing.entity.AbstractSyntaxTree;
import jsonparsing.parser.JsonToTree;
import jsonparsing.util.Algorithm;

import java.io.IOException;

import java.util.*;

import static jsonparsing.parser.Json.readFileAsString;
import static jsonparsing.parser.Json.parse;

public class JsonTestMain {
    public static void main(String[] args) throws Exception {
        String fileName = "src/main/resources/json/student5378.json";
        String json = readFileAsString(fileName);
        String fileName2 = "src/main/resources/json/student7386.json";
        String json2 = readFileAsString(fileName2);
        String fileName3 = "src/main/resources/json/student6018.json";
        String json3 = readFileAsString(fileName3);
        try {
            JsonNode node = parse(json);
            AbstractSyntaxTree ast= new AbstractSyntaxTree();
            ast = JsonToTree.parse(node, ast, null);
            Algorithm algorithm = new Algorithm();
            LinkedList<String> list = new LinkedList<String>();
            algorithm.traverse(list, ast.getRoot());

            List<Integer> l = new ArrayList<>();
            for (String s: list){
                l.add(algorithm.hash(s));
            }
            // Collections.sort(l);
            System.out.println(l);
            System.out.println("=============================================");

            JsonNode node2 = parse(json2);
            AbstractSyntaxTree ast2= new AbstractSyntaxTree();
            ast2 = JsonToTree.parse(node2, ast2, null);

            LinkedList<String> list2 = new LinkedList<String>();
            algorithm.traverse(list2, ast2.getRoot());
    
            List<Integer> l2 = new ArrayList<>();
            for (String s: list2){
                l2.add(algorithm.hash(s));
            }
            // Collections.sort(l2);
            System.out.println(l2);

            System.out.println("=============================================");

            JsonNode node3 = parse(json3);
            AbstractSyntaxTree ast3= new AbstractSyntaxTree();
            ast3 = JsonToTree.parse(node3, ast3, null);

            LinkedList<String> list3 = new LinkedList<String>();
            algorithm.traverse(list3, ast3.getRoot());
    
            List<Integer> l3 = new ArrayList<>();
            for (String s: list3){
                l3.add(algorithm.hash(s));
            }
            // Collections.sort(l3);
            System.out.println(l3);


        }
        catch(IOException e){
            e.printStackTrace();
        }
    }
}
