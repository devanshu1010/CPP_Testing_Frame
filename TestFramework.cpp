#include "TestFramework.h"

// Add a test case to the framework
void TestFramework::addTest(const std::string& testName, TestCase testCase) {
    tests.push_back({testName, testCase});
}

// Run all registered tests and print results
void TestFramework::runTests() {
    int passed = 0, failed = 0;

    // Iterate through all tests
    for (auto& test : tests) {
        const std::string& testName = test.first;
        const TestCase& testCase = test.second;
        try {
            testCase();
            std::cout << "[PASS] Test: " << testName << std::endl;
            passed++;
        } catch (const std::exception& e) {
            std::cout << "[FAIL] Test: " << testName << ": " << e.what() << std::endl;
            failed++;
        } catch (...) {
            std::cout << "[FAIL] Test: " << testName << ": Unknown error" << std::endl;
            failed++;
        }
    }

    std::cout << "\nSummary: " << passed << " tests passed, " << failed << " tests failed." << std::endl;
}
