class Solution {
public:
    int firstUniqChar(string s) {
        
        map < char , int > ma;
        for(int i = 0 ; i < s.size() ; i++ )
        {
            ma[s[i]]++;
        }
        for(int i = 0 ; i < s.size() ; i++ )
        {
            if(ma[s[i]]==1)
                return i;
        }
        return -1;
    }
};
// https://leetcode.com/problems/first-unique-character-in-a-string/submissions/
// Eventhough the code takes less time still the complexity can be reduced check this
//https://www.geeksforgeeks.org/given-a-string-find-its-first-non-repeating-character/
