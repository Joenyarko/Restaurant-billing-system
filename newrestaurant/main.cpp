#include <iostream>
using namespace std;
string userName,passWord;
int menu;
int exits;
void myLogin();
void myBreakfast();
void myLunch();
void myDinner();
void myOrders();
void myMenu(){
    cout<<"MENU()"<<endl;
    cout<<"[1] BREAKFAST()"<<endl;
    cout<<"[2] LUNCH()"<<endl;
    cout<<"[3] SUPPER/DINNER()"<<endl;
     cout<<"Choose menu option........or Press 0 to exit(0)"<<endl;
     cin>>menu;
    switch(menu){
case 1:
    myBreakfast();
    break;
case 2:
    myLunch();
    break;
case 3:
    myDinner();
    break;
case 0:
    cout<<"Do you want to exit??yes[1] no[0]";
    cin>>exits;
    if(exits==1){
        system("cls");
        myLogin();
        myMenu();
    }else if(exits==0){
    system("cls");
    myMenu();

    }
    }
}
void myLogin(){
  cout<<"                   ***********************************************               "<<endl;
  cout<<"                           WELCOME TO BANG FAST FOOD                            "<<endl;
  cout<<"                   ***********************************************               "<<endl;
  cout<<"\n\n\n";
  //cout<<"CHOOSE AN OPTION"<<endl;
  cout<<"                                   Login"<<endl;
  cout<<"                                   Username:";
  cin>>userName;
  cout<<"                                   Password:";
  cin>>passWord;
     if(userName=="GROUPPROJECT" && passWord=="BANG"){
                cout<<"......Login successful............"<<endl;

     }
     else if(userName!="GROUPPROJECT"&&passWord=="BANG"){
        system("cls");
        cout<<"\n\n\n"    "         "  "  "  "  "  "  " " " " " "  "  "  "  " Invalid Username...Try again!\n\n"<<endl;
        myLogin();
     }
            else if(userName=="GROUPPROJECT" && passWord!="BANG"){
                    system("cls");
        cout<<"\n\n\n"    "         "  "  "  "  "  "  " " " " " "  "  "  "  " Invalid password...Try again!!\n\n"<<endl;
        myLogin();
     }
     else{
        system("cls");
        cout<<"\n\n\n"    "         "  "  "  "  "  "  " " " " " "  "  "  "  "Invalid password and username.....Try again\n\n"<<endl;
        myLogin();
     }
     system("cls");
    }

int main()
{
    int option,quantity,another;
    float price;
    float amount,totalamount,a_m,bal;
    myLogin();
    myMenu();

    return 0;
}
  int option,quantity,another,enter;
    float price;
    float amount,totalamount,a_m,bal;
    //void myReceipt(){
    //cout<<"\t\t\t\t*\t\t\t\t"<<endl;
  // cout<<"BANG FOOD"<<endl;
   //cout<<"\t\t\t\t*\t\t\t\t"<<endl;
   // cout<<"



    //}
void myBreakfast(){
 do{
            system("cls");
    cout<<"\n\n";
    cout<<"                                 BANG FAST FOOD                        "<<endl;
    cout<<"\n";
    cout<<"                                 BREAKFAST IS READY!!                        "<<endl;
    cout<<"\n\n";
    cout<<"       **************************************************************"<<endl;
    cout<<"         PRODUCT NUMBER              PRODUCT NAME             PRICE     "<<endl;
    cout<<"       **************************************************************"<<endl;
    cout<<"                1.                   Egg Sandwich             29.00"<<endl;
    cout<<"                2.                   Onion Rings              35.00"<<endl;
    cout<<"                3.                   French fries             28.00"<<endl;
    cout<<"                4.                   Cheese Burger            45.00"<<endl;
    cout<<"                5.                   Chicken Nuggets          64.00"<<endl;
    cout<<"      ***************************************************************"<<endl;
    cout<<"      ***************************************************************"<<endl;
    cout<<"\n\n\n\n\n";

    cout<<" " " ""Choose an option:";
    cin>>option;
    cout<<"" " " "Enter quantity:";
    cin>>quantity;
    switch(option){
case 1:
    price=29.00;
    break;
case 2:
    price=35.00;
    break;
case 3:
    price=28.00;
    break;
case 4:
    price=45.00;
    break;
case 5:
    price=64.00;
    break;
default:
    cout<<"Invalid choice....."<<endl;
    myBreakfast();
    }
    amount=price*quantity;
    cout<<"" " " "Amount:GHC"<<amount<<endl;
    cout<<" " " "<<"----------------------------------------------------------------------------------------------"<<endl;
    totalamount=totalamount+amount;
    //cout<<"" " " "Total amount:GHC"<<totalamount<<endl;
    cout<<" " " "<<"----------------------------------------------------------------------------------------------"<<endl;
    cout<<" " " "<<"----------------------------------------------------------------------------------------------"<<endl;
    cout<<"" " " "Add another other??yes{1} no{0}";
    cin>>another;
    }while(another==1);
    cout<<" "" "<<"You have ordered....."<<endl;
    cout<<" "" "<<"Product number      Quantity        Price           Amount"<<endl;
    cout<<" "" "<<option<<"\t\t\t"<<quantity<<"\t\t"<<price<<"\t\t"<<amount<<endl;
    cout<<"" " " "Total amount:GHC"<<totalamount<<endl;
    do{
            cout<<" " " "<<"----------------------------------------------------------------------------------------------"<<endl;
            cout<<" "" "<<"Amount paid:GHC";
        cin>>a_m;
                if(a_m<totalamount){
            cout<<" " " ""Please you don't have enough money"<<endl;
        }
        }while(a_m<totalamount);
         bal=a_m-totalamount;
         cout<<"" " " "Balance:GHC"<<bal<<endl;
         cout<<" " " "<<"----------------------------------------------------------------------------------------------"<<endl;
         cout<<" " " "<<"----------------------------------------------------------------------------------------------"<<endl;
        cout<<" " " "<<"Thank you!!Hope to see you again soon"<<endl;
         cout<<"Exit(0)...Press 1 to exit";
        cin>>enter;
        while(enter>0){
        if(enter==1){
                system("cls");
            myMenu();
            enter++;
        }
        }
}
void myLunch(){
 do{
            system("cls");
    cout<<"\n\n";
    cout<<"                                 BANG FAST FOOD                        "<<endl;
    cout<<"\n";
    cout<<"                                 LUNCH IS READY!!                        "<<endl;
    cout<<"\n\n";
    cout<<"       ***********************************************************************"<<endl;
    cout<<"         PRODUCT NUMBER              PRODUCT NAME                      PRICE     "<<endl;
    cout<<"       ***********************************************************************"<<endl;
    cout<<"                1.                   Grilled chicken caesar wrap        59.00"<<endl;
    cout<<"                2.                   Classic Mac and Cheese             35.00"<<endl;
    cout<<"                3.                   Taco salad w/soup                  48.00"<<endl;
    cout<<"                4.                   Buffalo chicken wrap               55.00"<<endl;
    cout<<"                5.                   Chicken noodle soup                74.00"<<endl;
    cout<<"      ************************************************************************"<<endl;
    cout<<"      ************************************************************************"<<endl;
    cout<<"\n\n\n\n\n";

    cout<<" " " ""Choose an option:";
    cin>>option;
    cout<<"" " " "Enter quantity:";
    cin>>quantity;
    switch(option){
case 1:
    price=59.00;
    break;
case 2:
    price=35.00;
    break;
case 3:
    price=48.00;
    break;
case 4:
    price=55.00;
    break;
case 5:
    price=74.00;
    break;
    default:
    cout<<"Invalid choice....."<<endl;
    myLunch();
    }
    amount=price*quantity;
    cout<<"" " " "Amount:GHC"<<amount<<endl;
    cout<<" " " "<<"----------------------------------------------------------------------------------------------"<<endl;
    totalamount=totalamount+amount;
    //cout<<"" " " "Total amount:GHC"<<totalamount<<endl;
    cout<<" " " "<<"----------------------------------------------------------------------------------------------"<<endl;
    cout<<" " " "<<"----------------------------------------------------------------------------------------------"<<endl;
    cout<<"" " " "Add another other??yes{1} no{0}";
    cin>>another;
    }while(another==1);
    cout<<" "" "<<"You have ordered....."<<endl;
    cout<<" "" "<<"Product number      Quantity        Price           Amount"<<endl;
    cout<<" "" "<<option<<"\t\t\t"<<quantity<<"\t\t"<<price<<"\t\t"<<amount<<endl;
    cout<<"" " " "Total amount:GHC"<<totalamount<<endl;

    do{
    cout<<" " " "<<"----------------------------------------------------------------------------------------------"<<endl;
            cout<<" "" "<<"Amount paid:GHC";
        cin>>a_m;
                if(a_m<totalamount){
            cout<<" " " ""Please you don't have enough money"<<endl;
        }
        }while(a_m<totalamount);
         bal=a_m-totalamount;
         cout<<"" " " "Balance:GHC"<<bal<<endl;
         cout<<" " " "<<"Thank you!!Hope to see you again soon"<<endl;
         cout<<"Exit(0)...Press 1 to exit";
        cin>>enter;
        while(enter>0){
        if(enter==1){
                system("cls");
            myMenu();
            enter++;
        }
        }
         }
void myDinner(){
do{
             system("cls");
    cout<<"\n\n";
    cout<<"                                 BANG FAST FOOD                        "<<endl;
    cout<<"\n";
    cout<<"                                 DINNER IS READY!!                        "<<endl;
    cout<<"\n\n";
    cout<<"       **********************************************************************"<<endl;
    cout<<"         PRODUCT NUMBER              PRODUCT NAME                      PRICE     "<<endl;
    cout<<"       **********************************************************************"<<endl;
    cout<<"                1.                   Tuna Poke Bowl                     69.00"<<endl;
    cout<<"                2.                   Dinner Salad                       80.00"<<endl;
    cout<<"                3.                   Loaded brown rice pasta            42.00"<<endl;
    cout<<"                4.                   Grain bowls                        55.00"<<endl;
    cout<<"                5.                   Beef and Barley Soup               65.00"<<endl;
    cout<<"      ***********************************************************************"<<endl;
    cout<<"      ***********************************************************************"<<endl;
    cout<<"\n\n\n\n\n";

        cout<<" " " ""Choose an option:";
    cin>>option;
    cout<<"" " " "Enter quantity:";
    cin>>quantity;
    switch(option){
case 1:
    price=59.00;
    break;
case 2:
    price=35.00;
    break;
case 3:
    price=48.00;
    break;
case 4:
    price=55.00;
    break;
case 5:
    price=74.00;
    break;
default:
    cout<<"Invalid choice....."<<endl;
    myDinner();
    }
    amount=price*quantity;
    cout<<"" " " "Amount:GHC"<<amount<<endl;
    cout<<" " " "<<"----------------------------------------------------------------------------------------------"<<endl;
    totalamount=totalamount+amount;
    //cout<<"" " " "Total amount:GHC"<<totalamount<<endl;
    cout<<" " " "<<"----------------------------------------------------------------------------------------------"<<endl;
    cout<<" " " "<<"----------------------------------------------------------------------------------------------"<<endl;
    cout<<"" " " "Add another other??yes{1} no{0}";
    cin>>another;
    }while(another==1);
    cout<<" "" "<<"You have ordered....."<<endl;
    cout<<" "" "<<"Product number      Quantity        Price           Amount"<<endl;
    cout<<" "" "<<option<<"\t\t\t"<<quantity<<"\t\t"<<price<<"\t\t"<<amount<<endl;
    cout<<"" " " "Total amount:GHC"<<totalamount<<endl;

        do{
             cout<<" " " "<<"----------------------------------------------------------------------------------------------"<<endl;
            cout<<" "" "<<"Amount paid:GHC";
        cin>>a_m;
        if(a_m<totalamount){
            cout<<" " " ""Please you don't have enough money"<<endl;
        }
        }while(a_m<totalamount);
         bal=a_m-totalamount;
         cout<<"" " " "Balance:GHC"<<bal<<endl;
         cout<<" " " "<<"Thank you!!Hope to see you again soon"<<endl;
         cout<<"Exit(0)...Press 1 to exit";
        cin>>enter;
        while(enter>0){
        if(enter==1){
                system("cls");
            myMenu();
            enter++;
        }
        }
         }
void myOrders(){
cout<<" "" "<<"You have ordered....."<<endl;
cout<<" "" "<<"Product number      Quantity        Price           Amount"<<endl;
}






