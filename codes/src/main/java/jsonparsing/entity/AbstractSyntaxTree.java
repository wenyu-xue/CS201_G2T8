package jsonparsing.entity;

import java.util.ArrayList;
import java.util.List;

public class AbstractSyntaxTree {
    private Node root = null;
    private int size;


    public void addRoot(Node root){
        this.root = root;
    }

    public void addChild(Node parent, Node child ){
        parent.addChild(child);
    }
}
