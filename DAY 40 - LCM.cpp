#include<iostream>
using namespace std;
int main()
{
    int numOne, numTwo, np;
    cout<<"Enter Two Numbers: ";
    cin>>numOne>>numTwo;
    if(numOne>numTwo)
        np = numOne;
    else
        np = numTwo;
    while(1)
    {
        if((np%numOne == 0) && (np%numTwo == 0))
            break;
        else
            np++;
    }
    cout<<"\nLCM ("<<numOne<<", "<<numTwo<<") = "<<np;
    cout<<endl;
    return 0;
}
