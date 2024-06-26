#include "node.h"

#include <string>

#include "test.h"

using namespace std;

namespace bintree {

TEST_CASE("empty_node") {
  Node<int, int> empty_int_node;
  Node<string, string> empty_string_node;
  Node<string, int> empty_string_int_node;

  CHECK(empty_int_node.is_empty());
  CHECK(empty_string_node.is_empty());
  CHECK(empty_string_int_node.is_empty());
}

TEST_CASE("nonempty_node") {
  Node empty_int_node(1, 2);
  Node empty_string_node("Baum", "Tree");
  Node empty_string_int_node("Semester", 2);

  CHECK_FALSE(empty_int_node.is_empty());
  CHECK_FALSE(empty_string_node.is_empty());
  CHECK_FALSE(empty_string_int_node.is_empty());
}

TEST_CASE("set") {
  Node<int, int> n1;

  CHECK(n1.is_empty());

  n1.set(1, 2);
  CHECK_FALSE(n1.is_empty());
  CHECK(n1.left->is_empty());
  CHECK(n1.right->is_empty());
  CHECK(n1.key == 1);
  CHECK(n1.value == 2);

  n1.set(3, 4);
  CHECK_FALSE(n1.is_empty());
  CHECK(n1.left->is_empty());
  CHECK(n1.right->is_empty());
  CHECK(n1.key == 3);
  CHECK(n1.value == 4);
}

TEST_CASE("insert") {
  Node<int, int> n1;

  CHECK(n1.is_empty());

  n1.insert(1, 2);
  CHECK_FALSE(n1.is_empty());
  CHECK(n1.left->is_empty());
  CHECK(n1.right->is_empty());
  CHECK(n1.key == 1);
  CHECK(n1.value == 2);

  n1.insert(0, 3);
  CHECK_FALSE(n1.left->is_empty());
  CHECK(n1.right->is_empty());
  CHECK(n1.left->left->is_empty());
  CHECK(n1.left->right->is_empty());
  CHECK(n1.left->key == 0);
  CHECK(n1.left->value == 3);
}

TEST_CASE("find") {
  Node<int, int> n1;
  n1.insert(1, 2);
  n1.insert(0, 3);
  n1.insert(2, -1);

  /***** Struktur *****/
  /*                  */
  /*      (1,2)       */
  /*      /   \       */
  /*   (0,3) (2,-1)   */
  /*                  */
  /********************/

  SUBCASE("existing keys") {
    CHECK(n1.find(1)->key == 1);
    CHECK(n1.find(1)->value == 2);
    CHECK(n1.find(0)->key == 0);
    CHECK(n1.find(0)->value == 3);
    CHECK(n1.find(2)->key == 2);
    CHECK(n1.find(2)->value == -1);
  }

  SUBCASE("nonexisting keys") {
    CHECK(n1.find(3) == nullptr);
    CHECK(n1.find(-1) == nullptr);
  }

  SUBCASE("empty tree") {
    Node<int, int> n2;
    CHECK(n2.find(1) == nullptr);
  }
}

template struct Node<int, int>;
template struct Node<string, string>;
template struct Node<string, int>;

}  // namespace bintree
