add_library(node node.cpp)
target_compile_definitions(node PUBLIC DOCTEST_CONFIG_DISABLE)

RESY_ADD_INLINE_TESTS(
    SRC_FILE_STEM node
    TEST_CASES
      empty_node
      nonempty_node
      set
      insert
      find
)
