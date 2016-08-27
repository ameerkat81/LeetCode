class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int lastFoundAtNoneZero=0,cur=0; cur<nums.size(); cur++) {
            if(nums[cur] != 0){
                while(nums[lastFoundAtNoneZero]!=0 && lastFoundAtNoneZero<cur){
                    lastFoundAtNoneZero++;
                }
                swap(nums[lastFoundAtNoneZero++],nums[cur]);
            }
        }
        
    }
};
