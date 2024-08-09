#include<iostream>
using namespace std;

int decToBin(int n)
{
    int i = 0;
    int ans[32];
    while(n != 0){
        ans[i] = n % 2;
        n = n/2;
        i++;
   }
    for (int j = i - 1; j >= 0; j--) 
        return ans[j];    
    
}

int setBits(int a, int b){
    int aCount = 0, bCount = 0;
    int ansa = decToBin(a);
    int ansb = decToBin(b);
    if(ansa & 1 == '1'){
        aCount++;
    }
     ansa = ansa>>1;

     if(ansb & 1 == '1'){
        bCount++;
    }
    ansb = ansb>>1;

    cout<< aCount<<" "<<bCount;
  
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<setBits(a,b)<<endl;
    return 0;
    // int n;
    // cin>>n;
    // cout<<decToBin(n);
    
} 
