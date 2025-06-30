// Evan Jaeger, Module 7 Project 3 Assignment
#include "ItemTracker.h"
#include <iostream>
#include <fstream>
#include <iomanip>

ItemTracker::ItemTracker(const std::string& inputFile, const std::string& outputFile) {
    loadDataFromFile(inputFile);
    saveFrequenciesToFile(outputFile);
}

void ItemTracker::loadDataFromFile(const std::string& fileName) {
    std::ifstream inFile(fileName);
    std::string item;
    while (inFile >> item) {
        ++frequencyMap[item];
    }
    inFile.close();
}

void ItemTracker::saveFrequenciesToFile(const std::string& fileName) {
    std::ofstream outFile(fileName);
    for (const auto& pair : frequencyMap) {
        outFile << pair.first << " " << pair.second << "
";
    }
    outFile.close();
}

int ItemTracker::getItemFrequency(const std::string& itemName) const {
    auto it = frequencyMap.find(itemName);
    if (it != frequencyMap.end()) {
        return it->second;
    }
    return 0;
}

void ItemTracker::printAllFrequencies() const {
    for (const auto& pair : frequencyMap) {
        std::cout << std::left << std::setw(15) << pair.first << ": " << pair.second << "
";
    }
}

void ItemTracker::printHistogram() const {
    for (const auto& pair : frequencyMap) {
        std::cout << std::left << std::setw(15) << pair.first << ": " << std::string(pair.second, '*') << "
";
    }
}
