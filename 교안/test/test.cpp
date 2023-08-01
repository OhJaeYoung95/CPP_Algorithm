#include <iostream>

using namespace std;

void Test1()
{
	string a = "wow";
	a += " ";
	a += "fantastic";
	cout << a.size() << "\n";
	cout << a << "\n";
}

void Test2()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string s = "123";
	s[0]++;
	cout << s << "\n"; // 223
}

void Test3()
{
	int n, m, a[10][10];
	string s;
	cin >> n >> m;
	for (int i = 0; i < n; i++) 
	{
		cin >> s;
		for (int j = 0; j < m; j++) 
		{
			a[i][j] = s[j] - '0';
		}
	}

	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < m; j++) 
		{
			cout << a[i][j];
		}
		cout << '\n';
	}
}

void Test4()
{
	int a[10][10], n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf_s("%1d", &a[i][j]);
		}
	}
}

void Test5()
{
	char a[10][10];
	for (int i = 0; i < 2; i++) 
	{
		for (int j = 0; j < 4; j++) 
		{
			scanf_s("%c", &a[i][j]);
		}
	}
	for (int i = 0; i < 2; i++) 
	{
		for (int j = 0; j < 4; j++) 
		{
			cout << a[i][j];
		}
		cout << '\n';
	}
}

void Test6()
{
	int n;
	while (scanf_s("%d", &n) != EOF) 
	{
		cout << 1 << '\n';
	}

}

void Test7()
{
	int n;
	while (cin >> n) 
	{
			cout << 1 << '\n';
	}

}


void Test8()
{
	double a = 1.23456789;
	int b = 9;

	printf("%.6lf\n", a);
	printf("%02d\n", b);
}

void Test9()
{
	int a = 1;
	char s = 'a';
	string str = "어벤져스";
	double b = 1.223123;
	printf("아이엠어 아이언맨 : %d\n", a);
	printf("아이엠어 아이언맨 : %c\n", s);
	printf("아이엠어 아이언맨 : %s\n", str.c_str());
	printf("아이엠어 아이언맨 : %lf\n", b);
}

void Test10()
{
	double ret = 2.12345;
	int n = 2;
	int a = (int)round(ret / double(n));
	cout << a;
}


void main()
{
	Test10();
}