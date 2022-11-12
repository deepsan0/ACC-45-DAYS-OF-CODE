#include<iostream>
using namespace std;
class array
{
    private:
    int a[20],n;
    public:
    void create()
    {
        cout<<"enter the size";
        cin>>n;
        for (int i=0;i<=n;i++)
        {
            cout<<"enter the no.";
            cin>>a[i];
        }
    }
    void display()
    {
        cout<<"the array is"<<endl;
        for(int i=0;i<=n;i++)
        {
            cout<<a[i]<<" ";
        }
        
        
    }
    

void deletion()
{
    int posi;
    cout<<"enter the position";
    cin>>posi;
    for(int i=posi-1 ;i<=n;i++)
        {
            a[i]=a[i+1];
                
        }
        n--;
       

}
};

int main()
{
    array a1;
    a1.create();
    a1.display();
    a1.deletion();
    a1.display();
    return 0;
}
