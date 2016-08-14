class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size() > magazine.size())
                return false;
        if(ransomNote.size() == 0)
            return true;
        
        int hashR[26] = {0};
        int hashM[26] = {0};
        for(int i=0; i<ransomNote.size();i++){
            hashR[ransomNote[i]-'a'] += 1;
        }
        for(int i=0; i<magazine.size();i++){
            hashM[magazine[i]-'a'] += 1;
        }
        for(int i=0; i<26;i++){
            if(hashR[i] > hashM[i])
                return false;
        }
        return true;
    }
};
