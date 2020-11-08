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
    public static Map<String,String> hashDict = Map.of(
        "\"TranslationUnit\"", "a",
        "\"FunctionDefinition\"", "b",
        "\"IterationStatement\"", "c",
        "\"Expression\"", "d",
        "\"ArithmeticExpression\"", "e",
        "\"PostfixExpression\"", "f",
        "\"ParameterList\"", "g",
        "\"ParameterDeclaration\"", "h",
        "\"DeclarationSpecifier\"", "i",
        "\"TypeSpecifier\"", "j"
     );


    public static int hash(String input) {
        int h = 0;
        for (int i=0;i<input.length();i++){
            h^=((int) input.charAt(i));
        }
        return h;

    }

    public static List<String> traverse(LinkedList<String> list,Node root, String temp ){
        if (root.children()== null){
            String hashString = hashDict.get(root.getType());
            list.addFirst(hashString);

            return list;
        }else{
            String type = root.getType();

            for (int i = 0; i<root.children().size(); i++){
                traverse(list,root.getChildAt(i), temp);
                temp = temp.concat(list.get(i));
            }
            temp= hashDict.get(root.getType())+temp;

            list.addFirst(temp);
            temp ="";
            return list;
        }
    }


}
