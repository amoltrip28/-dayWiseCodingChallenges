#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

ListNode* insertGCD(ListNode* head) {
    ListNode* curr = head;
    while (curr && curr->next) {
        int g = gcd(curr->val, curr->next->val);
        ListNode* newNode = new ListNode(g);
        newNode->next = curr->next;
        curr->next = newNode;
        curr = newNode->next;
    }
    return head;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = new ListNode(18);
    head->next = new ListNode(6);
    head->next->next = new ListNode(10);
    head->next->next->next = new ListNode(3);

    head = insertGCD(head);
    printList(head);

    return 0;
}
