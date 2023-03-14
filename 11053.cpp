// 가장 긴 증가하는 부분 수열

#include <iostream>
#include <algorithm>
using namespace	std;

int	find_prev_arg(int dp[], int board[], int out_i)
{
	int	max = 0;
	for (int i = out_i - 1; i >= 0; i--)
	{
		if (board[out_i] > board[i] && max < dp[i])
			max = dp[i];
	}
	return (max);
}


int	main()
{
	ios::sync_with_stdio(0),cin.tie(0);

	int	n;
	cin >> n;

	int	board[n], dp[n];
	for (int i = 0; i < n; i++)
		cin >> board[i];
	dp[0] = 1;
	for (int i = 1; i < n; i++)
		dp[i] = find_prev_arg(dp, board, i) + 1;
	// for (int i = 0; i < n; i++)
	// 	cout << dp[i] << ' ';
	cout << *max_element(dp, dp + n);
}

