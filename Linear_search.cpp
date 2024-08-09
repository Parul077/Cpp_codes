#include<iostream>
using namespace std;
bool search(int arr[],int size,int key)
{
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10]={2,4,8,1,0,4,7,9,3,5};
    cout<<"Enter element to search"<<endl;
    int key;
    cin>>key;
    bool found=search(arr,10,key);
    if(found)
    {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}