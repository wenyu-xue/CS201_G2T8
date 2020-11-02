package jsonparsing;

import com.fasterxml.jackson.databind.JsonNode;
import com.fasterxml.jackson.databind.node.ArrayNode;



import java.io.IOException;

import java.util.ArrayList;
import java.util.Iterator;


import static jsonparsing.Json.readFileAsString;

public class JsonTestMain {



    public static ArrayList<Object> result =  new ArrayList<> ();
    
    public static void traverse(JsonNode root, JsonNode parent){
        if(root.isObject()){
            Iterator<String> fieldNames;
            fieldNames = root.fieldNames();
            
            while(fieldNames.hasNext()) {
                String fieldName = fieldNames.next();
                JsonNode fieldValue = root.get(fieldName);

     
                String value = fieldValue.toString();
                
                if (!fieldValue.isArray() && (value.contains("Identifier")||value.contains("IntegerConstant")||value.contains("CharacterConstant")  ) ){
                        //System.out.println(parent.toString());
                        result.add(parent.toString());
                        result.add(root.get("content"));
                }
                if (fieldName.equals("type")){
                    parent = fieldValue;
                }
                
                traverse(fieldValue, parent);
                
            }
        } else if(root.isArray()){
            ArrayNode arrayNode = (ArrayNode) root;
            for(int i = 0; i < arrayNode.size(); i++) {
                JsonNode arrayElement = arrayNode.get(i);
                
                traverse(arrayElement, parent);
            }
        } else {
//                System.out.println(root);
            // JsonNode root represents a single value field - do something with it.
        }
    }

    public static void main(String[] args) throws Exception {

        JsonNode parent = null;
        // Change the filename to the specific file in resource folder
        // student1013.json // student1021.json
        String fileName = "src/main/resources/json/out.json";
        String json = readFileAsString(fileName);
        try {
        JsonNode node = Json.parse(json);
        traverse(node, parent);
        System.out.println(result);
        }
        catch(IOException e){
            e.printStackTrace();
        }
    }
}
