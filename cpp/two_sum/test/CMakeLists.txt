cmake_minimum_required(VERSION 3.22)

set(This two_sum_test)

set(Sources
    two_sum_test.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This} PRIVATE
    gtest_main
    two_sum
)

# Option 1:
# Register the test executable as a single CTest test.
# This will run all Google Test cases inside the executable.
# add_test(
#     NAME ${This}
#     COMMAND ${This}
# )

# Option 2 (recommended):
# Automatically discover and register each Google Test case
# as an individual CTest test.
include(GoogleTest)
gtest_discover_tests(${This})
