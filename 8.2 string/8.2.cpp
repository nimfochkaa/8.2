#include <iostream>
#include <string>

using namespace std;

size_t CountWords(const string& s) {
    size_t wordCount = 0;
    size_t start = 0;

    while ((start = s.find_first_not_of(" ", start)) != string::npos) {
        start = s.find_first_of(" ", start);
        wordCount++;
    }

    return wordCount;
}

int main() {
    string str;
    cout << "Enter a string:" << endl;
    getline(cin, str);

    size_t wordCount = CountWords(str);
    cout << "Number of words: " << wordCount << endl;

    return 0;
}
