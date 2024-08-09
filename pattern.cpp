#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    //  for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // int count =1;
    //  for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }
    // 1 
    // 2 3 
    // 4 5 6 
    // 7 8 9 10 
    // 11 12 13 14 15 


    // for(int i=1;i<=n;i++){
    // int value = i;
    //     for(int j=1;j<=i;j++){
    //         cout<<value<<" ";
    //         value++;
    //     }
    //     cout<<endl;
    // }
    // 1 
    // 2 3 
    // 3 4 5 
    // 4 5 6 7 
    // 5 6 7 8 9 
    // 6 7 8 9 10 11 

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<i-j+1<<" ";
    //     }
    //     cout<<endl;
    // }
    // 1 
    // 2 1 
    // 3 2 1 
    // 4 3 2 1 
    // 5 4 3 2 1 
    // 6 5 4 3 2 1 
    // 7 6 5 4 3 2 1 

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         char ch='A'+ i-1;
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }
    // A A A A A A A 
    // B B B B B B B 
    // C C C C C C C 
    // D D D D D D D 
    // E E E E E E E 
    // F F F F F F F 
    // G G G G G G G 

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         char ch='A'+j- 1;
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }
    // A B C D E F G 
    // A B C D E F G 
    // A B C D E F G 
    // A B C D E F G 
    // A B C D E F G 
    // A B C D E F G 
    // A B C D E F G 

    //  for(int i=1;i<=n;i++){
    //      char ch='A';
    //     for(int j=1;j<=n;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }
    // A B C D E F G 
    // A B C D E F G 
    // A B C D E F G 
    // A B C D E F G 
    // A B C D E F G 
    // A B C D E F G 
    // A B C D E F G 

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         char ch='A'+i-1;
    //         cout<<ch<<" ";
    //         // ch++;
    //     }
    //     cout<<endl;
    // }
    // A
    // B B
    // C C C
    // D D D D
    // E E E E E
    // F F F F F F
    // G G G G G G G

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         char ch='A'+i+j-2;
    //         cout<<ch<<" ";  
    //     }
    //     cout<<endl;
    // }
    // A 
    // B C 
    // C D E 
    // D E F G 
    // E F G H I 
    // F G H I J K 

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         char ch='A'+n-i;
    //         cout<<ch<<" ";  
    //     }
    //     cout<<endl;
    // }
    // F 
    // E E 
    // D D D 
    // C C C C 
    // B B B B B 
    // A A A A A A 

    // for(int i=1;i<=n;i++){
    //     char ch='A'+n-i;
    //     for(int j=1;j<=i;j++){
    //         cout<<ch<<" "; 
    //         ch=ch+1; 
    //     }
    //     cout<<endl;
    // }

    // G 
    // F G 
    // E F G 
    // D E F G 
    // C D E F G 
    // B C D E F G 
    // A B C D E F G 


//    for(int i=1;i<=n;i++){
//         for(int k=n-i;k>=1;k--){
//             cout<<" "<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";    
//         }
//         cout<<endl;
//     }
//         *
//       * * 
//     * * * 
//   * * * * 
// * * * * * 
    // for(int i=1;i<=n;i++){
    //     for(int k=n-i;k>=1;k--){
    //         cout<<" "<<" ";
    //     }
    //     for(int j=i;j>=1;j--){
    //         cout<<"*"<<" ";    
    //     }
    //     cout<<endl;
    // }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
//     Enter number: 6
//      *     
//     ***    
//    *****   
//   *******  
//  ********* 
// ***********


    

}    
