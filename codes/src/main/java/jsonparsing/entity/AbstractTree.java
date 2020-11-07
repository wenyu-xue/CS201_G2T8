package jsonparsing.entity;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public abstract class AbstractTree<E> implements Tree <E>{
    @Override
    public boolean isInternal(Position<E> p) { return numChildren(p) > 0; }

    @Override
    public boolean isExternal(Position<E> p) { return numChildren(p) == 0; }

    @Override
    public boolean isRoot(Position<E> p) { return p == root(); }

    @Override
    public int numChildren(Position<E> p) {
        int count=0;
        for (Position child : children(p)) count++;
        return count;
    }

    @Override
    public int size() {
        int count=0;
        for (Position p : positions()) count++;
        return count;
    }

    @Override
    public boolean isEmpty() { return size() == 0; }

    public int depth(Position<E> p) throws IllegalArgumentException {
      if (isRoot(p))
        return 0;
      else
        return 1 + depth(parent(p));
    }
    public int height(Position<E> p) throws IllegalArgumentException {
      int h = 0;                          // base case if p is external
      for (Position<E> c : children(p))
        h = Math.max(h, 1 + height(c));
      return h;
    }

    //---------- support for various iterations of a tree ----------

  //---------------- nested ElementIterator class ----------------
  /* This class adapts the iteration produced by positions() to return elements. */
  private class ElementIterator implements Iterator<E> {
    Iterator<Position<E>> posIterator = positions().iterator();
    public boolean hasNext() { return posIterator.hasNext(); }
    public E next() { return posIterator.next().getElement(); } // return element!
    public void remove() { posIterator.remove(); }
  }

  /**
   * Returns an iterator of the elements stored in the tree.
   * @return iterator of the tree's elements
   */
  @Override
  public Iterator<E> iterator() { return new ElementIterator(); }

  /**
   * Returns an iterable collection of the positions of the tree.
   * @return iterable collection of the tree's positions
   */
  @Override
  public Iterable<Position<E>> positions() { return preorder(); }
/**
   * Adds positions of the subtree rooted at Position p to the given
   * snapshot using a preorder traversal
   * @param p       Position serving as the root of a subtree
   * @param snapshot  a list to which results are appended
   */
  private void preorderSubtree(Position<E> p, List<Position<E>> snapshot) {
    snapshot.add(p);                       // for preorder, we add position p before exploring subtrees
    for (Position<E> c : children(p))
      preorderSubtree(c, snapshot);
  }

  /**
   * Returns an iterable collection of positions of the tree, reported in preorder.
   * @return iterable collection of the tree's positions in preorder
   */
  public Iterable<Position<E>> preorder() {
    List<Position<E>> snapshot = new ArrayList<>();
    if (!isEmpty())
      preorderSubtree(root(), snapshot);   // fill the snapshot recursively
    return snapshot;
  }

}
