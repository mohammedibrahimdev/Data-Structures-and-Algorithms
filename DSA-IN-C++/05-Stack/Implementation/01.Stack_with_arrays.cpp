#include<iostream>
using namespace std;

// Function declaration
void Push(), Pop(), Display(), Peek();
int stack[10], top = -1;  // global 
int main ()
{
    int ch;
    cout << "Simple Stack Operations : " << endl;
    while (1)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Peek\n";
        cout << "5. exit\n";
        cout<< "Enter your choice : ";
        cin >> ch;
        switch (ch)
        {
           case 1: Push(); break;
           case 2: Pop(); break;
           case 3: Display(); break;
           case 4: Peek(); break;
           case 5: exit(0);
           default: cout<< "Invalid Input";
        }
    }
    return 0;
    
}

// push function
void Push()
{
    if(top == 9)
    {
        cout<< "Stack is Full " << endl;
        return;
    }
    int data;
    cout<< "Enter Data : ";
    cin >> data;
    stack[++top] = data;
    cout<< "THe data is push succesfully : " << data << endl; 
    return;
    
}

void Pop()
{
    if(top == -1)
    {
        cout << "Stack is empty"<< endl;
        return;
    }

    cout<< "The remove elememt is : " << stack[top--];
    return;
}
void Display ()
{
    if(top == - 1)
    {
        cout << "The Stack is empty";
        return;
    }
    cout << "The data is present in stack : "<< endl;
    for(int i = top ;i>= 0;--i)
    {
        cout<<stack[i]<<endl;
        if(i == 0)
        break;
    }
    return;
}

void Peek()
{
    if(top == -1)
    {
        cout << "The Stack is empty" << endl;
        return;
    }

    cout<< "The top element is : " << stack[top] << endl;
    return;
}