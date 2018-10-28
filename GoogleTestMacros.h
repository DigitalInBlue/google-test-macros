#pragma once

///
/// \author	John Farrier
///
/// \copyright Copyright 2018 John Farrier
///
/// Licensed under the Apache License, Version 2.0 (the "License");
/// you may not use this file except in compliance with the License.
/// You may obtain a copy of the License at
///
/// http://www.apache.org/licenses/LICENSE-2.0
///
/// Unless required by applicable law or agreed to in writing, software
/// distributed under the License is distributed on an "AS IS" BASIS,
/// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
/// See the License for the specific language governing permissions and
/// limitations under the License.
///

///
/// GoogleTestMacros prefix test names with the level of testing that they represent.  
/// This standardized naming allows for automated selective-running of test cases.
/// This is especially useful on large code bases inside a DevOps (CI/CT/CD) environment.
/// (All you have to do is to get your team to agree on when to use each of these test types!)
///

#include <gtest/gtest.h>

#define UNIT_TEST(test_case_name, test_name) UNIT_TEST_(test_case_name, test_name)
#define UNIT_TEST_(test_case_name, test_name) GTEST_TEST(Unit_##test_case_name, test_name)
#define UNIT_TEST_F(test_case_name, test_name) UNIT_TEST_F_(test_case_name, test_name)
#define UNIT_TEST_F_(test_case_name, test_name) GTEST_TEST_(Unit_##test_case_name, test_name, test_case_name, ::testing::internal::GetTypeId<test_case_name>())
#define UNIT_TEST_P(test_case_name, test_name) TEST_P(test_case_name, test_name)
#define INSTANTIATE_UNIT_TEST_CASE_P(test_case_name, Generator) INSTANTIATE_TEST_CASE_P(Unit, test_case_name, Generator)

#define INTEGRATION_TEST(test_case_name, test_name) INTEGRATION_TEST_(test_case_name, test_name)
#define INTEGRATION_TEST_(test_case_name, test_name) GTEST_TEST(Integration_##test_case_name, test_name)
#define INTEGRATION_TEST_F(test_case_name, test_name) INTEGRATION_TEST_F_(test_case_name, test_name)
#define INTEGRATION_TEST_F_(test_case_name, test_name) GTEST_TEST_(Integration_##test_case_name, test_name, test_case_name, ::testing::internal::GetTypeId<test_case_name>())
#define INTEGRATION_TEST_P(test_case_name, test_name) TEST_P(test_case_name, test_name)
#define INSTANTIATE_INTEGRATION_TEST_CASE_P(test_case_name, Generator) INSTANTIATE_TEST_CASE_P(Integration, test_case_name, Generator)

#define FUNCTIONAL_TEST(test_case_name, test_name) FUNCTIONAL_TEST_(test_case_name, test_name)
#define FUNCTIONAL_TEST_(test_case_name, test_name) GTEST_TEST(Functional_##test_case_name, test_name)
#define FUNCTIONAL_TEST_F(test_case_name, test_name) FUNCTIONAL_TEST_F_(test_case_name, test_name)
#define FUNCTIONAL_TEST_F_(test_case_name, test_name) GTEST_TEST_(Functional_##test_case_name, test_name, test_case_name, ::testing::internal::GetTypeId<test_case_name>())
#define FUNCTIONAL_TEST_P(test_case_name, test_name) TEST_P(test_case_name, test_name)
#define INSTANTIATE_FUNCTIONAL_TEST_CASE_P(test_case_name, Generator) FUNCTIONAL_TEST_CASE_P(Functional, test_case_name, Generator)

#define REGRESSION_TEST(test_case_name, test_name) REGRESSION_TEST_(test_case_name, test_name)
#define REGRESSION_TEST_(test_case_name, test_name) GTEST_TEST(Regression_##test_case_name, test_name)
#define REGRESSION_TEST_F(test_case_name, test_name) REGRESSION_TEST_F_(test_case_name, test_name)
#define REGRESSION_TEST_F_(test_case_name, test_name) GTEST_TEST_(Regression_##test_case_name, test_name, test_case_name, ::testing::internal::GetTypeId<test_case_name>())
#define REGRESSION_TEST_P(test_case_name, test_name) TEST_P(test_case_name, test_name)
#define INSTANTIATE_REGRESSION_TEST_CASE_P(test_case_name, Generator) INSTANTIATE_TEST_CASE_P(Regression, test_case_name, Generator)

#define SYSTEM_TEST(test_case_name, test_name) SYSTEM_TEST_(test_case_name, test_name)
#define SYSTEM_TEST_(test_case_name, test_name) GTEST_TEST(System_##test_case_name, test_name)
#define SYSTEM_TEST_F(test_case_name, test_name) SYSTEM_TEST_F_(test_case_name, test_name)
#define SYSTEM_TEST_F_(test_case_name, test_name) GTEST_TEST_(System_##test_case_name, test_name, test_case_name, ::testing::internal::GetTypeId<test_case_name>())
#define SYSTEM_TEST_P(test_case_name, test_name) TEST_P(test_case_name, test_name)
#define INSTANTIATE_SYSTEM_TEST_CASE_P(test_case_name, Generator) INSTANTIATE_TEST_CASE_P(System, test_case_name, Generator)

#define SMOKE_TEST(test_case_name, test_name) SMOKE_TEST_(test_case_name, test_name)
#define SMOKE_TEST_(test_case_name, test_name) GTEST_TEST(Smoke_##test_case_name, test_name)
#define SMOKE_TEST_F(test_case_name, test_name) SMOKE_TEST_F_(test_case_name, test_name)
#define SMOKE_TEST_F_(test_case_name, test_name) GTEST_TEST_(Smoke_##test_case_name, test_name, test_case_name, ::testing::internal::GetTypeId<test_case_name>())
#define SMOKE_TEST_P(test_case_name, test_name) TEST_P(test_case_name, test_name)
#define INSTANTIATE_SMOKE_TEST_CASE_P(test_case_name, Generator) INSTANTIATE_TEST_CASE_P(Smoke, test_case_name, Generator)

/// Graphics tests are called out here because they sometimes require special hardware to execute.  This makes them easy to identify and cull out of a test run when necessary.
#define GRAPHICS_TEST(test_case_name, test_name) GRAPHICS_TEST_(test_case_name, test_name)
#define GRAPHICS_TEST_(test_case_name, test_name) GTEST_TEST(Graphics_##test_case_name, test_name)
#define GRAPHICS_TEST_F(test_case_name, test_name) GRAPHICS_TEST_F_(test_case_name, test_name)
#define GRAPHICS_TEST_F_(test_case_name, test_name) GTEST_TEST_(Graphics_##test_case_name, test_name, test_case_name, ::testing::internal::GetTypeId<test_case_name>())
#define GRAPHICS_TEST_P(test_case_name, test_name) TEST_P(test_case_name, test_name)
#define INSTANTIATE_GRAPHICS_TEST_CASE_P(test_case_name, Generator) INSTANTIATE_TEST_CASE_P(Graphics, test_case_name, Generator)
