#include <iostream>
#include <string>
#include <vector>

class AI {
public:
    void performTask(const std::string& task) {
        std::cout << "Performing task: " << task << std::endl;
    }

    void learn(const std::string& information) {
        std::cout << "Learning: " << information << std::endl;
    }

    void analyzeData(const std::vector<int>& data) {
        int sum = 0;
        for (int value : data) {
            sum += value;
        }
        std::cout << "Analyzed data. Sum: " << sum << std::endl;
    }

    void communicate(const std::string& message) {
        std::cout << "Communicating: " << message << std::endl;
    }
};

int main() {
    AI myAI;
    myAI.performTask("Organizing files");
    myAI.learn("New programming techniques");
    myAI.analyzeData({1, 2, 3, 4, 5});
    myAI.communicate("Hello, how can I assist you today?");
    
    return 0;
}
