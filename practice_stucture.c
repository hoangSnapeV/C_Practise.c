#include <stdio.h>

typedef struct
{
    int month;
    int year;
    float total;
    int pay_status;
}electric_bill;

electric_bill find_latest_bill(electric_bill bills[10]);
void import_bill(electric_bill bills[10]);

int main()
{
    electric_bill bills[10];
    import_bill(bills);

    electric_bill lastest_bill = find_latest_bill(bills);
    printf("lastest_bill= %d, year = %d, total = %f, pay_status = %d", lastest_bill.month, lastest_bill.year, lastest_bill.total, lastest_bill.pay_status);
    
    return 0;
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
electric_bill find_latest_bill(electric_bill bills[10])
{

}

