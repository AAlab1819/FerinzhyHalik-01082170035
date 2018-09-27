#include <bits/stdc++.h>

using namespace std;

int n, m, k, ke, ma[10000][10000], ans[1000000];
char a[10000][10000];

int cnt(int x, int y)
{
	if (a[x][y] == '*')
		return 1;
	if (ma[x][y])
		return 0;
	ma[x][y] = k;
	return cnt(x + 1, y) + cnt(x - 1, y) + cnt(x, y + 1) + cnt(x, y - 1);
}

int main()
{
	cin >> n >> m >> k;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; ++j)
			cin >> a[i][j];
	while (k)
	{
		int y, x;
		cin >> x >> y;
		if (!ma[x][y])
			ans[k] = cnt(x, y);
		cout << ans[ma[x][y]] << endl;
		--k;
	}
	return 0;
}