// Evan Jaeger, Module 7 Project 3 Assignment
#include "ItemTracker.h"
#include <iostream>

int main() {
    ItemTracker tracker("CS210_Project_Three_Input_File.txt", "frequency.dat");

    int choice;
    std::string item;

    do {
        std::cout << "\n====== Corner Grocer Menu ======\n";
        std::cout << "1. Find item frequency\n";
        std::cout << "2. Print all item frequencies\n";
        std::cout << "3. Print histogram\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        while (std::cin.fail() || choice < 1 || choice > 4) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input. Enter number 1-4: ";
            std::cin >> choice;
        }

        switch (choice) {
            case 1:
                std::cout << "Enter item name: ";
                std::cin >> item;
                std::cout << item << " was purchased " << tracker.getItemFrequency(item) << " times.\n";
                break;
            case 2:
                tracker.printAllFrequencies();
                break;
            case 3:
                tracker.printHistogram();
                break;
        }

    } while (choice != 4);

    std::cout << "Thank you for using the Corner Grocer app.\n";
    return 0;
}
