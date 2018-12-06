#include"contacts.h"

void menu()
{
	printf("****contacts*********************\n");
	printf("****** 1.add      2.delete ******\n");
	printf("****** 3.serach   4.update ******\n");
	printf("****** 5.list     6.emplty ******\n");
	printf("****** 7.qsort    0. exit  ******\n");
	printf("***please select:>***************\n");

}
void enterPeople(people_p p)
{
	printf("Please Enter Your Name: ");
	scanf("%s", p->name);

	printf("Please Enter Your Sex: ");
	scanf("%s", p->sex);

	printf("Please Enter Your Age: ");
	scanf("%d", &(p->age));

	printf("Please Enter Your Telphone: ");
	scanf("%s", p->telphone);

	printf("Please Enter Your Address: ");
	scanf("%s", p->address);
}
void entername(name)
{
	printf("Please Enter Name: ");
	scanf("%s",name);
}
int main()
{
	int i = 0;
	people_t p;
	contact_t ct_={3,0};
	contact_p ct = &ct_;
	char name[20] = {0};


	do{
		menu();
		scanf("%d",&i);
		
		switch(i)
		{
			case 1: 
				enterPeople(&p);
				add(&ct,&p);
				break;
			case 2:
				entername(name);
				delete1(ct,name);
				break;
			case 3:
				entername(name);
				serach(ct,name);
				break;
			case 4:
				entername(name);
				update(ct,name);
				break;
			case 5:
				list(ct);
				break;
			case 6:
				emplty(ct);
				break;
			case 7:
				qsort_(ct);
				break;
			case 0:
				break;
			default:
				break;
		}
		
		}while(i);

	return 0;

}