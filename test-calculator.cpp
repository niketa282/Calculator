#include <gtest/gtest.h>
#include "calculator.h"

TEST(Calculator, Add)
{
  EXPECT_EQ(5, calculator::add(2, 3));
}