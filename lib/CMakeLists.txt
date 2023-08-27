add_library(lib STATIC
    include/lib/lib.hpp
    src/lib.cpp
)
target_include_directories(lib PUBLIC include)
