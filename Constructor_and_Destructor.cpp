#include <iostream>

using namespace std;

//Class declaration and definition
class Cars{
    private:
        //data members
        string company_name;
        string model_name;
        string fuel_type;
        float mileage;
        double price;

    public:
        //Default constructor
        Cars(){
             cout<< "Default constructor called" << endl;
        }
        //Parameterized constructor
        Cars(string cname,string mname, string ftype,float m, double p){
            cout<<"parametrized constructor" << endl;
            company_name = cname;
            model_name = mname;
            fuel_type = ftype;
            mileage = m;
            price = p;
        }

        //Copy Constructor
        Cars(Cars &obj)
        {
            cout << "Copy constructor called"<<endl;
            company_name = obj.company_name;
            model_name = obj.model_name;
            fuel_type = obj.fuel_type;
            mileage = obj.mileage;
            price = obj.price;
        }
        //member functions
        void setData(string cname,string mname, string ftype, float m, double p)
        {
            company_name = cname;
            model_name = mname;
            fuel_type = ftype;
            mileage = m;
            price = p;
        };
        void displayData(){
            cout<<"Car Properties"<<endl;
            cout<<"Car Company Name -"<<company_name<<endl;
            cout<<"Car Company Model - "<<model_name<<endl;
            cout<<"Car fuel Type - "<<fuel_type<<endl;
            cout<<"Car Mileage - "<<mileage<<endl;
            cout<<"Car Price - "<<price<<endl<<endl;
        }
        //Destructor
        ~Cars()
        {
            cout << "Destructor called"<<endl;
        }
};

int main()
{
    Cars car1,car2("Toyota","fortuner","diesel",10,3500000) ;
    car1.setData("Toyota","altis","petrol",15.5,1500000);
    car1.displayData();
    car2.displayData();
    Cars car3 = car1;//copy constructor is called
    car3.displayData();

    return 0;
}
