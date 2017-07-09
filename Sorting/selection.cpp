#include<bits/stdc++.h>

using namespace std;
int main(){
	int n;
	cout<<"number of elements"<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	
	for(int i=0;i<n-1;i++)
		for(int j=i;j<n;j++){
			if(a[i]>a[j]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		
	cout<<"sorted"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
	return 0;
}
