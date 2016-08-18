class Solution {
public:
    bool isValid(string s) {
        vector<char> needMatch;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                needMatch.push_back(s[i]);
            }else{
                if(needMatch.size() == 0)
                        return false;
                if(s[i] == ')'){
                    if(needMatch.back() != '(')
                        return false;
                    needMatch.pop_back();
                }else{
                    if(needMatch.back() != s[i]-2)
                        return false;
                    needMatch.pop_back();
                }
            }
        }
        if(needMatch.size() != 0)
            return false;
        return true;
    }
};
