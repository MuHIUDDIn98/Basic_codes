#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;

    Node(int value){
        this->value=value;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val){
   Node *newNode = new Node(val);
   if(head == NULL){
      head = newNode;
      tail = newNode;
      return ;
   }
   tail->next = newNode;
   tail = newNode;
}


int size(Node *head){
    int size=0;
    while(head !=NULL){
     head = head->next;
     size++;
    }

    return size;
}

void print_link_list(Node *head){

    while(head!=NULL){
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val1,val2,size1,size2;
    cout<<"Enter your first link list :"<<endl;
    while(true){
    cin>>val1;
    if(val1 == -1) break;
     insert_at_tail(head1,tail1,val1);
    }
    size1 = size(head1);
    cout<<"your first link list size is :"<<size1<<endl<<endl;
    cout<<"Enter your 2nd link list :"<<endl;
    while(true){
    cin>>val2;
    if(val2 == -1) break;
     insert_at_tail(head2,tail2,val2);
    }
      
    bool similer_content = true;
    if(size1 == size2){   
        Node * tmp = head1;
        Node *tp = head2;
        while(tmp !=NULL){
            cout<<tmp->value<< " "<<tp->value<<endl;
            if(tmp->value != tp->value){
                similer_content = false;
                break;
            }
            tmp = tmp->next;
            tp = tp->next;
        }

        if(similer_content){

            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    else if (size1!=size2){
       cout<<"NO"<<endl;
    }
    

    
    return 0;
}