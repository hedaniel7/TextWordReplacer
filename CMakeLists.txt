cmake_minimum_required(VERSION 3.10)

project(TextWordReplacer)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

# Create a library from the common source files
add_library(TextWordReplacerLib STATIC
        src/TextWordReplacer.cpp
        )

# Link the main executable to the library
add_executable(TextWordReplacer src/main.cpp)
target_link_libraries(TextWordReplacer TextWordReplacerLib)

# Link the test executable to the library
add_executable(test_replacer tests/test_replacer.cpp)
target_link_libraries(test_replacer TextWordReplacerLib)

enable_testing()
add_test(NAME ReplacerTest COMMAND test_replacer)

