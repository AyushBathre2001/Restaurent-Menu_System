#include <bits/stdc++.h>
using namespace std;

class RMS
{

public:
    int choice, deals;
    int total_bill = 0, total_deals = 0;
    char more;

    void print_order(vector<pair<string, int>> v1, vector<pair<int, int>> v2)
    {
        cout<<"\t-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=ORDER_CONFIRMED-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
        cout<<"\n\n";
        for (int i = 0; i < v2.size(); i++)
        {
            cout << "\tORDER NUMBER  " << i + 1 << " => " << v1[v2[i].first].first << endl;
            cout << "\tNO. OF DEALS - " << v2[i].second << endl;
            total_deals = total_deals + v2[i].second;
            cout << "\tPRICE OF EACH DEAL => " << v1[v2[i].first].second <<"/-"<< endl;
            cout << "\tTOTAL PRICE => " << (v1[v2[i].first].second) * (v2[i].second)<<"/-";
            total_bill = total_bill + ((v1[v2[i].first].second) * (v2[i].second));
            cout << "\n"
                 << endl;
        }
        cout << "\t\t\tTOTAL DISHES - " << v2.size()<<endl;
        cout << "\t\t\tTOTAL NO. OF DEALS - " << total_deals << endl;
        cout << "\t\t\tTOTAL BILL => " << total_bill <<"/-"<< endl;

        cout<<"\t------------------------------------------------------------------------------------------"<<endl;
    }

    void order(vector<pair<string, int>> v, vector<pair<int, int>> od)
    {
        cout << "\t"
                "|*======================MENU=======================*|"
                "\t\n"
             << endl;
        cout << "\t\t"
             << "1) " << v[0].first << "\t" << v[0].second << " /-\n" << endl;
        cout << "\t\t"
             << "2) " << v[1].first << "\t" << v[1].second << " /-\n" << endl;
        cout << "\t\t"
             << "3) " << v[2].first << "\t\t" << v[2].second << " /-\n" << endl;
        cout << "\t\t"
             << "4) " << v[3].first << "\t" << v[3].second << " /-\n" << endl;
        cout << "\t\t"
             << "5) " << v[4].first << "\t\t" << v[4].second << " /-\n" << endl;
        cout << "\t\t"
             << "6) " << v[5].first << "\t" << v[5].second << " /-\n" << endl;

        cout << "\t|*------------------------------------------------*|"<<endl;

        cout << "\n\t\tPLEASE SELECT THE ORDER NUMBER - ";
        cin >> choice;
        cout << "\n\t\tPLEASE ENTER THE NUMBER OF DEALS - ";
        cin >> deals;

        od.push_back(make_pair(choice-1, deals));
        cout << "DO YOU WANT TO ORDER ANYTHING ELSE ?(Y/N)" << endl;
        cin >> more;
        if (more == 'Y')
        {
            order(v, od);
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

    obj.order(v, od);

    return 0;
}