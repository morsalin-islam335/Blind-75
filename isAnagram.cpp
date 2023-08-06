//program to check if 2 string is anagram or not
//problem link: https://leetcode.com/problems/valid-anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
       return s==t;
    }
};
