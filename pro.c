#include <stdio.h>

struct Product {
    int num;
    char Name[50];
    int rate;
    int qty;
    int amt;
    float dis;
    int bilamt;
    float gst;
    int netBill;
};

int main() {
    
    struct Product pro;

    
    printf("Enter Product Number: ");
    scanf("%d", &pro.num);

    printf("Enter Product Name: ");
    scanf("%s", pro.Name);

    printf("Enter Rate: ");
    scanf("%d", &pro.rate);

    printf("Enter Quantity: ");
    scanf("%d", &pro.qty);

    printf("Enter Discount: ");
    scanf("%f", &pro.dis);

   printf("\nnum\tname\trate\tqty\tamt\tdis\t\tbilamt\tgst\t\tnrtbill");
    pro.amt = pro.rate * pro.qty;
    pro.bilamt = pro.amt - (pro.amt * pro.dis / 100);
    pro.gst = 0.18 * pro.bilamt;
    pro.netBill = pro.bilamt + pro.gst;

    
   printf("\n");
    printf("%d\t", pro.num);
    printf("%s\t", pro.Name);
    printf("%d\t", pro.rate);
    printf("%d\t", pro.qty);
    printf("%d\t", pro.amt);
    printf("%f\t", pro.dis);
    printf("%d\t", pro.bilamt);
    printf("%f\t", pro.gst);
    printf("%d\t", pro.netBill);

    return 0;
}

/*
num     name    rate    qty     amt     dis             bilamt  gst             nrtbill
12      ews     3456    4       13824   3.000000        13409   2413.620117     15822
*/