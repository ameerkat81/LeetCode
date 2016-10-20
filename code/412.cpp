class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> repeatContent = {"1","2","Fizz","4","Buzz","Fizz","7","8",
        "Fizz","Buzz","11","Fizz","13","14","FizzBuzz"};
        
        vector<string> result;
        
        int roundCount = 0;
        while(n > 0) {
            int range = 15 + 1;
            if(n < 15){
                range = n + 1;
            }
            for(int j=1; j<range; j++){
                if(j<3 || j%3 != 0 && j%5 != 0){
                    string str = to_string(j + roundCount*15);
                    result.push_back(str);                      
                }else result.push_back(repeatContent[j-1]);
            }
            n -= 15;
            roundCount += 1;
        }
        return result;
    }
};
