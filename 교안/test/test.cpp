#include <iostream>
#include <vector>
#include <tuple>

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

void Test11()
{
	double p = 1.198;
	int a = (int)p * 100;
	a = (int)100 * p;
}
void Test12()
{
	char a = 'a';
	cout << (int)a - 97 << "\n";
	cout << (int)a - 'a' +1 << "\n";
}

void Test13()
{
	string dopa = "amumu is best";

	cout << dopa << "\n";
	if (dopa.find("amumu ") != string::npos) 
	{
		cout << "dopa속에 아무무있다!\n";
	}
	cout << dopa.substr(0, 3) << "\n";
	reverse(dopa.begin(), dopa.end());
	cout << dopa << "\n";
}

vector<string> split(string input, string delimiter) 
{
	vector<string> ret;
	long long pos = 0;
	string token = "";
	while ((pos = input.find(delimiter)) != string::npos) 
	{ 
		token = input.substr(0, pos);
		ret.push_back(token);
		input.erase(0, pos + delimiter.length());
	}
	ret.push_back(input);
	return ret;
}

vector<string> split_debug(string input, string delimiter) 
{
	vector<string> ret;
	long long pos = 0;
	string token = "";
	while ((pos = input.find(delimiter)) != string::npos) 
	{
		long long pos = input.find(delimiter);
		cout << "POS : " << pos << '\n'; // 15 12 15 15
		if (pos == string::npos)break;
		token = input.substr(0, pos);
		ret.push_back(token);
		input.erase(0, pos + delimiter.length());
	}
	ret.push_back(input);
	return ret;
}

void Test14()
{
	string s = "100";
	string s2 = "amumu";
	cout << atoi(s.c_str()) << '\n';
	cout << atoi(s2.c_str()) << '\n';

}


void Test15()
{
	pair<int, int> pi;
	tuple<int, int, int> tl;

	int a, b, c;

	pi = { 1, 5 };
	tl = make_tuple(1, 20, 3);
	//tie(a, b) = pi;
	a = pi.first;
	b = pi.second;
	cout << a << " " << b << "\n";
	//tie(a, b, c) = tl;

	a = get<0>(tl);
	b = get<1>(tl);
	c = get<2>(tl);

	cout << a << " " << b << " " << c << "\n";
}

void Test16()
{
	vector<int> v;
	for (int i = 1; i <= 10; i++)v.push_back(i);
	for (int a : v) cout << a << " ";
	cout << "\n";
	v.pop_back();
	for (int a : v) cout << a << " ";
	cout << "\n";

	v.erase(v.begin(), v.begin() + 2);
	for (int a : v) cout << a << " ";
	cout << "\n";

	auto a = find(v.begin(), v.end(), 9);
	if (a == v.end()) cout << "not found" << "\n";
	else cout << "found" << "\n";

	fill(v.begin(), v.end(), 10);
	for (int a : v) cout << a << " ";
	cout << "\n";

	v.clear();
	cout << "아무것도 없을까?\n";
	for (int a : v) cout << a << " ";
	cout << "\n";
}

void Test17()
{
	vector<int> v(5, 100);
	for (auto a : v) cout << a << " ";
}

void f(vector<int>& v)
{
	v[0] = 100;
}

void Test18()
{
	vector<int> v;
	for (int i = 1; i <= 3; i++) v.push_back(i);
	f(v);
	for (int i : v) cout << i << " ";
}

void f(vector<int> v[10])
{
	v[0][0] = 1000;
}

void Test19()
{
	vector<int> v[9];
	v[0].push_back(100);
	f(v);
	for (int i : v[0]) cout << i << " ";
}

void f(vector<vector<int>>& v)
{
	vector<int> vv;
	vv.push_back(10000);
	v.push_back(vv);
}

void Test20()
{
	vector<vector<int>> v;
	f(v);
	for (int i : v[0]) cout << i << " ";
}

void main()
{
	Test20();
}