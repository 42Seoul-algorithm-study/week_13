// 피보나치 함수

#include <iostream>
#include <algorithm>
using namespace	std;

// 0 {1 0}
// 1 {0 1}
// 2 {1 1}
// 3 {1 2}
// 4 {2 3}
// 5 {3 5}
// 6 {5 8}

int	main()
{
	ios::sync_with_stdio(0),cin.tie(0);

	int	n, maxele;

	cin >> n;
	int	input[n];
	for (int i = 0; i < n; i++)
		cin >> input[i];
	maxele = *max_element(input, input + n);
	int	zero[maxele + 1], one[maxele + 1];
	zero[0] = 1;
	zero[1] = 0;
	one[0] = 0;
	one[1] = 1;
	for (int i = 2; i <= maxele; i++)
	{
		zero[i] = zero[i - 2] + zero[i - 1];
		one[i] = one[i - 2] + one[i - 1];
	}
	for (int i = 0; i < n; i++)
		cout << zero[input[i]] << ' ' << one[input[i]] << '\n';
}

