
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/
struct ListNode* reverseList(struct ListNode* head) {
	struct ListNode *p = head;
	struct ListNode ret = NULL;
	while (p != NULL){
		struct ListNode *cur = p->next;
		p->next = ret;
		ret = p;
		p = cur;
	}
	return p;
}