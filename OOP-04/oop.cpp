//#include<iostream>
//using namespace std;
//class Node  // operates by the class linkedlist
//{
//public:
//    int data;
//    Node* next;
//    Node* prev;
//    Node(int d) : data(d), next(nullptr) {}
//};
//
//class LinkedList    // operates this class in main() 
//{
//public:
//    Node* head;
//    Node* tail;
//    LinkedList() : head(nullptr) , tail(nullptr) {}
//    void append(int data) {
//        Node* newNode = new Node(data);
//        if (!head) {
//            head = newNode;
//        }
//        else 
//        {
//            Node* temp = head;
//            while (temp->next) 
//            {
//                temp = temp->next;
//            }
//            temp->next = newNode;
//        }
//    }
//    void display()
//    {
//        Node* temp = head;
//        while (temp)
//        {
//            cout << temp->data << " -> ";
//            temp = temp->next;
//        }
//        cout << " NULL\n ";
//    }
//    ~LinkedList()
//    {
//        while (head)
//        {
//            Node* temp = head;
//            head = head->next;
//            delete temp;
//        }
//        cout << "NULL: ";
//    }
//};
//
//int main()
//{
//    LinkedList list;
//    list.append(10);
//    list.append(20);
//    list.append(30);
//    list.display();
//    system("pause>0");
//}
//#include<iostream>
//using namespace std;
//class DNode {
//public:
//    int data;
//    DNode* prev;
//    DNode* next;
//    DNode(int d) : data(d), prev(nullptr), next(nullptr) {}
//};
//
//class DoublyLinkedList {
//public:
//    DNode* head;
//    DNode* tail;
//    DoublyLinkedList() : head(nullptr), tail(nullptr) {}
//
//    void append(int data) {
//        DNode* newNode = new DNode(data);
//        if (!head) {
//            head = tail = newNode;
//        }
//        else {
//            tail->next = newNode;
//            newNode->prev = tail;
//            tail = newNode;
//        }
//    }
//    void display()
//            {
//                DNode* temp = head;
//                while (temp)
//                {
//                    cout << temp->data << " -> ";
//                    temp = temp->next;
//                }
//                cout << " NULL\n ";
//            }
//    void reverse()
//    {
//        DNode* temp = tail;
//        while (temp)
//        {
//            cout << temp->data << " -> ";
//            temp = temp->prev;
//        }
//        cout << " NULL\n ";
//    }
//   // void search()
//            ~DoublyLinkedList()
//            {
//                while (head)
//                {
//                    DNode* temp = head;
//                    head = head->next;
//                    delete temp;
//                }
//                cout << "NULL: ";
//            }
//};
//int main()
//{
//    DoublyLinkedList list;
//    list.append(10);
//    list.append(20);
//    list.append(30);
//    list.display();
//    list.reverse();
//    system("pause>0");
//}
//
//
//
