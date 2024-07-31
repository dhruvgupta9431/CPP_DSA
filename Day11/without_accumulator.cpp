#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};

    auto sum = [](const std::vector<int>& array) {
        int total = 0;
        for (int element : array) {
            total += element;
        }
        return total;
    };

    int result = sum(arr);

    std::cout << "Sum of array elements: " << result << std::endl;

    return 0;
}
