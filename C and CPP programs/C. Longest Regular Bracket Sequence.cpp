#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pi (3.141592653589)
#define pb push_back
#define mp make_pair
#define INF 1000000000
#define MOD 1000000007
#define vll vector<ll>
#define vpll vector<pair<ll,ll> >
#define pll pair<ll>
#define ff first
#define ss second

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll S[1000001], E[1000001], F[1000001];
string st;
cin >> st;
stack<ll> stk;

ll j;
ll mx = 0;
for(j = 0; j < st.length(); j++)
{
	if(st[j] == '(')
	stk.push(j);
	else
	{
		if(stk.empty())
		{
			E[j] = S[j] = -1;
		}
		else
		{
			ll prev = stk.top();
			stk.pop();
			S[j] = E[j] = prev;
			if(E[prev-1] != -1 && st[prev-1] == ')' && prev >= 0)
			{
				E[j] = E[prev - 1];
			}
			ll len = j - E[j] + 1;
			F[len]++;
			mx = max(len, mx);
		}
	}
}
F[0] = 1;
cout << mx <<" " << F[mx];

return 0;
}

