package jsonparsing;

import com.fasterxml.jackson.databind.JsonNode;

import jsonparsing.entity.AbstractSyntaxTree;
import jsonparsing.parser.JsonToTree;
public class JsonTestMain {
    public static void main(String[] args) throws Exception {

        //File folder = new File("src/main/resources/json");
        //File folder = new File("json/Z1/Z1");
        File folder = new File("C:\\Users\\wenyu\\Downloads\\Z1\\Z1");
        JsonReader reader = new JsonReader();
        reader.readjson(folder);
    }
    
}
