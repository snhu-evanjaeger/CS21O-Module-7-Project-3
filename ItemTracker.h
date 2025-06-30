// Evan Jaeger, Module 7 Project 3 Assignment
#ifndef ITEM_TRACKER_H
#define ITEM_TRACKER_H

#include <string>
#include <map>

class ItemTracker {
private:
    std::map<std::string, int> frequencyMap;

    void loadDataFromFile(const std::string& fileName);
    void saveFrequenciesToFile(const std::string& fileName);

public:
    ItemTracker(const std::string& inputFile, const std::string& outputFile);
    int getItemFrequency(const std::string& itemName) const;
    void printAllFrequencies() const;
    void printHistogram() const;
};

#endif
