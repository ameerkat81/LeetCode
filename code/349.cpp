class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        vector<int>::iterator iter1 = nums1.begin();
        vector<int>::iterator iter2 = nums2.begin();
        while(iter1 != nums1.end() && iter2 != nums2.end()) {
            if(*iter1 == *iter2){
                if(result.size() == 0)
                    result.push_back(*iter1);
                else if(*iter1 != result.back())
                        result.push_back(*iter1);
                iter1++;
                iter2++;
            }else {
                if(*iter1 < *iter2)
                    iter1++;
                else iter2++;
            }
        }
        return result;
    }
};
