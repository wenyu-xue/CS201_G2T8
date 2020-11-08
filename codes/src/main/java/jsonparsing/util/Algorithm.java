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
    public static String arr[] = { "FunctionDefinition", "IterationStatement","Expression",
            "ArithmeticExpression","PostfixExpression","ParameterList", "ParameterDeclaration",
    "DeclarationSpecifier","TypeSpecifier","DeclarationSpecifier","TypeSpecifier"};

    public static Set<String> set = new HashSet<>(Arrays.asList(arr));
    public static Map<String,String> hashDict =new HashMap<String, String>() {{
        put("TranslationUnit", "a");
        put("FunctionDefinition", "b");
    }};

    public static int hash(String input) {
        int h = 0;
        for (int i=0;i<input.length();i++){
            h^=((int) input.charAt(i));
        }
        return h;

    }
    public static Node parsing(JsonNode root, Node parent){
        System.out.println(root.get("type"));

        if (root.get("type")!= null && root.get("type").equals("TranslationUnit")){
            Node n = new Node(parent, null, "TranslationUnit",Integer.parseInt(root.get("children_number").toString()) ,null);
            JsonNode children = root.get("children");
            n = parsing(children, n);
            System.out.println("==================");
            System.out.println(n.getChildCount());
            return n;
        }
        else if(root.isObject()){
            JsonNode type = root.get("type");
            if ( set.contains(type.toString())) {
                Integer childrenNumber = Integer.parseInt(root.get("children_number").toString());
                Node n = new Node(parent, null, type.toString(), childrenNumber,null);
                parent.addChild(n);
                JsonNode children = root.get("children");
                parsing(children, n);
            }else if (Integer.parseInt(root.get("children_number").toString())!=0){
                JsonNode children = root.get("children");
                parsing(children, parent);
            } else{
                return null;
            }


        } else if(root.isArray()){
            ArrayNode arrayNode = (ArrayNode) root;
            for(int i = 0; i < arrayNode.size(); i++) {
                JsonNode arrayElement = arrayNode.get(i);
                parsing(arrayElement, parent);
            }
        }
        return null;
    }
    public static void main(String[] args) throws Exception {
        AbstractSyntaxTree ast1 = new AbstractSyntaxTree();

        Node root1 = new Node(null, null , "TranslationUnit", 3, null);
        Node tree1child1 = new Node(root1, null , "FunctionDefinition", 0, null);
        Node tree1child2 = new Node(root1, null  , "FunctionDefinition", 0, null);
        Node tree1child3 = new Node(root1, null , "FunctionDefinition", 0, null);
        List<Node> list1= new ArrayList<Node>();
        list1.add(tree1child1);
        list1.add(tree1child2 );
        list1.add(tree1child3);
        root1 = new Node(null, null , "TranslationUnit", 3, list1);
        System.out.println(root1.children());

        Node root2 = new Node(null, null , "TranslationUnit", 3, null);
        Node tree2child1 = new Node(root2, null , "FunctionDefinition", 0, null);
        Node tree2child2 = new Node(root2, null  , "FunctionDefinition", 0, null);
        Node tree2child3 = new Node(root2, null , "FunctionDefinition", 0, null);
        List<Node> list2= new ArrayList<Node>();
        list2.add(tree2child1);
        list2.add(tree2child2);
        list2.add(tree2child3);

        root2 = new Node(null, null , "TranslationUnit", 3, list1);

        List<String> result =traverse(new LinkedList<String>(),root1,"");
        System.out.println(result);
//        JsonNode parent = null;
//        // Change the filename to the specific file in resource folder
//        // student1013.json // student1021.json
//        String fileName = "src/main/resources/json/out.json";
//        String json = readFileAsString(fileName);
//        try {
//            JsonNode node = Json.parse(json);
//
//            Node p =parsing(node, null);
//
//
//        }
//        catch(IOException e){
//            e.printStackTrace();
//        }


    }
    public static List<String> traverse(LinkedList<String> list,Node root, String temp ){
        if (root.children()== null){
            String hashString = hashDict.get(root.getType());
            list.addFirst(hashString);
            temp.concat(hashString);
            return list;
        }else{
            for (int i = 0; i<root.children().size(); i++){
                traverse(list,root.getChildAt(i), temp);
                temp =temp.concat(list.get(i));
            }
            temp= hashDict.get(root.getType())+temp;
            System.out.println(temp);
            list.addFirst(temp);
            return list;
        }


    }


}
