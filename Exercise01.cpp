#include <iostream>
#include "Student.h"
using namespace std;
class Student{
  private:
    int studentid;
    char name[50];
  public:
    void asignDetails();
    void display();
}
int main() {
  
// == DO NOT CHANGE THE MAIN PROGRAM =================
   Student mystd;
   mystd.assignDetails(1212, "Amalinga");
   mystd.display();
//==========================
   return 0;
}

