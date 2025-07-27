#include <stdio.h>

int main(){
    int count;
    float price, dis, pro1, pro2;
    
    scanf(" %f %f %d",&price ,&dis, &count);

    pro1 = (price * count) - ((price * (dis / 100)) * count);
    pro2 = (count * price) - (count / 3 * price);

    if (pro1 > pro2){
        printf("Buy 2 Get 1\n%.2f", pro2);
    } else {
        printf("Discount %.0f%%\n%.2f", dis, pro1);
    }
    

    return 0;
}