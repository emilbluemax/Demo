#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,temp;
    cout<<"Enter a  number : ";
    cin>>n;
    int num1 = 0,num2 = 1;
    for(int i = 1;i<=n;i++)
    {
        cout<<num1<<" ";
        temp = num1 + num2;
        num1 = num2;
        num2 = temp;
    }
    
}