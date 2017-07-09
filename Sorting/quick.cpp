#include<bits/stdc++.h>

using namespace std;

quick(int *a, int p, int r,int n){
		int place=p-1;
	if(p<r){

		for(int j=p; j<r-1;j++){
			if(a[j]<=a[r]){
				int t=a[++place];
				a[place]=a[j];
				a[j]=t;
			}
		}
		int t=a[++place];
		a[place]=a[r];
		a[r]=t;
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
	cout<<endl;
	return quick(a,p,place,place-p+1);
}

int main(){
	int n;
	cout<<"number of elements"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter elements below 1000"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];

	quick(a,0,n-1,n);
	
	cout<<"sorted"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
	return 0;
}


