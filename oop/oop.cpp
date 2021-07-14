#include <iostream>
using namespace std;

//this for the abstract Class
class AbstractEmp{
    virtual void asformromo()=0;
};
class Emp:AbstractEmp {
    //private noda thibunoth default ganne private kiyala
    private:
    string name;
    string company;
    int salary;

    
    //public dala thiyana tika vitharayi pita thiyana class walata access karanna puluwan
    public:
    Emp(string n,string com, int sal){
        name = n;
        company = com;
        salary = sal;
    }
    //me class ek private ewa pitata ganna ona nam
    string getName(){
        return name;
    }
    //private ekakata value ekak danna ona nam
    void setName(string NAme){
        name = NAme;
    }
    void DisplayRes(){
        cout<<"Name - "<<name<<endl;
        cout<<"Company - "<<company<<endl;
        cout<<"Salary - "<<salary<<endl;
    }
    //This for the abstaract class
    void asformromo(){
        if(salary>50){
            cout<<"Good"<<endl;
        }else{
            cout<<"Not good income"<<endl;
        }
    }


    //this for the polymorpism
    virtual void pworking() {
        cout<<"Name is "<<getName()<<endl;
    }
};
//This for the derived classs
//public dammoth Emp class eke thiyana ona public method ekak access karanna puluwan
class Dev:public Emp {
    public:
    string language;
    Dev(string n,string com, int sal,string Language)
    :Emp(n,com,sal)
    {
        language = Language;
    }
    string displayDev() {
        string k = getName() + " " +language;
        return k;
    }
    //this for the polymorpism
    void pworking() {
        cout<<"Name is "<<getName()<<"And Language "<<language<<endl;
    }
};
 
int main(){
 //Emp emp1 = Emp("kasun","BM",99);
 //Emp emp2 = Emp("malith","KS",25);
 //emp1.DisplayRes();
 //emp1.asformromo();

 //emp2.DisplayRes();
 //emp2.asformromo();
 
 //this For the derived class Test
 Dev d= Dev("kasun","BM",99,"IP");
 cout<<d.displayDev();
 Emp* e1 = &d;
 e1->pworking();



}