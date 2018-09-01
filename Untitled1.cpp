#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	string t, s, s2;
	cin >> t;
	int i = 0, j = n-1, c = 0;

	for (; i < j; ++i, --j)
	{
		if(t[i] == t[j])
			c++;
		else
			break;
	}
	cout << c << "\n";
	for(i = c; i < n; i++)
		s2 += t[i];
	//cout << s2 << "\n";
	s += t;
	//cout << "sfrpmsfrpmsfrpmsfrpmsfrpmsfrpm\n";
	for (i = 1; i < k; ++i)
	{
		s += s2;
	}

	cout << s;
}
