#include "TestFramework.h"
using namespace std;

// Sample functions to test
string testFunc(){
    return "";
}


// Test Case Struct for organizing test data
struct TestCaseInfo {
    string testName;
    function<void()> testFunc;
};

int main() {
    TestFramework framework;

    // Define your test cases using the TestCaseInfo struct
    vector<TestCaseInfo> testCases = {
        {"funcName",[](){ASSERT_EQ(testFunc(/** argumeents **/),"expected_output");}} //arguments as per function definition and output according to return type of func.
    };

    // Register each test case into the framework
    for (const auto& testCase : testCases) {
        framework.addTest(testCase.testName, testCase.testFunc);
    }

    // Run tests
    framework.runTests();

    return 0;
}
