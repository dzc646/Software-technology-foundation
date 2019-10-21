#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void main()
{
	
	string filename;
	
	
	while (1)
	{
		
		
		ifstream ifile;
		ifile.open("wc.txt", ios::in);
		if (!ifile)
			{
				cerr << "Open File Fail.\n请重新输入..." << endl;
				break;
			}
		cout << "读取成功！\n" << endl;

		ifile.close();
		
		
	}
	system("pause");
}

