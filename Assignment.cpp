#include<iostream>
#include<vector>
using namespace std;

class Student{
    private:
        float CGPA;
        int Rollno;
        vector<string> Courses;
        string Name;
    public:
        Student(){
            Rollno=0;
            CGPA=0;
            Name= "";
            Courses;
        }

        Student(int Rollno, float CGPA, string Name, vector<string>& Courses){
            this->Rollno=Rollno;
            this->CGPA=CGPA;
            this->Name=Name;
            this->Courses=Courses;
        }

        

};


int main(){

    return 0;
}