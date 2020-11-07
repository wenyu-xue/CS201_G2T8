package jsonparsing.entity;

import java.util.List;

public class Node<E> {
    private Node<E> parent;
    private E content;
    private String type;
    private Integer childrenNumber;
    private List <Node<E>> children;

    public Node (Node<E> parent, E content, String type, Integer childrenNumber, List<Node<E>> children){
        this.parent = parent; // if parent node is null, the node is the root node.
        this.content = content;
        this.type = type;
        this.childrenNumber = childrenNumber;
        this.children = children;

    }

    public String getType(){
        return type;
    }

    public E getContent(){
        return content;
    }

    public int getChildCount(){
        return childrenNumber;
    }


    public List<Node<E>> children(){
        return children;
    }

    public Node<E> getChildAt(int childIndex){
        return children.get(childIndex);
    }

    public int getIndex(Node<E> nodeToFind){
        // O(n) operation
        for (int i = 0; i < childrenNumber; i ++){
            Node<E> child = children.get(i);
            if (child.equals(nodeToFind)){
                return i;
            }
        }
        // if node does not exist, return -1
        return -1;
    }

    public Node<E> getParent(){
        return parent;
    }

    public boolean isLeaf(){
        if (childrenNumber == 0){
            return true;
        }else{
            return false;
        }
    }
}
