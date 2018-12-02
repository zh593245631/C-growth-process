#ifndef __contacts_h__
#define __contacts_h__
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<malloc.h>
#include<stdlib.h>
#define CONTACT_FILE "contact.txt"
#define INIT 1

#define NAME_SIZE 32
#define TEL_SIZE 16
#define ADDR_SIZE 128
#define SEX_SIZE 8

typedef struct people{
	char name[NAME_SIZE];
	char sex[SEX_SIZE];
	unsigned char age;
	char telphone[TEL_SIZE];
	char address[ADDR_SIZE];
}people_t, *people_p, **people_pp;

typedef struct contact{
	int cap;
	int size;
	people_t peoples[0];
}contact_t, *contact_p, **contact_pp;

void add(contact_pp ct, people_p p);
void delete1(contact_p ct,const char* name);
void serach(contact_p ct,const char* name);
void update(contact_p ct,char* name);
void list(contact_p ct);
void emplty(contact_p ct);
void qsort_(contact_p ct);








#endif