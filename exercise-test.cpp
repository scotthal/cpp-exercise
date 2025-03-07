#include "exercise.h"

#include "gtest/gtest.h"

TEST(ExerciseTest, ReturnsNoError) {
  EXPECT_EQ(exercise::exercise(), 0);
}
