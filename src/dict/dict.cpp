#include "dict.h"

#include "test.h"

using namespace std;

namespace dict {

void Dictionary::insert(const string& de, const string& en) {
  root.insert(de, en);
}

string Dictionary::lookup(const string& de) {
  auto node = root.find(de);
  return node ? node->value : "";
}

bool Dictionary::contains_de(const string& de) {
  return root.find(de) != nullptr;
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
