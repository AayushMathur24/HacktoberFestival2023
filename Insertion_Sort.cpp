#include <iostream>
using namespace std;

void func(int arr[],int n)
{
    int j;
    for(int i=1;i<n;i++)
    {
         for(int j=i-1;j>=0;j--)
         {
             if(arr[j+1]<arr[j])
                 swap(arr[j+1],arr[j]);
         }
    }
    for(int j=0;j<n;j++)
        cout<<arr[j]<<' ';
}

int main()
{
    int num;
    cout<<"Enter number of elements : ";
    cin>>num;
    int arr[num];
    cout<<"Enter elements : ";
    for(int i=0;i<num;i++)
        cin>>arr[i];
    cout<<"Array after sorting : ";
    func(arr,num);
    return 0;
}
