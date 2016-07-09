#include <iostream>
#include <fstream>
#include <cstring>

std::ifstream fin("strData.in");
std::ofstream fout("strData.out");

#define MAX_BUFF 1024
// 删除开头子串
char* delSubStr(char* str, char* sub_str)
{
	if(0 == strncmp(sub_str, str, strlen(sub_str)-1))
	{
		std::cout << "sub_str len = " << strlen(sub_str) << " | " << str << std::endl;
		char * p1 = str;
		char * p2 = str;
		for(int i=0; i<strlen(sub_str); ++i)
			p2++;
		
		while(*p2 != '\n')
			*p1++ = *p2++;
		*p1 = '\n';
	}
	return str;
}

int main()
{
	int line = 0;
	char buf[MAX_BUFF];
	char head[] = "Line";
	while(fin.getline(buf, MAX_BUFF))
	{
		delSubStr(buf, head);
		fout << buf << std::endl;
	}
	return 0;
}
