#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void main()
{
	char  c, x;
	int i = 0, inword = 0,ture=1;
	string filename;
	int line = 0;
	int word = 0;
	int character = 0;
	int sentence = 0;
	
	while (ture)
	{
		
		cin >> x;
		if (x != 'w' & x != 'c' & x != 's' & x!='l')
			{
				cout << "�����������\n���������...\n" << endl;
				continue;
			}
		cin >> filename;
		
		cout << "��ʼ��ȡ�ļ�..." << endl;
		ifstream ifile;
		ifile.open(filename, ios::in);
		if (!ifile)
			{
				cerr << "Open File Fail.\n����������..." << endl;
				continue;
			}
		cout << "��ȡ�ɹ���\n" << endl;

		switch (x)
		{	case 'l':
				while (ifile.get(c))
				{
					if (c == '\n')
						line++;
				} 
				cout << "line is:" << line << endl;
				break;
			case 'w':
				while (ifile.get(c))
				{
					if (!isspace(c) && !inword)     //isspace (c)������c�Ƿ�Ϊ����ĸ���ַ����磺('')��('\t')��('\r')��('\n')��('\v')��('\f')
					{
						inword = 1;
						word++;
					}
					if (isspace(c) && inword)
						inword = 0;				
				}
				cout << "word is:" << word << endl;
				break;
			case 'c':
				while (ifile.get(c))
				{
					//if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
						character++;
				}
				cout << "character is:" << character << endl;
				break;
			case 's':
				while (ifile.get(c))
				{
					if ( c == '.'|| c== '?' )
						sentence++;
				}
				cout << "sentence is:" << sentence << endl;
				break;

		}

		ifile.close();
		ture = 0;
		
	}
	system("pause");
}

