#ifndef TEST_FRAMEWORK_H
#define TEST_FRAMEWORK_H

#include <iostream>
#include <vector>
#include <functional>
#include <string>
#include <stdexcept>

class TestFramework {
public:
    using TestCase = std::function<void()>;

    // Add a test case with its name
    void addTest(const std::string& testName, TestCase testCase);

    // Run all registered tests
    void runTests();

private:
    std::vector<std::pair<std::string, TestCase>> tests;
};

// Assertion macros for easy test creation
#define ASSERT_EQ(actual, expected) \
    if ((actual) != (expected)) throw std::runtime_error("Assertion failed: " #actual " != " #expected); 

#define ASSERT_TRUE(condition) \
    if (!(condition)) throw std::runtime_error("Assertion failed: " #condition " is false"); 

#define ASSERT_FALSE(condition) \
    if (condition) throw std::runtime_error("Assertion failed: " #condition " is true");

// Macro for defining tests
#define TEST(testFramework, testName) \
    void testName(); \
    testFramework.addTest(#testName, testName); \
    void testName()

#endif // TEST_FRAMEWORK_H
