#include <iostream>
using namespace std;

int main()
{
    int i;
    int arr[5];
    int *ptr;
    ptr = arr;

    cout<<"Enter elements:\n";
    
    for(int i=0; i<5; i++)
    cin>>arr[i];    

    cout<<"You entered: ";
    for(i=0;i<5;i++)
    cout<<endl<<*(arr+i);
    
    return 0;
}
