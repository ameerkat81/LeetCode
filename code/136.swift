class Solution {
    func singleNumber(nums: [Int]) -> Int {
        var hashTable = [Int:Int]()
        var returnValue = 0
        for i in 0..<nums.count {
            if hashTable[nums[i]] != nil {
                hashTable.updateValue(2, forKey: nums[i])
            }else {
                hashTable.updateValue(1, forKey: nums[i])
            }
        }
        for i in 0..<nums.count {
            if let currNumCount = hashTable[nums[i]] where currNumCount == 1{
                returnValue = nums[i]
                break
            }
        }
        return returnValue
    }
}
