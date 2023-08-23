//information about Cars
#include<stdio.h>
#include<string.h>


struct car{
    char brand[50];
    char model[50];
    int year;
};

int main(){
    struct car car1={"BMV","X5",1975};
    struct car car2={"toyota","camrry",1945};
    struct car car3={"maza","3",1990};

    printf("%s %s %d\n",car1.brand,car1.model,car1.year);
    printf("%s %s %d\n",car2.brand,car2.model,car2.year);
    printf("%s %s %d",car3.brand,car3.model,car3.year);
    return 0;
}