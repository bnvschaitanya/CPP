#include <iostream>
#include <tuple>
using namespace std;
struct function{
    int operator()(int a, int b){return a*b; };
};
void functor(){
    tuple<int, string, int> t(1, "Ravi", 21);
    cout << get<0>(t) << endl;
    cout << get<1>(t) << endl;
    cout << get<2>(t) << endl;
    function a;
    cout<<a(10,20);
}
class student {
    public:
        string name;
    private:
        string user_id;
        string password;
    protected:
        int id;
        int age;
         void set_creds(){
            cout<<"Enter the Username and Password of the student "<<name<<": ";
            cin>>user_id>>password;
        }
        void get_creds(){
            cout<<"User_ID: "<<user_id<<" Password: "<<password;
        }
};
class frnd: public student{
    public:
        void get_personal_details(){
            cout<<"ID:"<<id<<" Age:" <<age;
            return;
        }
        void set_personal_details(){
            cout<<"Provide ID and Age of student "<<name<<" : ";
            cin>>id>>age;
        }
        void student_info(){
            student_details();
        }
    protected:
        void student_details(){
            cout<<"Details of the Student: "<<name;
            get_creds();
            get_personal_details();
            return;
        }
};

int main(){
    frnd raju;
    raju.name = "Ravi";
    raju.set_personal_details();
    raju.student_info();
    raju.get_personal_details();
    return 0;
}
