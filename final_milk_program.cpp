#include<iostream>

using namespace std;

// Functions defined for later implementation. NB: Check end of file.
bool checkemail(string mail);
string grade(double sales);
void getmemberdata();
string string_to_upper(string s);
string string_to_lower(string s);

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

struct Member
{
    string name, id, region, email, FarmerGrade;
    string transactionDates[5]; // dates with matching index to deliveries
    double deliveries[5], totalMilkDelivered;
    double totalSales, AdminFees, AmountPayable;
    void calculate_deliveries()
    {
        for (int c=0; c<5; ++c)
        {
            totalMilkDelivered += deliveries[c];
            if (deliveries[c] > 0)
                AdminFees += 20;
        }
    }
    void calculate_sales()
    {
        totalSales = totalMilkDelivered * 50;
        AmountPayable = totalSales - AdminFees;
    }
    void grade_farmer()
    {
        FarmerGrade = grade(totalSales);
    }

};

//manager
Manager manager("Ian", "Maziwa16");
// members
Member members[6];

int main()
{
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
            cout<<"\t\tLogin was successful!"<<endl;
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
        cout<<"\t\tWelcome :)\n"<<endl;
        // Enter members information
        getmemberdata();

        // display the final table
        cout<<"No.\tFarmer Name\tId No.\tGrade\tTotal Sales\tDeductions\tPay\tRegion"<<endl;
        int PrintCounter = 0;
        for (int l=0; l<6; ++l)
        {
            PrintCounter = l+1;
            cout<<PrintCounter<<"\t"<<string_to_upper(members[l].name)<<"\t"<<members[l].id<<"\t";
            cout<<members[l].FarmerGrade<<"\t"<<members[l].totalSales<<"\t";
            cout<<members[l].AdminFees<<"\t"<<members[l].AmountPayable<<"\t";
            cout<<string_to_upper(members[l].region)<<endl;
        }
    }
    else
    {
        cout<<"\n\t\tSorry, Your login was not successul!\n";
    }
    return 0;
}

// capture member data
void getmemberdata()
{
    cout<<"Enter members data (6): "<<endl;
    int member_count = 0;
    for (int x=0; x<6; ++x)
    {
        member_count = x+1;
        cout<<"Member "<<member_count<<endl;
        cout<<"Farmer's Name: "; cin>>members[x].name; cout<<endl;
        cout<<"Farmer's Id No.: "; cin>>members[x].id; cout<<endl;
        cout<<"Farmer's Region: "; cin>>members[x].region; cout<<endl;
        bool mailcheck = false; // continues when mail check is passed
        while (mailcheck == false)
        {
            cout<<"Farmer's Email Address: "; cin>>members[x].email; cout<<endl;
            mailcheck = checkemail(members[x].email);
        }
        // deliveries and transsaction dates
        cout<<"Enter Farmers deliveries for 5 days: "<<endl;
        int day_count = 0;
        for (int i=0; i<5; ++i)
        {
            day_count = i+1;
            cout<<"Transaction date (day "<<day_count<<"): ";
            cin>>members[x].transactionDates[i];
            cout<<"Milk delivered: ";
            cin>>members[x].deliveries[i];
            cout<<endl;
        }
        members[x].calculate_deliveries();
        members[x].calculate_sales();
        members[x].grade_farmer();
        cout<<"------------\n"<<endl;
    }
}

// mail check function
bool checkemail(string mail)
{
    bool passed = false;
    if (mail.find("@")!=string::npos)
        {
            passed = true;
            cout<<"The email address is valid\n"<<endl;
        }
    else
        {
            cout<<"Email address is invalid!!!\n"<<endl;
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

string string_to_upper(string s)
{
    string data = s;
    for (int x=0; x<data.length(); ++x)
    {
        data[x] = toupper(data[x]);
    }
    return data;
}
string string_to_lower(string s)
{
    string data = s;
    for (int x=0; x<data.length(); ++x)
    {
        data[x] = tolower(data[x]);
    }
    return data;
}
