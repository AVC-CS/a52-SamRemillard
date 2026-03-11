#include <iostream>

int main()
{
    // TODO
    int num, maxVal;
    std::cin >> maxVal;
    for (int i = 1; i < 10; i++) {
        std::cin >> num;
        if (num > maxVal) {
            maxVal = num;
        }
    }
    std::cout << "Maximum value: " << maxVal << std::endl;
    // END TODO

    return 0;
}
