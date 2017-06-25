#include<bits/stdc++.h>

using namespace std;

merge(int *a, int p, int q, int r){
	int n1=q-p+1;
	int n2=r-q;
	int left[n1+1],right[n2+1];
	left[n1]=1000;right[n2]=1000;
	for(int i=0;i<n1;i++)
		left[i]=a[i+p];
	for(int i=0;i<n2;i++)
		right[i]=a[i+q+1];
	int i=0,j=0;
	int k=p;
	while(i<n1 || j<n2){
		if(left[i]<right[j])
			a[k++]=left[i++];
		else
			a[k++]=right[j++];
	}
	return 0;
}

merge_split(int *a,int p, int r){
	if(p<r){
		int q=(p+r)/2;
		merge_split(a,p,q);
		merge_split(a,q+1,r);
		merge(a,p,q,r);
	}
	return 0;
}

int main(){
	int n;
	cout<<"number of elements"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter elements below 1000"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];

	merge_split(a,0,n-1);
	
	cout<<"sorted"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
	return 0;
}


