#include<iostream>

using namespace std;

struct Member
{
    int id;
    string name, region, email;
    double transactionDates[5];
    double deliveries[5];
};

class Manager
{
public:
    string managerName;
    Manager(string n, string p)
    {
        managerName = n;
        password = p;
    }
    bool check_password(string p)
    {
        if (p==password) {return true;}
        else {return false;}
    }
private:
    string password;
};

// Functions defined for later implementation. NB: Check end of file.
bool checkemail(string mail);
string grade(double sales);

int main()
{
    // members
    Member members[6];
    //manager
    Manager manager("Ian", "Maziwa16");
    // login
    int log_count = 1;
    string pass;
    bool auth = false;
    while (log_count<=3)
    {
        cout<<"Enter your manager password (Maziwa16): ";
        cin>>pass;
        log_count += 1;
        if (manager.check_password(pass)==true)
        {
            cout<<"Login was successful"<<endl;
            auth = true;
            break;
        }
        else
        {
            if (log_count<4)
            {cout<<"Password is incorrect, please try again"<<endl;}
            else
            {
                cout<<"Exceeded your login attempt limit"<<endl;
            }
        }
    }
    // end login

    // continue processes if authorized
    if (auth == true)
    {
        cout<<"\n\t\tLogin was successul!\n"<<endl;
        // farmer info
        string FarmerName, FarmerIdNo, Region, EmailAddress;
        string transactionDates[5];
        double Quantity[5];

        cout<<"\t\t--------------- Enter Farmers Details ---------------\n"<<endl;
        cout<<"Farmer's Name: "; cin>>FarmerName; cout<<endl;
        cout<<"Farmer's Id Number: "; cin>>FarmerIdNo; cout<<endl;
        cout<<"Farmer's Region: "; cin>>Region; cout<<endl;

        // checking the email address
        bool mailcheck = false;
        while (mailcheck == false)
        {
            cout<<"Farmer's Email Address: "; cin>>EmailAddress; cout<<endl;
            mailcheck = checkemail(EmailAddress);
        }
        //Enter deliveries
        cout<<"Enter deliveries: \n"<<endl;
        int countInputs; // just to keep count for display
        for (int x=0; x<5; ++x)
        {
            countInputs = x+1;
            cout<<"Enter transaction date for day "<<countInputs<<": ";
            cin>>transactionDates[x];
            cout<<"Enter quantity for day "<<countInputs<<": ";
            cin>>Quantity[x];
            cout<<"\t--------------\n"<<endl;
        }
        // calculate total milk delivered and administration fees
        double totalMilk=0, totalSales=0, adminFees=0, totalPayable;
        for (int x=0; x<5; ++x)
        {
            totalMilk += Quantity[x];
            // admin fees
            if (Quantity[x]>0) adminFees += 20;
        }
        cout<<"\nTotal milk delivered: "<<totalMilk<<endl;
        // calculate total sales
        totalSales = totalMilk*50;
        //payable amount
        totalPayable = totalSales-adminFees;
        // get farmers grade
        string FarmerGrade;
        FarmerGrade = grade(totalSales);
    }
    else
    {
        cout<<"\n\t\tSorry, You are not authorized to access this system!\n";
    }
    return 0;
}

// mail check function
bool checkemail(string mail)
{
    bool passed = false;
    if (mail.find("@")!=string::npos)
        {
            passed = true;
            cout<<"The email address is valid"<<endl;
        }
    else
        {
            cout<<"Email address is invalid!!!"<<endl;
        }
    return passed;
}
// grading function
string grade(double sales)
{
    string result;
    if (sales >= 10000)
        { result = "Grade 1"; }
    else if (sales >= 5000)
        { result = "Grade 2";}
    else if (sales >= 1000)
        { result = "Grade 3";}
    else if (sales < 1000)
        { result = "Grade 4";}
    else { result = "Invalid amount passed!!";}
    return result;
}
