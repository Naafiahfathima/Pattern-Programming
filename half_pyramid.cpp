#include <iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of rows and cols respectively:";
    cin>>r>>c;
   for(int i=1;i<=r;i++){
     for(int j=1;j<=c;j++){
         if(j<=i){
             cout<<"*";
         }
     }
     cout<<"\n";
 }
}
