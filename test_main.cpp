#include <gtest/gtest.h>
#include <vector>
#include <thread>
#include <numeric>
#include <algorithm>
#include "functions.h"

TEST(MinMaxTest, FindsMinMaxCorrectly) {
    std::vector<int> arr = { 5, 1, 9, 2, 8 };
    int min_val = 0, max_val = 0;
    min_max(arr, min_val, max_val);
    EXPECT_EQ(min_val, 1);
    EXPECT_EQ(max_val, 9);
}

TEST(AverageTest, CalculatesAverageCorrectly) {
    std::vector<int> arr = { 2, 4, 6 };
    double avg = 0;
    average(arr, avg);
    EXPECT_DOUBLE_EQ(avg, 4.0);
}

TEST(MainLogicTest, UpdatesArrayCorrectly) {
    std::vector<int> arr = { 1, 2, 3, 4, 5 };

    int min_val, max_val;
    double avg;

    std::thread t_min_max(min_max, std::cref(arr), std::ref(min_val), std::ref(max_val));
    std::thread t_avg(average, std::cref(arr), std::ref(avg));

    t_min_max.join();
    t_avg.join();

    int avg_int = static_cast<int>(avg);

    for (int& val : arr) {
        if (val == min_val || val == max_val) {
            val = avg_int;
        }
    }

    std::vector<int> expected = arr;
    expected[0] = avg_int;
    expected[4] = avg_int;
    EXPECT_EQ(arr, expected);
}
