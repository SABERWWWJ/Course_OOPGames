//11_4.cpp
#include <iostream>
using namespace std;

int main()
{
   char c;
   cout << "输入前, cin.eof() 是 " << cin.eof()<< "\n输入一个句子:\n";
   while ( ( c = cin.get() ) != EOF )
      cout.put( c );
   cout << "\n系统中EOF 是: " << c;
   cout << "\n输入后, cin.eof() 是 " << cin.eof() << endl;
   return 0;
}
/*
运行结果：
输入前, cin.eof() 是 0
输入一个句子:
This is a boy!
This is a boy!
^Z

系统中EOF 是: �
输入后, cin.eof() 是 1
*/