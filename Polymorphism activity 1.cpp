#include <iostream>
using namespace std;

class Calculator {
    public:
        int num;
        float fnum;
        void add(int a, int b) {
            num = a + b;
            cout << "Sum of integers: " << num << endl;
        }
        void add(int a, int b,int c) {
            num = a + b + c;
            cout << "Sum of integers: " << num << endl;
        }
        void add(float a, float b) {
            fnum = a + b;
            cout << "Sum of integers: " << fnum << endl;
        }
        void subtract(int a, int b) {
            num = a - b;
            cout << "difference of integers: " << num << endl;
        }
        void multiply(int a, int b) {
            num = a * b;
            cout << "product of integers: " << num << endl;
        }
        void divide(float a, float b) {
            if(b!=0){fnum = a/b;
            cout << "quotient of integers: " << fnum << endl;
        }else{cout<<"Cannot divide by 0"<<endl;}
        }
       
};

int main() {
    Calculator j1;
    int a,b,c;
    int select;
    cout<<"===Simple Calculator==="<<endl;
    cout<<"1.Add two integer"<<endl;
    cout<<"2.Add three integers"<<endl;
    cout<<"3.Add two floats"<<endl;
    cout<<"4.Subtract two integers"<<endl;
    cout<<"5.Multiply two integers"<<endl;
    cout<<"6.Divide two floats"<<endl;
    cout<<"Enter your choice(1-6):";
    cin>>select;
    
    switch(select){
        case 1:
        cout<<"Enter two integers: ";
        cin>>a>>b;
        j1.add(a,b);
        break;
        case 2:
        cout<<"Enter three integers: ";
        cin>>a>>b>>c;
        j1.add(a,b,c);
        break;
        case 3:
        cout<<"Enter two integers: ";
        float fa,fb;
        cin>>fa>>fb;
        j1.add(a,b);
        break;
        case 4:
        cout<<"Enter two integers: ";
        cin>>a>>b;
        j1.subtract(a,b);
        break;
        case 5:
        cout<<"Enter two integers: ";
        cin>>a>>b;
        j1.multiply(a,b);
        break;
        case 6:
        cout<<"Enter two integers: ";
        cin>>fa>>fb;
        j1.divide(fa,fb);
        break;
        default:
        cout<<"Wrong input, Terminating";
        return 0;
    }
    return 0;
}