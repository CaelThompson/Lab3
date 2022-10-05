#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include <fstream>
#include <stdlib.h>
#include <string>
#include <cstdio>
int globalCurrentYear = 2022; //TODO 
using namespace std;

template<class X>
class orderedList{
    protected:
        orderedList *next;
        orderedList *previous;
        int compAdd = 0;
        int moveAdd = 0;//comparison and move counters (seemed helpful from the template)
        int compRemove = 0;
        int moveRemove = 0;
    public:
        X item;
        orderedList(X item, orderedList *previous = nullptr, orderedList *next = nullptr){
            this->item = item;
            this->next = next;
            this->previous = previous;

        }
        orderedList(orderedList *next = nullptr){
            this->item = nullptr;

        }
        void addItem(X item){
            if (this->next = nullptr){
                this->next = new orderedList<X> (item, nullptr, this);
            }
            else{
                this->next->addItem(item);
            }
        }
        void GetItem(X item){

        }
};
class Student{
    private:
        string FirstName;
        string LastName;
        string MNumber;
        float GPA;
        string BirthDate;
    public:
        Student(string FirstName, string LastName, string MNumber, string BirthDate, float GPA = 0.0){
            this->FirstName = FirstName;
            this->LastName = LastName;
            this->MNumber = MNumber;
            this->GPA = GPA;
            this->BirthDate = BirthDate;
        }
        string GetName(){
            return FirstName + " " + LastName;
        }
        string GetMNumber(){
            return MNumber;
        }
        int GetAge(){
            int Age = stoi(BirthDate.substr(BirthDate.length()-5,BirthDate.length()-1)); //Casting strings to integers 
            return globalCurrentYear - Age;
        }
        bool operator> (Student AStudent){
            int A;
            int B;
            A = stoi(this->GetMNumber().substr(1, this->GetMNumber().length()-1));
            B = stoi(AStudent.GetMNumber().substr(1, AStudent.GetMNumber().length()-1));
                if(A > B){
                    return true;
                }
                else{
                    return false;
                }
            }
         bool operator< (Student AStudent){
            int A;
            int B;
            A = stoi(this->GetMNumber().substr(1, this->GetMNumber().length()-1));
            B = stoi(AStudent.GetMNumber().substr(1, AStudent.GetMNumber().length()-1));
                if(A < B){
                    return true;
                }
                else{
                    return false;
                }
            }
         bool operator== (Student AStudent){
            int A;
            int B;
            A = stoi(this->GetMNumber().substr(1, this->GetMNumber().length()-1));
            B = stoi(AStudent.GetMNumber().substr(1, AStudent.GetMNumber().length()-1));
                if(A == B){
                    return true;
                }
                else{
                    return false;
                }
            }
        
};
void TestProgram(){
    orderedList<Student> AList = orderedList<Student> ();
    Student AStudent();
    int Switcher = 0;
    string CaseName;
    string CaseLastName;
    string CaseMNumber;
    string CaseBirthday;
    float CaseGPA;
    switch (Switcher)
    {
    case 0:
        cout << "1 for AddItem";
        cout << "2 for GetItem";
        cout << "3 for IsInlist";
        cout << "4 for IsEmpty";
        cout << "5 for Size";
        cout << "6 for SeeNext";
        cout << "7 for SeeAt";
        cout << "8 for Reset";
        break;
    case 1:
        cout << "Enter first name" << endl;
        cin >> CaseName;
        cout << "Enter last name" << endl;
        cin >> CaseLastName;
        cout << "Enter MNumber" << endl;
        cin >> CaseMNumber;
        cout << "Enter Birthday" << endl;
        cin >>  CaseBirthday;
        cout << "Enter GPA or -1 for no entry" << endl;
        cin >> CaseGPA;
        if(CaseGPA < 0){
            AStudent = Student(CaseName, CaseLastName, CaseMNumber, CaseBirthday)
            AList.addItem()
        }
    default:
        break;
    }
}