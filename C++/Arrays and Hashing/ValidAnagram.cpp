//https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
        {
            return false;
        }

        unordered_map<char, int> countS;
        unordered_map<char, int> countT;

        for(int i = 0; i < s.size(); i++)
        {
            if(countS.find(s[i]) == countS.end())
            {
                countS[s[i]] = 0;
            }
            if(countT.find(t[i]) == countT.end())
            {
                countT[t[i]] = 0;
            }
            countS[s[i]] += 1;
            countT[t[i]] += 1;
        }
        return countS == countT;
    }
};