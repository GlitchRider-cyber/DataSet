#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
};

// create node
struct Node* createNode(int val){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data  = val;
    newNode -> next = NULL;
    return newNode;
};

// insert at tail
struct Node* insertAtTail(struct Node* head, int val){
    struct Node* NodeToinsert = createNode(val);
    
    struct Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = NodeToinsert;
};


// print Linked List
void print(struct Node* head){
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
}

// print till m
void Mprint(struct Node* head, int m){
    int i = 0;
    struct Node* temp = head;

    while(i < m){
        printf("%d ", temp -> data);
        temp = temp -> next;
        i++;
    }
    
}

// middle element
int middle(struct Node* head){
    struct Node* slow = head;
    struct Node* fast = head->next;

    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
    }

    return slow-> data;
}

// total node
int totalNode(struct Node* head){
    int count = 0;
    struct Node* temp = head;
    while(temp != NULL){
        temp = temp -> next;
        count++;
    }
    return count;
}



int main(){
    struct Node* node1 = createNode(1);

    struct Node* head = node1;

    // b insert from head
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    print(head);
    printf("\n");

    // c total nodes
    int ans = totalNode(head);
    printf("%d", ans);
    printf("\n");

    // d first m data
    Mprint(head, 3);
    printf("\n");

    // e middle
    int midElement = middle(head);
    printf("%d", midElement);

}   