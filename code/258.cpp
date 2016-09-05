class Solution {
public:
    int addDigits(int num) {
        if(num < 10)
            return num;
        int addResult = 0;
        while(num/10 > 0) {
            addResult = 0;
            while(num>0) {
                addResult += num%10;
                num /= 10;
            }
            num = addResult;
        } 
        return addResult;
        
        /**
          better solution
          O(1)
        */
        /*
          return (num - 1) % 9 + 1;
        *
    }
};
