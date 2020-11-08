package jsonparsing.entity;

import java.util.ArrayList;
import java.util.List;

public class AbstractSyntaxTree {
    private Node root = null;
    private int size;


    public void addRoot(Node root) throws IllegalArgumentException{
        if (root != null){
            this.root = root;
        } else {
            throw new IllegalArgumentException("Tree already has a root");
        }
    }

    public void addChild(Node parent, Node child ){
        parent.addChild(child);
    }
}
