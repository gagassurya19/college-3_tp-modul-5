#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include <iostream>

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;

typedef int infotype;
typedef struct elmlist *adr;

struct elmlist {
    infotype info;
    adr next;
};

struct List {
    adr first;
};


int selectMenu_1301223164();
void clearScreen_1301223164();
adr allocate_1301223164(infotype x);
void createList_1301223164(List &L);
void insertLast_1301223164(List &L, adr P);
void printInfo_1301223164(List L);
adr findMax_1301223164(List L);
void showMiddle_1301223164(List L);

#endif // MENU_H_INCLUDED
