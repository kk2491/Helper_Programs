#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <stdint.h>

using namespace std;

bool getParam(string p_strline, double* Data)
{

	unsigned char start = 0;
	unsigned char j = 0;
	bool ret = true;

	for(unsigned char i = 0; i < p_strline.length(); i++)
	{
		if((p_strline.c_str()[i] == ';'))
		{
			string str = p_strline.substr(start, (i - start));
			if(str.length() == 0)
			{
				ret = false;
			
			}else
			{
				Data[j++] = atof(str.c_str());
				//cout << atof(str.c_str())<<endl;
			}
			start = i + 1;
		}
		
	}
}

int main(void)
{
	string line;
	unsigned char row_index = 0;
	double Data1[10][4] = {0X00};
	double Data2[10][4] = {0X00};
	double Data3[10][4] = {0X00};
	double Data4[10][4] = {0X00};
	
	int row_index1 = 0; 
	int row_index2 = 0;
	int row_index3 = 0;
	int row_index4 = 0;	
	
	ifstream mapfile1 ("Data1.csv");
	if(mapfile1.is_open())
	{
		cout << "Contro inside" << endl;		
		while(getline (mapfile1, line) && line.length() > 0 )
		{	
			cout << line << endl;
			getParam(line, Data1[row_index1]);
			row_index1++;
		}
	}
	mapfile1.close();

	ifstream mapfile2 ("Data2.csv");
	if(mapfile2.is_open())
	{
		while(getline (mapfile2, line) && line.length() > 0 )
		{	
			cout << line << endl;
			getParam(line, Data2[row_index2]);
			row_index2++;
		}
	
	}
	mapfile2.close();

	ifstream mapfile3 ("Data3.csv");
	if(mapfile3.is_open())
	{
		while(getline (mapfile3, line) && line.length() > 0 )
		{	
			cout << line << endl;
			getParam(line, Data3[row_index3]);
			row_index3++;
		}
	}
	mapfile3.close();


	ifstream mapfile4 ("Data4.csv");
	if(mapfile4.is_open())
	{
		while(getline (mapfile4, line) && line.length() > 0 )
		{	
			cout << line << endl;
			getParam(line, Data4[row_index4]);
			row_index4++;
		}
	
	}	
	mapfile4.close();

	for(int temp1 = 0; temp1 < row_index1; temp1++)
		for(int temp2 = 0; temp2 < 3; temp2++)
			cout << Data1[temp1][temp2] << endl;

	for(int temp1 = 0; temp1 < row_index2; temp1++)
		for(int temp2 = 0; temp2 < 3; temp2++)
			cout << Data2[temp1][temp2] << endl;

	for(int temp1 = 0; temp1 < row_index3; temp1++)
		for(int temp2 = 0; temp2 < 3; temp2++)
			cout << Data3[temp1][temp2] << endl;

	for(int temp1 = 0; temp1 < row_index4; temp1++)
		for(int temp2 = 0; temp2 < 3; temp2++)
			cout << Data4[temp1][temp2] << endl;


}
