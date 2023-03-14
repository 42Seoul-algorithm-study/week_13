// 1로 만들기 2

#include <iostream>
using namespace	std;

int	main()
{
	ios::sync_with_stdio(0),cin.tie(0);

	int n;

	cin >> n;
	int	dp[n + 1];

	dp[0] = 0;
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;
	for (int i = 4; i <= n; i++)
	{
		int	a, b, c;
		a = dp[i - 1];
		b = dp[i / 2];
		c = dp[i / 3];
		if (i % 2 == 0)
			a = min(a, b);
		if (i % 3 == 0)
			a = min(a, c);
		dp[i] = a + 1;
	}
	// for (int i = 0; i <= n; i++)
	// {
	// 	cout << "i = " << i << " ::" << dp[i] << '\n';
	// }
	cout << dp[n] << '\n' << n << ' ';
	while (n > 1)
	{
		int	res = n - 1;
		if (n % 2 == 0 && dp[res] > dp[n / 2])
			res = n / 2;
		if (n % 3 == 0 && dp[res] > dp[n / 3])
			res = n / 3;
		n = res;
		cout << n << ' ';
	}
}

