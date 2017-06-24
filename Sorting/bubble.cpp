#include<bits/stdc++.h>

using namespace std;
int main(){
	int n;
	bool sort_further=false;
	cout<<"number of elements"<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n-1-i;j++){
			sort_further==false;
			if(a[j]>a[j+1]){
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				sort_further=true;
			}
			if(	sort_further==false)
				break;
			
		}
		
	cout<<"sorted"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
	return 0;
}
