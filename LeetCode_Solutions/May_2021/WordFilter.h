#include <string>
#include <vector>
#include <algorithm>
#include <regex>
#include <unordered_map>

using namespace std;

class WordFilter {
private:
    unordered_map<string, int> hashMap;

public:
    WordFilter(const vector<string>& words) {
        int n = words.size();
        for (int i = 0; i < n; i++) {
            const string& word = words[i];
            int wordSize = word.size();
            for (int j = 1; j <= wordSize; j++) {
                string p = word.substr(0, j);
                for (int k = 0; k < wordSize; k++) {
                    string s = word.substr(k, wordSize);
                    hashMap[p + "|" + s] = i + 1;
                }
            }
        }
    }

    int f(const string& prefix, const string& suffix) {
        string s = prefix + "|" + suffix;
        return hashMap[s] - 1;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */