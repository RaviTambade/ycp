#include <iostream>
using namespace std;

class Date{

    private:
            int day;
            int month;
            int year;
    public:
    //constructor overloading
    //function overloading
    //static polymorphism
    //compile time polymorphism
    //early binding
    Date(){
        day=31;
        month=3;
        year=2025;
    }
    Date(int d, int m, int y){
        day=d;
        month=m;
        year=y;
    }

    void setDay(int d){
        day=d;
    }

    int getDay(){
        return day;
    }

    void setMonth(int m){
        month=m;
    }

    int getMonth(){
        return month;
    }

    void setYear(int y){
        year=y;
    }

    int getYear(){
        return year;
    }
    
    ~Date(){
        cout<<"Date Destructor is called."<<endl;

    }

    void show(){
        //dd/mm/yy
        cout<<year<<"/"<<month<<"/"<<day<<endl;
    }



};


class Account{
    private :
        int id;
        string holder;
        double balance;
        Date createdOn;
        Date modifiedOn;
    public:
       Account(){

        }
        Account(int i,string name, double amount, Date currentDate){
            id=i;
            holder=name;
            balance=amount;
            createdOn=currentDate;
            modifiedOn=currentDate;
        }

        void setId(int i){
            id=i;
        }

        int getId(){
            return id;
        }

        void setHolder(string name){
            holder=name;
        }

        string getHolder(){
            return holder;
        }

        void setBalance(double amount){
            balance=amount;
        }

        double getBalance(){
            return balance;
        }



        void show(){
            cout<<"Account ID: "<<id<<endl;
            cout<<"Account Holder"<<holder<<endl;
            cout<<"Account Balance"<<balance<<endl;
            cout<<"Account Opened Date :";
            createdOn.show();
            cout<<"Account Last Modified  Date :";
            modifiedOn.show();
        }

        ~Account(){
            cout<<"Account Destructor is called"<<endl;
        }
};

int main(){

    cout<<"Welcome to HDFC Bank"<<endl;
    /* 
    Date today(18,3,2025);
    Date yesterday(17,3,2025);
    Date tomorrow(19,3,2025);
    today.show();
    tomorrow.show();
    yesterday.show();

    Date dd;
    dd.show();
    */

    Date date(18,3,2025);
    Account acct123(45,"ravi tambade",56000,date);
    acct123.show();

    return 0;
}