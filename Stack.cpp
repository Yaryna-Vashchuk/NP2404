////� ���������� ���� ��������� �����, ������������� �� �������� �������.
////��� ����� ���� ����� ����������� ������ �� ������� � �����,
////������������� ���� ������ �� ���������� ������ ������� ����������� �����.
////���������, ��� ������ � + (45 - F(X) * (B - C)) ������� ����������� : 8 10; 12 16; 3 17.
//
//#include <fstream>
//#include <iostream>
//#include <stack>
//#include <queue>
//
//using namespace std;
//
//void print(queue<pair<unsigned short, unsigned short>> a)
//{
//	while (!a.empty())
//	{	
//		cout << a.front().first <<" "<< a.front().second << ";\t";
//		a.pop();
//	}
//	cout << endl << endl;
//}
//
//queue<pair<unsigned short, unsigned short>> dothething(istream& in)
//{
//	stack<unsigned short> open;
//	queue<pair<unsigned short, unsigned short>> daQueue;
//	unsigned short counter = 1;
//	char buffer;
//
//	while (in >> buffer)
//	{
//		if (buffer == '(' || buffer == ')')
//		{
//			if (buffer == '(')
//			{
//				open.push(counter);
//			}
//			if (buffer == ')')
//			{
//				daQueue.emplace(open.top(), counter);
//				open.pop();
//			}
//		}
//		++counter;
//	}
//	return daQueue;
//}
//
//int main()
//{
//	ifstream fin;
//	fin.open("stack.txt");
//	print(dothething(fin));
//
//	system("pause");
//	return 0;
//}