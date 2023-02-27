#include <iostream>
#include <vector>
#include <cassert>

void calculateFullPrice(float &result,const std::vector<float> &prices, const std::vector<int> &items){

    for (auto &item : items){
        //assert(item < prices.size());

        if (item >= prices.size())
            std::cout << "No item with index: " << item << std::endl;
        result += prices[item];
    }

}

int main() {
    std::vector<float> prices {2.5, 4.25, 3.0, 10.0};
    std::vector<int> items {1, 1, 0, 3, 10, 20};
    float result = 0;

    calculateFullPrice(result, prices, items);

    std::cout << "The total cost will be: " << result << std::endl;
}
