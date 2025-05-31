#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

bool hasCycle(ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return false;
    }

    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;        
        fast = fast->next->next;    

        if (slow == fast) {
            return true;
        }
    }

    return false; 
}


int main() {
  
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);


    head->next->next->next->next->next = head->next;

    if (hasCycle(head)) {
        cout << "Cycle detected in the linked list." << endl;
    } else {
        cout << "No cycle in the linked list." << endl;
    }

    return 0;
}
