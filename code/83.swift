/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public var val: Int
 *     public var next: ListNode?
 *     public init(_ val: Int) {
 *         self.val = val
 *         self.next = nil
 *     }
 * }
 */
class Solution {
    func deleteDuplicates(head: ListNode?) -> ListNode? {
        var myPointer = ListNode(0)
        myPointer.next = head
        while myPointer.next != nil {
            myPointer = myPointer.next!
            while myPointer.val == myPointer.next?.val {
                myPointer.next = myPointer.next?.next
            }
        }
        return head
    }
}
