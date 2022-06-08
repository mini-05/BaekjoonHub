#include <iostream>
#include <algorithm>
#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int N;
int arrn[100001];
int binarySearch(int n, int arr[])
{
	int low = 0, high = N - 1, mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (arrn[mid] == n)
			return 1;
		else if (arrn[mid] < n)
			low = mid + 1;
		else if (arrn[mid] > n)
			high = mid - 1;
	}
	return 0;
}
int main()
{
#ifndef ONLINE_JUDGE
	FILE* fp = freopen("input.txt", "r", stdin);
#else
	FAST_IO;
#endif // ONLINE_JUDGE

	int m;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int t;
		cin >> t;
		arrn[i] = t;
	}
    
	sort(arrn, arrn + N);
    
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int t;
		cin >> t;
		cout << binarySearch(t, arrn) << "\n";
	}
	return 0;
}