#include <stdio.h> //vegtelen ciklus

int main(){
int szam;
while(1){
    printf("Pozitiv egesz: ");
    scanf("%d",&szam);

    if(szam > 0){
        break;
    }

}
    printf("\n");
    printf("A beolvasott pozitiv egesz szam: %d\n",szam);
return 0;

}