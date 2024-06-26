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
  bool is_empty() const {
    // HINWEIS: Prüfen Sie für beide Kind-Knoten, ob sie nullptr sind.
    // TODO
    return false;
  }

  /// Setzt den gegebenen Schlüssel und Wert in den Knoten ein.
  /// Ein vorhandener Schlüssel/Wert wird überschrieben.
  /// Wenn der Knoten leer ist, werden leere Kind-Knoten erzeugt.
  void set(K key_, V value_) {
    // HINWEIS: Setzen Sie den gegebenen Schlüssel und Wert in den Knoten ein.
    //          Prüfen Sie außerdem, ob der Knoten leer ist und erzeugen Sie
    //          ggf. leere Kind-Knoten.
    // TODO
  }

  /// Fügt einen neuen Knoten in den Baum ein.
  void insert(K key_, V value_) {
    // HINWEIS: Prüfen Sie, ob der Knoten leer ist.
    //          Wenn ja, setzen Sie Schlüssel und Wert ein.
    //          Andernfalls rufen Sie rekursiv insert() auf.
    // TODO
  }

  /// Liefert einen Pointer auf den Knoten mit dem gegebenen Schlüssel.
  /// Wenn der Schlüssel nicht gefunden wird, wird nullptr zurückgegeben.
  Node<K, V>* find(K key_) {
    // HINWEIS: Prüfen Sie, ob der Knoten leer ist.
    //          Wenn ja, geben Sie nullptr zurück.
    //          Andernfalls vergleichen Sie den gesuchten Schlüssel mit dem
    //          aktuellen Schlüssel und rufen ggf. rekursiv find() auf.
    // TODO
    return nullptr;
  }
};

}  // namespace bintree

#endif
