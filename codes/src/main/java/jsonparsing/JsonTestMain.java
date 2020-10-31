package jsonparsing;

import com.fasterxml.jackson.databind.JsonNode;
import com.fasterxml.jackson.databind.node.ArrayNode;



import java.io.IOException;

import java.util.ArrayList;
import java.util.Iterator;


import static jsonparsing.Json.readFileAsString;

public class JsonTestMain {



    public static ArrayList<Object> result =  new ArrayList<> ();
    public static void traverse(JsonNode root){
        if(root.isObject()){
            Iterator<String> fieldNames;
            fieldNames = root.fieldNames();
            while(fieldNames.hasNext()) {
                String fieldName = fieldNames.next();
                JsonNode fieldValue = root.get(fieldName);
                if (!fieldValue.isArray()){
                        result.add(fieldValue);
                }
                traverse(fieldValue);
            }
        } else if(root.isArray()){
            ArrayNode arrayNode = (ArrayNode) root;
            for(int i = 0; i < arrayNode.size(); i++) {
                JsonNode arrayElement = arrayNode.get(i);
                traverse(arrayElement);
            }
        } else {
//                System.out.println(root);
            // JsonNode root represents a single value field - do something with it.
        }
    }

    public static void main(String[] args) throws Exception {

        String fileName = "src/main/resources/json/out.json";
        String json = readFileAsString(fileName);
        try {
        JsonNode node = Json.parse(json);
        traverse(node);
        System.out.println(result);
        }
        catch(IOException e){
            e.printStackTrace();
        }
    }
}
