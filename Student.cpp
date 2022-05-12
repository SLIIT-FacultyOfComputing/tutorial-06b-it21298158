#include "Student.h"
#include <iostream>

// Assign studentId and name
Student::assignDetails(int sId,char Name) {
  studentId=sId;
  name[20]=Name;
}

// Display StudentId and Name
Student::display() {
  display(sId,Name);
}
