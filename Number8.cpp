#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
 
bool isAnagram(string X, string Y)
{
    if (X.length() != Y.length()) {
        return false;
    }
 
    unordered_map<int, int> freq;
 
    for (char x: X) {
        freq[x]++;
    }
 
    for (char y: Y)
    {
        if (freq.find(y) == freq.end()) {
            return false;
        }
 
        freq[y]--;
 
        if (!freq[y]) {
            freq.erase(y);
        }
    }
 
    return !freq.size();
}
 
int main()
{
    string X = "school master";
    string Y = "the classroom";
 
    if (isAnagram(X, Y)) {
        cout << "Anagram";
    }
    else {
        cout << "Not an Anagram";
    }
 
    return 0;
}