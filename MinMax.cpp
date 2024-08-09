#include<iostream>
using namespace std;

struct Pair{
    int min;
    int max;
};

Pair getMinMax(int a[],int n){
    struct Pair minmax;
    int i=0;
    if(n==1){
        minmax.max = a[0];
        minmax.min = a[0];
        return minmax;
    }
    if(a[0]>a[1]){
        minmax.max = a[0];
        minmax.min = a[1];
    }
    else if(a[0]<a[1]){
        minmax.max = a[1];
        minmax.min = a[0];
    }

    for (i=2;i<n;i++){
        if(a[i] > minmax.max){
             minmax.max = a[i];            
        }
        else if(a[i] < minmax.min){
            minmax.min = a[i];
        }
    }
    return minmax;
}
int main(){
    int a[] = { 1000, 11, 445, 1, 330, 3000 };
    int a_size = 6;
     
    struct Pair minmax = getMinMax(a, a_size);
     
    cout << "Minimum element is " << minmax.min << endl;
    cout << "Maximum element is "<< minmax.max;
          
    return 0;
}
