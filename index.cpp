#include <iostream>
using namespace std;
class Node{
char character;
int frequency;
bool state;
Node* right;
Node* left;
Node* parent;
Node(){
    data=0;
    frequency=0;
    state=0;
    right=0;
    left=0;
    parent=0;
 }
};
void bubbleSort(int frequency[], char letter[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)    
        for (j = 0; j < n-i-1; j++)
            if (frequency[j] > frequency[j+1]){
                int tempNum = frequency[j];
                frequency[j] = frequency[j+1];
                frequency[j+1] = tempNum;
                int tempChar = letter[j];
                letter[j] = letter[j+1];
                letter[j+1] = tempChar;
            }
}


Node *left=0;
Node *right=0;
Node *current=0;

void linkNode(letter , frequency){
if(left==0 && right==0){
    left=new Node();
    right=new Node();
    left->character=letter[0];
    right->character=letter[1];
    left->frequency=frequency[0];
    right->frequency=frequency[1];
    left->parent=new Node();
    right->parent=left->parent;
    parent->frequency=left-frequency+right->frequency;
    current=parent;
}

else{

 for(int i=2;i<letter.length;i++){

if(current.frequency)
 }   
}

}

int main(){
    char letter[]={'n','h','s','d','.','i','v','g','l','o','e','a','r','$','t','m','p'};
    int frequency[]={8,4,2,1,1,5,2,3,5,5,12,6,7,14,7,4,4};
    int arrayLength = sizeof(letter)/sizeof(letter[0]);
    bubbleSort(frequency, letter, arrayLength);
    for(int i = 0; i < arrayLength;i++)
        cout << frequency[i] << letter[i] << endl;
return 0;
}