#include<iostream>
using namespace std;
int main(){
	 int r,c;
    cout<<"Enter the number of rows and cols respectively:";
    cin>>r>>c;
    for(int i=r;i>=1;i--){
    	for(int j=c;j>=1;j--){
    		if(j<=i){
    			cout<<"*";
			}
		}
		cout<<"\n";
	}
}
