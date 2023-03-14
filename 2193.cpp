// 이친수

#include <iostream>
using namespace	std;

	// 1:1
	// 2:1
	// 3:2
	// 4:3
	// 5:5
int	main()
{
	ios::sync_with_stdio(0),cin.tie(0);

	int	n;
	cin >> n;

	long long	dp[n + 1];

	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= n; i++)
		dp[i] = dp[i - 1] + dp[i - 2];
	cout << dp[n];
}

