#include <bits/stdc++.h>
using namespace std;

class RMS
{

public:
    int choice, deals;
    int total_bill = 0,total_deals = 0;
    string more;
    

    void print_order(vector<pair<string, int>> v1, vector<pair<int, int>> v2)
    {    
        
        for(int i = 0;i<v2.size();i++){
            cout<<"Order number "<<i+1<<" - "<<v1[v2[i].first].first<<endl;
            cout<<"No. of deals - "<<v2[i].second<<endl;
            total_deals = total_deals + v2[i].second;
            cout<<"Price of each deal"<<v1[v2[i].first].second<<endl;
            cout<<"Total price - "<<(v1[v2[i].first].second)*(v2[i].second);
            total_bill = total_bill + ((v1[v2[i].first].second)*(v2[i].second));
            cout<<"\n"<<endl;

            cout<<"Total orders - "<<v2.size();
            cout<<"Total no. of deals - "<<total_deals<<endl;
            cout<<"Total Bill - "<<total_bill<<endl;

        }
    }

    void order(vector<pair<string, int>> v,vector<pair<int,int>> od)
    {
        cout << "\t"
                "|*-----------------------MENU-----------------------*|"
                "\t\n"
             << endl;
        cout << "\t\t"
             << "1) " << v[0].first << "\t" << v[0].second << " /-" << endl;
        cout << "\t\t"
             << "2) " << v[1].first << "\t" << v[1].second << " /-" << endl;
        cout << "\t\t"
             << "3) " << v[2].first << "\t\t" << v[2].second << " /-" << endl;
        cout << "\t\t"
             << "4) " << v[3].first << "\t" << v[3].second << " /-" << endl;
        cout << "\t\t"
             << "5) " << v[4].first << "\t\t" << v[4].second << " /-" << endl;
        cout << "\t\t"
             << "6) " << v[5].first << "\t" << v[5].second << " /-" << endl;

        cout << "\n\t\tPlease select the order number - ";
        cin >> choice;
        cout << "\t\tPlease enter the number of deals - ";
        cin >> deals;

        od.push_back(make_pair(choice, deals));
        cout << "Do you want to order anything else ?(Yes/No)" << endl;
        cin >> more;
        if (more == "Yes")
        {
            order(v,od);
        }
        else
        {
            print_order(v, od);
        }
    }
};

int main()
{

    RMS obj;
    vector<pair<int, int>> od;
    vector<pair<string, int>> v;
    v.push_back(make_pair("Chicken Biryani", 250));
    v.push_back(make_pair("Chicken Kabab", 150));
    v.push_back(make_pair("Veg Biryani", 200));
    v.push_back(make_pair("Chilli Chicken", 175));
    v.push_back(make_pair("Egg Biryani", 100));
    v.push_back(make_pair("Chicken Lollipop", 100));

    obj.order(v,od);

    return 0;
}