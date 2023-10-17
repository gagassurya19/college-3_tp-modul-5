#include "menu.h"
#include <iostream>

using namespace std;

int selectMenu_1301223164() {
  cout << "1. Menambbah N data baru" << endl;
  cout << "2. Menampilkan semua data" << endl;
  cout << "3. Find Max" << endl;
  cout << "4. Show Middle" << endl;
  cout << "0. Exit" << endl;

  cout << "Masukkan menu: ";
  int input = 0;
  cin >> input;

  return input;
}

// Function to clear the terminal screen
void clearScreen_1301223164() {
#ifdef _WIN32 // Windows
  system("cls");
#else
  system("clear"); // Mac/linux
#endif
}
