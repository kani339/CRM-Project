#ifndef Headers_H
#define Headers_H

struct Customer_Struct {
	char customerName[50];
	char customerSurname[50];
	char customerPhone[50];
	char customerNotes[250];
	char customerEmail[30];
	char workingWith[50];
	int customerId;
};


struct CoWorker {
	char co_name[90];
	double co_salary;
	char co_phone[90];
	char co_email[90];
	char co_position[90];
};

struct Login {
	char username[90];
	char password[90];
};


Customer_Struct *fileOutput(int *customerCount);
CoWorker *workerOutput(int *workerCount);

#endif
