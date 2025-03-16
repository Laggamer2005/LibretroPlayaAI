#ifndef AIBASIS_H
#define AIBASIS_H

#include <iostream>
#include <string>
#include <vector>

class AI {
public:
    void performTask(const std::string& task);
    void learn(const std::string& information);
    void analyzeData(const std::vector<int>& data);
    void communicate(const std::string& message);
};

#endif // AIBASIS_H
You can include this header file in your aibasis.cpp file by adding #include "aibasis.h" at the top and removing the class definition from the .cpp file. Here's how the modified aibasis.cpp would look:

C++
#include "aibasis.h"

void AI::performTask(const std::string& task) {
    std::cout << "Performing task: " << task << std::endl;
}

void AI::learn(const std::string& information) {
    std::cout << "Learning: " << information << std::endl;
}

void AI::analyzeData(const std::vector<int>& data) {
    int sum = 0;
    for (int value : data) {
        sum += value;
    }
    std::cout << "Analyzed data. Sum: " << sum << std::endl;
}

void AI::communicate(const std::string& message) {
    std::cout << "Communicating: " << message << std::endl;
}

int main() {
    AI myAI;
    myAI.performTask("Organizing files");
    myAI.learn("New programming techniques");
    myAI.analyzeData({1, 2, 3, 4, 5});
    myAI.communicate("Hello, how can I assist you today?");
    
    return 0;
}
