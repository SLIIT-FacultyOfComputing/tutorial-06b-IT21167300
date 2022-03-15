class Student {
  // private section
private:
  //    int studentId
  int studentID;
  //    name <- 20 charcters
  char name[20];  
  // public section
public:
  //    assignDetails() method declaration
  void assignDetails(int pid, const char pname[20]);
  //    display() method declaration
  void display();
};
