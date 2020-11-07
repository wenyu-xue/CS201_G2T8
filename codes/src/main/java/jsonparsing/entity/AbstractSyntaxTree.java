package jsonparsing.entity;

import java.util.ArrayList;
import java.util.List;

public class AbstractSyntaxTree<E> extends AbstractTree<E> {
    protected Node<E> root = null;
    private int size = 0;
    @Override
    public Position<E> root() {
        return root;
    }

    public Position<E> addRoot(Node<E> node) throws IllegalStateException {
        if (!isEmpty()) throw new IllegalStateException("Tree is not empty");
        root = node;
        size = 1;
        return root;
    }

     public Position<E> addChild(Position<E> p, Node<E> child)
                          throws IllegalArgumentException {
        Node<E> parent = validate(p);
        parent.addChild(child);
        size++;
        return child;
  }


    @Override
    public Position<E> parent(Position<E> p) throws IllegalArgumentException {
        Node<E> node = validate(p);
        return node.getParent();
    }

    @Override
    public int size() {
        return size;
    }

    @Override
    public Iterable<Position<E>> children(Position<E> p) {
        List<Position<E>> snapshot = new ArrayList<>();
        Node<E> node = validate(p);
        for (Node<E> child : node.children()){
            if (child instanceof Position){ //safe cast
                Position<E> pos = child;
                snapshot.add(pos);
            }
        }
        return snapshot;
    }

    /**
   * Verifies that a Position belongs to the appropriate class, and is
   * not one that has been previously removed. Note that our current
   * implementation does not actually verify that the position belongs
   * to this particular list instance.
   *
   * @param p   a Position (that should belong to this tree)
   * @return    the underlying Node instance for the position
   * @throws IllegalArgumentException if an invalid position is detected
   */
    protected Node<E> validate(Position<E> p) throws IllegalArgumentException {
        if (!(p instanceof Node))
            throw new IllegalArgumentException("Not valid position type");
        Node<E> node = (Node<E>) p;       // safe cast
        if (node.getParent() == node)     // our convention for defunct node
            throw new IllegalArgumentException("p is no longer in the tree");
        return node;
      }

}
