#include<bits/stdc++.h>

using namespace std;
int main(){
	int n;
	cout<<"number of elements"<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	for(int i=1;i<n;i++){
		int temp=a[i];
		int j=i-1;
		for( ;	j>=0 && temp <a[j];	j--)
			a[j+1]=a[j];
		a[j+1]=temp;
	}

	cout<<"sorted"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
	return 0;
}
