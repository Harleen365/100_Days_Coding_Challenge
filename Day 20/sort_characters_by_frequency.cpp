class Solution {
public:
    string frequencySort(string s) {

        map<char, int> frequency;
    for (char c : s) {
        frequency[c]++;
    }

    // Create a multimap to store characters sorted by their frequency
    multimap<int, char,greater<int>> sortedCharacters;
    for (auto& entry : frequency) {
        sortedCharacters.insert({entry.second, entry.first});
    }


    string result;
    for (auto& entry : sortedCharacters) {
        result += string(entry.first, entry.second);
    }

    return result;
    }
};
//string(entry.first, entry.second): This is constructing a string by repeating the character (entry.second) entry.first times. It utilizes the constructor of the std::string class, which takes the number of characters and the character itself to create a string.
