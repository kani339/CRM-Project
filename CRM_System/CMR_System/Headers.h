#ifndef Headers_H
#define Headers_H

struct Customer_Struct {
	char customerName[50];
	char customerSurname[50];
	char customerPhone[50];
	char customerNotes[250];
	char customerEmail[30];
};


struct CoWorker {
	char co_name[90];
	double co_salary;
	char co_phone[90];
	char co_email[90];
	char co_position[90];
};


Customer_Struct *fileOutput(int *customerCount);
CoWorker *workerOutput(int *workerCount);

#endif
