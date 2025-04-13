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

        Student(){

        }

        void NewStudent();
        void UpdateCGPA();
        void DispStudent();
        void ValidateData();
        
};
void RollnoChecker(){
    
}
void Student::NewStudent(){
    int a;
    cout<<"Enter Student Roll no: ";
    cin>>Rollno;
    cout<<"Enter Student Name: ";
    getline(cin,Name);
    cout<<"Enter CGPA: ";
    cin>>CGPA;
    cout<<"Enter No. of courses enrolled: ";
    cin>>a;
    for(int i=0;i<a;i++){
        cout<<"Enter Course Name "<<i+1<<": ";
        getline(cin,Courses[i]);
    }
}

void Student::UpdateCGPA(){
    float nCGPA;
    cout<<"Current CGPA: "<<CGPA<<endl;
    cout<<"Enter New CGPA: ";
    cin>>nCGPA;
    CGPA=nCGPA;
}

void Student::DispStudent(){
    int Clen=Courses.size();
    cout<<"Student Roll no: "<<Rollno<<endl;
    cout<<"Student Name: "<<Name<<endl;
    cout<<"Student CGPA: "<<CGPA<<endl;
    cout<<":Courses Enrolled in:"<<endl;
    for(int i=0;i<Clen;i++){
        cout<<"- "<<Courses[i]<<endl;
    }
}

void Student::ValidateData(){
    int Clen=Courses.size();
    if(CGPA>10.0){
        cout<<"CGPA is invalid (more than 10.0)"<<endl;
    }
    if(Clen>8){
        cout<<"No. of courses enrolled in is invalid (more than 8)"<<endl;
    }
}

int main(){
    vector<Student> Object;
    while(true){
        int choice;
        cout<<"1. Add New Student"<<endl;
        cout<<"2. Update CGPA"<<endl;
        cout<<"3. Display Student Information"<<endl;
        cout<<"4. Validate Data"<<endl;
        cout<<"Enter Choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                Student Stobj;
                Object.push_back(Stobj);
                Stobj.NewStudent();
        }
    }
    return 0;

    
}