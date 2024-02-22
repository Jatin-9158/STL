#include <iostream>
#include <vector>
#include <string>

int main() {
    int number = 12345;
    std::vector<int> digitsVector;

    std::string numberString = std::to_string(number);

    for (char digitChar : numberString) {
        int digit = digitChar - '0'; // Convert character to integer
        digitsVector.push_back(digit);
    }

    // Display the vector
    for (int digit : digitsVector) {
        std::cout << digit << " ";
    }
    std::cout << std::endl;

    return 0;
}
