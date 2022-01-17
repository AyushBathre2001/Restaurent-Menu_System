#include<bits/stdc++.h>
using namespace std;

void print_order(vector<pair<string,int>> v,int deals,int choice){
    cout<<"\n\t\tOrder :"<<v[choice].first<<endl;
    cout<<"\t\tNumber of deals :"<<deals<<endl;
    cout<<"\t\tPrice of each deal :"<<v[choice].second<<endl;
    cout<<"\t\tTotal Price :"<<v[choice].second*deals<<endl;

}

int main(){
    int choice,deals;
    vector<pair<string,int>> v;
    v.push_back(make_pair("Chicken Biryani",250));
    v.push_back(make_pair("Chicken Kabab",150));
    v.push_back(make_pair("Veg Biryani",200));
    v.push_back(make_pair("Chilli Chicken",175));
    v.push_back(make_pair("Egg Biryani",100));
    v.push_back(make_pair("Chicken Lollipop",100));

    cout<<"\t""|*-----------------------MENU-----------------------*|""\t\n"<<endl;
    cout<<"\t\t"<<"1) "<<v[0].first<<"\t"<<v[0].second <<" /-"<<endl;
    cout<<"\t\t"<<"2) "<<v[1].first<<"\t\t"<<v[1].second <<" /-"<<endl;
    cout<<"\t\t"<<"3) "<<v[2].first<<"\t\t"<<v[2].second <<" /-"<<endl;
    cout<<"\t\t"<<"4) "<<v[3].first<<"\t"<<v[3].second <<" /-"<<endl;
    cout<<"\t\t"<<"5) "<<v[4].first<<"\t\t"<<v[4].second <<" /-"<<endl;

    cout<<"\n\t\tPlease select the order number - ";
    cin>>choice;
    cout<<"\t\tPlease enter the number of deals - ";
    cin>>deals;

    switch (choice)
    {
    case 1:
        print_order(v,deals,0);
        break;
    
    case 2:
        print_order(v,deals,1);
        break;
    
    case 3:
        print_order(v,deals,2);
        break;
    
    case 4:
        print_order(v,deals,3);
        break;
    
    case 5:
        print_order(v,deals,4);
        break;
    
    default:
        cout<<"Invalid Order"<<endl;
        break;
    }

    cout<<"\t\t-------------------THANK YOU FOR COMING--------------------"<<endl;


    return 0;
}