

// // ###Simple example of how classes are used
// #include "iostream"
// using namespace std;
// class Employee
// {       // This classes dont represent data but they represent blueprint
// public: // remember that all the datatype are private by default in a class so we have to specify public here
//     string name;
//     string company;
//     int age;
//     int salary;

//     void getinfo()
//     {
//         cout << "The name of the employee is " << this->name << endl;
//         cout << "The company of the employee is " << this->company << endl;
//         cout << "The age of the employee is " << this->age << endl;
//         cout << "The salary of the employee is " << this->salary << " rupees" << endl;
//     }
// };
// int main()
// {
//     Employee employee1;
//     employee1.name = "Gauransh Singh";
//     employee1.company = "Microsoft";
//     employee1.age = 22;
//     employee1.salary = 1800000;
//     employee1.getinfo();
//     cout << endl;
//     Employee employee2;
//     employee2.name = "Suneet Batty";
//     employee2.company = "Hindustan Petroleum Corporation Limited";
//     employee2.age = 51;
//     employee2.salary = 5000000;
//     employee2.getinfo();
//     cout << endl;
//     Employee employee3;
//     employee3.name = "Ekta Singh";
//     employee3.company = "St.Xaviers High Secondary School";
//     employee3.age = 47;
//     employee3.salary = 1000000;
//     employee3.getinfo();
// }







// // ###using Encapsulators
// #include "iostream"
// using namespace std;
// class Employee
// {                // This classes dont represent data but they represent blueprint
//     string name; // remember that all the datatype are private by default in a class so we don't have to specify private here
//     string company;
//     int age;
//     int salary;

// public:
//     Employee(string n, string c, int a, int s)
//     { // since the templates are private now thus we have to make functions to access them
//         name = n;
//         company = c;
//         age = a;
//         salary = s;
//     }
//     void printinfo()
//     {
//         cout << "The name of the employee is " << this->name << endl;
//         cout << "The company of the employee is " << this->company << endl;
//         cout << "The age of the employee is " << this->age << endl;
//         cout << "The salary of the employee is " << this->salary << " rupees" << endl;
//     }
// };
// int main()
// {
//     Employee employee1 = Employee("Gauransh Singh", "Microsoft", 22, 1800000);
//     employee1.printinfo();
//     cout << endl;
//     Employee employee2 = Employee("Suneet Batty", "Hindustan Petroleum Corporation Limited", 51, 5000000);
//     employee2.printinfo();
//     cout << endl;
//     Employee employee3 = Employee("Ekta Singh", "St.Xaviers High Secondary School", 47, 1000000);
//     employee3.printinfo();
// }







// // ###using Encapsulators
// #include "iostream"
// using namespace std;
// class Employee
// {                // This classes dont represent data but they represent blueprint
//     string name; // remember that all the datatype are private by default in a class so we don't have to specify private here
//     string company;
//     int age;
//     int salary;

// public:
//     void setname(string n)
//     { // since the templates are private now thus we have to make functions to access them
//         name = n;
//     }
//     string getname()
//     {
//         return name;
//     }
//     void setcompany(string s)
//     {
//         company = s;
//     }
//     string getcompany()
//     {
//         return company;
//     }
//     void setage(int a)
//     {
//         if (age >= 18)
//             ;
//         age = a;
//     }
//     int getage()
//     {
//         return age;
//     }
//     void setsalary(int s)
//     {
//         salary = s;
//     }
//     int getsalary()
//     {
//         return salary;
//     }
//     void printinfo()
//     {
//         cout << "The name of the employee is " << this->name << endl;
//         cout << "The company of the employee is " << this->company << endl;
//         cout << "The age of the employee is " << this->age << endl;
//         cout << "The salary of the employee is " << this->salary << " rupees" << endl;
//     }
// };
// int main()
// {
//     Employee emp1; // this is just a decleration
//     Employee emp2; // this is just a declaration that we are using a different class called emp2
//     emp1.setname(" Gauransh Singh ");
//     emp1.getname();
//     emp2.setname(" Varsha Singh ");
//     emp2.getname();
//     emp1.setcompany("Microsoft");
//     emp1.getcompany();
//     emp2.setcompany(" CA firm");
//     emp2.getcompany();
//     emp1.setage(25);
//     emp1.getage();
//     emp2.setage(13);
//     emp2.getage();
//     emp1.setsalary(1800000);
//     emp1.getsalary();
//     emp2.setsalary(1300000);
//     emp2.getsalary();
//     emp1.printinfo();
//     cout << endl;
//     emp2.printinfo();
// }







// // ###   ABSTRACTION for OOPS (Slightly complex thus reade all the comments properly)
// #include "iostream"
// using namespace std;
// class abstractemployee
// {
//     virtual void askforpromotion() = 0;
// };
// class Employee : abstractemployee
// {                // This shows that employee has to use abstrct funtion compulsorily(since it is inheriting properties from the abstract class)
//     string name; // Thus the user cant use the datatypes unless the function of abstration for promotion is already used
//     string company;
//     int age;
//     int salary;

// public:
//     void askforpromotion()
//     {
//         if (age >= 30)
//         {
//             cout << name << " Deserves a promotion" << endl;
//         }
//         else
//         {
//             cout << name << " Sorry, no promotion for you " << endl;
//         }
//     }
//     Employee(string n, int a)
//     { // since the templates are private now thus we have to make functions to access them
//         name = n;
//         age = a;
//     }
// };
// int main()
// {
//     Employee emp1 = Employee("Gauransh Singh", 22);
//     Employee emp2 = Employee("Suneet Batty", 51);
//     Employee emp3 = Employee("Ekta Singh", 47);
//     cout << endl;
//     cout << "Promotion list!" << endl;
//     emp1.askforpromotion();
//     emp2.askforpromotion();
//     emp3.askforpromotion();
// }







// // ###   ABSTRACTION for OOPS (Slightly complex thus reade all the comments properly)
// #include "iostream"
// using namespace std;
// class abstractemployee
// {
//     virtual void askforpromotion() = 0;
// };
// class Employee : abstractemployee// This shows that employee has to use abstrct funtion compulsorily
// {
//     string name; // Thus the user cant use the datatypes unless the function of abstration for promotion is already used
//     string company;
//     int age;
//     int salary;

// public:
//     void askforpromotion()
//     {
//         if (age >= 30)
//         {
//             cout << name << " Deserves a promotion" << endl;
//         }
//         else
//         {
//             cout << name << " Sorry, no promotion for you " << endl;
//         }
//     }
//     Employee(string n, int a)
//     {   // since the templates are private now thus we have to make functions to access them
//         name = n;
//         age = a;
//     }
// };
// int main()
// {
//     Employee emp1 = Employee("Gauransh Singh", 22);
//     Employee emp2 = Employee("Suneet Batty", 51);
//     Employee emp3 = Employee("Ekta Singh", 47);
//     cout << endl;
//     cout << "Promotion list!" << endl;//program also works without the askforfuntion function being run coz its just compulsory to have the function but not to run it
// }







// // ###  Inheritance for OOPS (Highly Complex thus reade all the comments properly)
// #include "iostream"
// using namespace std;
// class abstractemployee
// {
//     virtual void askforpromotion() = 0;
// };
// class Employee : public abstractemployee // This shows that employee has to have abstrct funtion compulsorily
// {
// protected:
//     string name; // Thus the user cant use the datatypes unless the function of abstration for promotion is already used
//     int age;
// public:
//     void askforpromotion()
//     {
//         if (age >= 30)
//         {
//             cout << name << " Deserves a promotion" << endl;
//         }
//         else
//         {
//             cout << name << " Sorry, no promotion for you " << endl;
//         }
//     }
//     Employee(string n, int a)//this is a function to fill up the name and age of the employee(its very easy to use thus called abstraction)
//     { // since the templates are protected now thus we have to make functions to access them
//         name = n;
//         age = a;
//     }
// };
// class student : public Employee//this makes the new class student an inheritance of employee and thus it also has the components of employee in it like name and age
// {
//     string favlanguage;

// public:
//     student(string name, int age, string favlanguage) : Employee(name, age), favlanguage(favlanguage) {}//this is how the function of student is inherited from employee classe's function(function inheritance not class inheritance)
//     void printinfo()//this is a function associated with class of student to exhibit printing of favourite language
//     {
//         cout << "The favourate language of " << name << " is " << favlanguage << endl;
//     }
// };
// class engineers : public Employee//###this is the second class of the programme so don't get confused in this
// {
// public:
//     string branch;
//     engineers(string name, int age, string branch) : Employee(name, age), branch(branch) {}
//     void printinfo()
//     {
//         cout << "The branch of Mr." << name << " is " << branch << endl;
//     }
// };
// int main()
// {
//     student gauransh("Gauransh Singh", 18, "c++");
//     gauransh.printinfo();
//     gauransh.askforpromotion();
//     engineers gauransh69("Gauransh Singh", 22, "Computer science engineering");
//     gauransh69.printinfo();
//     gauransh69.askforpromotion();
//     return 0;
// }







// // ###  Inheritance for OOPS (Slightly complex thus reade all the comments properly)
// #include "iostream"
// using namespace std;
// class abstractemployee
// {
//     virtual void askforpromotion() = 0;
// };
// class Employee : public abstractemployee // This shows that employee has to use abstrct funtion compulsorily
// {
// protected://both protected and public can be used here, protected can be used since it can't be accessed directly in the main programe but it can be accesed in the funciton string
//     string name; // Thus the user cant use the datatypes unless the function of abstration for promotion is already used
//     int age;
// public:
//     void askforpromotion()
//     {
//         if (age >= 30)
//         {
//             cout << name << " Deserves a promotion" << endl;
//         }
//         else
//         {
//             cout << name << " Sorry, no promotion for you " << endl;
//         }
//     }
//     Employee(string n, int a)//this is a function to fill up the name and age of the employee(its very easy to use thus called abstraction)
//     { // since the templates are private now thus we have to make functions to access them
//         name = n;
//         age = a;
//     }
//     public:
//     void printinfo(){
//         cout<<"The name of the employee is "<<this->name<<" and his age is "<<this->age<<endl;
//     }
// };
// class student : private Employee//this makes the new class student an inheritance of employee and thus it also has the components of employee in it like name and age
// {
//     string favlanguage;

// public:
//     student(string name, int age, string favlanguage) : Employee(name, age), favlanguage(favlanguage) {}//this is how the function of student is transfered to employee
//     void printinfo()//this is a function associated with class of student to exhibit printing of favourite language
//     {
//         cout << "The favourate language of " << name << " is " << favlanguage << endl;
//     }
// };
// class engineers : private Employee//###this is the second class of the programme so don't get confused in this
// {
// public:
//     string branch;
//     engineers(string name, int age, string branch) : Employee(name, age), branch(branch) {}
//     void printinfo()
//     {
//         cout << "The branch of Mr." << name << " is " << branch << endl;
//     }
// };
// int main()
// {
//     Employee gs69("Gauransh Singh",18);
//     gs69.printinfo();
//     gs69.askforpromotion();
//     student gauransh("Gauransh Singh", 18, "c++");
//     gauransh.printinfo();
//     // gauransh.askforpromotion();//program also works without the askforfuntion function being run coz its just compulsory to have the function but not to run it
//     engineers gauransh69("Gauransh Singh", 22, "Computer science engineering");
//     gauransh69.printinfo();
//     // gauransh69.askforpromotion();//
//     return 0;
// }







// ######POLYMORPHISM
// #####now the in the next 3 programmes the ##first 2 are just examples describing the need of polymorphism in the world of programming





 
// #include "iostream"
// using namespace std;
// class Employee
// {
// protected://both protected and public can be used here, protected can be used since it can't be accessed directly in the main programe but it can be accesed in the funciton string
//     string name;
//     int age;
// public:
//     Employee(string n, int a)//this is a function to fill up the name and age of the employee(its very easy to use thus called abstraction)
//     { // since the templates are private now thus we have to make functions to access them
//         name = n;
//         age = a;
//     }
//     public:
//     void work(){
//         cout<<name<<" is checking email,task backlog etc... at the age of "<<age<<endl;
//     }
// };
// class student : public Employee//this makes the new class student an inheritance of employee and thus it also has the components of employee in it like name and age
// {
//     string favlanguage;
// public:
//     student(string name, int age, string favlang) : Employee(name, age) {
//         this->favlanguage=favlang;
//     }//this is how the function of student is transfered to employee
//     public:
//     void work(){
//         cout<<name<<" is writing code in"<<favlanguage<<" at the age of "<<age<<endl;
//     }
// };
// class engineers : public Employee//###this is the second class of the programme so don't get confused in this
// {
// public:
//     string branch;
//     engineers(string name, int age, string branch) : Employee(name, age), branch(branch) {}
//     void work(){
//         cout<<name<<"is workinig is Google as a "<<branch<<" at the age of "<<age<<endl;
//     }
// };
// int main()
// {
//     Employee gauransh("Gauransh Singh",18);
//     gauransh.work();
//     student gauransh_18("Gauransh Singh", 18, "c++");
//     gauransh_18.work(); //here we are using direct access to the class of student thus the work funciton of student will be printed
//     engineers gauransh_22("Gauransh Singh", 22, "Computer science engineering");
//     gauransh_22.work(); //here we are using direct access to the class of branch thus the work funciton of branch will be printed
//     return 0;
// }







// // ##in the following code we are just using we are just using pointers of employee class just to make the funtion used by pointers give first priority to the funtions given in employee class
//  #include "iostream"
//  using namespace std;
//  class Employee
//  {
//  protected:
//      string name;
//      int age;
//  public:
//      Employee(string n, int a)
//      {
//          name = n;
//          age = a;
//      }
//      public:
//      void work(){//since void is not written here thus this funciton is executed in all classes but no attention is given to the similar named funciton in the inheriting classes thus all the classes are using the same employee funtion in the programs and are printing the same output of work         
//      cout<<name<<" is checking email,task backlog etc..."<<" at the age of "<<age<<endl;
//      }
//  };
//  class student : public Employee
//  {
//      string favlanguage;
//  public:
//      student(string name, int age, string favlanguage) : Employee(name, age), favlanguage(favlanguage) {}//favlanguage(favlanguage)can also be used since it is the syntax of C++
//      public:
//      void work(){
//          cout<<name<<" is writing code in"<<favlanguage<<" at the age of "<<age<<endl;
//      }
//  };
//  class engineers : public Employee//###this is the second class of the programme so don't get confused in this
//  {
//  public:
//      string branch;
//      engineers(string name, int age, string branch) : Employee(name, age), branch(branch) {}
//      void work(){
//          cout<<name<<"is workinig is Google as a "<<branch<<" at the age of "<<age<<endl;
//      }
//  };
//  int main()
//  {
//      Employee gauransh("Gauransh Singh",18);
//      gauransh.work();
//      student gauransh_18("Gauransh Singh", 18, "c++");
//      engineers gauransh_22("Gauransh Singh", 22, "Computer science engineering");
//      Employee *e1 = &gauransh_18;//we are declaring a pointer in the programme to access the variables as ##employee class(since we are using employee before *)
//      Employee *e2 = &gauransh_22;
//  //-> is used here instead of . since we are using pointers for the first time in the programme
//      e1->work();//right now since in the employee function virtual is not written ###(virtual checkes if the defined or inherited classes have a similar funciton or not and if it has then it will execute the updated fucniton in the class)
//      e2->work();//thus this will execute the function of employee class as the pointers are defined in employee class
//      return 0;
//  }







// // ###please read the comments int programme
// //  ###only difference between the previous code and this code is of virtual keyword in the programme
// // virtual checkes if the defined or inherited classes have a similar funciton or not and if it has then it will execute the updated fucniton in the class
// //  ###  POLYMORPHISM-this basically means that function behave in different ways based on context in the main programme and the main class that all the other classes are inheriting
// #include "iostream"
// using namespace std;
// class Employee
// {
// protected:
//     string name;
//     int age;

// public:
//     Employee(string n, int a)
//     {
//         name = n;
//         age = a;
//     }

// public:
//     virtual void work()//since we are using vitural here the function executed by the pointer would be the one that is redefined in the inheriting class
//     // virtual checkes if the defined or inherited classes have a similar funciton or not and if it has then it will execute the updated fucniton in the class
//     {
//         cout << name << " is checking email,task backlog etc..." << " at the age of " << age << endl;
//     }
// };
// class student : public Employee
// {
//     string favlanguage;

// public:
//     student(string name, int age, string favlanguage) : Employee(name, age), favlanguage(favlanguage) {}

// public:
//     void work()
//     {
//         cout << name << " is writing code in" << favlanguage << " at the age of " << age << endl;
//     }
// };
// class engineers : public Employee // ###this is the second class of the programme so don't get confused in this
// {
// public:
//     string branch;
//     engineers(string name, int age, string branch) : Employee(name, age), branch(branch) {}
//     void work()
//     {
//         cout << name << "is workinig is Google as a " << branch << " at the age of " << age << endl;
//     }
// };
// int main()
// {
//     Employee gauransh("Gauransh Singh", 18);
//     gauransh.work();
//     student gauransh_18("Gauransh Singh", 18, "c++");
//     engineers gauransh_22("Gauransh Singh", 22, "Computer science engineering");
//     Employee *e1 = &gauransh_18; // we are declaring a pointer in the programme to access the variables as employee class(since we are using employee before *)
//     Employee *e2 = &gauransh_22;
//     //-> is used here instead of . since we are using pointers for the first time in the programme
//     e1->work(); // now since in the employee function virtual is written ###(virtual checkes if the defined or inherited classes have a similar funciton or not and if it has then it will execute the updated fucniton in the class)
//     e2->work(); // thus this will execute the function of the defined class as the pointers are defined in employee class but the employee class uses vitrtual meaning it check for similare named function in the defined classes and if found then it will make it work
//     return 0;
// }





// //my own program(unfinished as yet)
// #include "iostream"
// int main(){
//     class employee{
//         public:
//         int salary;
//         void getinfo_1(int a){
//             salary =a;
//         }
//         void getsalary{
//             return salary;
//         }
// };
//     class private : employee{
//         int height;
//     }void getinfo_2(int salary,int height):employee(salary),height(height){}
//     void printfinfo_2
// }