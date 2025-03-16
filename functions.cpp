#include "functions.h"
#include <iostream>
#include <thread>
#include <chrono>

void min_max(const std::vector<int>& arr, int& min_val, int& max_val) {
    min_val = arr[0];
    max_val = arr[0];

    for (const auto& num : arr) {
        if (num < min_val) min_val = num;
        if (num > max_val) max_val = num;
        std::this_thread::sleep_for(std::chrono::milliseconds(7));
    }

    std::cout << "Minimum: " << min_val << ", Maximum: " << max_val << std::endl;
}

void average(const std::vector<int>& arr, double& avg) {
    double sum = 0;
    for (const auto& num : arr) {
        sum += num;
        std::this_thread::sleep_for(std::chrono::milliseconds(12));
    }

    avg = sum / arr.size();
    std::cout << "Average: " << avg << std::endl;
}
