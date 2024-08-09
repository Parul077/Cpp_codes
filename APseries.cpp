#include<iostream>
using namespace std;

int nthTerm(int n, int a, int d){
    int nth = a + (n-1)*d; 
    return nth;
}

int main(){
    int a,n,d;
    cout<<"Enter  the input values: ";
    cin>>n>>a>>d;
    cout<<nthTerm(n,a,d);
    return 0;
}
