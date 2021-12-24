#include <stdio.h>

typedef struct
{
    int month;
    int year;
    float total;
    int pay_status;
}electric_bill;

electric_bill find_latest_bill(electric_bill bills[5]);
void importBills(electric_bill bills[5]);
//void import_bill(electric_bill bills[5]);

int main()
{
    electric_bill bills[5];
    //import_bill(bills);
    importBills(bills);

    

    electric_bill lastest_bill = find_latest_bill(bills);
    printf("lastest_bill= %d, year = %d, total = %f, pay_status = %d", lastest_bill.month, lastest_bill.year, lastest_bill.total, lastest_bill.pay_status);
    
    return 0;
}

void importBills(electric_bill bills[5])
{
    electric_bill bill1;
    bill1.month = 10;
    bill1.year = 2021;
    bill1.total = 199090;
    bill1.pay_status = 1;
    bills[0] = bill1;

    electric_bill bill2;
    bill1.month = 1;
    bill1.year = 2021;
    bill1.total = 122400;
    bill1.pay_status = 1;
    bills[1] = bill2;

    electric_bill bill3;
    bill1.month = 12;
    bill1.year = 2019;
    bill1.total = 100090;
    bill1.pay_status = 0;
    bills[2] = bill3;

    electric_bill bill4;
    bill1.month = 10;
    bill1.year = 2021;//max
    bill1.total = 19090;
    bill1.pay_status = 1;
    bills[3] = bill4;

    electric_bill bill5;
    bill1.month = 4;
    bill1.year = 2021;
    bill1.total = 132090;
    bill1.pay_status = 1;
    bills[4] = bill5;
}

electric_bill find_latest_bill(electric_bill bills[5])
{   
    electric_bill lastest_bill;
    int max_month = 0;
    int max_year = 0;
    for (int i = 0; i < 5; i ++)
    {
        electric_bill bill = bills[i];
        if (bill.year >= max_year)
        {
            max_year = bill.year;
            if (bill.month >= max_month)
            {
                max_month = bill.month;
                lastest_bill = bill;
            }
        }
    }
    
    return lastest_bill;
}


void import_bill(electric_bill bills[10])
{
    for(int i = 0; i < 10; i++)
    {
        electric_bill bill;
        bill.month = i + 1;
        bill.year = 2021;
        bill.total = (i + 1) * 1000000;
        bill.pay_status = i / 2;

        bills[i] = bill;

    }
}
