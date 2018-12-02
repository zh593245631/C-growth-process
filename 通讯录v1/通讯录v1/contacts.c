#include"contacts.h"

static void Log(const char* level, const char* msg)
{
	assert(level&&msg);
	printf("%s\n%s\n",level,msg);
}
static int namecmp(const char* a,const char*b)
{
	people_p a1 = (people_p)a;
	people_p b1 = (people_p)b;
	assert(a&&b);
	return strcmp(a1->name, b1->name);
}

void add(contact_pp ct, people_p p)
{
	assert(ct);
	assert(p);
	if((*ct)->cap==(*ct)->size)
	{
		Log("WARRING","Contact is Full");
		return;
	}
	memcpy(&(((*ct)->peoples)[(*ct)->size]), p, sizeof(people_t));
	
	((*ct)->size)++;
	Log("INFO", "Add People To Contact Success!");
}
void delete1(contact_p ct,const char* name)
{
	
	int i = 0;
	assert(ct&&name);
	for(i = 0; i<(ct->size); i++)
	{
		if(!strcmp((ct->peoples[i]).name,name))
		{
			memcpy(&(ct->peoples[i]),&(ct->peoples[ct->size-i]),sizeof(people_t));
			(ct->size)--;
			Log("INFO","Delete people success");
		}

	}
}
void showpeople(people_p p)
{
	assert(p);
	printf("|%-12s|%-4s|%-3d|%-11s|%-11s|\n",p->name,p->sex,p->age,\
		p->telphone,p->address);
}
void serach(contact_p ct,const char* name)
{
	int i = 0;
	assert(ct&&name);
	for(i = 0; i<(ct->size); i++)
	{
		if(!strcmp((ct->peoples[i]).name,name))
		{
			showpeople(&(ct->peoples[i]));
			Log("INFO","Serach people success");
		}

	}
}
void updatepeople(people_p p)
{
	char tel[15] = {0};
	assert(p);
	printf("please Enter telphone:");
	scanf("%s",tel);
	strcpy(p->telphone,tel);

}
void update(contact_p ct,char* name)
{
	int i = 0;
	assert(ct&&name);
	for(i = 0; i<(ct->size); i++)
	{
		if(!strcmp((ct->peoples[i]).name,name))
		{
			updatepeople(&(ct->peoples[i]));
			Log("INFO","update people success");
		}

	}
}
void list(contact_p ct)
{
	int i = 0;
	assert(ct);
	for(i = 0; i<(ct->size); i++)
	{
		showpeople(&(ct->peoples[i]));
	}
}
void emplty(contact_p ct)
{
	assert(ct);
	ct->size = 0;
}
void qsort_(contact_p ct)
{
	assert(ct);
	qsort(ct->peoples,ct->size,sizeof(people_t),namecmp);
	Log("INFO","qsort done....");
}



