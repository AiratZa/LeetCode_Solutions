cmake_minimum_required(VERSION 3.0)



include(FetchContent)
FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Now simply link against gtest or gtest_main as needed. Eg
add_executable(runUnitTests   "May_2021/Test_WordFilter.cpp")
add_executable(ReverseIntegerTests   "Test_ReverseInteger.cpp")
add_executable(AddTwoNumbersTests   "Medium/Test_AddTwoNumbers.cpp")

target_link_libraries(runUnitTests gtest_main gtest)
target_link_libraries(ReverseIntegerTests gtest_main gtest)
target_link_libraries(AddTwoNumbersTests gtest_main gtest)

add_test(NAME WordFilterTest  COMMAND runUnitTests )
add_test(NAME ReverseIntegerTests  COMMAND ReverseIntegerTests )
add_test(NAME AddTwoNumbersTests  COMMAND AddTwoNumbersTests )