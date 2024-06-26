#ifndef DICT_DICT_H
#define DICT_DICT_H

#include <string>

#include "node/node.h"

namespace dict {

/// Repräsentiert ein Deutsch-Englisch-Wörterbuch.
struct Dictionary {
  bintree::Node<std::string, std::string> root;

  /// Fügt ein neues Wortpaar in das Wörterbuch ein.
  void insert(const std::string& de, const std::string& en);

  /// Liefert die englische Übersetzung des gegebenen deutschen Wortes.
  /// Wenn das Wort nicht gefunden wird, wird ein leerer String zurückgegeben.
  std::string lookup(const std::string& de);

  /// Liefert true, wenn es einen Eintrag für das deutsche Wort gibt.
  bool contains_de(const std::string& de);
};

}  // namespace dict

#endif
