#include <iostream>
#include<stack>
using namespace std;


class stack{
  public:
  int *arr;
  int top;
  int size;
  
  stack(int size){
  this->size=size;
  arr=new int[size];
  top=-1;
}
void push(int element){
    if(size-top>1){
        top++;
        arr[top]=element;

    }else{
        cout<<"Stack is overflow"<<endl;
    }
}

void pop(){
    if(top>=0){
        top--;

    }else{
        cout<<"stack is underflow"<<endl;
    }
}
int peek(){
    if(top>=0)
    return arr[top];
    else{
        cout<<"Stack is empty"<<endl;
        return -1;
    }
}
bool isEmpty(){
    if(top==-1){
        return true;
    }else{
        return false;
    }
}
  
};


int main() 
{
    
    
    return 0;
}