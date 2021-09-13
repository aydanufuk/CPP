#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

class linked_list
{
    private:
        node *head, *tail;
    public:
        linked_list()
        {
            head = NULL;
            tail = NULL;
        }




void createnode(int value){

    node *temp = new node;
    temp->data = value;
    temp->next = NULL;
    
    if(head == NULL){
        head = temp;
        tail = temp;
        temp = NULL;
    }
    else
    {
        tail -> next = temp;
        tail = temp;
    }
}

void display()
{
    node *temp = new node;
    temp = head;
    
    while(temp!=NULL){
        cout << temp->data<<"\t";
        temp = temp->next;
    }
    

}

void insert_to_head(int value)
{
    node *temp = new node;
    if(head == NULL){
        temp->data = value;
        temp->next = NULL;
    }
    
    temp->data = value;
    temp->next = head;
    head = temp;
}

void insert_to_position(int pos,int value)
{
    node *pre = new node;
    node *cur = new node;
    node *temp = new node;
    
    cur = head;
    
    for(int i = 1;i < pos; i++){
        pre = cur;
        cur = cur->next;
    }
    temp->data = value;
    pre->next = temp;
    temp->next=cur;
}

void insert_to_last(int value)
{
    node *temp = new node;
    temp->data = value;
    temp->next = NULL;
    
    if(head == NULL){
        head = temp;
        tail = temp;
        temp = NULL;
    }
    else
    {
        tail -> next = temp;
        tail = temp;
    }
    
}

void delete_first(){
    node *temp=new node;
    temp=head;
    head = head->next;
    delete temp;    
}

void delete_last(){
    node *cur = new node;
    node *prev = new node;
    cur = head;
    
    while(cur->next != NULL)
    {
        prev = cur;
        cur= cur -> next;
    }
    tail = prev;
    prev->next = NULL;
    delete cur;
}

void delete_position(int pos){
    node *curr= new node;
    node *prev = new node;
    curr = head;
    
    for(int i = 1; i < pos; i++){
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
}
};

int main()
{
	linked_list obj;
	obj.createnode(25);
	obj.createnode(50);
	obj.createnode(90);
	obj.createnode(40);
	cout<<"\n--------------------------------------------------\n";
	cout<<"---------------Displaying All nodes---------------";
	cout<<"\n--------------------------------------------------\n";
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	cout<<"-----------------Inserting At End-----------------";
	cout<<"\n--------------------------------------------------\n";
	obj.createnode(55);
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	cout<<"----------------Inserting At Start----------------";
	cout<<"\n--------------------------------------------------\n";
	obj.insert_to_head(50);
	obj.display();
    cout<<"\n--------------------------------------------------\n";
	cout<<"----------------Inserting At Last----------------";
	cout<<"\n--------------------------------------------------\n";
	obj.insert_to_last(101);
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	cout<<"-------------Inserting At Particular--------------";
	cout<<"\n--------------------------------------------------\n";
	obj.insert_to_position(5,60);
    
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	cout<<"----------------Deleting At Start-----------------";
	cout<<"\n--------------------------------------------------\n";
	obj.delete_first();
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	cout<<"-----------------Deleing At End-------------------";
	cout<<"\n--------------------------------------------------\n";
	obj.delete_last();
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	cout<<"--------------Deleting At Particular--------------";
	cout<<"\n--------------------------------------------------\n";
	obj.delete_position(4);
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	system("pause");
	return 0;
}


