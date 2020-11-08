package jsonparsing.parser;

import com.fasterxml.jackson.databind.JsonNode;
import com.fasterxml.jackson.databind.node.ArrayNode;

import jsonparsing.entity.AbstractSyntaxTree;
import jsonparsing.entity.Node;

import java.util.List;
import java.util.Stack;


public class JsonToTree {
    public static AbstractSyntaxTree traverse(JsonNode root, AbstractSyntaxTree ast, Node parent){
        if(root.isObject()){
            // base case :
            processNode(root, ast, parent);
        } else if (root.isArray()){
            // Process children
            processChildren(root, ast, parent);
        }
        return ast;
    }

    public static AbstractSyntaxTree processChildren(JsonNode root, AbstractSyntaxTree ast, Node parent){
        // Traverse children of JSON
        ArrayNode arrayNode = (ArrayNode) root;
        for(int i = 0; i < arrayNode.size(); i++) {
            JsonNode arrayElement = arrayNode.get(i);
            traverse(arrayElement, ast, parent);
        }
        return ast;
    }

    public static AbstractSyntaxTree processNode(JsonNode root, AbstractSyntaxTree ast, Node parent){
        JsonNode children= root.get("children");

        // Insert into tree
        Node node = Node.fromJsonNode(parent, root);
        if (parent == null){
            ast.addRoot(node);
        } else {
            ast.addChild(parent, node);
        }

        // Continue traversing Json
        if (children != null){
            parent = node;
            traverse(children, ast, parent);
        }
        return ast;
    }
}
