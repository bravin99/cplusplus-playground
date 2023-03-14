#include<iostream>
using namespace std;

int menu_ids[] {1,2,3,4,5,6};
string menu[] {"Hot Dog", "Hamburger", "French Fries", "Milk Shake", "Coffee", "Beef Smokies"};
double menu_prices[] {90.0, 300.0, 150.0, 150.0, 70.0, 40.0};

struct cartitem {
    int menu_id;
    int quantity;
} c_item;

cartitem busket[] {};

int client_input = 1;

void get_menu();
void sell_items();

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
    cout<<"Size of busket: "<<busket[0].menu_id<<busket[0].quantity;
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
    cout<<"\n";
    cout<<"Enter Item No: ";
    cin>>c_item.menu_id;
    cout<<"\n";
    cout<<"Enter Quantity: ";
    cin>>c_item.quantity;
    cout<<"\n";
    cout<<"Press 0 to exit or any other key to add more items."<<endl;
    cin>>client_input;

    // TODO: Add to busket

}
