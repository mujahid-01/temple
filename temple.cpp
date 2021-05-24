#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,n,i,j,flag;
	cin>>s;
	while(s--)
	{
		flag=0;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		i=0;
		j=n-1;
        while(i<j)
        {
            if(n%2!=1 || a[i]!=1)
            {
                flag=0;
                break;
            }
            if(a[i]!=a[j])
            {
                flag=0;
                break;
            }
            if(a[i]+1==a[i+1] && a[j]+1==a[j-1])
            {
                flag++;
                i++;
                j--;
            }
            else
            {
                flag=0;
                break;
            }
        }
		if(flag==0)
		cout<<"no"<<endl;
		else cout<<"yes"<<endl;

	}

}
