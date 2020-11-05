package jsonparsing.entity;

import java.util.List;

public class Node {
    private Node parent;
    private String type;
    private String content;
    private Integer children_number;
    private List <Node> children;

    public Node (Node parent, String type, String content,Integer children_number, List<Node> children){
        this.parent = parent; // if parent node is null, the node is the root node.
        this.type = type;
        this.content = content;
        this.children_number = children_number;
        this.children = children;

    }

    public int getChildCount(){
        return children_number;
    }


    public List<Node> children(){
        return children;
    }

    public Node getChildAt(int childIndex){
        return children.get(childIndex);
    }

    public int getIndex(Node nodeToFind){
        // O(n) operation
        for (int i = 0; i < children_number; i ++){
            Node child = children.get(i);
            if (child.equals(nodeToFind)){
                return i;
            }
        }
        // if node does not exist, return -1
        return -1;
    }

    public Node getParent(){
        return parent;
    }

    public boolean isLeaf(){
        if (children_number == 0){
            return true;
        }else{
            return false;
        }
    }
}
