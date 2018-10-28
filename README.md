# GoogleTestMacros
Macros to improve your Google Test experience.

GoogleTestMacros prefix test names with the level of testing that they represent.  This standardized naming allows for automated selective-running of test cases. This is especially useful on large code bases inside a DevOps (CI/CT/CD) environment.

## Usage

Use GoogleTest as normal, but replace the `TEST` macro with one that is furnished by this header.  

```cpp
UNIT_TEST(MyClass, setFoo) 
{
  MyClass x;
  EXPECT_NO_THROW(x.setFoo("foo"));
  EXPECT_EQ(std::string("foo"), x.getFoo());
}
```

will now report the output:

```
[ RUN      ] Unit_MyClass.setFoo
[       OK ] Unit_MyClass.setFoo (0 ms)
```

This allows you to quickly run only unit tests within the test suite.

```
> TestMyClass --gtest_filter=Unit*
```

The library provides the following macros for your use:

```cpp
UNIT_TEST(test_case_name, test_name)
UNIT_TEST_F(test_case_name, test_name)
UNIT_TEST_P(test_case_name, test_name)
INSTANTIATE_UNIT_TEST_CASE_P(test_case_name, Generator)

INTEGRATION_TEST(test_case_name, test_name)
INTEGRATION_TEST_F(test_case_name, test_name)
INTEGRATION_TEST_P(test_case_name, test_name)
INSTANTIATE_INTEGRATION_TEST_CASE_P(test_case_name, Generator)

FUNCTIONAL_TEST(test_case_name, test_name)
FUNCTIONAL_TEST_F(test_case_name, test_name)
FUNCTIONAL_TEST_P(test_case_name, test_name)
INSTANTIATE_FUNCTIONAL_TEST_CASE_P(test_case_name, Generator)

REGRESSION_TEST(test_case_name, test_name)
REGRESSION_TEST_F(test_case_name, test_name)
REGRESSION_TEST_P(test_case_name, test_name)
INSTANTIATE_REGRESSION_TEST_CASE_P(test_case_name, Generator)

SYSTEM_TEST(test_case_name, test_name)
SYSTEM_TEST_F(test_case_name, test_name)
SYSTEM_TEST_P(test_case_name, test_name)
INSTANTIATE_SYSTEM_TEST_CASE_P(test_case_name, Generator)

SMOKE_TEST(test_case_name, test_name)
SMOKE_TEST_F(test_case_name, test_name)
SMOKE_TEST_P(test_case_name, test_name)
INSTANTIATE_SMOKE_TEST_CASE_P(test_case_name, Generator)

GRAPHICS_TEST(test_case_name, test_name)
GRAPHICS_TEST_F(test_case_name, test_name)
GRAPHICS_TEST_P(test_case_name, test_name)
INSTANTIATE_GRAPHICS_TEST_CASE_P(test_case_name, Generator)
```