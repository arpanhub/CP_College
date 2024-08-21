#include <iostream>
using namespace std;
void insert(int arr[], int n, int x, int pos)
{
   n=n+1;
   for(int i=n-1; i>=pos; i--)
   {
       arr[i] = arr[i-1];
   }
   arr[pos-1] = x;
}
void deleteElement(int arr[],int n,int pos){
    if(pos>=1 && pos<=n){
        for(int i=pos-1;i<n;i++){
            arr[i]=arr[i+1];
        }
        n=n-1;
    }else{
        cout<<"Invalid position"<<endl;
    }
}
int main()
{
    int arr[100]= {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    // insert(arr, n, 100, 1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    deleteElement(arr, n, 1);
    for(int i=0; i<n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}