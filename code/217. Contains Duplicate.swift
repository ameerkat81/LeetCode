class Solution {
    func containsDuplicate(nums: [Int]) -> Bool {
        if nums.count == 0 {
            return false
        }
        let sortedNums = nums.sort()
        for i in 1..<sortedNums.count {
            if sortedNums[i] == sortedNums[i-1] {
                return true
            }
        }
        return false
    }
}
