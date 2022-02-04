
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    // return opposite ListNode if either is nullptr
    if (!list1) {
        return list2;
    } else if (!list2) {
        return list1;
    }
    
    // cache head node to return at end
    ListNode* head;
    if (list1->val <= list2->val){
        head = list1;
        list1 = list1->next;
    } else {
        head = list2;
        list2 = list2->next;
    }
    
    ListNode* prev = head;
    while (list1 && list2) {
        if (list1->val <= list2->val) {
            prev->next = list1;
            list1 = list1->next;
        } else {
            prev->next = list2;
            list2 = list2->next;
        }
        
        prev = prev->next;
    }
    
    prev->next = (list1) ? list1 : list2;  // connect final section of linked list
    
    return head;
}