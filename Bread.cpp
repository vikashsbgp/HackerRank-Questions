#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mp make_pair
#define fs first
#define se second
int dx[8]={0,0,1,-1,1,1,-1,-1};
int dy[8]={1,-1,0,0,1,-1,1,-1};
/*********************************************END OF TEMPLATE **********************************************************/


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	ll t; cin>>t;

	/********************************************** START ***************************************************************/
	while(t--){
		ll n,k;
	cin>>n>>k;
	vector <ll> A(n);
	for(ll i=0;i<n;i++)
	cin>>A[i];
	ll ans=0,present=0;

	for(ll i=0;i<n;i++)
	{
		if(present<A[i])
		{
			ll req=A[i]-present;
			ll d=req/k;
			if(req%k>0) d++;
			ans+=d;
			present=k*d+present-A[i];
			if(present==0)
			continue;
			else present--;

		}
		else
		{
			present-=A[i];
			if(present==0)
			continue;
			else present--;
		}
	}
	cout<<ans;

	cout<<endl;
	}
	/********************************************** END ****************************************************************/

	return 0;
}
