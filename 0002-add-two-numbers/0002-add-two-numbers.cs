/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
using System.Numerics;

public class Solution {
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2) 
    {
        ListNode p1=l1;
        ListNode p2=l2;
        int num3=0;
        BigInteger i=1,num1=0,num2=0;
        while(p1!=null){
            num1+=p1.val*i;
            i*=10;
            p1=p1.next;
        }
        i=1;
         while(p2!=null)
         {
            num2+=p2.val*i;
            Console.WriteLine(num2);

            i*=10;
            p2=p2.next;
        }

        num2+=num1;

        String str;
        str=num2.ToString();
        ListNode l3=new ListNode();
        ListNode p3=l3;
        for(int j=str.Length-1;j>=0;j--)
        {
        num3=int.Parse(str[j].ToString());
        p3.val=num3;
        if(j>0)
        {
        p3.next=new ListNode();
        p3=p3.next;
        }
        
        }
        return l3;
    }
}