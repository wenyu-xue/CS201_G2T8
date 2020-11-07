package jsonparsing;

import com.fasterxml.jackson.core.JsonProcessingException;
import com.fasterxml.jackson.databind.JsonNode;
import com.fasterxml.jackson.databind.ObjectMapper;
import com.fasterxml.jackson.databind.node.ArrayNode;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Iterator;

public class Json {
    private static ObjectMapper objectMapper = new ObjectMapper();

    private ObjectMapper getDefaultObjectMapper(){
        ObjectMapper defaultObjectMapper = new ObjectMapper();
        return defaultObjectMapper;
    }
    public static JsonNode parse(String src) throws IOException {
        return objectMapper.readTree(src);

    }
    public static String readFileAsString(String file)throws Exception
    {
        return new String( Files.readAllBytes(Paths.get(file)));
    }


}
