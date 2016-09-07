class Solution {
public:
    char findTheDifference(string s, string t) {
        int hashTable[26] = {0};
        for(int i=0; i<s.length(); ++i) {
            hashTable[s[i] - 'a'] += 1;
        }
        for(int i=0; i<t.length(); ++i) {
            hashTable[t[i] - 'a'] -= 1;
        }
        for(int i=0; i<t.length(); ++i) {
            if(hashTable[t[i] - 'a'] != 0)
                return t[i];
        }
        return NULL;
    }
};
