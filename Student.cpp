#include "Student.h"
#include <iostream>
#include <string.h>
#include <stdio.h>

// Assign studentId and name
void Student::assignDetails(int pid, const char pname[20]) {
    studentID = pid;
    strcpy(name,pname);
  }
// Display StudentId and Name
void Student::display() {
  std::cout << "StudentID: " << studentID <<std::endl;
  std::cout << "Student Name: " << name;
}
