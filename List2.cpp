////- видалити з першого списку повторні входження елементів;													clean
////		- вставити у перший список перед першим від'ємним елементи другого списку,							insert
////- усі від'ємні елементи першого списку перенести на його початок, зберігаючи їх порядок,					sort
////		- видалити з другого списку елементи, що містяться між максимальним і мінімальним елементами.		min_max
//
//#include <iostream>
//#include <list>
//
//using namespace std;
//
//template <typename TN>
//list<TN>& sort(list<TN>& a)
//{
//	list<TN> c;
//	typename list <TN>::const_iterator it = a.cbegin();
//	while (it != a.cend())
//	{
//		if (*it >= 0)
//		{
//			c.push_back(*it);
//			it = a.erase(it);
//		}
//		++it;
//	}
//	a.merge(c);
//	return a;
//}
//
//template <typename TN>
//list<TN>& min_max(list<TN>& a)
//{
//	TN max = INT_MIN;
//	TN min = INT_MAX;
//	short unsigned indN = 0, indX = 0;
//	typename list <TN>::const_iterator it = a.cbegin();
//	typename list <TN>::const_iterator itN = a.cbegin();
//	typename list <TN>::const_iterator itX = a.cbegin();
//	while (it != a.cend())
//	{
//		if (*it > max)
//		{
//			max = *it;
//		}
//		++it;
//	}
//	it = a.cbegin();
//	while (it != a.cend())
//	{
//		if (*it == max)
//		{
//			break;
//		}
//		++it;
//		++indX;
//	}
//	it = a.cbegin();
//	while (it != a.cend())
//	{
//		if (*it < min)
//		{
//			min = *it;
//		}
//		++it;
//	}
//	it = a.cbegin();
//	while (it != a.cend())
//	{
//		if (*it == min)
//		{
//			break;
//		}
//		++it;
//		++indN;
//	}
//	if (indN < indX)				//min_max
//	{
//		while (itX != a.cend())
//		{
//			if (*itX == max)
//			{
//				while (itN != itX)
//				{
//					if (*itN == min)
//					{
//						a.erase(++itN, itX);
//						break;
//					}
//					++itN;
//				}
//			}
//			++itX;
//		}
//	}
//	else							//max_min
//	{
//		while (itN != a.cend())
//		{
//			if (*itN == min)
//			{
//				while (itX != itN)
//				{
//					if (*itX == max)
//					{
//						a.erase(++itX, itN);
//						break;
//					}
//					++itX;
//				}
//			}
//			++itN;
//		}
//	}
//	return a;
//}
//
//template <typename TN>
//list<TN>& insert(list<TN>& a, list<TN>& b)
//{
//	typename list <TN>::const_iterator it = a.cbegin();
//	while (it != a.cend())
//	{
//		if (*it < 0)
//		{
//			a.insert(it, b.cbegin(), b.end());
//			break;
//		}
//		++it;
//	}
//	return a;
//}
//
//template <typename TN>
//list<TN>& сlean(list<TN>& a)
//{
//	typename list<TN>::const_iterator i = a.cbegin();
//	typename list<TN>::const_iterator j = ++i;
//	while (i != a.cend())
//	{
//		while (j != a.cend())
//		{
//			if (*i == *j)
//			{
//				j = a.erase(j);
//			}
//			++j;
//		}
//		++i;
//	}
//	return a;
//}
//
//
//template <typename TN>
//void print(list<TN>& a)
//{
//	typename list<TN>::const_iterator it = a.cbegin();
//	while (it != a.cend())
//	{
//		cout << *it << ' ';
//		++it;
//	}
//	cout << "\n\n";
//}
//
//template <typename TN>
//void read(list<TN>& a)
//{
//	int x, n;
//	cout << "Insert size, then a row: ";
//	cin >> n;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> x;
//		a.push_back(x);
//	}
//}
//
//int main()
//{
//	list<int> l1;
//	//list<int> l2;
//	read(l1);
//	//read(l2);
//	//print(сlean(l1));
//	//print(insert(l1, l2));
//	//print(min_max(l1));
//	print(sort(l1));
//
//	system("pause");
//	return 0;
//}