/*A sentence is a list of words that are separated by a single space with no leading 
or trailing spaces. Each word consists of lowercase and uppercase English letters.
A sentence can be shuffled by appending the 1-indexed word position to each word then 
rearranging the words in the sentence.
For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" 
or "is2 sentence4 This1 a3".Given a shuffled sentence s containing no more than 9 words, 
reconstruct and return the original sentence.*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        vector<pair<int, string>> words;
        stringstream ss(s);
        string word;
        
        while (ss >> word) {
            int index = word.back() - '0';
            word.pop_back();
            words.push_back({index, word});
        }
        
        sort(words.begin(), words.end());
        
        string ans;
        for (auto &p : words) {
            ans += p.second + " ";
        }
        if (!ans.empty()) {
            ans.pop_back();
        }
        
        return ans;
    }
};

int main(){
    Solution s;
    string str = "is2 sentence4 This1 a3";
    cout <<"The sorted string is: "<< s.sortSentence(str) << endl;
}
