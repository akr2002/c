/* Reaidng a random access file sequentially */

#include <stdio.h>

/* clientData structure definition */
struct clientData
{
	int acctNum;	/* account number */
	char lastName[15];	/* account last name */
	char firstName[10];	/* account first name */
	double balance;	/* account balance */
};

int main()
{
	FILE *cfPtr;

	/* create clientData with defualt information */
	struct clientData client = { 0, "", "", 0.0 };

	if ((cfPtr = fopen("credit.dat", "rb")) == NULL)
	{
		printf("File could not be opened.\n");
	}
	else
	{
		printf("%-6s%-16s%-11s%10s\n", "Acct", "Last Name", "First Name", "Balance");

		/* read all records from file (unitl eof) */
		while (!feof(cfPtr))
		{
			fread(&client, sizeof(struct clientData), 1, cfPtr);

			/* display record */
			if (client.acctNum != 0)
			{
				printf("%-6d%-16s%-11s%10.2f\n", client.acctNum, client.lastName, client.firstName, client.balance);
			}
		}

		fclose(cfPtr);
	}

	return 0;
}

