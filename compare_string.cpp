#include <iostream>
#include <string>

int main() {
    std::string str1 = "Hello";
    std::string str2 = "World";

    // Determine the length of the shorter string to avoid out-of-bounds access
    size_t minLength = std::min(str1.length(), str2.length());

    // Loop through both strings up to the length of the shorter one
    for (size_t i = 0; i < minLength; ++i) {
        char char1 = str1[i]; // Access character from str1
        char char2 = str2[i]; // Access character from str2

        // Compare the characters
        if (char1 == char2) {
            std::cout << "Characters at index " << i << " are equal: " << char1 << std::endl;
        } else {
            std::cout << "Characters at index " << i << " are not equal: " << char1 << " and " << char2 << std::endl;
        }
    }

    return 0;
}

