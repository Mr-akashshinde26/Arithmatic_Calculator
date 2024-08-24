#include <iostream>
#include <iomanip>

void displayMenu() {
    std::cout << "\n=============================" << std::endl;
    std::cout << "       BASIC CALCULATOR       " << std::endl;
    std::cout << "=============================" << std::endl;
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Subtraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "=============================" << std::endl;
    std::cout << "Choose an operation (1-5): ";
}

int main() {
    int choice;
    double num1, num2, result;

    do {
        displayMenu();
        std::cin >> choice;

        if (choice == 5) {
            std::cout << "Exiting the calculator. Have a great day!" << std::endl;
            break;
        }

        if (choice < 1 || choice > 5) {
            std::cout << "Invalid choice. Please select a number between 1 and 5." << std::endl;
            continue;
        }

        std::cout << "Enter the first number: ";
        std::cin >> num1;
        std::cout << "Enter the second number: ";
        std::cin >> num2;

        switch (choice) {
            case 1: // Addition
                result = num1 + num2;
                std::cout << "Result: " << std::fixed << std::setprecision(2) << num1 << " + " << num2 << " = " << result << std::endl;
                break;
            case 2: // Subtraction
                result = num1 - num2;
                std::cout << "Result: " << std::fixed << std::setprecision(2) << num1 << " - " << num2 << " = " << result << std::endl;
                break;
            case 3: // Multiplication
                result = num1 * num2;
                std::cout << "Result: " << std::fixed << std::setprecision(2) << num1 << " * " << num2 << " = " << result << std::endl;
                break;
            case 4: // Division
                if (num2 != 0) {
                    result = num1 / num2;
                    std::cout << "Result: " << std::fixed << std::setprecision(2) << num1 << " / " << num2 << " = " << result << std::endl;
                } else {
                    std::cout << "Error: Division by zero is not allowed." << std::endl;
                }
                break;
        }

    } while (true);

    return 0;
}