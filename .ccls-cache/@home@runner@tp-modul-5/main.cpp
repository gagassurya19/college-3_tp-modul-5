#include "menu.h"
#include <iostream>

using namespace std;

int main() {
  int option, data;
  List L;
  adr p, fMax;
  createList_1301223164(L);

  do {
    clearScreen_1301223164();
    option = selectMenu_1301223164();
    switch (option) {
    case 1:
      int i, dataInput;
      i = 1;
      cout << "Jumlah data yang ingin diinput: ";
      cin >> dataInput;
      while (i <= dataInput) {
        cout << "Masukkan data ke-" << i << ": ";
        cin >> data;
        p = allocate_1301223164(data);
        insertLast_1301223164(L, p);
        i++;
      }
      break;
    case 2:
      cout << "Menampilkan isi list" << endl;
      printInfo_1301223164(L);
      break;
    case 3:
      fMax = findMax_1301223164(L);
      cout << "Alamat: " << fMax << endl;
      cout << "Nilai: " << info(fMax) << endl;
      break;
    case 4:
      showMiddle_1301223164(L);
      break;
    case 0:
      cout << "Exiting the program." << endl;
      break;
    default:
      cout << "Invalid option. Please select a valid option." << endl;
    }
    cout << "Press Enter to continue...";
    cin.ignore();
    cin.get();
  } while (option != 0);

  return 0;
}
