add_library(dict dict.cpp)
target_link_libraries(dict node)
target_compile_definitions(dict PUBLIC DOCTEST_CONFIG_DISABLE)

RESY_ADD_INLINE_TESTS(
    SRC_FILE_STEM dict
    TEST_CASES
      empty
      insert
    LIBRARIES
      node
)
