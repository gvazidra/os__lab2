#include <iostream>
#include <vector>
#include <thread>
#include "functions.h"

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int min_val, max_val;
    double avg;

    std::thread t_min_max(min_max, arr, min_val, max_val);
    std::thread t_avg(average, std::cref(arr), std::ref(avg));

    t_min_max.join();
    t_avg.join();

    int avg_int = static_cast<int>(avg);

    for (int& val : arr) {
        if (val == min_val || val == max_val) {
            val = avg_int;
        }
    }

    std::cout << "Updated array: ";
    for (const int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
