// 연속 합

#include <iostream>
#include <algorithm>
using namespace	std;

int	main()
{
	ios::sync_with_stdio(0),cin.tie(0);

	int	n;

	cin >> n;
	int	board[n], dp[n];

	for (int i = 0; i < n; i++)
		cin >> board[i];
	dp[0] = board[0];
	for (int i = 1; i < n; i++)
	{
		if (dp[i - 1] > 0)
			dp[i] = dp[i - 1] + board[i];
		else
			dp[i] = board[i];
	}
	// cout << '\n';
	// for (int i = 0; i < n; i++)
	// 	cout << dp[i] << ' ';
	cout << *max_element(dp, dp + n);
}

