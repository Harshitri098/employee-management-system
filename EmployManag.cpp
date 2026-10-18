#include<iostream>
#include<string>
using namespace std;

class Employ 
{
    protected :

    string name ;
    int salary ;

    public :
        Employ( string name, int salary){
           this-> name = name  ;
           this-> salary = salary ;    
        }
        virtual void dispalyDetail()
        {
            cout<<" details of employ "<< endl;
            cout<<" name: "<< name << endl;
            cout<<" salary: "<< salary << endl;
        }

};

class devloper : public Employ {
public :
    string codinglanguage ;

    devloper( string name , int salary , string lang)
           :Employ( name , salary){
            codinglanguage = lang;
    }
    void displaydetails()
    {
        cout<< " details of devloper "<< endl;
        cout<< " name: "<< name << endl;
        cout<< " salary: "<< salary << endl;
        cout<< " codinglanguage: "<< codinglanguage << endl;
    }
};

class manager : public Employ {
public :
    int teamsize;

    manager( string name , int salary , int teamsize  )
        :Employ( name ,salary ){
        this->teamsize = teamsize ;
    }
    void displaydetails()
    {
        cout<<" details of manager: "<< endl;
        cout<<" name: "<< name << endl;
        cout<<" salary: "<< salary << endl;
        cout<<" teamsize: "<< teamsize << endl;
    }
};
int main()
{
    devloper d1( " rahul ", 30000 , " c++ ");
    manager c1 ( " arpit " , 28000 ,  9);

    d1.displaydetails();
    c1.displaydetails();

    return 0;

}