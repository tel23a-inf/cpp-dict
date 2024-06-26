#include "dict.h"

#include "test.h"

using namespace std;

namespace dict {

void Dictionary::insert(const string& de, const string& en) {
  // HINWEIS: Nutzen Sie die Methode insert() des Wurzelknotens.
  // TODO
}

string Dictionary::lookup(const string& de) {
  // HINWEIS: Nutzen Sie die Methode find() des Wurzelknotens.
  //          Prüfen Sie anschließend, ob der zurückgegebene Pointer nullptr
  //          ist.
  // TODO
  return "";
}

bool Dictionary::contains_de(const string& de) {
  // HINWEIS: Nutzen Sie die Methode find() des Wurzelknotens.
  // TODO
  return false;
}

TEST_CASE("empty") {
  Dictionary dict;
  CHECK(dict.lookup("Hund") == "");
  CHECK(!dict.contains_de("Hund"));
}

TEST_CASE("insert") {
  Dictionary dict;
  dict.insert("Hund", "dog");
  dict.insert("Katze", "cat");
  dict.insert("Maus", "mouse");

  CHECK(dict.contains_de("Hund"));
  CHECK(dict.contains_de("Katze"));
  CHECK(dict.contains_de("Maus"));
  CHECK_FALSE(dict.contains_de("Elefant"));

  CHECK(dict.lookup("Hund") == "dog");
  CHECK(dict.lookup("Katze") == "cat");
  CHECK(dict.lookup("Maus") == "mouse");
  CHECK(dict.lookup("Elefant") == "");
}

}  // namespace dict
