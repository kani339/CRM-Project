#include "Headers.h"


#include <fstream>
#include <ctime>
#include <iomanip>
#include <chrono> 
#include <string>
#include <cctype>

using namespace std;
using namespace System;
using namespace System::Windows::Forms;



Customer_Struct *fileOutput(int *customerCount)
{
	ifstream readFile;
	readFile.open("mystring.data", ios::binary);
	if (!readFile) {
		MessageBox::Show("Couldn't open file!");
	}
	else {

		readFile.seekg(0, ios::end);
		int size = readFile.tellg();
		int count = size / sizeof(Customer_Struct);
		readFile.seekg(0, ios::beg);
		Customer_Struct *customer_struct = new Customer_Struct[count];
		readFile.read((char*)customer_struct, count * sizeof(Customer_Struct));
		readFile.close();

		*customerCount = count;
		return customer_struct;
	}
}


CoWorker *workerOutput(int *workerCount) {
	ifstream readFile;
	readFile.open("coworker.data", ios::binary);
	if (!readFile) {
		MessageBox::Show("Couldn't open file!");

	}
	else {

		readFile.seekg(0, ios::end);
		int size = readFile.tellg();
		int count = size / sizeof(CoWorker);
		readFile.seekg(0, ios::beg);
		CoWorker *co_worker = new CoWorker[count];
		readFile.read((char*)co_worker, count * sizeof(CoWorker));
	
		*workerCount = count;
		return co_worker;

		}
}