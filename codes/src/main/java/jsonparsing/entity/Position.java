package jsonparsing.entity;

public interface Position<E> {
    E getElement() throws IllegalStateException;
  }