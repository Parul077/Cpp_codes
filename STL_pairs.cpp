#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,int> p = {3,6}; //creating a pair of ints
    cout << "The first element is: "<<p.first<<endl;  //accessing the first element using .first
    cout<<"The second element is :"<<p.second<<endl;   //accessing the second element using .second
     // Nested pair

     pair<int, pair<int,int>> np = {2,{6,9}};
     cout<<"Fisrt element of pair: "<<np.first<<endl;
     cout<<"Second element of nested pair: "<<np.second.first<<endl;
     cout<<"Third element of nested pair: "<<np.second.second<<endl;
     
     // Swapping elements in pairs
     pair<int,int> swappair(5,8);
     cout<<"Before swap: ";
     cout<<swappair.first<<", "<<swappair.second<<endl;
     swap(swappair.first,swappair.second);
     cout<<"After swap: ";
     cout<<swappair.first<<", "<<swappair.second<<endl;

     pair<int,int> arr[] = {{1,3}, {4,2}, {2,5}};
     cout<<arr[1].first<<endl;// accessing individual elements of array of pairs
     cout<<arr[1].second<<endl;
     sort(arr,arr+3);     //sorting based on the first element of each pair
     for(auto i:arr){
        cout<<i.first<<" "<<i.second<<endl;    
     }      
     //sorting based on the second element of each pair  
     sort(arr,arr+3, [](pair<int,int>&a, pair<int,int>&b) -> bool {return (a.second < b.second);});
     cout<<"\nSorted by Second  Element:\n";
      for(auto i:arr){
        cout<<i.first<<" "<<i.second<<endl;    
     } 

     // we can also make pairs of character

     pair<char,char> ch = { 'A', 'B' };
      cout << "The first element is: "<<ch.first<<endl;  //accessing the first element using .first
    cout<<"The second element is :"<<ch.second<<endl;   //accessing the second element using .second
     // Nested pair

     pair<char, pair<char,char>> nch = {'P',{'Q','R'}};
     cout<<"Fisrt element of pair: "<<nch.first<<endl;
     cout<<"Second element of nested pair: "<<nch.second.first<<endl;
     cout<<"Third element of nested pair: "<<nch.second.second<<endl;

     
     // Swapping elements in pairs
     pair<char,char> swapPairCh('S','P');
     cout<<"Before swap: ";
     cout<<swapPairCh.first<<", "<<swapPairCh.second<<endl;
     swap(swapPairCh.first,swapPairCh.second);
     cout<<"After swap: ";
     cout<<swapPairCh.first<<", "<<swapPairCh.second<<endl;

     // This will sort according to the ASCII values of character

      pair<int,int> chArr[] = {{'a','g'}, {'e','k'}, {'q','d'}};
     cout<<chArr[1].first<<endl;// accessing individual elements of array of pairs
     cout<<chArr[1].second<<endl;
     sort(chArr,chArr+3);     //sorting based on the first element of each pair
     for(auto i:chArr){
        cout<<i.first<<" "<<i.second<<endl;    
     }      

    return 0;
}
