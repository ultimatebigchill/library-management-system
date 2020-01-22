#include <iostream>
#include <cstdlib>
using namespace std;

// Function Being Used in This Program
int mainScreen();
int bookAddWizard();
void programName();
void clear_screen();

// Main Function
int main() {
  if (mainScreen() == 10) {
    cout << "Process Exited" << '\n';
  } else {
    // We Will Use This Sometime Later
  }
  return 0;
}

void clear_screen() {
  #ifdef _WIN32
  std::system("cls");
  #else
    // Assume POSIX
    std::system ("clear");
  #endif
}

void printProgramName() {
  cout << "UOS Library Management System\n\n";
}

int mainScreen() {
  char choice;

  printProgramName();
  cout << '\n' << "Press option Key to activate the required function." << '\n';
  cout << "------------------------------------------------------------------------" << '\n';
  cout << "\t(0) Add New Book (Total # of Books = 105)" << endl;
  cout << "\t(1) Edit Book" << endl;
  cout << "\t(2) Delete Book" << endl;
  cout << "\t(3) Search Book" << endl;
  cout << "\t(4) Add Library User (Total # of Users = 32)" << endl;
  cout << "\t(5) Edit Library User" << endl;
  cout << "\t(6) Delete Library User" << endl;
  cout << "\t(7) Search Library User" << endl;
  cout << "\t(8) Issue Book (Total # of Issued Books = 12)" << endl;
  cout << "\t(9) Delete Issued Book" << endl;
  cout << "------------------------------------------------------------------------" << '\n';
  cout << "Enter Choice (q to quit): ";
  cin >> choice;

  if (choice == '0' || choice == '1' || choice == '2' || choice == '3' || choice == '4' || choice == '5' || choice == '6' || choice == '7' || choice == '8' || choice == '9') {
    // Here We Need Switch Statements to Call Respective Functions
  } else if (choice == 'q') {
    return 10;
  } else {
    clear_screen();
    cout << "Please Enter Correct Value !" << '\n';
    mainScreen();
  }
  return 0;
}

struct Book {
  char name[50];
  char isbn[50];
  char publisherName[50];
  char authorName[50];
  char numberOfCopies[50];
  char dateOfIssue[50];
};

int bookAddWizard() {
  printProgramName();
  cout << "Add New Book (Please add required information in the appropriate fields)" << '\n';
  cout << "------------------------------------------------------------------------" << '\n';
  Book newBook;
  cout << "BookName: ";
  cin >> newBook.name;
// Book Name: C++ Programming
// Book ISBN Number: 123456
// Publisher Name: MIT
// Author Name: Dietel & Dietel
// Number of Copies: 6
// Date of Issue: 12-03-1999
// Do you want to add book information (Y/N): Y
// ----------------------------------------------------------------------------------------------------------
return 0;
}
