/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int carray=0;
        ListNode start=new ListNode();
        ListNode temp=start;
        while(l1!=null || l2!=null || carray==1){
            int sum=0;
            if(l1!=null){
                sum+=l1.val;
                l1=l1.next;
            }
            if(l2!=null){
                sum+=l2.val;
                l2=l2.next;
            }
            sum+=carray;
            carray=sum/10;
            ListNode newNode=new ListNode(sum%10);
            temp.next=newNode;
            temp=temp.next;
        }
        return start.next;
    }
}