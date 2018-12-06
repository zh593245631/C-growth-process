#include "contact.h"

static void Log(const char *level_, const char *msg_)//INFO, WARNING, ERROR
{
	assert(level_);
	assert(msg_);
	printf("%s : %s\n", level_, msg_);
}
//if Full return 1, else return 0;
static int isContactFull(contact_p ct_)
{
	assert(ct_);
	return ct_->cap == ct_->size ? 1 : 0;
}
//if Empty return 1, else return 0;
static int isContactEmpty(contact_p ct_)
{
	assert(ct_);
	return ct_->size == 0 ? 1 : 0;
}
static void showPeople(people_p p_)
{
	assert(p_);
	printf("------------------------------------------------------------\n");
	printf("| %-8s| %-3c| %-3d| %-13s| %-22s|\n", \
		p_->name, p_->sex, p_->age, p_->telphone, p_->address);
}
static int nameCompare(const void *p1, const void *p2)
{
	assert(p1);
	assert(p2);
	people_p p1_ = (people_p)p1;
	people_p p2_ = (people_p)p2;
	return strcmp(p1_->name, p2_->name);
}
//success 1, else 0
int Inc(contact_pp ct_)
{
	assert(ct_);
	int cap_ = (*ct_)->cap * 2;
	int new_size = (*ct_)->cap * 2 * sizeof(people_t) + sizeof(contact_t);
	contact_p p = (contact_p)realloc(*ct_, new_size);
	if (p != NULL){
		p->cap = cap_;
		*ct_ = p;
		return 1;
	}
	Log("WARNING", "inc memory failed!");
	return 0;
}

contact_p initContact()
{
		contact_p ct = (contact_p)malloc(sizeof(contact_t)+INIT * sizeof(people_t));
		if (ct == NULL){
			Log("ERROR", "malloc error");
			return NULL;
		}
		ct->cap = INIT;
		ct->size = 0;
		return ct;

}

void addPeople(contact_pp ct_, people_p p_)
{
	assert(ct_);
	assert(p_);

	if (isContactFull(*ct_)){
		Log("INFO", "Contact Full! Begin Inc!");
		if (Inc(ct_)){
			Log("INFO", "Increament Success!");
		}
		else{
			Log("WARNING", "Increament Failed!");
			return;
		}
	}
	memcpy(&(((*ct_)->peoples)[(*ct_)->size]), p_, sizeof(people_t));
	((*ct_)->size)++;
	Log("INFO", "Add People To Contact Success!");
}
void deletePeople(contact_p ct_, const char *name_)
{
	assert(ct_);
	assert(name_);

	if (isContactEmpty(ct_)){
		Log("WARNING", "Contact Is Empty, Deny Delete");
		return;
	}

	int i_ = 0;
	for (; i_ < ct_->size; i_++){
		if (strcmp((ct_->peoples[i_]).name, name_) == 0)
		{
			memcpy(&(ct_->peoples[i_]), &(ct_->peoples[ct_->size - 1]),\
				sizeof(people_t));
			ct_->size--;
			Log("INFO", "Delete Peoele Success");
			return;
		}
	}
}
void update(people_p p)
{
	char tel[15] = { 0 };

	assert(p);

	printf("please Enter telphone:");

	scanf("%s", tel);

	strcpy(p->telphone, tel);
}
void updatePeople(contact_p ct, char* name)
{
	int i = 0;

	assert(ct&&name);

	for (i = 0; i<(ct->size); i++)

	{

		if (!strcmp((ct->peoples[i]).name, name))

		{

			update(&(ct->peoples[i]));

			Log("INFO", "update people success");

		}



	}
}
void searchPeople(contact_p ct_, const char *name_)
{
	assert(ct_);
	assert(name_);
	int i_ = 0;
	for (; i_ < ct_->size; i_++){
		if (strcmp((ct_->peoples[i_]).name, name_) == 0){
			showPeople(&(ct_->peoples[i_]));
		}
	}
	Log("INFO", "...Search Done!");
}
void listPeople(contact_p ct_)
{
	assert(ct_);

	int i_ = 0;
	printf("|   姓名  |性别|年龄|     电话     |       地址            |\n");
	for (; i_ < ct_->size; i_++)
	{
		showPeople(&(ct_->peoples[i_]));
	}
}
void clearContact(contact_p ct_)
{
	assert(ct_);
	ct_->size = 0;
	Log("INFO", "...Clear Contact Done!");
}
void sortContact(contact_p ct_)
{
	assert(ct_);
	qsort(ct_->peoples, ct_->size, sizeof(people_t), nameCompare);
	Log("INFO", "...Sort Contact Done!");
}
void destoryContact(contact_p ct)
{
	free(ct);
	Log("INFO", "...Destory Contact Done!");
}