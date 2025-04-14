// // #include<iostream>
// // using namespace std;
// // class Node{
// //     public:
// //     int data;
// //     Node* next;

// //     Node(int data){
// //         this->data=data;
// //         this->next=NULL;
// //     }
// // };
// // void print(Node* &head){
// //     Node* temp=head;
// //     cout<<"Printing the linked list: ";
// //     while(temp!=NULL){
// //         cout<<temp->data<<" ";
// //         temp=temp->next;
// //     }
// // }
// // int main(){
// //     Node* first=new Node(1);
// //     Node* second=new Node(2);
// //     Node* third=new Node(3);
// //     Node* fourth=new Node(4);

// //     first->next=second;
// //     second->next=third;
// //     third->next=fourth;
// //     fourth->next=NULL;

// //     print(first);

// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // class Node{
// //     public:
// //     int data;
// //     Node* next;

// //     Node(int data){
// //         this->data=data;
// //         this->next=NULL;
// //     }
// // };
// // void InsertionAtHead(Node* &head,int data){
// //     Node* newnode=new Node(data);
// //     newnode->next=head;
// //     head=newnode;
// // }
// // void print(Node* &head){
// //     Node* temp=head;
// //     cout<<"Printing the linked list:";
// //     while(temp!=NULL){
// //         cout<<temp->data<<" ";
// //         temp=temp->next;
// //     }
// // }
// // int main(){
// //     Node* head=new Node(10);
// //     InsertionAtHead(head,20);
// //     InsertionAtHead(head,30);
// //     InsertionAtHead(head,40);

// //     print(head);

// // }

// // #include<iostream>
// // using namespace std;
// // class Node{
// //     public:
// //     int data;
// //     Node* next;

// //     Node(int data){
// //         this->data=data;
// //         this->next=NULL;
// // }
// // };
// // void InsertionAtHead(Node* &head,int data){
// //     Node *newNode=new Node(data);
// //     newNode->next=head;
// //     head=newNode;
// // }
// // void print(Node* &head){
// //     Node* temp=head;
// //     cout<<"Printing the Linked List:";
// //     while(temp!=NULL){
// //         cout<<temp->data<<" ";
// //         temp=temp->next;
// //     }
// // }
// // int main(){
// //     Node* head=new Node(10);
// //     InsertionAtHead(head,20);
// //     InsertionAtHead(head,30);
// //     InsertionAtHead(head,40);

// //     print(head);
// // }

// //Insertion at tail
// // #include<iostream>
// // using namespace std;
// // class Node{
// //     public:
// //     int data;
// //     Node* next;

// //     Node(int data){
// //         this->next=NULL;
// //         this->data=data;
// //     }
// // };
// // void InsertAtTail(Node* &head,Node* &tail,int data){
// //     Node* newNode=new Node(data);
// //     if(head==NULL){
// //         head=newNode;
// //         tail=newNode;
// //     }
// //     tail->next=newNode;
// //    tail=newNode;
// // }
// // void print(Node* &head){
// //     Node* temp=head;
// //     cout<<"Printing the Linked list: ";
// //     while(temp!=NULL){
// //         cout<<temp->data<<" ";
// //         temp=temp->next;
// //     }
// // }
// // int main(){
    
// //     Node* head=new Node(10);
// //     Node* tail=head;
// //     InsertAtTail(head,tail,20);
// //     InsertAtTail(head,tail,30);
// //     InsertAtTail(head,tail,40);

// //     print(head);
// // } 

// // Insertion at a position
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
// void insertAtHead(Node* &head,Node* &tail,int data){
//     Node* newnode=new Node(data);
//     if(head==NULL){
//         head=newnode;
//         tail=newnode;
//         return;
//     }
//     else{
//            head->next=newnode;
//             newnode=head;
//     }
// };
// int findlength(Node* &head){
//     Node*  temp=head;
//     int len=1;
//     while(temp!=NULL){
//         temp=temp->next;
//         len++;
//     }
//     return len;
// }
// void insertAtTail(Node* &head,Node* &tail,int data){
//     Node* newnode=new  Node(data);
//     if(head==NULL){
//         head=newnode;
//         tail=newnode;
//     }
//     else{
//         tail->next=newnode;
//         newnode=tail;
//     }
// }
// void insertAtPosition(Node* &head,Node* &tail, int data,int position){
//     Node* newnode=new Node(data);
//     if(head==NULL){
//         head=newnode;
//         tail=newnode;
//         return;
//     }
//     if(position==0){
//         insertAtHead(head,data);
//     }
//     int len=findlength(head);
//     if(position==len){
//         insertAtTail(head,tail,data);
//     }

//     // insertion at position->find the postion of previous and current
//     int i=0;
//     Node* prev=head;
//     while(i<position){
//         prev=prev->next;
//         i++;
//     }
//     Node* curr=prev->next;

//     newnode->next=curr;
//     prev->next=newnode;
// }
// void print(Node* &head){
//     Node* temp=head;
//     cout<<"Printing the linked list: ";
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// int main(){
//   Node* head = new Node(10);
//     Node* tail = head;
//     insertAtHead(head,tail,20);
//     insertAtHead(head,tail,30);
//     insertAtHead(head,tail,40);
//     insertAtHead(head,tail,50);
//     insertAtPosition(101,5,head,tail);
//     print(head);
//     return 0;

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
// void insertAtHead(Node* &head,Node* &tail,int data){
//     Node* newnode=new Node(data);
//     if(head==NULL){
//         head=newnode;
//         tail=newnode;
//     }
//     else{
//        newnode->next=head;
//         head=newnode;
//     }
// }
// void insertAtTail(Node* &head,Node* &tail,int data){
//     Node* newnode=new Node(data);
//     if(head==NULL){
//         head=newnode;
//         tail=newnode;
//     }
//     else{
//        newnode->next=tail;
//         tail=newnode;
//     }
// }
// int findlength(Node* &head){
//     int len=0;
//     Node* temp=head;
//     while(temp!=NULL){
//         temp=temp->next;
//         len++;
//     }
//     return len;
// }
// void insertAtPosition(Node* &head,Node* &tail,int data,int position){
//     Node* newnode=new Node(data);

//     if(position==0){
//        insertAtHead(head,tail,data);
//     }
//     int len=findlength(head);
//     if(position>=len){
//         insertAtTail(head,tail,position);
//     }
    
//     Node* prev=head;
//     int i=1;
//     while(i<position){
//         prev=prev->next;
//         i++;
//     }

//     Node* curr=prev->next;

//     newnode->next=curr;
//     prev->next=newnode;
// }
// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// int main(){
    
//     Node* head = new Node(10);
//     Node* tail = head;

//     insertAtHead(head,tail,20);
//     insertAtHead(head,tail,30);
//     insertAtHead(head,tail,40);
//     insertAtHead(head,tail,50);

//     insertAtPosition(head,tail,101,5);

//     print(head);

//     return 0;
// }

// Revision of linked list 
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
//     cout<<"Printing the linked list: ";
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }

// int main(){
//     Node* first=new Node(10);
//     Node* second=new Node(20);
//     Node* third=new Node(30);
//     Node* fourth=new Node(40);
//     Node* fifth=new Node(50);
//     Node* sixth=new Node(60);

//     first->next=second;
//     second->next=third;
//     third->next=fourth;
//     fourth->next=fifth;
//     fifth->next=sixth;
//     print(first);
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//         this->prev=NULL;
//     }
// };
// void print(Node* & head){
//     Node* temp=head;
//     cout<<"Printing the doubly linked list: ";
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// int main(){

//     Node* first=new Node(10);
//     Node* second=new Node(20);
//     Node* third=new Node(30);
//     Node* fourth=new Node(40);
//     Node* fifth=new Node(50);
//     Node* sixth=new Node(60);

//     first->next=second;
//     first->prev=NULL;
//     second->prev=first;
//     second->next=third;
//     third->prev=second;
//     third->next=fourth;
//     fourth->prev=third;
//     fourth->next=fifth;
//     fifth->next=sixth;
//     fifth->prev=fourth;
//     sixth->prev=sixth;

//     print(first);


// }


// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//         this->prev=NULL;
//     }
// };
// void print(Node* & head){
//     Node* temp=head;
//     cout<<"Printing the doubly linked list: ";
//     int count=0;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int lenght(Node* &head){
//     int count=0;
//     Node* temp=head;
//     while(temp!=NULL){
//         count++;
//         temp=temp->next;
//     }
//     cout<<"Lenght of doubly linked list:"<<count<<endl;
// }
// int main(){

//     Node* first=new Node(10);
//     Node* second=new Node(20);
//     Node* third=new Node(30);
//     Node* fourth=new Node(40);
//     Node* fifth=new Node(50);
//     Node* sixth=new Node(60);

//     first->next=second;
//     first->prev=NULL;
//     second->prev=first;
//     second->next=third;
//     third->prev=second;
//     third->next=fourth;
//     fourth->prev=third;
//     fourth->next=fifth;
//     fifth->next=sixth;
//     fifth->prev=fourth;
//     sixth->prev=sixth;
//     print(first);
//     lenght(first);
// }

// Insertion at doubly Linked List
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//         this->prev=NULL;
//     }
//     // ~Node(){
//     //     int  value=this->data;
//     //     if(this->next!=NULL){
//     //         delete next;
//     //         this->next=NULL;
//     //     }
//     //     cout<<"Memory free of node with value= "<<val<endl;
//     // }
// };
// void print(Node* &head){
//     Node* temp=head;
//     cout<<"Printing the linked list: ";
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// void insertAtHead(Node* &head,int data){
//     // case1: for  empty
//     if(head==NULL){
//         Node* newNode=new Node(data);
//         head=newNode;
//         // tail=newNode;
//         return;
//     }
//     // Case 2
//     Node* newNode=new Node(data);
//     newNode->next=head;
//     head->prev=newNode;
//     head=newNode;
// }
// int main(){
//     Node* head=new Node(10);
//     // Node* tail=head;
//     insertAtHead(head,20);
//     print(f);

// }

// Insert at tail in the doubly linekd list
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->prev=NULL;
//         this->next=NULL;
//     }
// };
// void insertAtTail(Node* &tail,int data){
//     Node* newNode=new Node(data);
//     tail->next=newNode;
//     newNode->prev=tail;
//     tail=newNode;

// }
// void print(Node* &tail){
//     Node* temp=tail;
//     // cout<<"Printing the linked list: ";
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
//     Node* tail=new Node(60);

//     first->next=second;
//     first->prev=NULL;
//     second->prev=first;
//     second->next=third;
//     third->prev=second;
//     third->next=fourth;
//     fourth->prev=third;
//     fourth->next=fifth;
//     fifth->next=tail;
//     fifth->prev=fourth;

//     cout<<"Original Linked List: ";
//     print(first);
//     cout<<"After adding at the tail: ";
//     insertAtTail(tail,70);
//     print(first);
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//         this->prev=NULL;
//     }
// };
// void insertAtHead(Node* &head,Node* &tail,int data){
//     // For empty linked list
//      Node* newNode=new Node(data);
//     if(head==NULL){
//         head=newNode;
//         tail=newNode;
//         return;
//     }
//     newNode->next=head;
//     head->prev=newNode;
//     head=newNode;
// }
// void insertAtTail(Node* &head,Node* &tail,int data){
//     // For empty linked list
//      Node* newNode=new Node(data);
//     if(head==NULL){
//         head=newNode;
//         tail=newNode;
//         return;
//     }
//     tail -> next = newNode;
//     newNode-> prev = tail;
//     tail=newNode;

// }
// int findlength(Node* &head){
//     int count=1;
//     Node* temp=head;
//     while(temp!=NULL){
//         count++;
//         temp= temp->next;
//     }
//     return count;
// }
// void insertAtPosition(Node* &tail,Node* &head,int position,int data){
//     Node* newNode=new Node(data);

//     // get the positon
//     if(position==1){
//         insertAtHead(head,tail,data);
//     }
//     int len=findlength(head);
//     if(position>len){
//         insertAtTail(head,tail,data);
//     }

//     int i=1;

//     Node* prevNode=head;
//     if(i<position-1){
//         prevNode=prevNode->next;
//         i++;
//     }

//     Node* curr=prevNode->next;
//     prevNode->next=newNode;
//     newNode->prev=prevNode;
//     curr->prev=newNode;
//     newNode->next=curr;
// }
// void print(Node* &head){
//     Node* temp=head;
//     cout<<"Printing the linked list: ";
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     Node* head = new Node(10);
//     Node* tail = head;
//     print(head);
//     insertAtHead(head,tail,20); 
//     print(head);
//     insertAtTail(head,tail,20);
//     print(head);
//     insertAtTail(head,tail,30);
//     print(head);
//     insertAtTail(head,tail,40);
//     print(head);
//     insertAtTail(head,tail,50);
//     print(head);
//     cout<<"Insertig the 1000 at the position at 4: ";
//     insertAtPosition(tail,head,4,1000);
//     cout<<endl;
//     print(head);
//     cout<<endl;
//     cout<<"Length = "<< findlength(head);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//         int data;
//         Node* prev; // previous pointer
//         Node* next; // next pointer
//         // Default Constructor
//         Node(){
//             this->data = 0;
//             this->prev = NULL;
//             this->next = NULL;
//         }
//         // Parameterized Constructor
//         Node(int data){
//             this->data = data;
//             this->prev = NULL;
//             this->next = NULL;
//         }
// };
// void print(Node* &head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }
// int getLength(Node* &head){
//     Node* temp = head;
//     int len = 1;
//     while(temp->next != NULL){
//         len++;
//         temp = temp->next;
//     }
//     return len;
// }
// void insertAtHead(Node* &head,Node* &tail,int data){
//     // Empty linked list
//     if(head == NULL){
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     // Normal steps to be followed
//     Node* newNode = new Node(data);
//     newNode -> next = head;
//     head -> prev = newNode;
//     head = newNode;

// }
// void insertAtTail(Node* &head,Node* &tail,int data){
//     // Empty linked list
//     if(head == NULL){
//         Node* newNode = new Node(data);
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     Node* newNode = new Node(data);
//     tail->next = newNode;
//     newNode -> prev = tail;
//     tail = newNode;
// }
// void insertAtPosition(int pos,Node* &head,Node* &tail,int data){
//     if(pos == 1){
//         insertAtHead(head,tail,data);
//         return;
//     }
//     int len = getLength(head);
//     if(pos > len){
//         insertAtTail(head,tail,data);
//         return;
//     }
//     int i = 1;    
//     Node* prevNode = head;
//     while(i < pos - 1){
//         prevNode = prevNode->next;
//         i++;
//     }
//     Node* curr = prevNode->next;
//     Node* newNode = new Node(data);
//     prevNode -> next = newNode;
//     newNode->prev = prevNode;
//     curr->prev = newNode;
//     newNode->next = curr;

// }
// int main(){
//     Node* head = new Node(10);
//     Node* tail = head;
//     // insertAtHead(head,tail,20); 
//     insertAtTail(head,tail,20);
//     insertAtTail(head,tail,30);
//     insertAtTail(head,tail,40);
//     insertAtTail(head,tail,50);
//     insertAtPosition(5,head,tail,60);
//     print(head);
//     cout<<endl;
//     cout<<"Length = "<< getLength(head);
//     return 0;
// }

// Deletion in the linked list 
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//         this->prev=NULL;
//     }

//     ~Node(){
//       cout<<"Deleted the data with the value"<<this->data<<endl;  
//     }
// };
// void insertAtHead(Node* &head,Node* & tail,int data){
//     Node* newNode=new Node(data);
//     if(head==NULL){
//         head=newNode;
//         tail=newNode;
//         return;
//     }
    
//     newNode->next=head;
//     head->prev=newNode;
//     newNode=head;

// }
// void insertAttail(Node* &head,Node* &tail,int data){
//     Node* newNode=new Node(data);
//     if(tail==NULL){
//         head=newNode;
//         tail=newNode;
//         return;
//     }
    
//     newNode->next=tail;
//     tail->prev=newNode;
//     newNode=tail;

// }
// int getLength(Node* &head){
//     Node* temp=head;
//     int count=1;
//     while(temp!=NULL){
//         count++;
//         temp=temp->next;
//     }
//     return count;
// }
// void insertAtHead(Node* &head,Node* &tail,int position,int data){
//     Node* newNode=new Node(data);
//     if(position==1){
//         insertAtHead(head,tail,data);
//     }

//     int len=getLenght(head);

//     if(position>len){
//         insertAttail(head,tail,data);
//     }

//     int i=1;
//     // Find the previous
//     Node* prevNode=head;
//     while(i<position-1){
//         prevNode=prevNode->next;
//         i++;
//     }
//     Node* currNode=prevNode->next;
//     prevNode->next=newNode;
//     currNode->prev=newNode;
//     newNode->prev=prevNode;
//     newNode->next=currNode;
// }
// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// void deleteOperation(Node* &head,Node* &tail,int position){
    
//     // Deleting at head
//     int len=getLenght(head);
//     if(position==1){
//         Node* temp=head;
//         head=head->next;
//         head->prev=NULL;
//         temp->next=NULL;
//         delete temp;
//         return ;
//     }
//     // Deleting at temp
//     if(position>=tail){
//         Node* temp=tail;
//         tail=tail->prev;
//         tail->next=NULL;
//         temp->prev=NULL;
//         delete temp;
//         return;
//     }
//     // Deleting at the position
//     int i=1;
//     Node* left=head;
//     while(i<position-1){
//         left=left->next;
//         i++;
//     }

//     Node* curr=left->next;
//     Node* right=curr->next;

//     left->next=right;
//     right->prev=left;
//     curr->next=NULL;
//     curr->prev=NULL;
//     delete curr;

// }
// int main(){
//     Node* head=new Node(10);
//     Node* tail=head;
//     insertAtHead(head,tail,20);
//     insertAtHead(head,tail,30);
//     insertAtHead(head,tail,40);
//     insertAttail(head,tail,50);
//     insertAttail(head,tail,60);
//     insertAttail(head,tail,70);
//     insertAtPosition(head,tail,4,555);
//     print(head);
    
// }

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//         this->prev = NULL;
//     }

//     ~Node() {
//         cout << "Deleted the node with value " << this->data << endl;
//     }
// };

// // Insert at head
// void insertAtHead(Node*& head, Node*& tail, int data) {
//     Node* newNode = new Node(data);
//     if (head == NULL) {
//         head = newNode;
//         tail = newNode;
//         return;
//     }
    
//     newNode->next = head;
//     head->prev = newNode;
//     head = newNode;
// }

// // Insert at tail
// void insertAtTail(Node*& head, Node*& tail, int data) {
//     Node* newNode = new Node(data);
//     if (tail == NULL) {
//         head = newNode;
//         tail = newNode;
//         return;
//     }
    
//     tail->next = newNode;
//     newNode->prev = tail;
//     tail = newNode;
// }

// // Get length of linked list
// int getLength(Node* head) {
//     Node* temp = head;
//     int count = 0;
//     while (temp != NULL) {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

// // Insert at a specific position
// void insertAtPosition(Node*& head, Node*& tail, int position, int data) {
//     if (position == 1) {
//         insertAtHead(head, tail, data);
//         return;
//     }

//     int len = getLength(head);
//     if (position > len) {
//         insertAtTail(head, tail, data);
//         return;
//     }

//     Node* newNode = new Node(data);
//     Node* prevNode = head;
//     int i = 1;

//     while (i < position - 1) {
//         prevNode = prevNode->next;
//         i++;
//     }

//     Node* currNode = prevNode->next;
//     prevNode->next = newNode;
//     newNode->prev = prevNode;
//     newNode->next = currNode;
//     if (currNode != NULL) {
//         currNode->prev = newNode;
//     }
// }

// // Print linked list
// void print(Node* head) {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// // Delete a node at a specific position
// void deleteOperation(Node*& head, Node*& tail, int position) {
//     int len = getLength(head);
//     if (position < 1 || position > len) {
//         cout << "Invalid position!" << endl;
//         return;
//     }

//     // Deleting head node
//     if (position == 1) {
//         Node* temp = head;
//         head = head->next;
//         if (head != NULL) {
//             head->prev = NULL;
//         } else {
//             tail = NULL; // If list becomes empty
//         }
//         temp->next = NULL;
//         delete temp;
//         return;
//     }

//     // Deleting tail node
//     if (position == len) {
//         Node* temp = tail;
//         tail = tail->prev;
//         if (tail != NULL) {
//             tail->next = NULL;
//         } else {
//             head = NULL; // If list becomes empty
//         }
//         temp->prev = NULL;
//         delete temp;
//         return;
//     }

//     // Deleting a node at a specific position
//     Node* left = head;
//     int i = 1;
//     while (i < position - 1) {
//         left = left->next;
//         i++;
//     }

//     Node* curr = left->next;
//     Node* right = curr->next;

//     left->next = right;
//     if (right != NULL) {
//         right->prev = left;
//     }
//     curr->next = NULL;
//     curr->prev = NULL;
//     delete curr;
// }

// // Main function
// int main() {
//     Node* head = NULL;
//     Node* tail = NULL;

//     insertAtHead(head, tail, 10);
//     insertAtHead(head, tail, 20);
//     insertAtHead(head, tail, 30);
//     insertAtHead(head, tail, 40);
//     insertAtTail(head, tail, 50);
//     insertAtTail(head, tail, 60);
//     insertAtTail(head, tail, 70);
    
//     insertAtPosition(head, tail, 4, 555);

//     cout << "Linked List after insertions: ";
//     print(head);

//     // Deleting a node
//     deleteOperation(head, tail, 4);
//     cout << "Linked List after deletion: ";
//     print(head);

//     return 0;
// }

// Reverse the linked list
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//         this->prev=NULL;
//     }
// };
// Node* reverse(Node* &prev,Node* &curr){
//     // Base case
//     if(curr==NULL){
//         return prev;//new head
//     }
//     // 1 case solve
//     Node* forward=curr->next;
//     curr->next=prev;
//     // recursive call
//     return reverse(curr,forward);
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

//     first->next = second;
//     second->prev = first;
//     second->next = third;
//     third->prev = second;
//     third->next = fourth;
//     fourth->prev = third;
//     fourth->next = fifth;
//     fifth->prev = fourth;

//     cout<<"Printing the linked list: ";
//     print(first);
//     Node* prev=NULL;
//     Node* curr=first;
//     Node* next=curr->next;
//     cout<<"Printing the reversed linked list: ";
//     Node* reversed=reverse(prev,curr);
//     print(reversed);

//     return 0;

// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//         this->prev=NULL;
//     }
// };
// Node* reverseiterative(Node* &prev,Node* &curr){
//     while(curr!=NULL){
//         Node* forward=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//     }
//     return prev;
// }
// void print(Node* &head){
//     Node *temp=head;
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

//     first->next = second;
//     second->prev = first;
//     second->next = third;
//     third->prev = second;
//     third->next = fourth;
//     fourth->prev = third;
//     fourth->next = fifth;
//     fifth->prev = fourth;
//     cout<<"Printing the linked list: ";
//     print(first);
//     Node* prev=NULL;
//     Node* curr=first;
//     Node* forward=curr->next;
//     Node* ans=reverseiterative(prev,curr);
//     cout<<"Printing the reversed linked list: ";
//     print(ans); 
// }

// Middle of the linked list

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//         this->prev=NULL;
//     }
// };
// Node* getMiddle(Node* &head){
//     //empty linked list
//     if(head==NULL){
//        cout<<"Linked list is empty.";
//     }
//     // sinlge node in LL
//     if(head->next==NULL){
//         return head;
//     }
//     // creation of pointer
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
    
//     Node* ans=getMiddle(first);
//     cout<<"Getting the linked list: "<<ans->data;
//     return 0;

// }

//  Reverse the LL in k groups 

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->prev=NULL;
//         this->next=NULL;
//     }
// };
// int findlength(Node* &head){
//     Node* temp=head;
//     int len=0;
//     while(temp!=NULL){
//         len++;
//         temp=temp->next;
//     }
//     return len;
// }
// Node* reverse(Node* &head,int k){
//     // Case1: For empty
//     if(head==NULL){
//         cout<<"LL is empty."<<endl;
//         return NULL;
//     }
//     // invalid lenght
//     int len=findlength(head);
//     if(k<len){
//         cout<<"Invalid value of k."<<endl;
//         return head;
//     }
//     // Reversing
//     Node* prev=NULL;
//     Node* curr=head;
//     Node* forward=curr->next;
//     int count=0;

//     while(count<k ){
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//         count++;
//     }
//     // recursion
//     if(forward!=NULL){
//         head->next=reverse(forward,k);
//     }
//     return prev;
// }
// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
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

//     cout<<"Printing the LL:";
//     print(first);
//     Node* ans=reverse(first,2);
//     // cout<<"Printing the LL in the K reversed groups: ";
//     // print(ans);
    
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//         int data;
//         Node* next; 
//         Node(int data){
//             this->data = data;
//             this->next = NULL;
//         }
// };
// int getLength(Node* &head){
//     int len = 0;
//     Node* temp = head;
//     while(temp != NULL){
//         temp = temp->next;
//         len++;
//     }
//     return len;
// }
// Node *reverseKNodes(Node* &head,int k){
//     // Empty Linked List case
//     if(head == NULL){
//         return head;
//     }
//     // Invalid case
//     int len = getLength(head);
//     if(k > len){
//         return head;
//     }
//     // Step - 1 => Reverse first k nodes
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* forward = curr->next;
//     int count = 0;
//     while(count < k){
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//         count++;
//     }
//     // Step - 2 => Recursion 
//     if(forward != NULL){ // We still have nodes left to reverse
//         head->next = reverseKNodes(forward,k); // Connection step
//     }
//     // Return head 
//     return prev;
// }
// void print(Node* &head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }
// int main(){
//     Node* head = new Node(10);
//     Node* first = new Node(20);
//     Node* second = new Node(30);
//     Node* third = new Node(40);
//     Node* fourth = new Node(50);
//     Node* fifth = new Node(60);
//     head->next = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
    
//     print(head);
//     Node* newHead = reverseKNodes(head,3);
//     cout<<endl;
//     print(newHead);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     // Node* prev;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// int findlength(Node* &head){
//     Node* temp=head;
//     int len=0;
//     while(temp!=NULL){
//         len++;
//         temp=temp->next;
//     }
//     return len;
// }
// Node* reverseKNodes(Node* &head,int k){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }

//     int len=findlength(head);
//     if(k > len){
//         return head;
//     }

//     Node* prev=NULL;
//     Node* curr=head;
//     Node* forward=curr->next;
//     int count=0;
//     while(count<k){
//         forward=curr->next;
//         curr->next=prev;
//         // curr->prev = forward;  
//         prev=curr;
//         curr=forward;
//         count++;
//     }

//     if(forward!=NULL){
//         head->next=reverseKNodes(forward,k);
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
        
//     Node* head = new Node(10);
//     Node* first = new Node(20);
//     Node* second = new Node(30);
//     Node* third = new Node(40);
//     Node* fourth = new Node(50);
//     Node* fifth = new Node(60);

//     head->next = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
   

//     print(head);
//     Node* ans=reverseKNodes(head,2);
//     print(ans);
// }

// #include<iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// int findlength(Node* head) {
//     int len = 0;
//     Node* temp = head;
//     while(temp != NULL) {
//         len++;
//         temp = temp->next;
//     }
//     return len;
// }

// Node* reverseKNodes(Node* head, int k) {
//     if(head == NULL || head->next == NULL) {
//         return head;
//     }

//     int len = findlength(head);
//     if(k > len) {
//         return head;
//     }

//     // Reverse the first k nodes
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* forward = NULL;
//     int count = 0;

//     while(count < k && curr != NULL) {
//         forward = curr->next;
//         curr->next = prev;
//         curr->prev = forward;  // Fix for DLL
//         prev = curr;
//         curr = forward;
//         count++;
//     }

//     // Recursive call for the remaining list
//     if(forward != NULL) {
//         head->next = reverseKNodes(forward, k);
//         head->next->prev = head;  // Fix prev linkage
//     }

//     return prev;  // New head of the reversed list
// }

// void print(Node* head) {
//     Node* temp = head;
//     while(temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     Node* head = new Node(10);
//     Node* first = new Node(20);
//     Node* second = new Node(30);
//     Node* third = new Node(40);
//     Node* fourth = new Node(50);
//     Node* fifth = new Node(60);

//     head->next = first;
//     first->prev = head;
//     first->next = second;
//     second->prev = first;
//     second->next = third;
//     third->prev = second;
//     third->next = fourth;
//     fourth->prev = third;
//     fourth->next = fifth;
//     fifth->prev = fourth;

//     cout << "Original Doubly Linked List: ";
//     print(head);

//     head = reverseKNodes(head, 2);

//     cout << "Reversed in groups of 2: ";
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
// bool checkLoop(Node* &head){
//     // Empty LL
//     if(head==NULL){
//         return false;
//     }
//     Node* slow=head;
//     Node* fast=head;
//     while(fast!=NULL && fast->next != NULL){
//         fast=fast->next;
//         if(fast->next!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//         }
//         if(fast==slow){
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     Node* head=new Node(10);
//     Node* first=new Node(20);
//     Node* second=new Node(30);
//     Node* third=new Node(40);
//     Node* fourth=new Node(50);
//     Node* fifth=new Node(60);
//     Node* sixth=new Node(70);
//     Node* seventh=new Node(80);
//     Node* eigth=new Node(90);
//     head->next = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = seventh;
//     seventh->next = eigth;
//     eigth->next = fourth;

//     if(checkLoop(head)){
//         cout<<"Loop is present."<<endl;
//     }
//     else{
//         cout<<"Loop is absent."<<endl;
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
// Node* findstart(Node* &head){
//     if(head==NULL || head->next==NULL){
//         return NULL;
//     }
//     Node* slow=head;
//     Node* fast=head;

//     while(fast!=NULL && fast->next!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//         }
//         if(slow==fast){
//             slow=head;
//             break;
//         }
//         while(slow!=fast){
//             slow=slow->next;
//             fast=fast->next;   
//         }
//         return slow;
//     }
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
//     Node* first=new Node(20);
//     Node* second=new Node(30);
//     Node* third=new Node(40);
//     Node* fourth=new Node(50);
//     Node* fifth=new Node(60);
//     Node* sixth=new Node(70);
//     Node* seventh=new Node(80);
//     Node* eigth=new Node(90);

//     head->next = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = seventh;
//     seventh->next = eigth;
//     eigth->next = fourth;

//     cout<<"Printing the LL: "; 
//     print(head);

//     Node* ans=findstart(head);
//     cout<<"Answer is: "<<ans->data<<endl;


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

// Node* findstart(Node* head) {
//     if (head == NULL || head->next == NULL) {
//         return NULL;  // Fix: Return NULL if no loop exists
//     }

//     Node* slow = head;
//     Node* fast = head;

//     // Step 1: Detect Loop using Floyd's Cycle Detection Algorithm
//     while (fast != NULL && fast->next != NULL) {  // Fix: Correct loop condition
//         slow = slow->next;
//         fast = fast->next->next;

//         if (slow == fast) {  // Loop detected
//             break;
//         }
//     }

//     // If no loop was detected
//     if (fast == NULL || fast->next == NULL) {
//         return NULL;  // No loop found
//     }

//     // Step 2: Find the starting node of the loop
//     slow = head;  // Reset slow pointer to the head
//     while (slow != fast) {  // Fix: Correct loop condition
//         slow = slow->next;
//         fast = fast->next;
//     }

//     return slow;  // Return the start of the loop
// }

// void print(Node* head) {
//     Node* temp = head;
//     int count = 10;  // Prevent infinite loop during testing

//     while (temp != NULL && count--) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     Node* head = new Node(10);
//     Node* first = new Node(20);
//     Node* second = new Node(30);
//     Node* third = new Node(40);
//     Node* fourth = new Node(50);
//     Node* fifth = new Node(60);
//     Node* sixth = new Node(70);
//     Node* seventh = new Node(80);
//     Node* eighth = new Node(90);

//     head->next = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = seventh;
//     seventh->next = eighth;
//     eighth->next = fourth; // Creating a cycle

//     Node* ans = findstart(head);
//     if (ans != NULL) {
//         cout << "Loop starts at: " << ans->data << endl;
//     } else {
//         cout << "No loop detected" << endl;
//     }

//     return 0;
// }


// #include<bits/stdc++.h>
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

// Node* findstart(Node* head) {
//     if (head == NULL || head->next == NULL) {
//         return NULL;  // Fix: Return NULL if no loop exists
//     }

//     Node* slow = head;
//     Node* fast = head;

//     // Step 1: Detect Loop using Floyd's Cycle Detection Algorithm
//     while (fast != NULL && fast->next != NULL) {  // Fix: Correct loop condition
//         slow = slow->next;
//         fast = fast->next->next;

//         if (slow == fast) {  // Loop detected
//             break;
//         }
//     }

//     // If no loop was detected
//     if (fast == NULL || fast->next == NULL) {
//         return NULL;  // No loop found
//     }

//     // Step 2: Find the starting node of the loop
//     slow = head;  // Reset slow pointer to the head
//     while (slow != fast) {  // Fix: Correct loop condition
//         slow = slow->next;
//         fast = fast->next;
//     }

//     return slow;  // Return the start of the loop
// }

// void print(Node* head) {
//     Node* temp = head;
//     int count = 10;  // Prevent infinite loop during testing

//     while (temp != NULL && count--) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     Node* head = new Node(10);
//     Node* first = new Node(20);
//     Node* second = new Node(30);
//     Node* third = new Node(40);
//     Node* fourth = new Node(50);
//     Node* fifth = new Node(60);
//     Node* sixth = new Node(70);
//     Node* seventh = new Node(80);
//     Node* eighth = new Node(90);

//     head->next = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = seventh;
//     seventh->next = eighth;
//     eighth->next = fourth; // Creating a cycle

//     Node* ans = findstart(head);
//     if (ans != NULL) {
//         cout << "Loop starts at: " << ans->data << endl;
//     } else {
//         cout << "No loop detected" << endl;
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
//         this->data=data;
//         this->next=NULL;
//     }
// };
// void  removeLoop(Node* &head){
//     // Empty case
//     if(head==NULL || head->next==NULL){
//         return ;
//     }

//     Node* slow=head;
//     Node* fast=head;

//     while(fast!=NULL && fast->next!=NULL){
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
//     Node *prev=fast;
//     while(slow!=fast){
//         prev=fast;
//         fast=fast->next;
//         slow=slow->next;
//     }
//     prev->next=NULL;
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
//         Node* head = new Node(10);
//     Node* first = new Node(20);
//     Node* second = new Node(30);
//     Node* third = new Node(40);
//     Node* fourth = new Node(50);
//     Node* fifth = new Node(60);
//     Node* sixth = new Node(70);
//     Node* seventh = new Node(80);
//     Node* eighth = new Node(90);

//     head->next = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = seventh;
//     seventh->next = eighth;
//     eighth->next = fourth;
   
//     removeLoop(head);
//      cout<<"Printing the LL after the removing of LL:  ";
//     print(head);
// }


// Palindrome in LL
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
//     // empty
//     if(head==NULL || head->next==NULL){
//         return head;
//     }

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
//     head->next = new Node(2);
//     head->next->next = new Node(2);
//     head->next->next->next = new Node(3);

//     cout << "Original List: ";
//     print(head);

//     // Reversing the linked list
//     Node* ans=reverse(head);

//     cout << "Reversed List: ";
//     print(ans);

//     while(ans!=NULL && head!=NULL){
//         if(ans->data!=head->data){
//           cout<<"LL is not a palindrome."<<endl;
//           break;
//         }else{
//             ans=ans->next;
//             head=head->next;
//     }
//     cout<<"LL is a palindrome."<<endl;
// }
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
//     //   empty
//     if(head==NULL){
//         return NULL;
//     }
//     if(head->next==NULL){
//         return head;
//     }

//     Node* slow=head;
//     Node* fast=head;
//     while(fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//         }
//     }
//     return slow;
// }
// Node* reverse(Node* &head){
    
// }
// bool checkPalindrome(Node* &head){
//     // empty
//     if(head==NULL || head->next==NULL){
//         return true;
//     }

//     Node* mid=getmiddle;

    
// }
// int main(){

// }

