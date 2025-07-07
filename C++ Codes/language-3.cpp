
// #include "iostream"
// using namespace std;        //this line is used to avoid writing std for every command
// int main(){
//     cout<<"hellow world";
//     return 0;
// }

// #include "iostream"
// // using namespace std;        //if i comment this line out then i need to write(std::)before every command
// int main(){
//     std::cout<<"Fuck the world";          //c out means to print every thing in the out put
//     return 0;
// }

// #include "iostream"
// using namespace std;
// int main(){
//     cout<<"Fuck the world"<<endl;          //end l is used as(\n)in c its used to change the line of printing
//     cout<<"sorry about that";
//     return 0;
// }

// #include "iostream"
// using namespace std;
// int main(){
//     int a,b,c;
//     short sb=9;
//     cout<<"sb"<<endl;
//     cout<<sb;           //to use variable we never use ""
//     return 0;
// }

// we can write big names of variables and use type small forms to get suggestion by vs code compiler

// #include "iostream"
// using namespace std;
// int main(){
//     int marksinmaths=95;
//     cout<<"The marks scored by the student in maths = "<<marksinmaths;  //this is how we can print strings with variables in it
// }

// #include "iostream"
// using namespace std;
// int main(){
//     int marksinmaths=95;
//     cout<<"The marks scored by the student in maths = "<<marksinmaths<<endl<<"The performance is just about adequate";  //this is how we can print strings with variables in it
// }

// #include "iostream"
// using namespace std;
// int main(){
//     int const b=35;
//     b=36;                //this is showing an error since b is constant
//     cout<<"the value of b is unchangeble thus it gives an error"<<b;
// }

// #include "iostream"
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter the value of a : "<<endl;
//     cin>>a;
//     cout<<"Enter the value of a : "<<endl;
//     cin>>b;
//     cout<<"The value of a and b entered is "<<a<<","<<b;

//     return 0;
// }

// // The following is a calculator using c++
// #include "iostream"
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter the value of a: ";
//     cin>>a;
//     cout<<"Enter the value of b: ";
//     cin>>b;
//     cout<<"The sum of the entered number = "<<a+b<<endl;
//     cout<<"The difference of the entered number = "<<a-b<<endl;
//     cout<<"The product of the entered number = "<<a*b<<endl;
//     cout<<"The fraction of the entered number = "<<(float) a/b<<endl;  //This is done as the value of fractionis in decimal
//     return 0;
// }

// #include "iostream"
// using namespace std;
// int main()
// {
//     int age;
//     cout << "Enter the age: ";
//     cin >> age;
//     if (age >= 150 || age <= 0)
//     {
//         cout << "Invalid age" << endl;
//     }
//     else if (age >= 18)
//     {
//         cout << "You can vote!!" << endl;
//     }
//     else
//     {
//         cout << "you can't vote" << endl;
//     }
//     return 0;
// }

// #include "iostream"
// using namespace std;
// int main()
// {
//     int age;
//     cout << "Enter the age: ";
//     cin >> age;
//     switch (age)
//     {
//     case 7:
//         cout << "You should be studing in first standard" << endl;
//         break;
//     case 8:
//         cout << "You should be studing in second standard" << endl;
//         break;
//     case 9:
//         cout << "You should be studing in third standard" << endl;
//         break;
//     case 10:
//         cout << "You should be studing in forth standard" << endl;
//         break;
//     case 11:
//         cout << "You should be studing in fifth standard" << endl;
//         break;
//     case 12:
//         cout << "You should be studing in sixth standard" << endl;
//         break;
//     case 13:
//         cout << "You should be studing in seventh standard" << endl;
//         break;
//     case 14:
//         cout << "You should be studing in eighth standard" << endl;
//         break;
//     case 15:
//         cout << "You should be studing in ninth standard" << endl;
//         break;
//     case 16:
//         cout << "You should be studing in tenth standard" << endl;
//         break;
//     case 17:
//         cout << "You should be studing in eleventh standard" << endl;
//         break;
//     case 18:
//         cout << "You should be studing in twelfth standard" << endl;
//         break;
//     default:
//         cout << "Please enter a valid age for schooling" << endl;
//     }
//     return 0;
// }



// #include "iostream"
// using namespace std;
// int main(){
//     int index=0;
//     while(index<=10){
//         cout<<"We are at index number "<<index<<endl;
//         index = index +1;
//     }
//     return 0;
// }



// #include "iostream"
// using namespace std;
// int main(){
//     int index=69;
//     do{
//         cout<<"We are at index number "<<index<<endl;
//         index = index +1;
//     }while(index<=59);
//     return 0;
// }



// #include "iostream"
// using namespace std;
// int main(){
//     int index=0;
//     do{
//         cout<<"We are at index number "<<index<<endl;
//         index = index +1;
//     }while(index<=3456);
//     return 0;
// }


// #include "iostream"
// using namespace std;
// int main(){
//     int i;
//     for(i=1;i<=5;i++){
//         cout<<"The number of diamonds we have is= "<<i<<endl;
//     }
//     return 0;
// }

// #include "iostream"
// using namespace std;
// int sum(int a,int b){
//     int c;
//     c = a+b;
//     return c;
// }
// int main(){
//     int x,y;
//     cout<<"Enter  the first number: ";
//     cin>>x;
//     cout<<"Enter the second number: ";
//     cin>>y;
//     int result = sum(x,y);
//     cout<<"The sum of the entered number = "<<result<<endl;
//     return 0;
// }

// #include "iostream"
// using namespace std;
// int main(){
//     int marks[6];
//     for(int i=0;i<5;i++){
//         cout<<"Enter the marks of the student number "<<i+1<<" : ";
//         cin>>marks[i];
//     }
//     for(int j=0;j<5;j++){
//         cout<<"The marks of the student number "<<j+1<<" is "<<marks[j]<<endl;
//     }
//     return 0;
// }



// #include "iostream"
// using namespace std;
// int main(){
//     string name="harry";
//     cout<<"The name of my Guruji is "<<name<<endl;
//     return 0;
// }



// #include "iostream"
// using namespace std;
// int main(){
//     int a =69;
//     int *q;
//     q = &a;
//     cout<<"The value of a = "<<a<<endl;
//     cout<<"The value of a = "<<*q<<endl;
//     cout<<"The address of value a = "<<&a<<endl;
//     cout<<"The address of value a = "<<q<<endl;
//     return 0;
// }



// ###The clases and object oriented programming is as following.




// #include "iostream"
// using namespace std;
// class gauransh
// {
// public:
//     string name;
//     int salary;
// };
// int main()
// {
//     gauransh privacy;
//     privacy.name = "Gauransh Singh";
//     privacy.salary = 100;
//     cout << "The name is " << privacy.name << " & The salary is " << privacy.salary <<" Dollars "<< endl;
//     return 0;
// }


// ###the following is private classes example
// #include "iostream"
// using namespace std;
//     class gauransh{
//         public:
//         int salary;
//         int height;
//         void printit(){
//         cout<<" The salary of Gauransh is "<<this->salary << " and his height is "<<this->height << endl;
// }
//         void secret(){
//             cout<<" The name of the girlfrind is "<<this->gfname<<endl;
//         }
//         private:
//         string gfname="luckygirl";

//     };
// int main(){
//     gauransh privacy;
//     privacy.salary = 100;
//     privacy.height = 172;
//     // privacy.gfname = "luckygirl"    //This will show an error as the gfname is a private class and can't be accesed directly 
//     privacy.printit();
//     // cout<<"The name of the girlfriend is "<<privacy.gfname<<endl;  //This will also show an error as the name of the girlfriend is again private and can't be accessed directly has to be made out of a funciton
//     privacy.secret();
// }


// // ###the following is example of classes using funcition for getting the info
// #include "iostream"
// using namespace std;
//     class gauransh{
//         public:
//         int salary;
//         int height;
//         void getinfo(int a,int b,string n){
//             this->salary = a;
//             this->height = b;
//             this->gfname = n;
//         }
//         void printit(){
//         cout<<" The salary of Gauransh is "<<this->salary << " and his height is "<<this->height <<" The name of the girlfrind is "<<this->gfname<<endl;;
// }
//         private:
//         string gfname="luckygirl";

//     };
// int main(){
//     gauransh privacy;
//     privacy.getinfo(101,176,"luckygirl");
//     privacy.printit();
// }


// // ###the following is example of classes using funcitions for input
// #include "iostream"
// using namespace std;
//     class gauransh{
//         public:
//         int salary;
//         int height;
//         void getinfo(){
//             cout<<"Please enter the name of the mystery girl: ";
//             cin>>this->gfname;
//         }
//         void printit(){
//         cout<<" The salary of Gauransh is "<<this->salary << " and his height is "<<this->height <<" The name of the girlfrind is "<<this->gfname<<endl;;
// }
//         private:
//         string gfname="luckygirl";
//     };
// int main(){
//     gauransh privacy;
//     cout<<"Please enter the salary: ";
//     cin>>privacy.salary;
//     cout<<"Please enter the height: ";
//     cin>>privacy.height;
//     privacy.getinfo();
//     privacy.printit();
// }




// //###using constructors
// #include "iostream"
// using namespace std;
// class Employee{                             //This classes dont represent data but they represent blueprint
//     public:                                 //remember that all the datatype are private by default in a class so we have to specify public here
//     string  name;
//     string company;
//     int age;

//     int getinfo(string n,string c,int a,int s){
//         this->name = n;
//         this->company = c;
//         this->age = a;
//         this->salary = s;
//     }
//     void printinfo(){
//         cout<<"The name of the employee is "<<this->name<<endl;
//         cout<<"The company of the employee is "<<this->company<<endl;
//         cout<<"The age of the employee is "<<this->age<<endl;
//         cout<<"The salary of the employee is "<<this->salary<<" rupees"<<endl;
//     }
//     private:
//     int salary; //since i am accesing this data by a funtion thus even if it is private it doesn't make a difference
// };
// int main(){
//     Employee employee1;
//     employee1.getinfo("Gauransh Singh","Microsoft",22,1800000);//these info in the brackets are the constructors 
//     employee1.printinfo();
// }










