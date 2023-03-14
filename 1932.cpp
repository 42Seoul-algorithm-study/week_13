// 정수 삼각형

#include <iostream>
#include <algorithm>
using namespace	std;

int	main()
{
	ios::sync_with_stdio(0),cin.tie(0);

	int	n;
	cin >> n;

	int	board[n][n], dp[n][n];

	for (int i = 0; i < n; i++)
		for (int j = 0; j <= i; j++)
			cin >> board[i][j];
	for (int i = 0; i < n; i++) // 삼각형 부분만 초기화 했더니 쓰레기값 드가서 오류났었음ㅎ
		for (int j = 0; j < n; j++)
			dp[i][j] = 0;
	dp[0][0] = board[0][0];
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			dp[i][j] = max(dp[i - 1][j] + board[i][j], dp[i][j]);
			dp[i][j + 1] = dp[i - 1][j] + board[i][j + 1];
		}
	}
	// for (int i = 0; i < n; i++)
	// {
	// 	for (int j = 0; j < n; j++)
	// 	{
	// 		cout << dp[i][j] << ' ';
	// 	}
	// 	cout << '\n';
	// }
	cout << *max_element(dp[n - 1],dp[n - 1] + n);
}

