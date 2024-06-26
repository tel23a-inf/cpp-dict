#ifndef NODE_NODE_H
#define NODE_NODE_H

namespace bintree {

/// Repräsentiert einen Knoten in einem binären Suchbaum.
template <typename K, typename V>
struct Node {
  K key;
  V value;
  Node* left = nullptr;
  Node* right = nullptr;

  /// Konstruiert einen neuen leeren Node.
  Node() = default;

  /// Konstruiert ein neues Node-Objekt mit dem gegebenen Schlüssel und Wert.
  Node(K key_, V value_)
      : key(key_), value(value_), left(new Node()), right(new Node()) {}

  /// Liefert true, wenn der Knoten leer ist.
  /// D.h. wenn die Kind-Pointer nullptr sind.
  bool is_empty() const { return left == nullptr && right == nullptr; }

  /// Setzt den gegebenen Schlüssel und Wert in den Knoten ein.
  /// Ein vorhandener Schlüssel/Wert wird überschrieben.
  /// Wenn der Knoten leer ist, werden leere Kind-Knoten erzeugt.
  void set(K key_, V value_) {
    key = key_;
    value = value_;
    if (is_empty()) {
      left = new Node();
      right = new Node();
    }
  }

  /// Fügt einen neuen Knoten in den Baum ein.
  void insert(K key_, V value_) {
    if (is_empty()) {
      return set(key_, value_);
    }
    if (key_ <= key) {
      return left->insert(key_, value_);
    }
    return right->insert(key_, value_);
  }

  /// Liefert einen Pointer auf den Knoten mit dem gegebenen Schlüssel.
  /// Wenn der Schlüssel nicht gefunden wird, wird nullptr zurückgegeben.
  Node<K, V>* find(K key_) {
    if (is_empty()) {
      return nullptr;
    }
    if (key_ == key) {
      return this;
    }
    if (key_ < key) {
      return left->find(key_);
    }
    return right->find(key_);
  }
};

}  // namespace bintree

#endif
