#include<bits/stdc++.h>
using namespace std;

int main()
{
      int t;
      cin>>t;
      while(t--)
      {
          int n;
          cin>>n;
          vector<int> a(n);
          int count=0;
          for(int i=0;i<n;i++)
          {
              cin>>a[i];
          }
          for(int i=n-1;i>=0;i--)
          {
              if(a[i]!=i+1){
                  if(a[i-1]==i+1){
                      count++;
                      swap(a[i],a[i-1]);
                      
                  }
                  else if(a[i-2]==i+1){
                      count+=2;
                      a[i-2]=a[i-1];
                      a[i-1]=a[i];
                      a[i]=i+1;
                  }
              }
              else{
                  cout<<"Too chaotic"<<"\n";
                  break;
              }
          }
          cout<< count+1 <<"\n";
      }
    return 0;
}
// int main() {
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int n_swaps=0;
//     int flag=0;
//     for(int i=v.size()-1;i>=0;i--){
//         int key = v[i];
//         int j=i+1;
//         int max_limit=0;
//         while((j<v.size()) && (key>v[j])){
//             if(max_limit<2){
//                 v[j-1]= v[j];
//                 j++;
//                 max_limit++;
//                 n_swaps++;
//             }
//             else{
//                 flag++;
//                 break;
//             }
//         }
//         if(!flag)
//             v[j-1]= key;
//         else{
//             break;
//         }
//     }
//   if(!flag)  cout << n_swaps <<"\n";
//   else       cout << "Too chaotic" <<"\n";
// }


