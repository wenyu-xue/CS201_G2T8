package jsonparsing;

import com.fasterxml.jackson.databind.JsonNode;

import jsonparsing.entity.AbstractSyntaxTree;
import jsonparsing.parser.JsonToTree;
import jsonparsing.util.Algorithm;

import java.io.IOException;
import java.util.LinkedList;
import java.util.List;
import java.util.ArrayList;

import static jsonparsing.parser.Json.readFileAsString;
import static jsonparsing.parser.Json.parse;

import java.io.File;

public class JsonReader {
    public static List<AbstractSyntaxTree> readjson(File folder) throws Exception {
        File[] listOfFiles = folder.listFiles();
        ArrayList<AbstractSyntaxTree> result = new ArrayList<>();
        for (File file : listOfFiles) {
            if (file.isFile()) {
                String name = file.getName();

                if(checkIfJson(name)){
                    String fileName = folder.getPath() +"\\"+ name;
                    System.out.println(fileName);
                    String json = readFileAsString(fileName);
                    try {
                        JsonNode node = parse(json);
                        AbstractSyntaxTree ast= new AbstractSyntaxTree();
                        ast = JsonToTree.parse(node, ast, null);
                        result.add(ast);
                        //ast.printTree();
                        // Algorithm algorithm = new Algorithm();
                        // LinkedList<String> list = new LinkedList<String>();
                        // algorithm.traverse(list, ast.getRoot(), "");
                        // System.out.println(list);
                    }
                    catch(IOException e){
                        e.printStackTrace();
                    }
                }
            }
        } 
        return result;
    }
    private static boolean checkIfJson(String fileName){
        return fileName.substring(fileName.length() - 4).equals("json");
    }
}