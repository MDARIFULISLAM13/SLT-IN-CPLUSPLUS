#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> a = {0, 1, 2, 3, 4, 5, 6}; // Example vector
    int f = 1;
    int last = 5;

    std::reverse(a.begin() + f, a.begin() + last + 1);

    // Print the reversed vector
    std::cout << "Reversed vector: ";
    for (const auto &element : a)
    {
        std::cout << element << " ";
    }

    // Clear the vector
    a.clear();

    // Print the cleared vector
    std::cout << "\nCleared vector: ";
    for (const auto &element : a)
    {
        std::cout << element << " ";
    }

    return 0;
}
