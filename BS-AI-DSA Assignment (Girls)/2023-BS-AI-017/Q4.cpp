// Find Maximum Number
#include<iostream>
using namespace std;
int main()
{
    int num[10];

    // Take Numbers as Input from User
    cout<<"Enter 10 Numbers:"<<endl;
    for(int i=0; i<10; i++)
    {
        cin>>num[i];
    }

    // Check the Maximum Number
    int max = num[0];
    for(int i=0; i<10; i++)
    {
        if(max < num[i])
        {
            max = num[i];
        }
    }
    // Display Output
    cout<<"Maximum Number: "<<max;
}