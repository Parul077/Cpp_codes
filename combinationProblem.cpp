#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return  fact;
}

int combination(int n, int r)
{
    int nom = factorial(n);
    int demo = factorial(r) * factorial(n - r);
    return nom/demo;

}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<combination(a,b);
    return 0;
}