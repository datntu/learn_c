
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void inHoa(char a[]){
    for(int i=0;i<strlen(a);i++){
        if(islower(a[i])){
            printf("%c",a[i]);
        }
    }
}
int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    inHoa(a);
    return 0;
}