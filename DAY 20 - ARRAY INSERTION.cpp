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
        for (int i=1;i<=n;i++)
        {
            cout<<"enter the no.";
            cin>>a[i];
        }
    }
    void display()
    {
        cout<<"the array is"<<endl;
        for(int i=1;i<=n;i++)
        {
            cout<<a[i];
        }
        
        
    }
    

void insertion()
{
    int posi,val;
    cout<<"enter the position";
    cin>>posi;
    for(int i=n;i>=posi;i--)
        {
            a[i+1]=a[i];
            
        }
        cout<<"enter the value"<<endl;
        cin>>val;
        a[posi]=val;
        n+1;

}
};

int main()
{
    array a1;
    a1.create();
    a1.insertion();
    a1.display();
    return 0;
}
