#include <iostream>
#include <vector>

int main() {
    int numCount, deleteNum;
    std::vector<int> nums;
    std::cout << "Input vector size:";
    std::cin >> numCount;
    nums.resize(numCount);

    std::cout << "Input numbers:";
    for (int i = 0; i < numCount; ++i)
        std::cin >> nums[i];

    std::cout << "Input number to delete:";
    std::cin >> deleteNum;

    for (int i = 0; i < (nums.size()); ++i){
        if (nums[i] == deleteNum) {
            std::swap(nums[i], nums[nums.size()-1]);
            nums.pop_back();
            --i;
        }
    }

    std::cout << "Result: ";
    for (auto &num : nums)
        std::cout << num << " ";
}
