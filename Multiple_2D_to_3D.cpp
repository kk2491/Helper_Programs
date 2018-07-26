#include <iostream>
using namespace std;

int main()
{
	double Data1[4][3] = {{3,2,1},{1,2,5},{6,7,8},{1,2,2}};;
	double Data2[4][3] = {{3,2,2},{2,2,2},{6,6,6},{1,2,2}};;
	double Data[10][10][10] = {0X00};

	int temp1 = 0;

	for(int i = 0; i <=3; i++)
	{
		for(int j=0; j<=2; j++)
		{
			Data[temp1][i][j] = Data1[i][j];
		}
	}

	temp1 = 1;
	for(int i = 0; i <=4; i++)
	{
		for(int j=0; j<=3; j++)
		{
			Data[temp1][i][j] = Data2[i][j];
		}
	}

	for(int i =0; i <=1; i++)
	{
		for(int j =0; j <=3; j++)
		{
			for(int k = 0; k <=3; k++)
				cout << Data[i][j][k]<<endl;
		}

	}
			
}
