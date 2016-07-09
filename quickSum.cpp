// 求和:支持-10^9 < m, n < 10^9
#include <iostream>
#include <fstream>
//#include <cstring>
//using namespace std;
std::ifstream fin("data.in");
std::ofstream fout("data.out");
//#define cin fin
//#define cout fout
int main()
{
	int t;
	long long m,n; // 支持的输入范围:
	fin >> t;
	for(int i=0; i< t; ++i)
	{
		fin >> m >> n;
		fout << "The " << i+1 << " line nums: " << m << "+...+" << n << " = " << (m+n) * (n-m+1) / 2 << std::endl;
	}
	return 0;
}


