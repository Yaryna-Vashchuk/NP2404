#include <iostream>
#include <vector>

using namespace std;

template <typename TN>
int invertionsCount(vector<TN>& a)
{
	int c = 0;
	for (int i = 1; i < a.size(); ++i)
	{
		if (a[i - 1] > a[i]) c++;
	}
	return c;
}

template <typename TN>
void read(vector<TN>& a)
{
	int x, n;
	cout << "Insert size, then a row: ";
	cin >> n;
	a.reserve(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		a.push_back(x);
	}
}

int main()
{
	vector<int> a;
	read(a);
	cout << invertionsCount(a) <<" invertions."<< endl;
	system("pause");
	return 0;
}