package jsonparsing.entity;

import java.util.ArrayList;
import java.util.List;

public class Node<E> implements Position<E> {
    private Node<E> parent;
    private E element;
    private String type;
    private Integer childrenNumber;
    private List <Node<E>> children = new ArrayList<>();

    public Node (Node<E> parent, E element, String type, Integer childrenNumber, List<Node<E>> children){
        this.parent = parent; // if parent node is null, the node is the root node.
        this.element = element;
        this.type = type;
        this.childrenNumber = childrenNumber;
        this.children = children;

    }

    public String getType(){
        return type;
    }

    @Override
    public E getElement(){
        return element;
    }

    public int getChildCount(){
        return childrenNumber;
    }


    public List<Node<E>> children(){
        return children;
    }

    public void addChild(Node<E> child){
        children.add(child);
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
