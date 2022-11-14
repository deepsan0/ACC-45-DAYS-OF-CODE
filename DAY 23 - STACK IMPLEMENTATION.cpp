#include<iostream>
using namespace std;
class stack
{
    int s[30],n=30,top=-1;
    public:
   
    void push(int val)
    {
        
        if(top>=n-1)
        {
            cout<<"stack is overflow "<<endl;
        }
        else{
            top++;
            
            s[top]=val;
        }

    }
    int pop()
    {
        if(top==-1)
        {
            cout<<"stack is underflow "<<endl;
            return 0;

        }
        else{
            return s[--top];
        }
    }

    int display()
    {    

        if(top==-1)
        {
            cout<<"no element in stack "<<endl;

        }
        else{
            for(int i=top;i>=0;i--)
            {
                cout<<s[i]<<" ";
            }
        }
    }
};
int main()
{
     stack s1;
    
    int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            s1.push(val);
            break;
         }
         case 2: {
            s1.pop();
            break;
         }
         case 3: {
            s1.display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}
