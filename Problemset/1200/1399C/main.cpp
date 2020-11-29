#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int num[55];
		for(int i=0;i<n;i++){
			cin>>num[i];
		}
		sort(num,num+n);
		int tmp;
		int ans=0;
		for(int i=2;i<=2*n;i++){
			tmp=0;
			int left=0;
			int right=n-1;
			while(left<right){
				if(num[left]+num[right]==i){
					tmp++;
					left++;
					right--;
				}
				else if(num[left]+num[right]<i)left++;
				else {
					right--;
				}
			}
			if(tmp>ans)ans=tmp;
		}
		cout<<ans<<endl;
	}
}
