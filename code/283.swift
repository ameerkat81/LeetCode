class Solution {
    func moveZeroes(inout nums: [Int]) {
        var j = 0
        var count = nums.count
        while(j<count) {
            if nums[j] == 0 {
                nums.removeAtIndex(j)
                nums.append(0)
                count -= 1
            }else{
                j += 1;
            }
        }
    }
}
