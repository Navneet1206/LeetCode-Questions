#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0); // Dummy head for the result list
        ListNode* current = dummyHead; // Pointer to build the new list
        int carry = 0; // Initialize carry to 0

        // Loop until both lists are exhausted and no carry remains
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = carry; // Start with the carry

            // Add the value from l1 if available
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next; // Move to the next node in l1
            }

            // Add the value from l2 if available
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next; // Move to the next node in l2
            }

            carry = sum / 10; // Calculate new carry
            current->next = new ListNode(sum % 10); // Create a new node with the digit
            current = current->next; // Move to the next node in the result list
        }

        return dummyHead->next; // Return the next node of dummy head (the actual result)
    }
};

ListNode* createLinkedList() {
    int n, value;
    cout << "Enter the number of nodes in the linked list: ";
    cin >> n;

    if (n <= 0) return nullptr;

    cout << "Enter the values for the linked list: ";
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (int i = 0; i < n; i++) {
        cin >> value;
        ListNode* newNode = new ListNode(value);
        if (!head) {
            head = newNode;
            tail = head;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

void printLinkedList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) {
            cout << " -> ";
        }
        head = head->next;
    }
    cout << endl;
}

int main() {
    Solution solution;

    // Create first linked list from user input
    cout << "Create first linked list (l1):" << endl;
    ListNode* l1 = createLinkedList();

    // Create second linked list from user input
    cout << "Create second linked list (l2):" << endl;
    ListNode* l2 = createLinkedList();

    // Add the two numbers
    ListNode* result = solution.addTwoNumbers(l1, l2);

    // Print the result linked list
    cout << "Result: ";
    printLinkedList(result);

    // Clean up memory (not shown here, but should be done in a complete program)

    return 0;
}
