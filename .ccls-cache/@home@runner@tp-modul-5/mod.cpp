#include "menu.h"
#include <iostream>

using namespace std;

void createList_1301223164(List &L) { first(L) = NULL; }

adr allocate_1301223164(infotype x) {
  adr p = new elmlist;
  info(p) = x;
  next(p) = NULL;

  return p;
}

void insertLast_1301223164(List &L, adr P) {
  adr x;

  if (first(L) == NULL) {
    first(L) = P;
  } else {
    x = first(L);
    while (next(x) != NULL) {
      x = next(x);
    }
    next(x) = P;
  }
}

void printInfo_1301223164(List L) {
  adr p = first(L);

  while (p != NULL) {
    cout << info(p) << " ";
    p = next(p);
  }
  cout << endl;
}

adr findMax_1301223164(List L) {
  adr p_max = first(L);
  adr p = next(p_max);

  while (p != NULL) {
    if (info(p) > info(p_max)) {
      p_max = p;
    }
    p = next(p);
  }
  return p_max;
}

void showMiddle_1301223164(List L) {
  adr akhir, tengah;
  int i, divResult, modResult, n, iMid;
  i = 0;
  n = 0;
  akhir = first(L);

  while (akhir != NULL) {
    i++;
    akhir = next(akhir);
  }

  divResult = i / 2;
  modResult = i % 2;
  iMid = divResult + modResult;
  tengah = first(L);

  while (n < iMid - 1) {
    tengah = next(tengah);
    n++;
  }
  cout << "Nilai tengah adalah: " << info(tengah) << endl;
}
