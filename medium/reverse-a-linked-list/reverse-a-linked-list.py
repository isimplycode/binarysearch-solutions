class Solution:
    def solve(self, node):
        head=node
        curr=head
        prev=None
        while curr!=None:
            temp=curr.next
            curr.next=prev
            prev=curr
            curr=temp
        head=prev
        return head
