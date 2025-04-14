// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }

// };
// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;

// }
// int main(){
//     Node* first=new Node(10);
//     Node* second=new Node(20);
//     Node* third=new Node(30);
//     Node* fourth=new Node(40);
//     Node* fifth=new Node(50);

//     first->next=second;
//     second->next=third;
//     third->next=fourth;
//     fourth->next=fifth;
//     fifth->next=NULL;

//     print(first);


// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
    
//     }
// };
// void insertAtHead(Node* &head,int data){
//     Node* newNode=new Node(data);
//     newNode->next=head;
//     head=newNode;
// }
// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     Node* head=new Node(10);
//     insertAtHead(head,20);
//     insertAtHead(head,30);
//     insertAtHead(head,40);
//     insertAtHead(head,50);
//     insertAtHead(head,60);
//     print(head);
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
// }
// };
// void insertAtTail(Node* &head,Node* &tail, int data){
//     Node* newNode=new Node(data);

//     if(head==NULL){
//         head=newNode;
//         tail=newNode;
//     }

//     tail->next=newNode;
//     tail=newNode;

// }

// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next; 
//     }
//     cout<<endl;
// }
// int main(){
//     Node* head=NULL;
//     Node* tail=NULL;

//     insertAtTail(head,tail,30);
//     insertAtTail(head,tail,40);
//     insertAtTail(head,tail,50);
//     insertAtTail(head,tail,60);

//     print(head);
// }

// #include<iostream>
// using  namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }

//     ~Node(){
//         cout<<"Deleted value"<<this->data;
//     }

// };
// // Insertion at head case
// void insertAtHead(Node* &head,Node* &tail,int data){
//     // Empty Linked list case
//     if(head == NULL){
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     // Step - 1
//     Node* newNode = new Node(data);
//     // Step - 2
//     newNode->next = head;
//     // Step - 3
//     head = newNode;
// }
// // Insertion at tail case
// void insertAtTail(Node* &head,Node* &tail,int data){
//     // Empty linked list case
//     if(head == NULL){
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     // Step - 1
//     Node* newNode = new Node(data);
//     // Step - 2
//     tail->next = newNode;
//     // Step - 3
//     tail = newNode;
// }
// int findlenght(Node* &head){
//     int l=1;
//     Node* temp=head;
//     while(temp!=NULL){
//         temp=temp->next;
//         l++;
//     }
//     return l;
// }
// void deleteOperation(Node* &head,Node* &tail,int data,int pos){
//     // head se deletion
//     if(pos==1){
//         // delete from head
//         Node* temp=head;
//         head=head->next;
//         temp->next=NULL;
//         delete temp;
//         return;
//     }
//     int lenght=findlenght(head);
//     // fidn prev

//     // delete from tail
//     if(pos==lenght){
//         // delete from tail
//         int i=1;
//         Node* head=prev;

//         while(i<pos-1){
//             prev=prev->next;
//             i++;
//         }

//         prev->next=NULL;
//         Node* temp=tail;
//         tail=prev;
//         delete temp; 
//         return;
//     }
//     // delete from middle
//     // find prev and curr
//     int i=1;
//     Node* head=prev;
//     while(i<pos-1){
//         prev=prev->next;
//         i++;
//     }
//     Node* curr=prev->next;
//     prev->next=curr->next;
//     curr->next=NULL;
//     delete curr;
// }
// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     Node *head = new Node(10);
//     Node *tail = head;
//     insertAtTail(head, tail, 20);
//     insertAtTail(head, tail, 30);
//     insertAtTail(head, tail, 40);
//     insertAtTail(head, tail, 50);
//     deleteOperation(head,tail,3);
//     cout<<endl;
//     print(head);
// }


// #include<iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }

//     ~Node() {
//         cout << "Deleted value: " << this->data << endl;
//     }
// };

// // Insertion at head
// void insertAtHead(Node* &head, Node* &tail, int data) {
//     if (head == NULL) {
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     Node* newNode = new Node(data);
//     newNode->next = head;
//     head = newNode;
// }

// // Insertion at tail
// void insertAtTail(Node* &head, Node* &tail, int data) {
//     if (head == NULL) {
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     Node* newNode = new Node(data);
//     tail->next = newNode;
//     tail = newNode;
// }

// // Calculate length
// int findLength(Node* &head) {
//     int l = 0;
//     Node* temp = head;
//     while (temp != NULL) {
//         temp = temp->next;
//         l++;
//     }
//     return l;
// }

// // Delete operation
// void deleteOperation(Node* &head, Node* &tail, int data, int pos) {
//     if (head == NULL) return;

//     // Delete at head
//     if (pos == 1) {
//         Node* temp = head;
//         head = head->next;
//         temp->next = NULL;
//         delete temp;
//         return;
//     }

//     int length = findLength(head);

//     // Delete at tail
//     if (pos == length) {
//         Node* prev = head;
//         int i = 1;
//         while (i < pos - 1) {
//             prev = prev->next;
//             i++;
//         }

//         prev->next = NULL;
//         delete tail;
//         tail = prev;
//         return;
//     }

//     // Delete in middle
//     Node* prev = head;
//     int i = 1;
//     while (i < pos - 1) {
//         prev = prev->next;
//         i++;
//     }

//     Node* curr = prev->next;
//     prev->next = curr->next;
//     curr->next = NULL;
//     delete curr;
// }

// void print(Node* &head) {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     Node* head = new Node(10);
//     Node* tail = head;

//     insertAtTail(head, tail, 20);
//     insertAtTail(head, tail, 30);
//     insertAtTail(head, tail, 40);
//     insertAtTail(head, tail, 50);

//     cout << "Before Deletion: ";
//     print(head);

//     // Delete node at position 5 (which is 50)
//     deleteOperation(head, tail, -1, 5);

//     cout << "After Deletion: ";
//     print(head);

//     return 0;
// }

// Circular linked list

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }

//   ~Node(){
//     int val=this->data;
//     if(this->next!=NULL){
//         delete next;
//         this->next=NULL;
//     }
//     cout<<"Memory is free for node with value"<<val<<endl;
//   }
// };
// int findlenght(Node* &head){
//     int l=0;
//     Node* temp=head;
//     while(temp!=NULL){
//         temp=temp->next;
//         l++;
//     }
// }
// void insertAtHead(Node* &head,Node* &tail,int data){
//     Node* newNode=new Node(data);

//     if(head==NULL){
//         head=newNode;
//         tail=newNode;
//         return;
//     }

//     newNode->next=head;
//     tail->next=head;
//     head=newNode;
    
// }
// void insertAtTail(Node* &head,Node* &tail,int data){
//     Node* newNode=new Node(data);

//     if(head==NULL){
//         head=newNode;
//         tail=newNode;
//         return;
//     }
//     tail->next=newNode;
//     newNode->next=head;
//     tail=newNode;
// }
// void insertAtPosition(Node* &head,Node* &tail,int pos,int data){
//     Node* newNode=new Node(data);
//     if(head==NULL){
//         head=newNode;
//         tail=newNode;
//         return;
//     }

//     int len=findlenght(head);

//     if(pos==0){
//         insertAtHead(head,tail,data);
//         return;
//     }
//     if(pos==len){
//         insertAtTail(head,tail,data);
//         return;
//     }
//     // find position
//     int i=1;
//     Node* prev=head;
//     while(i<pos-1){
//         prev=prev->next;
//         i++;
//     }
//     Node* curr=prev->next;
//     prev->next=newNode;
//     newNode->next=curr;

// }
//  void deleteatHead(Node* &head,Node* tail){
//     if(head==NULL){
//         return;
//     }
//     Node* temp=head;
//     head=head->next;
//     tail->next = head;
//     temp->next=NULL;
//     delete temp;
//  }
//  void deleteatTail(Node* &head,Node* &tail){
//     if(head==NULL){
//         return;
//     }

//    Node* prev=head;
//    while(prev->next!=NULL){
//     prev=prev->next;
//    }
//    prev->next=head;
//    delete tail;
//    tail=prev;
//  }
// void deleteOperation(int position, Node *&head, Node *&tail)
// {
//     if (head == NULL)
//     {
//         cout << "Cannot delete, LL is empty";
//         return;
//     }
//     // Head node deletion
//     if(position == 0)
//     {
//         deleteHead(head,tail);
//         return;
//     }
//     // Tail node deletion
//     int len = findLength(head);
//     if(position >= len){
//         deleteTail(head,tail);
//         return;
//     }
//     // step  : find prev and curr
//     int i = 1;
//     Node *prev = head;
//     while (i < position - 1)
//     {
//         prev = prev->next;
//         i++;
//     }
//     Node *curr = prev->next;

//     // step2:
//     prev->next = curr->next;
//     // step3:
//     curr->next = NULL;
//     // step4:
//     delete curr;
// }


// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//      Node* head = new Node(10);
//     Node* tail = head;
//     // insertAtHead(head,tail,20);
//     // insertAtHead(head,tail,30);
//     // insertAtHead(head,tail,40);
//     // insertAtHead(head,tail,50);
//     insertAtTail(head,tail,20);
//     insertAtTail(head,tail,30);
//     insertAtTail(head,tail,40);
//     insertAtTail(head,tail,50);
//     insertAtPosition(head,tail,35,3);
//     cout<<findLength(head)<<endl;
//     // deleteHead(head,tail);
//     // deleteTail(head,tail);
//     deleteOperation(6,head,tail);
//     printList(head);
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }

//     ~Node() {
//         int val = this->data;
//         if (this->next != NULL && this->next != this) {
//             delete next;
//             this->next = NULL;
//         }
//         cout << "Memory is free for node with value " << val << endl;
//     }
// };

// int findLength(Node* &head) {
//     if (head == NULL) return 0;

//     int len = 1;
//     Node* temp = head->next;
//     while (temp != head) {
//         len++;
//         temp = temp->next;
//     }
//     return len;
// }

// void insertAtHead(Node* &head, Node* &tail, int data) {
//     Node* newNode = new Node(data);
//     if (head == NULL) {
//         head = newNode;
//         tail = newNode;
//         newNode->next = newNode;
//         return;
//     }

//     newNode->next = head;
//     tail->next = newNode;
//     head = newNode;
// }

// void insertAtTail(Node* &head, Node* &tail, int data) {
//     Node* newNode = new Node(data);
//     if (head == NULL) {
//         head = tail = newNode;
//         newNode->next = newNode;
//         return;
//     }

//     tail->next = newNode;
//     newNode->next = head;
//     tail = newNode;
// }

// void insertAtPosition(Node* &head, Node* &tail, int pos, int data) {
//     int len = findLength(head);
//     if (pos <= 0) {
//         insertAtHead(head, tail, data);
//         return;
//     } else if (pos >= len) {
//         insertAtTail(head, tail, data);
//         return;
//     }

//     Node* newNode = new Node(data);
//     Node* temp = head;
//     int i = 1;
//     while (i < pos) {
//         temp = temp->next;
//         i++;
//     }

//     newNode->next = temp->next;
//     temp->next = newNode;
// }

// void deleteAtHead(Node* &head, Node* &tail) {
//     if (head == NULL) return;

//     Node* temp = head;
//     if (head == tail) {
//         head = NULL;
//         tail = NULL;
//     } else {
//         head = head->next;
//         tail->next = head;
//     }
//     temp->next = NULL;
//     delete temp;
// }

// void deleteAtTail(Node* &head, Node* &tail) {
//     if (head == NULL) return;

//     if (head == tail) {
//         delete head;
//         head = tail = NULL;
//         return;
//     }

//     Node* prev = head;
//     while (prev->next != tail) {
//         prev = prev->next;
//     }

//     prev->next = head;
//     delete tail;
//     tail = prev;
// }

// void deleteOperation(int position, Node* &head, Node* &tail) {
//     if (head == NULL) {
//         cout << "Cannot delete, LL is empty\n";
//         return;
//     }

//     int len = findLength(head);

//     if (position <= 0) {
//         deleteAtHead(head, tail);
//         return;
//     } else if (position >= len - 1) {
//         deleteAtTail(head, tail);
//         return;
//     }

//     Node* prev = head;
//     int i = 1;
//     while (i < position) {
//         prev = prev->next;
//         i++;
//     }

    // Node* curr = prev->next;
//     prev->next = curr->next;
//     curr->next = NULL;
//     delete curr;
// }

// void printList(Node* head) {
//     if (head == NULL) return;

//     Node* temp = head;
//     do {
//         cout << temp->data << " ";
//         temp = temp->next;
//     } while (temp != head);
//     cout << endl;
// }

// int main() {
//     Node* head = NULL;
//     Node* tail = NULL;

//     insertAtTail(head, tail, 10);
//     insertAtTail(head, tail, 20);
//     insertAtTail(head, tail, 30);
//     insertAtTail(head, tail, 40);
//     insertAtTail(head, tail, 50);

//     insertAtPosition(head, tail, 3, 35);

//     cout << "Length: " << findLength(head) << endl;

//     deleteOperation(6, head, tail); // deleting beyond length = should delete tail

//     printList(head);

//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
    
//     ~Node(){
//         int val=this->data;
//         if(this->next!=NULL && this->next!=NULL){
//             delete next;
//             this->next=NULL;
//         }
//     }
// };
// Node* reverse(Node* head) {
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* forw =curr->next;

//     while(curr != NULL) {
//         curr->next = prev;    // reverse pointer
//         prev = curr;          // move prev
//         curr = forw;          // move curr
//     }

//     return prev;
// }
// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){ 
//     Node* first=new Node(10);
//     Node* second=new Node(20);
//     Node* third=new Node(30);
//     Node* fourth=new Node(40);
//     Node* fifth=new Node(50);

//     first->next=second;
//     second->next=third;
//     third->next=fourth;
//     fourth->next=fifth;
//     fifth->next=NULL;
//     cout<<"Original Linked List: ";
//     print(first);
//     Node* ans=reverse(first);
//     cout<<"Reversed Linked List: ";
//     print(ans);

// }\
// #include<iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }

//     ~Node() {
//         int val = this->data;
//         if (this->next != NULL) {
//             delete next;
//             this->next = NULL;
//         }
//         cout << "Memory is free for node with value " << val << endl;
//     }
// };

// // Function to reverse a singly linked list
// Node* reverse(Node* head) {
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* forw = NULL;

//     while (curr != NULL) {
//         forw = curr->next;  // Save next node
//         curr->next = prev;  // Reverse current node's pointer
//         prev = curr;        // Move prev ahead
//         curr = forw;        // Move curr ahead
//     }

//     return prev;
// }

// // Function to print the linked list
// void print(Node* &head) {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     // Creating the linked list: 10 -> 20 -> 30 -> 40 -> 50
//     Node* first = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* fifth = new Node(50);

//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = NULL;

//     cout << "Original Linked List: ";
//     print(first);

//     Node* reversedHead = reverse(first);
//     cout << "Reversed Linked List: ";
//     print(reversedHead);

//     // Optional: delete the list to trigger destructors
//     delete reversedHead;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }

//     ~Node() {
//         int val = this->data;
//         if (this->next != NULL) {
//             delete next;
//             this->next = NULL;
//         }
//         cout << "Memory is free for node with value " << val << endl;
//     }
// };

// // Function to reverse a singly linked list
// Node* reverse(Node* head) {
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* forw = NULL;

//     while (curr != NULL) {
//         forw = curr->next;  // Save next node
//         curr->next = prev;  // Reverse current node's pointer
//         prev = curr;        // Move prev ahead
//         curr = forw;        // Move curr ahead
//     }

//     return prev;
// }

// // Function to print the linked list
// void print(Node* &head) {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     // Creating the linked list: 10 -> 20 -> 30 -> 40 -> 50
//     Node* first = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* fifth = new Node(50);

//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = NULL;

//     cout << "Original Linked List: ";
//     print(first);

//     Node* reversedHead = reverse(first);
//     cout << "Reversed Linked List: ";
//     print(reversedHead);

//     // Optional: delete the list to trigger destructors
//     delete reversedHead;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// Node* middle(Node* &head){
//     // If null
//     if(head==NULL || head->next==NULL){
//         return head;
//     }

//     Node* slow=head;
//     Node* fast=head;
//     // fast=fast->next;

//     while(slow!=NULL && fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//         }
//     }
//     return slow;
// }
// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
    
//     Node* head = new Node(10);
//     Node* first = new Node(20);
//     Node* second = new Node(30);
//     Node* third = new Node(40);
//     Node* fourth=new Node(50);
//     head->next = first;
//     first->next = second;
//     second->next = third;
//     third->next=fourth;
    
//     cout<<"Printing the linked list: ";
//     print(head);
//     Node* ans=middle(head);
//     cout<<"The middle elements of linked list is: "<<ans->data;
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// bool loopdetected(Node* &head){
//     if(head==NULL || head->next==NULL){
//         return false;
//     }

//     Node* slow=head;
//     Node* fast=head;

//     while(slow!=NULL && fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//         }

//         if(slow==fast){
//             return true;
//         }
//     }
//     return false;
// }
// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//  Node* head = new Node(10);
//     Node* first = new Node(20);
//     Node* second = new Node(30);
//     Node* third = new Node(40);
//     Node* fourth = new Node(50);
//     Node* fifth = new Node(60);
//     Node* sixth = new Node(70);
//     Node* seventh = new Node(80);
//     Node* eigth = new Node(90);
//     head->next = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = seventh;
//     seventh->next = eigth;
//     // eigth->next = fourth;

//     if(loopdetected(head)){
//         cout<<"Loop is present";
//     }
//     else{
//         cout<<"Loop is not present";
//     }
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// Node* loopdetected(Node* &head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }

//     Node* slow=head;
//     Node* fast=head;

//     while(slow!=NULL && fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//         }
//         if(slow==fast){
//             return slow;
//         }
//     }
//     return NULL;
// }
// // void print(Node* &head){
// //     Node* temp=head;
// //     while(temp!=NULL){
// //         cout<<temp->data<<" ";
// //         temp=temp->next;
// //     }
// //     cout<<endl;
// // }
// int main(){
//      Node* head = new Node(10);
//     Node* first = new Node(20);
//     Node* second = new Node(30);
//     Node* third = new Node(40);
//     Node* fourth = new Node(50);
//     Node* fifth = new Node(60);
//     Node* sixth = new Node(70);
//     Node* seventh = new Node(80);
//     Node* eigth = new Node(90);
//     head->next = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = seventh;
//     seventh->next = eigth;
//     eigth->next = fourth;
//     // cout<<"Printing the linked list: ";
//     // print(head);
//     cout<<"Loop starts from here: ";
//     Node* ans=loopdetected(head);
//     cout<<ans->data;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// Node* startingpoint(Node* &head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }

//     Node* slow=head;
//     Node* fast=head;
    
//     while(slow!=NULL && fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//         }
//         if(slow==fast){
//             slow=head;
//             break;
//         }
//     }
//     while(slow!=fast){
//         slow=slow->next;
//         fast=fast->next;
//     }
//     return slow;
// }
// int main(){
//     Node* head = new Node(10);
//     Node* first = new Node(20);
//     Node* second = new Node(30);
//     Node* third = new Node(40);
//     Node* fourth = new Node(50);
//     Node* fifth = new Node(60);
//     Node* sixth = new Node(70);
//     Node* seventh = new Node(80);
//     Node* eigth = new Node(90);
//     head->next = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = seventh;
//     seventh->next = eigth;
//     eigth->next = fourth;
//     Node* starting =startingpoint(head);
//     cout<<starting->data;
//     return 0;
// }

// Node* startingpoint(Node* &head){
//     if(head == NULL || head->next == NULL){
//         return NULL;
//     }

//     Node* slow = head;
//     Node* fast = head;

//     while(fast != NULL && fast->next != NULL){
//         slow = slow->next;
//         fast = fast->next->next;

//         if(slow == fast){
//             // Loop detected
//             slow = head;
//             while(slow != fast){
//                 slow = slow->next;
//                 fast = fast->next;
//             }
//             return slow; // Loop starting point
//         }
//     }

//     return NULL; // No loop
// }

// #include<iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// // Function to find the starting point of the loop
// Node* startingpoint(Node* &head) {
//     if (head == NULL || head->next == NULL) {
//         return NULL;
//     }

//     Node* slow = head;
//     Node* fast = head;

//     // Step 1: Detect loop using Floyd’s Cycle Detection
//     while (fast != NULL && fast->next != NULL) {
//         slow = slow->next;
//         fast = fast->next->next;

//         if (slow == fast) {
//             // Step 2: Find starting point of the loop
//             slow = head;
//             while (slow != fast) {
//                 slow = slow->next;
//                 fast = fast->next;
//             }
//             return slow; // Starting point of the loop
//         }
//     }

//     return NULL; // No loop
// }

// int main() {
//     // Creating the linked list
//     Node* head = new Node(10);
//     Node* first = new Node(20);
//     Node* second = new Node(30);
//     Node* third = new Node(40);
//     Node* fourth = new Node(50);
//     Node* fifth = new Node(60);
//     Node* sixth = new Node(70);
//     Node* seventh = new Node(80);
//     Node* eigth = new Node(90);

//     // Connecting the nodes
//     head->next = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = seventh;
//     seventh->next = eigth;

//     // Creating a loop: last node points to "fourth"
//     eigth->next = fourth;

//     // Find and print starting point of the loop
//     Node* starting = startingpoint(head);
//     if (starting != NULL) {
//         cout << "Loop starts at node with data: " << starting->data << endl;
//     } else {
//         cout << "No loop detected." << endl;
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// // Function to find the starting point of the loop
// Node* startingpoint(Node* &head) {
//     if (head == NULL || head->next == NULL) {
//         return NULL;
//     }

//     Node* slow = head;
//     Node* fast = head;

//     // Step 1: Detect loop using Floyd’s Cycle Detection
//     while (fast != NULL && fast->next != NULL) {
//         slow = slow->next;
//         fast = fast->next->next;

//         if (slow == fast) {
//             // Step 2: Find starting point of the loop
//             slow = head;
//             while (slow != fast) {
//                 slow = slow->next;
//                 fast = fast->next;
//             }
//             return slow; // Starting point of the loop
//         }
//     }

//     return NULL; // No loop
// }

// int main() {
//     // Creating the linked list
//     Node* head = new Node(10);
//     Node* first = new Node(20);
//     Node* second = new Node(30);
//     Node* third = new Node(40);
//     Node* fourth = new Node(50);
//     Node* fifth = new Node(60);
//     Node* sixth = new Node(70);
//     Node* seventh = new Node(80);
//     Node* eigth = new Node(90);

//     // Connecting the nodes
//     head->next = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = seventh;
//     seventh->next = eigth;

//     // Creating a loop: last node points to "fourth"
//     eigth->next = fourth;

//     // Find and print starting point of the loop
//     Node* starting = startingpoint(head);
//     if (starting != NULL) {
//         cout << "Loop starts at node with data: " << starting->data << endl;
//     } else {
//         cout << "No loop detected." << endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->next=NULL;
//         this->data=data;
//     }
// };
// void removeLoop(Node* &head){
//     if(head==NULL || head->next==NULL){
//         return ;
//     }

//     Node* slow=head;
//     Node* fast=head;

//     while(slow!=NULL && fast!=NULL){
//         fast=fast->next;
//         if(fast!= NULL){
//             fast=fast->next;
//             slow=slow->next;
//         }
//         if(slow==fast){
//             slow=head;
//             break;
//         }
//     }
//     Node* prev=fast;
//     while(slow!=fast){
//         prev=fast;
//         slow=slow->next;
//         fast=fast->next;
//     }
//     prev->next=NULL;

// }
// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// int main(){
// Node* head = new Node(10);
//     Node* first = new Node(20);
//     Node* second = new Node(30);
//     Node* third = new Node(40);
//     Node* fourth = new Node(50);
//     Node* fifth = new Node(60);
//     Node* sixth = new Node(70);
//     Node* seventh = new Node(80);
//     Node* eigth = new Node(90);

//     head->next = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = seventh;
//     seventh->next = eigth;
//     eigth->next = fourth;
    
//     removeLoop(head);
//     print(head);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// Node* reverse(Node* &head){
//     Node* prev=NULL;
//     Node* curr=head;
//     Node* forw=curr->next;

//     while(curr!= NULL){
//         curr->next=prev;
//         prev=curr;
//         curr=forw;
//     }
//     return prev;
// }
// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//     cout<<temp->data<<" ";
//     temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     Node* head = new Node(10);
//     Node* first = new Node(20);
//     Node* second = new Node(30);
//     Node* third = new Node(40);
//     Node* fourth = new Node(50);
//     Node* fifth = new Node(60);
//     Node* sixth = new Node(70);
//     Node* seventh = new Node(80);
//     Node* eigth = new Node(90);

//     // Connecting the nodes
//     head->next = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = seventh;
//     seventh->next = eigth;  // ✅ This was missing

//     cout << "Printing the linked list: ";
//     print(head);

//     cout << "Printing the reversed linked list: ";
//     Node* ans = reverse(head);
//     print(ans);

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// Node* reverse(Node* &head){
//     Node* prev = NULL;
//     Node* curr = head;

//     while(curr != NULL){
//         Node* forw = curr->next;  // ✅ This should be updated every iteration
//         curr->next = prev;
//         prev = curr;
//         curr = forw;
//     }
//     return prev;
// }

// void print(Node* &head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main(){
//     Node* head = new Node(10);
//     Node* first = new Node(20);
//     Node* second = new Node(30);
//     Node* third = new Node(40);
//     Node* fourth = new Node(50);
//     Node* fifth = new Node(60);
//     Node* sixth = new Node(70);
//     Node* seventh = new Node(80);
//     Node* eigth = new Node(90);

//     head->next = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = seventh;
//     seventh->next = eigth;

//     cout << "Original linked list: ";
//     print(head);

//     Node* reversedHead = reverse(head);
//     cout << "Reversed linked list: ";
//     print(reversedHead);

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// // Function to reverse a linked list iteratively
// Node* reverse(Node* &head){
//     Node* prev = NULL;
//     Node* curr = head;

//     while(curr != NULL){
//         Node* forw = curr->next;  // ✅ Must update in every iteration
//         curr->next = prev;
//         prev = curr;
//         curr = forw;
//     }
//     return prev;
// }

// // Function to print a linked list
// void print(Node* &head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main(){
//     // Creating nodes
//     Node* head = new Node(10);
//     Node* first = new Node(20);
//     Node* second = new Node(30);
//     Node* third = new Node(40);
//     Node* fourth = new Node(50);
//     Node* fifth = new Node(60);
//     Node* sixth = new Node(70);
//     Node* seventh = new Node(80);
//     Node* eigth = new Node(90);

//     // Linking the nodes
//     head->next = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = seventh;
//     seventh->next = eigth;

//     // Original List
//     cout << "Original linked list: ";
//     print(head);

//     // Reversing the linked list
//     Node* reversedHead = reverse(head);

//     // Reversed List
//     cout << "Reversed linked list: ";
//     print(reversedHead);

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// Node* getMiddle(Node* &head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//     Node* slow=head;
//     Node* fast=head;

//     while(slow!=NULL && fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//         }
//     }
//     return slow;
// }
// Node* reverse(Node* &head){
//     Node* prev=NULL;
//     Node* curr=head;

//     while(curr!=NULL){
//         Node* forw=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forw;
//     }
//     return prev;
// }
// bool isPalindrome(Node* &head){
    
//     Node* middle=getMiddle(head);
//     Node* reverseLLHead=reverse(middle->next);
//     middle->next=reverseLLHead;
//     Node* temp1=head;
//     Node* temp2=reverseLLHead;
//     while(temp1!=NULL){
//         if(temp1->data!=temp2->data){
//             return false;
//         }
//             temp1=temp1->next;
//             temp2=temp2->next;
        
//     }

//     return true;
// }
// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){

//      Node* head = new Node(1);
//     Node* first = new Node(2);
//     Node* second = new Node(3);
//     Node* third = new Node(2);
//     Node* fourth = new Node(1);
//     head->next = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     if(checkPalindrome(head)){
//         cout<<"Palindrome";
//     }
//     else{
//         cout<<"Not Palindrome";
//     }
//     return 0;


// }

// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     cout<<"Printing the elements in the stack: ";
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
// }

// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int> s;
//     s.push(10);
//     cout<<s.top()<<"  ";
//     s.push(20);
//     cout<<s.top()<<" ";
//     s.pop();
//     cout<<s.top();
// }

// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     cout<<s.size();
//     cout<<endl;
//     cout<<s.top();
//     cout<<endl;
//     s.pop();
//     cout<<s.size();
//     cout<<endl;
//     cout<<s.top();
// }

// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
// }

// #include<iostream>
// #include<string>
// #include<stack>
// using namespace std;
// void reverse(string str){
//     stack<char> s;
//     for(int i=0;i<str.length();i++){
//         s.push(str[i]);
//     }
//     while(!s.empty()){
//         cout<<s.top();
//         s.pop();
//     }
// }
// int main(){
//     string s="Deepu";
//     reverse(s);

// }

// #include<iostream>
// #include<string>
// #include<stack>
// using namespace std;
// void reverse(const string &str){
//     stack<char> s;
//     for(int i=0;i<str.length();i++){
//         s.push(str[i]);
//     }

//     while(!s.empty()){
//         cout<<s.top();
//         s.pop();
//     }
// }
// int main(){
//     string s;
//      cout<<"Enter your input: ";
//     getline(cin, s);
   
//     cout<<"Reveresed output: ";
//     reverse(s);

//     return 0;

// }


// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     int S=s.size();

//     int mid=s.size()/2+1;

//     while(mid==S){

//     }
// }

// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     int mid=s.size()/2+1;

//     while(!s.top()==mid){
//     if(s.top()==mid){
//         cout<<s.top();
//     }
//     else{
//         s.pop();
//     }
// }
// }

// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
    
//     int mid=s.size()/2;

//     for(int i=0;i<mid;i++){
//         s.pop();
//     }
//     cout<<"Printing the middle element of stack: "<<s.top();
// }

// #include<iostream>
// #include<string>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
// }

// #include<iostream>
// #include<stack>
// using namespace std;
// void solve(stack<int> &s, int x){
//     //bas ecase 
//     if(s.empty()){
//         return s.push(x);
//     }
//     int num=s.top();
//     s.pop();

//     // recursive call
//     solve(s,x);
//     // backtacking
//     s.push(num);
// }
// int main(){
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);

//     int x=100;
// }

// #include<iostream>
// #include<stack>
// using namespace std;
// void insetAtbottom(stack<int> &s,int x){
//     // base case
//     if(s.empty()){
//         s.push(x);
//     }
//     int temp=s.top();
//     s.pop();

//     insertAtbottom(s,x);
//     // backtrcaking
//     s.push(temp);
// }
// void reverseStack(stack<int> &s){
//     // base case
//     if(s.empty()){
//         return;
//     }
//     int num=s.top();
//     s.pop();

//     // recursion to revrse
//     reverseStack(stack);
//     insertAtbottom(stack);
// }
// int main(){
//     stack<int> s;

// }

// #include<iostream>
// #include<stack>
// using namespace std;
// void sortedInsert(stack<int> &s,int num){
//     // base case
//     if(s.empty() || (!s.empty && s.top() < num)){
//         s.push(num);
//     }

//     int n=s.top();
//     s.pop();

//     sortedInsert(s,num);

//     // bt
//     s.push(n);


// }
// void sortstack(stack<int> &s){
//     // bc 
//     if(s.empty()){
//         return;
//     }
//     int num=s.top();
//     s.pop();

//     sortstack(s);

//     sortedInsert(s,num);

// }

// Queue 
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     // creation of queue
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60);

//     // checking the size of queue
//     cout<<"The size of queue is: "<<q.size()<<endl;

//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }

// }

//  Deque
// #include<iostream>
// #include<deque>
// using namespace std;
// int main(){
//     deque<int> d;
//     d.push_front(10);
//     d.push_front(20);
//     d.push_front(30);
//     d.push_back(60);
//     d.push_back(50);
//     d.push_back(40);

//     cout<<"The size of deque is: "<<d.size()<<endl;
//     cout<<"The front element is:  "<<d.front()<<endl;
//     cout<<"The rear element is: "<<d.back()<<endl;
   
    
//     cout<<"The elements of deque is: ";
//     while(!d.empty()){
//         cout<<d.front()<<" ";
//         d.pop_front();

//     }
// }

// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;
// void reversequeue(queue<int> &q){
//     stack<int> st;
//     while(!q.empty()){
//         int element=q.front();
//         st.push(element);
//     }

//     while(!st.empty()){
//         int ele=st.top();
//         q.push_front(ele);
//         st.pop();
//     }
// }
// int main(){
//     queue<int> q;
//     q.push_front(10);
//     q.push_front(20);
//     q.push_front(30);
//     q.push_front(40);
//     q.push_front(50);
//     q.push_front(60);
//     q.push_front(70);
//     cout<<"The reversed queue is: ";

//     while(!q.empty()){
//         cout<<q.front()<<" ";
//     }
// }

// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;

// void reversequeue(queue<int> &q) {
//     stack<int> st;
//     while (!q.empty()) {
//         int element = q.front();
//         st.push(element);
//         q.pop();  // Fix: pop the front element after pushing to stack
//     }

//     while (!st.empty()) {
//         int ele = st.top();
//         q.push(ele);  // Fix: queue uses push() not push_front()
//         st.pop();
//     }
// }

// int main() {
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60);
//     q.push(70);

//     reversequeue(q);  // Call the function to reverse the queue

//     cout << "The reversed queue is: ";
//     while (!q.empty()) {
//         cout << q.front() << " ";
//         q.pop();  // Fix: pop after printing
//     }

//     return 0;
// }


// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;
// void reverse(queue<int> &q){
//     stack<int> st;

//     while(!q.empty()){
//         int element=q.front();
//         st.push(element);
//         q.pop();
//     }
//     while(!st.empty()){
//         int a=st.top();
//         q.push(a);
//         st.pop();
//     }
// }
// int main(){
    
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60);
//     q.push(70);

//     reverse(q);
//     cout<<"Reversing the elements of q: ";
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }

// }

// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;
// void reverse(queue<int> &q){
//     // bc
//     if(q.empty()){
//         return;
//     }

//     int element=q.front();
//     q.pop();
//     reverse(q);
//     q.push(element);
// }
// int main(){
    
//     queue<int>q;
//     q.push(3);
//     q.push(6);
//     q.push(9);
//     q.push(2);
//     q.push(8);

//     reverse(q);
//     // Printing queue
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
//     return 0;  

// }

