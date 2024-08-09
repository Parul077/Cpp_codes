#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v){
     for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}
void printPair(vector<pair<int,int>> v){
     for(auto i:v){
        cout<<i.first<<" "<<i.second;
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    v.push_back(6);
    v.push_back(8);
    v.push_back(2);
    v.emplace_back(10);
    v.emplace_back(77);
    cout<<"Elements in vector v: "<<endl;
    print(v);

    cout<<"Popping one element from vector v: "<<endl;
    v.pop_back();
    print(v);

    vector<pair<int,int>> vp;
    vp.push_back({1,7});
    vp.emplace_back(77,7);
     printPair(vp);

    cout<<"Bydefault all elemnets are initialized with 0"<<endl;
    vector<int> vs(5);    // only size is defined  but not the elements and all elements are initialized to zero
    print(vs);                   
    vector<int> vec(5,100);   // when size and value is given here 100 is pushed 5 times in the vector vec
    print(vs);

     /// Defining iterators 
     vector<int>::iterator it = v.begin();

     /// Insertion in vector
     v.insert(v.begin(), 300);
     v.insert(v.begin()+1, 2, 10);
     v.insert(v.end(),44);
     cout<<"After insertion:"<<endl;
      print(v);
  
    // Deletion in vectors
    v.erase(v.begin()+1);
    cout<<"After deletion:"<<endl;
     print(v);

    // copying vector v into vector vc
    vector<int> copy(2,50);
    v.insert(v.begin(),copy.begin(),copy.end());
     print(v);
     print(copy);

     // size of vector
    cout<<v.size();
    cout<<endl;

    //swapping values of two vector
    vector<int> v1={9,8,7};
    vector<int> v2={4,1,0};
    v1.swap(v2);
    print(v1);
    print(v2);

    // eraser elements of  a vector using iterator
    v.clear();
    // empty
    v.empty();

    return 0;
}