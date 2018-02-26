
#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<fstream>
#include<string>
using namespace std;
string funct_s(int a);
unsigned char funct(int n, ...);
int f = 0;
ofstream file;
stringstream ss;
int bl(int *a, int n, int max)
{
	a[n - 1] += 1;
	for (int i = n - 1; i>0; --i)
		if (a[i] == max) {
			a[i - 1] += 1; a[i] = 0;
		}
	if (a[0] == max) return 0;
	return 1;
}
int cal(int**a,int m,int n) {
	int ck = 0,ct=0;
	int* sym;
	int *nor;
	int* tmp;
	unsigned char res;
	tmp = (int*)malloc(sizeof(int)*n);
	nor = (int*)malloc(sizeof(int)*n);
	sym = (int*)malloc(sizeof(int)*(n-1));
	for (int i = 0; i < n-1; ++i) sym[i] = 2;
	for (int i = 0; i < n; ++i) nor[i] = 0;
	do{
	do {
		ck = 0;
		for (int i = 0; i < n; ++i) tmp[i]=funct(nor[i], a[0][i]);
		res = funct(sym[0], tmp[0], tmp[1]);
		for (int i = 2; i < n; ++i)
		{
			if ((sym[i - 1] == 5 || sym[i - 1] == 6) && tmp[i] == 0) {
				ck = 1; break;
			}
			res = funct(sym[i - 1], res, tmp[i]);
		}
		if (res == a[0][n]&&ck==0) {
			bool flag = 1;
			for (int j = 1; j < m; ++j) {
				for (int i = 0; i < n; ++i) tmp[i] = funct(nor[i], a[j][i]);
				res = funct(sym[0], tmp[0], tmp[1]);
				for (int i = 2; i < n; ++i) res = funct(sym[i - 1], res, tmp[i]);
				if (res != a[j][n]) {
					flag = 0; break;
				}
			}

			//输出段
			if (flag) {

				for (int i = n - 2; i >= 0; --i) {

					ss << funct_s(sym[i]);
				}
				for (int i = 0; i < n; ++i) {
					ss << funct_s(nor[i]);
					ss << a[0][i];
				}
				ss << "=" << a[0][n] << endl;;
			}

			}
			
		}
	 while (bl(sym, n-1, 14));
	for (int i = 0; i < n - 1; ++i) sym[i] = 2;
	} while (bl(nor, n, 3));

	return 0;
}
int main() {
	int m, n;
	int** a;

	cout << "请输入m和n，表示要输入m组数，每组有n个数\n然后分m行输入数据，每行n+1个(最后一个为需求的结果，用空格隔开：" << endl;
	cin >> m >> n;
	a =(int**) malloc(sizeof(int)*m);
	for(int i=0;i<m;++i)
	a[i] =(int*) malloc(sizeof(int)*(n+1));

	for (int i = 0; i < m;++i)
		for (int j = 0; j < n+1;++j)
			cin >> a[i][j];
	cal(a, m, n);
	file.open("outcome.txt");
	file << ss.str();
	file.close();
	return 0;
}