// Given a LL sorted by the absolute values, sort the LL by their numerical values
// I/P : 1 -> -2 -> -3 -> -5 -> 9 -> -10
// O/P : -10 -> -5 -> -3 -> -2 -> 1 -> 9
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(){
        data=0;
        next=NULL;
    }
    Node (int x){
        data=x;
        next=NULL;
    }
};
void printLL(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
Node* sortLL(Node *head){
    if(head ==NULL || head->next==NULL)return head;
    Node *prev=NULL, *curr=head, *ahead=NULL, *positive=NULL, *tail=NULL;
    while(curr!=NULL){
        if(curr->data>=0){
            if(prev!=NULL){
                if(tail!=head){
                    tail->next = head;
                }
                else{
                    tail->next = curr;

                }
                head=prev;
                if(curr && positive)
                    positive->next=curr;
                prev=NULL;
                tail=NULL;
            }
            positive=curr;
            curr=curr->next;
        }

        else{
            if(positive)positive->next = NULL;
            tail=curr;
            while(curr!=NULL && curr->data < 0){
                ahead=curr->next;
                curr->next=prev;
                prev=curr;
                curr=ahead;
            }
        }
    }
    if(prev!=NULL){
        if(head!=tail)
            tail->next=head;
        head=prev;
    }
    return head;
}
int main(){
    cout<<"Enter testCases: ";
    int t;cin>>t;
    while(t--){
        Node *head = NULL, *tail = NULL;
        int n,x;
        cout<<"Enter size of LL: ";cin>>n;
        cout<<"Enter n values of LL: ";
        while(n--){
            cin>>x;
            if(!head){
                head = new Node(x);
                tail = head;
            }
            else{
                tail->next = new Node(x);
                tail = tail->next;
            }
        }
        printLL(head);
        head = sortLL(head);
        printLL(head);
    }
    return 0;
}
