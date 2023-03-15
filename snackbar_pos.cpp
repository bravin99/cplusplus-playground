#include<iostream>
#include<list>
using namespace std;

int menu_ids[] {1,2,3,4,5,6};
string menu[] {"Hot Dog", "Hamburger", "French Fries", "Milk Shake", "Coffee", "Beef Smokies"};
double menu_prices[] {90.0, 300.0, 150.0, 150.0, 70.0, 40.0};
double subtotal = 0;
double vat_percentage = 16;
double vat = 0;
double grandtotal = 0;
double amount_tendered = 0;
double change = 0;

struct cartitem {
    int menu_id;
    int quantity;
} c_item;

list<cartitem> busket;

int client_input = 1;

void get_menu();
void sell_items();
void calculate_total();

int main()
{
    cout<<"Welcome to Zetech C Snack Shop"<<endl;
    cout<<"\n";

    get_menu();

    for (int n=6; n>0; ++n)
    {
        sell_items();
        if (client_input == 0)
        {
            break;
        }
        get_menu();
    }

    if (subtotal > 0)
    {
        calculate_total();
        cout<<"Enter amount tendered for payment: ";
        cin>>amount_tendered;
        change = amount_tendered - grandtotal;
        cout<<"Change: "<<change<<"\n"<<endl;
    }
    cout<<"\t \t THANK YOU AND COME AGAIN \n"<<endl;
}

void get_menu()
{
    cout<<"\t TODAY'S MENU"<<endl;
    int x;

    for (x=0; x<=5; ++x)
    {
        cout<<menu_ids[x]<<"."<<menu[x]<<"\t KES  "<<menu_prices[x]<<endl;
    }
}

void sell_items()
{
    cout<<"\nEnter Item No: ";
    cin>>c_item.menu_id;
    cout<<"\nEnter Quantity: ";
    cin>>c_item.quantity;
    // Add to busket
    busket.push_back(c_item);
    cout<<"Item added to cart"<<endl;
    //subtotal
    subtotal += menu_prices[(c_item.menu_id)-1] * c_item.quantity;
    cout<<"Subtotal: KES "<<subtotal<<"\n";
    cout<<"Press 0 to exit or any other key to add more items."<<endl;
    cin>>client_input;
}

void calculate_total()
{
    vat = subtotal * (vat_percentage/100);
    grandtotal = subtotal + vat;
    cout<<"\nVAT at "<<vat_percentage<<" percent: "<<vat<<"\n";
    cout<<"Total Amount: "<<grandtotal<<"\n";
}
