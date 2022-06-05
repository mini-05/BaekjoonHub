#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m, k, l = 0;
	int x1, x2, y1, y2;
	int** arr;
	cin >> n >> m;
	arr = new int* [n + 1];
	arr[0] = new int[n + 1];
	for (int i = 0; i <= n; i++)
		arr[0][i] = 0;
	for (int i = 1; i <= n; i++)
	{
		arr[i] = new int[n + 1];
		arr[i][0] = 0;
		l = 0;
		for (int j = 1; j <= n; j++)
		{
			cin >> k;
			l += k;
			arr[i][j] = arr[i - 1][j] + l;
		}
	}
	for (int z = 0; z < m; z++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		cout << arr[x2][y2] + arr[x1 - 1][y1 - 1] - arr[x1 - 1][y2] - arr[x2][y1 - 1] << "\n";
	}
	return 0;
}