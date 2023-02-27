#include <iostream>
#include <vector>

void printVector(const std::vector<int> &db, const int &i, const int &vectorSize){
    if (i > vectorSize)
        for (int j = i%vectorSize; j < db.size(); ++j)
            std::cout << db[j] << " ";
    for (int j = 0; j < i%vectorSize; ++j)
        std::cout << db[j] << " ";
    std::cout << std::endl << "Capacity: " << db.capacity() << std::endl;
}

int main() {
    int vectorSize = 5; // тут можно поменять значение на 20 или реализовать ввод данных
    std::vector<int> db(vectorSize);
    int num;

    for (int i = 0; true; ++i){
        std::cout << "input number:";
        std::cin >> num;
        if (num == -1) {
            printVector(db, i, vectorSize);
            i--;
        }
        else{
            db[i%vectorSize] = num;
        }
    }
}
