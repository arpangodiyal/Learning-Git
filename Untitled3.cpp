#include<bits/stdc++.h>
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define hell 1000000007
#define hell1 1000000006
#define pb push_back
#define x first
#define y second
using namespace std;
ll mM(ll a,ll b,ll mod){ll res = 0;a %= mod;while(b){if (b & 1)res = (res + a) % mod;a = (2 * a) % mod;b >>= 1;}return res;}
ll fpow(ll x,ll y,ll p){x=x%p;ll res=1;while(y){if(y&1)res=mM(res,x,p);res%=p;if(res<0)res=(res+p)%p;y=y>>1;x=mM(x,x,p);if(x<0)x=(x+p)%p;x%=p;}return res;}
ll inv(ll n){return fpow(n,hell-2,hell);}
ll modmul(ll x,ll y){return mM(x,y,hell);}
ll modadd(ll x,ll y){ll temp=x%hell+y%hell;temp%=hell;if(temp<0)temp = (temp+hell)%hell;return temp;}
int main(){
	//ios
	ll t;
	cin >> t;
	//t = 1;
	while(t--){
		string s,p,q="",r="";
		cin >> s >> p;
		for(int i=0;i<s.size();i++)
			if(s[i]=='1')
				q+='1';
		for(int i=0;i<p.size();i++)
			if(p[i]=='1')
				r+='1';
		int cnt = 0;
		ll mx,mn;
		if(r=="" || q=="")
			cout << "0\n";
		else
		{
			if(r.size()>q.size())
			{
				mx = r.size();
				mn = q.size();
			}
			else
			{
				mx = q.size();
				mn = r.size();
			}
			int len = r.size()+q.size()-1;
			ll carry=0;
			string fans="";
			ll overlap = mx-mn+1;
			for(int i=1;i<mn;i++)
			{
				cnt=i;
				cnt+=carry;
				carry = cnt/10;
				cnt%=10;
				fans+=(cnt+'0');
			}
			for(int i=0;i<overlap;i++)
			{
				ll ans = mn;
				ans+=carry;
				carry = ans/10;
				ans%=10;
				fans+=(ans+'0');
			}
			for(int i=mn-1;i>=1;i--)
			{
				ll ans = i;
				ans+=carry;
				carry = ans/10;
				ans%=10;
				fans+=(ans+'0');
			}
			reverse(fans.begin(),fans.end());
			cout << fans << "\n";
		}
	}
}
