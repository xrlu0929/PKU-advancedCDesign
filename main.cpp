/******************************************************************************
 
 有一个小型的报账系统，它有如下功能：
 
 （1）统计每个人所报发票的总钱数
 
 （2）统计每类发票的总钱数
 
 将此系统简化为如下：假设发票类别共有A、B、C三种;一共有三个人，ID分别为1、2、3。
 
 *******************************************************************************/
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    float id[3] {0, 0, 0};
    float invoice[3] {0, 0, 0}; // A=0 B=0 C=0

    for (int i=0; i<3; i++) { // read 3 lines

        int id_in;
        int n; // to read how many invoices they are going to read
        char invoice_in; // read invoice type
        float invoice_price; // read invoice price

        //cout << "start" << endl;
        cin >> id_in;
        cin >> n; // read number of receipt

        for (int j = 0; j < n; j++) { // read invoices
            cin >> invoice_in >> invoice_price;
            //cout << invoice_in << invoice_price << n << endl;

                if (invoice_in == 'A') {
                    invoice[0] = invoice[0] + invoice_price;
                } else if(invoice_in == 'B') {
                    invoice[1] = invoice[1] + invoice_price;
                } else {
                    invoice[2] = invoice[2] + invoice_price;
                }

                if (id_in == 1) {
                    id[0] = id[0] + invoice_price;
                } else if (id_in == 2) {
                    id[1] = id[1] + invoice_price;
                } else {
                    id[2] = id[2] + invoice_price;
                }
            
        }
    }
    
    for (int i=0; i < 3; i++) {
        cout<< i + 1 << ' ' << fixed << setprecision(2) << id[i] << endl;
    }
    
    for (int i=0; i < 3; i++) {
        cout<< char('A' + i) << ' ' << fixed << setprecision(2)<< invoice[i] << endl;
    }
    
    return 0;
}



