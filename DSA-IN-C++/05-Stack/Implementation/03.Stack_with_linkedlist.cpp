#include<iostream>
using namespace std;
int mian ()
{
    printf("=====simple Operation of Stack=====\n");
    while(1)
    {
        int choice;
        cout<<"\t1. push\n";
        cout<<"\t2. pop\n";
        cout << "\t.3 peek\n";
        cout<<"\t4. display\n";
        cout <<"5. exit\n";
        cout<<"Enter ur choice : ";
        cin >> choice;
        switch (choice)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: cout << "The top element is : "<< peek(); <<endl;
            case 4: display(); break;
            case 5: exit(0);
        }
    }
}