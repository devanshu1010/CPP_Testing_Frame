# CPP_Testing_Frame

A lightweight C++ testing framework for running test cases and generating code coverage reports.

---

## Steps for Testing Code

### 1. Include the Framework Files
Place `TestFramework.cpp` and `TestFramework.h` in your working folder.

### 2. Create a Test File
Write your logic and test cases in a new file (e.g., `example.cpp`). Ensure the format follows the structure shown in the `example.cpp` template.

### 3. Compile the Code
Use the following command to compile your test file along with the framework:
```bash
g++ -Wall -Wextra -o executable_name TestFramework.cpp example.cpp
```

### 4. Run Testcases

Run the compiled executable to execute the test cases:
```bash
./executablefile_name
```

## Steps for checking CodeCoverage

### 1. & 2. Follow the Above Steps

Follow steps 1 and 2 from the Testing Code section.

### 3. Compile the Code with Coverage Flags

Use the following command to compile the code with coverage instrumentation:

```bash
g++ -Wall -Wextra -fprofile-arcs -ftest-coverage -o "executablefile_name" TestFramework.cpp example.cpp
```

### 4. Run the Test Cases

Run the compiled executable to generate the coverage data:

```bash
./executable_name
```

### 5. Generate the Coverage Report
Use gcov to generate the coverage report:
```bash
gcov TestFramework.cpp example.cpp
```

#### Note: Ignore reports for system or library files. Focus only on the coverage report for your source file (e.g., example.cpp).

# 

### Example Workflow

1. Place TestFramework.cpp and TestFramework.h in your project directory.
2. Write your test logic in example.cpp.
3. Compile and run your tests as shown above.
4. If needed, generate and analyze the code coverage.

# 

Feel free to reach out if you encounter issues or have suggestions for improvements! 🚀
