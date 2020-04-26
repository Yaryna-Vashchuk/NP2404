////•  Знайти суму останнього і передостаннього елементів списку;
////•  Вставити в список новий елемент Е1 після кожного входження елемента Е;
////•  Утворити список L, включивши в нього по одному разу елементи, які входять в один зі списків L1 або L2, але не входять в другий список
//
//#include <iostream>
//#include <list>
//
//using namespace std;
//
//template <typename TN>
//list<TN>& mergE(list<TN>& a, list<TN>& b)
//{
//	a.merge(b);
//	typename list<TN>::const_iterator i = a.cbegin();
//	typename list<TN>::const_iterator j = ++i;
//	while (i != a.cend())
//	{
//		while (j != a.cend())
//		{
//			if (*i == *j)
//			{
//				a.erase(*i);
//			}
//			++j;
//		}
//		++i;
//		return a;
//	}
//}
//
//template <typename TN>
//void inserT(list<TN>& a)
//{
//	TN E, E1;
//	cout << "Input E, then E1: ";
//	cin >> E >> E1;
//	typename list<TN>::const_iterator it = a.cbegin();
//	typename list<TN>::const_iterator next = a.cbegin();
//	while (it != a.cend())
//	{
//		++next;
//		if (*it == E)
//		{
//			if (it == next)
//			{
//				a.push_back(E1);
//				break;
//			}
//			a.insert(++it, E1);
//		}
//		++it;
//	}
//}
//
//template <typename TN>
//TN sum(list<TN>& a)
//{
//	typename list<TN>::const_reverse_iterator it = a.crbegin();
//	if (a.size() < 3) return 0;
//	if (a.size() == 1) return *it;
//	return *it + *(++it);
//}	
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
//	/*list<int> a;	
//	read(a);
//	cout <<"The sum is "<< sum(a) << endl;
//	inserT(a);
//	print(a);*/
//
//	list<int> l1;
//	list<int> l2;
//	read(l1);
//	read(l2);
//	print(mergE(l1, l2));
//
//
//	system("pause");
//	return 0;
//}