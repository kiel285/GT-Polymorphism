#include <iostream>
using namespace std;

class Employee {
    public:   
    virtual void showDetails(){cout<<"Employee details";}
    virtual ~Employee(){}
};
class Manager:public Employee {
    public:   
    void showDetails() override{cout<<"I am a Manager. I manage teams";} 
        
};
class Developer:public Employee {
    public:    
    void showDetails() override{cout<<"I am a Developer. I write code";}  
    
};

int main() {
int select;
cout<<"What type of employee would you like to create?"<<endl;
cout<<"1. Manager"<<endl;
cout<<"2. Developer"<<endl;
cout<<"Enter your choice(1 or 2): "<<endl;
cin>>select;
if (select==1){
    Employee* e1 = new Manager();
    e1->showDetails();
    delete e1;
}else if(select==2){
    Employee* e1 = new Developer();
    e1->showDetails();
    delete e1;
}else{
    cout<<"Mali input"<<endl;
}
return 0;
}