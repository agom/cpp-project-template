include(FetchContent)
FetchContent_Declare(
    doctest
    GIT_REPOSITORY https://github.com/doctest/doctest.git
    GIT_TAG v2.4.11
)

FetchContent_MakeAvailable(doctest)

enable_testing()

add_executable(tests test.cpp)
target_link_libraries(tests PRIVATE
    lib
    doctest::doctest
)

include(${doctest_SOURCE_DIR}/scripts/cmake/doctest.cmake)
doctest_discover_tests(tests)