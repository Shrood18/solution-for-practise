#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int tt;
	cin>>tt;
	while(tt--)
	{
		 long long int n;
		 cin>>n;
		long long int k=sqrt(n);
		if(k*k>=n)
		 cout<<k+k-2<<endl;
		else if((k*(k+1))>=n)
		   cout<<k+k+1-2<<endl;
		else
		  cout<<k+1+k+1-2<<endl;
		
		}
	
	
	
	
}
