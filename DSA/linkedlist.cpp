#include <bits/stdc++.h>

using namespace std;
 
struct Node {
    int data;
    Node* next;
};

Node* head;

void insert(int number){
    Node* temp= new Node;
    temp->data= number;
    temp->next= head;
    head=temp;
    delete temp;
}

void print()
{   
    Node* temp= head;
    while(temp!=NULL)
    {
        cout << temp->data;
        temp=temp->next;
    }
    cout <<"/n";
}
int main()
{
    head=NULL;
    cout << "Input the number of elements in list:";
    int num_elements, element;
    cin >> num_elements;
    for(int i=0; i< num_elements;i++){
        cout <<"Input the element:";
        cin >>element;
        insert(element);
        print();
    } 

}