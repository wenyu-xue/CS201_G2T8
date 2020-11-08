package jsonparsing.util;

import com.fasterxml.jackson.databind.JsonNode;
import com.fasterxml.jackson.databind.node.ArrayNode;
import jsonparsing.parser.Json;
import jsonparsing.entity.AbstractSyntaxTree;
import jsonparsing.entity.*;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.*;

import static jsonparsing.parser.Json.readFileAsString;

public class Algorithm{
    public static String arr[] = {
            "FunctionDefinition", "IterationStatement","Expression",
            "ArithmeticExpression","PostfixExpression","ParameterList", "ParameterDeclaration",
        "DeclarationSpecifier","TypeSpecifier","DeclarationSpecifier","TypeSpecifier"};

    public static Set<String> set = new HashSet<>(Arrays.asList(arr));
    public static Map<String,String> hashDict =new HashMap<String, String>() {{
        put("\"TranslationUnit\"", "a");
        put("\"FunctionDefinition\"", "b");
        put("\"IterationStatement\"", "c");
        put("\"Expression\"", "d");
        put("\"ArithmeticExpression\"", "e");
        put("\"PostfixExpression\"", "f");
        put("\"ParameterList\"", "g");
        put("\"ParameterDeclaration\"", "h");
        put("\"DeclarationSpecifiers\"", "i");
        put("\"TypeSpecifier\"", "j");

    }};

    public static int hash(String input) {
        int h = 0;
        for (int i=0;i<input.length();i++){
            h^=((int) input.charAt(i));
        }
        return h;

    }

    public static void traverse(LinkedList<String> list,Node root, String temp ){

        if (root.children()== null){
            System.out.println(root.getType());
            String hashString = hashDict.get(root.getType());
            list.addFirst(root.getType());
        }else{
            String type = root.getType();
            String s ="";

            for (int i = 0; i<root.children().size(); i++){
                traverse(list,root.getChildAt(i), temp);
                 s= s+ list.get(i);

//                temp = temp.concat(list.get(i));
            }

            String hashString= hashDict.get(root.getType()) ;
            list.addFirst(root.getType()+s);
//            temp ="";

        }
    }


}
