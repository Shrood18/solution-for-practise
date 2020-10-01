#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		 long long int n;
		 cin>>n;
		long long int k=sqrt(n);
		if(k*k>=n)
		 cout<<k+k-2<<endl;
		else if((k*(k+1))>=n)
		   cout<<k+k+1-2<<endl;
		else  //in case higher than half of the next number
		  cout<<k+1+k+1-2<<endl;
		
		}
	
	
	
	
}
