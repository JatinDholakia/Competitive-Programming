#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int n; 
	cin>>n; 
	int arr[n]; 
	for(int i=0;i<n;i++) cin>>arr[i]; 
	map<int,int>mp; 
	for(int i=0;i<n;i++) mp[arr[i]]++; 
	int taxi =0; 
//	for(int i=4;i>=1;i--)cout<<mp[i]<<"\n";
	
	for(int i=4;i>=1; i--){
		if(i==4) taxi += mp[i];
		if(i==3){
			taxi  += mp[i]; 
			mp[1] -= mp[i]; 
		}
		if(i==2){
			if(mp[i]==1)
				taxi+=1; 
			else
				taxi += ceil( (mp[i]*2)/4.0); 
		}
		if(i==1){
		//	cout<<(mp[2]*2)%4<<"\n";
			mp[i]-= ((mp[2]*2)%4); 
			if(mp[i] >0) {
				taxi += ceil(mp[i]/4.0);
			}
		}
	//cout<<i<<" "<<taxi<<"\n";
 
		
	}
	cout<<taxi<<"\n";
}