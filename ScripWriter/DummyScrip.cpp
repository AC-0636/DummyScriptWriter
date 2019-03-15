#include <iostream>
#include <fstream>
using namespace std;


//degrib -in "InputData/sn.0000.bin" -C -out "OutputData/0000"
int i;
int main()
{
	//ofstream out_data("CIPscrip.txt");
	ofstream out_data("DecodeCIP.bat");
	out_data << "cd .." << endl;
	out_data << "cd degrib" << endl;
	for (i=0;i<101;i++)
	{
		if (i == 100)
		{
			out_data << "degrib -in " << (char)34 << "InputData/sn.0" << i << ".bin" << (char)34 << " -C -out " << (char)34 << "OutputData/0" << i << (char)34 << endl;
		}
		else if (i < 10)
		{
			out_data << "degrib -in " << (char)34 << "InputData/sn.000" << i << ".bin" << (char)34 << " -C -out " << (char)34 << "OutputData/000" << i << (char)34 << endl;
		}
		else
		{
			out_data << "degrib -in " << (char)34 << "InputData/sn.00"<< i << ".bin" << (char)34 << " -C -out " << (char)34 << "OutputData/00" << i << (char)34 << endl;
		}

		
	}

	return 0;
}