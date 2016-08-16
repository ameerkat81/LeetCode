class Solution {
    func containsNearbyDuplicate(nums: [Int], _ k: Int) -> Bool {
        var hashTable = [Int:Int]()
        for i in 0..<nums.count {
            if let currNumLastIndex = hashTable[nums[i]] {
                if i - currNumLastIndex <= k {
                    return true
                }else {
                    hashTable.updateValue(i, forKey: nums[i])
                }
            }
            hashTable.updateValue(i, forKey: nums[i])
        }
        return false
    }
}
