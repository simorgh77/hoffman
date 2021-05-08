#include<iostream>
using namespace std;
class Node{
char character;
int frequency;
bool state;
Node* right;
Node* left;
Node* parent;


 Node(){

    data=0
    frequency=0
    state=0
    right=0
    left=0
    parent=0
 }
}
Node *tail-left=0;
Node *tail-right=0;

void linkNode(letter , frequency){
if(tail-left==0 && tail-right==0){
    tail-left=new Node();
    tail-right=new Node();
    tail-left->character=letter[0];
    tail-right->character=letter[1];
    tail-left->parent=new Node();
    tail-right->parent=tail-left->parent;
}

}

int main(){
    char letter[]={'n','h','s','d','.','i','v','g','l','o','e','a','r','$','t','m','p'}
    
    int frequency[]={8,4,2,1,1,5,2,3,5,5,12,6,7,14,7,4,4}

    return 0;
}