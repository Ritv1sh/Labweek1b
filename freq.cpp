#include <iostream>
#include <string>
#include <map>
#include <sstream> // For std::istringstream
#include <algorithm> // For std::remove_if and ::ispunct

using namespace std;

int main() {
    string words = "Hi I am 10 years old.Hi you are 10 years old.Hi Hi";
    map<string, int> freq;

    // Use a string stream to break the string into words
    istringstream stream(words);
    string word;

    // Extract words and count their frequencies
    while (stream >> word) {
        // Remove punctuation from the word (optional, if needed)
        word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
        freq[word]++;
    }

    // Print word frequencies
    for (const auto& it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}
