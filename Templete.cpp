#include<bits/stdc++.h>
using namespace std;
// template<typename t1,typename t2>
// auto s(t1 a,t2 b){
//     return a+b;
// }
// template<typename r>
// class box{
//     r value;
//     public:
//         box(r v){
//             value = v;
//         }
//         r get(){
//             return value;
//         }
// };
// int main(){
//     cout << s(2.5,3) << endl;
//     box<int>s1(10);
//     cout << s1.get() << endl;
// }

// template<typename T>
// class node{
//     T data;
//     node *next;
//     node(T val){
//         data = value;
//         next = nullptr;
//     }
// };

// #include<bits/stdc++.h>
// using namespace std;


// template<typename T>

// class Node{
//     public:
//     T data;
//     Node *next;
//     Node(T val){
//         data = val;
//         next = nullptr;
//     }
// };
// template<typename T>
// class LinkedList{
//     //head 
//     Node<T>*head;
//     public:
//     LinkedList(){
//         head = nullptr;
//     }
//     void insert(T val){
//         Node<T>* newnode = new Node<T>(val);
//         if(head == nullptr){
//             head = newnode;
//         }
//         else{
//             Node<T>*temp = head;
//             while(temp->next){
//                 temp = temp->next;
//             }
//             temp->next = newnode;
//         }
//     }
//     void Display(){
//         Node<T>*temp = head;
//         while(temp){
//             cout << temp->data <<" ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main(){

//     LinkedList<int>list1;
//     LinkedList<char>list2;
//     list1.insert(10);
//     list1.insert(20);
//     list1.insert(30);
//     list1.Display();
    
//     list2.insert('A');
//     list2.insert('B');
//     list2.insert('C');
//     list2.Display();
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    double x;
    cout << "Enter the Bank Balance : " ;
    cin >> x;
    try{
        if(x<1000) throw "You Have Less Amount In Your Account ";
        else{
            cout << "You have Reqired Ammount" << endl;
        }
    }
    catch(const char* y){
        cout << y << endl;
    }
    return 0;
}