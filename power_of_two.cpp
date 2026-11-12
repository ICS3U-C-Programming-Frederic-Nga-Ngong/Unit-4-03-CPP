// Copyright (c) Year Fred All rights reserved.
// .
// Created by: Fred
// Date: Feb 18 2008
// Displays square of numbers.

#include<iostream>
#include<string>
#include<cmath>

int main() {
    int user_num, counter, square_ans;
    float floatuser_num;
    std::string usernum_str;

    // Get number from the user
    std::cout << "Enter a positive number\n";
    std::cin >> usernum_str;

    // Verify if number is an integer
    try {
        user_num = std::stoi(usernum_str);
        floatuser_num = std::stof(usernum_str);

        // Verify if number is a decimal
        if (user_num == floatuser_num) {
            // Number is a negative integer
            if (user_num <= 0) {
                for (counter = -1; counter >= user_num; counter--) {
                    square_ans = pow(counter, 2);
                    std::cout << counter << " ^ 2 = "
                     << square_ans << std::endl;
                }
            // Number is a positive integer
            } else {
            for (counter = 1; counter <= user_num; counter++) {
                square_ans = pow(counter, 2);
                std::cout << counter << " * 2 = " << square_ans << std::endl;
            }
                }
        // If the number is a decimal, tell the user to enter a new one
        } else {
        std::cout << floatuser_num << " is not a whole number. "
                                      "Please, enter a new value";
    }

    // if user input is not a real integer, tell the user to enter an new one
} catch (std::invalid_argument) {
        std::cout << usernum_str << " is not a valid integer";
    }
std::cout << "Thanks for using the code";
}
