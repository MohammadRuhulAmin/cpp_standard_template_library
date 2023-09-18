#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    // Define a counter map with frequency counts.
    std::map<std::string, int> counter;
    counter["apple"] = 3;
    counter["banana"] = 2;
    counter["cherry"] = 3;

    // Define a list of strings to be sorted using the lambda function.
    std::vector<std::string> strings = {"banana", "apple", "cherry"};

    // Define the lambda function for comparison.
    auto comp = [&counter](const std::string& lhs, const std::string& rhs) {
        return (counter[lhs] == counter[rhs]) ? (lhs > rhs) : (counter[lhs] < counter[rhs]);
    };

    // Sort the strings using the lambda function as a custom comparator.
    std::sort(strings.begin(), strings.end(), comp);

    // Display the sorted strings.
    for (const std::string& str : strings) {
        std::cout << str << " ";
    }

    return 0;
}

