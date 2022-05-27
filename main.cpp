#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include  <conio.h>
struct coffee
{
    char name[100];
    int c_beans;
    int sugar;
    int milk;
    int water;

};

struct coffee_machine
{
    int c_beans;
    int milk;
    int water;
    int sugar;

};

void menu();
void ShowMenu();
void CustomMenu();
void Custom();
void Stats();
void editRecipe();
void deleteRecipe();
void order_consum();
void OrderCutom();
void refill();
int checkMAC(struct coffee_machine);

struct coffee_machine mac;


int main()
{
    system("color 5F");
    mac.c_beans = 1000;
    mac.milk = 1000;
    mac.water = 1000;
    mac.sugar = 500;
    menu();
    return 0;
}

void menu ()
{
    printf("\n\t\tStart your day with a cup of coffee! :D");
    printf("\n\n\t MAIN MENU\t\t\n\n");
    printf("\t1.Menu   \n\t2.Customize your own drink   \n\t3.Statistics  \n\t4.Edit \n\t5.Delete recipe \n\t6.Refill machine \n\t7.Exit");

    switch(getch()){
        case '1':
            if(checkMAC(mac) == 1)
                ShowMenu();
            else {
                system("cls");
                printf("\n\nPlease refill machine");
                printf("\n\nRemaining amounts\n");
                printf("\nCoffee beans: %d g",mac.c_beans);
                printf("\nSugar: %d g",mac.sugar);
                printf("\nMilk: %d ml",mac.milk);
                printf("\nWater: %d ml",mac.water);
                printf("\nPlease refill machine\n");

                printf("\n\n\t1.Coffee beans   \n\t2.Milk   \n\t3.Water  \n\t4.Sugar");
                switch(getch()){
                    case '1':
                        mac.c_beans = 1000;
                        break;
                    case '2':
                        mac.milk = 1000;
                        break;
                    case '3':
                        mac.water = 1000;
                        break;
                    case '4':
                        mac.sugar = 500;
                        break;
                    default:
                        system("cls");
                        printf("\n\tEnter a number from 1 to 6:");
                        getch();
                        menu();
                }
                printf("\nEnter any key to go back");
                getch();
                system("cls");
                menu();
            }

            break;
        case '2': Custom();
            break;
        case '3': Stats();
            break;
        case '4': editRecipe();
            break;
        case '5': deleteRecipe();
            break;
        case '6': refill();
        case '7': exit(0);
            break;
        default:
            system("cls");
            printf("\n\tEnter a number from 1 to 6:");
            getch();
            menu();
    }

}
int checkMAC(struct coffee_machine x)
{
    if (x.c_beans <= 100) {
        printf("Please refill coffee beans before ordering coffee!");
        return  0;
    }
    if (x.milk <= 100) {
        printf("Please refill coffee beans before ordering coffee!");
        return  0;
    }
    if (x.water <= 100) {
        printf("Please refill coffee beans before ordering coffee!");
        return  0;
    }
    if (x.sugar <= 10) {
        printf("Please refill coffee beans before ordering coffee!");
        return  0;
    }
    return 1;
}
void refill()
{
    system("cls");
    printf("\n\n\t Refill station");
    printf("\n\n\t1.Coffee beans   \n\t2.Milk   \n\t3.Statistics  \n\t4.Water \n\t5. Sugar");
    switch(getch()){
        case '1':
            mac.c_beans = 1000;
            break;
        case '2':
            mac.milk = 1000;
            break;
        case '3':
            mac.water = 1000;
            break;
        case '4':
            mac.sugar = 500;
            break;
        default:
            system("cls");
            printf("\n\tEnter a number from 1 to 6:");
            getch();
            menu();
    }
    printf("\nEnter any key to go back");
    getch();
    system("cls");
    menu();

}
void order_consum(struct coffee x)
{
    mac.c_beans = mac.c_beans - x.c_beans;
    mac.milk = mac.milk - (x.milk * 3);
    mac.water = mac.water - (x.water * 2);
    mac.sugar = mac.sugar - x.sugar;
}
void heart(char x[]){
    system("cls");
    printf("\n\n\t\t--->Enjoy your %s! <3 <---\n\n\n",x);
    printf("\t________00000000000___________000000000000_________\n");
    printf("\t______00000000_____00000___000000_____0000000______\n");
    printf("\t____0000000_____________000______________00000_____\n");
    printf("\t___0000000_______________0_________________0000____\n");
    printf("\t__000000____________________________________0000___\n");
    printf("\t__00000_____________________________________ 0000__\n");
    printf("\t_00000______________________________________00000__\n");
    printf("\t_00000_____________________________________000000__\n");
    printf("\t__000000_________________________________0000000___\n");
    printf("\t___0000000______________________________0000000____\n");
    printf("\t_____000000____________________________000000______\n");
    printf("\t_______000000________________________000000________\n");
    printf("\t__________00000_____________________0000___________\n");
    printf("\t_____________0000_________________0000_____________\n");
    printf("\t_______________0000_____________000________________\n");
    printf("\t_________________000_________000___________________\n");
    printf("\t_________________ __000_____00_____________________\n");
    printf("\t______________________00__00_______________________\n");
    printf("\t________________________00_________________________\n");
}

void ShowMenu() {
    system("cls");
    struct coffee cappucino;
    cappucino.c_beans = 2;
    cappucino.milk = 4;
    cappucino.water = 1;
    cappucino.sugar = 2;
    struct coffee espresso;
    espresso.c_beans = 4;
    espresso.milk = 0;
    espresso.water = 2;
    espresso.sugar = 0;
    struct coffee double_espresso;
    double_espresso.c_beans = 8;
    double_espresso.milk = 0;
    double_espresso.water = 2;
    double_espresso.sugar = 0;
    struct coffee latte;
    latte.c_beans = 4;
    latte.milk = 5;
    latte.water = 0;
    latte.sugar = 2;
    struct coffee iced_coffee;
    iced_coffee.c_beans = 4;
    iced_coffee.milk = 3;
    iced_coffee.water = 2;
    iced_coffee.sugar = 2;
    printf("\n\n\t\t\t  MENU\t\t\n\n");

    printf("\t1.Cappucino   \n\t2.Espresso  \n\t3.Double shot espresso  \n\t4.Latte \n\t5.Iced Coffee \n\t6.Custom Recipes \n\t7.Cancel");

    switch (getch()) {
        case '1':
            order_consum(cappucino);
            heart("Cappucino");
            printf("\nEnter any key to go back");
            getch();
            system("cls");
            menu();
            break;

        case '2':
            order_consum(espresso);
            heart("Espresso");
            printf("\nEnter any key to go back");
            getch();
            system("cls");
            menu();
            break;

        case '3':
            order_consum(double_espresso);
            heart("Double Shot Espresso");
            printf("\nEnter any key to go back");
            getch();
            system("cls");
            menu();
            break;

        case '4':
            order_consum(latte);
            heart("Latte");
            printf("\nEnter any key to go back");
            getch();
            system("cls");
            menu();
            break;

        case '5':
            order_consum(iced_coffee);
            heart("Iced coffee");
            printf("\nEnter any key to go back");
            getch();
            system("cls");
            menu();
            break;
        case '6':
            CustomMenu();
        default:
            menu();
            break;
    }
}

void Custom() {
    system("cls");
    FILE *f;
    struct coffee x;
    f = fopen("date.txt", "a+");
    printf("\n\tPick a name for your coffee:\n");
    fgets(x.name, 100, stdin);
    strtok(x.name, "\n");
    printf("\tPick desired coffee level:\n");
    scanf("%d",&x.c_beans);
    printf("\tPick milk level:\n");
    scanf("%d",&x.milk);
    printf("\tPick water level:\n");
    scanf("%d",&x.water);
    printf("\tPick sugar level:\n");
    scanf("%d",&x.sugar);
    fwrite(&x, sizeof(x), 1, f);
    printf("\n\tRecipe saved");
    printf("\n\tName:%s\n\tCaffeine:%d\n\tSugar:%d\n", x.name, x.c_beans, x.sugar);
    fclose(f);
    printf("\nEnter any key to go back");
    getch();
    system("cls");
    menu();
}
void CustomMenu()
{
    system("cls");
    FILE *f;
    struct coffee a;
    f=fopen("date.txt", "r");
    if(f==NULL){
        printf("Error opening file");
        exit(1);
    }else
        printf("\n\n\t\tCustom Recipes:\n");
    while (fread(&a, sizeof(a),1,f)==1){
        printf("\n\n\tName=%s\n\tCaffeine=%d\n\tSugar=%d\n\tMilk=%d\n\tWater=%d", a.name, a.c_beans, a.sugar,a.milk,a.water);
    }
    printf("\n\nPress 0 to order Custom Coffee");
    switch (getch()) {
        case '0':
            OrderCutom();
            break;
        default:
            printf("\nEnter any key to go back");
            getch();
            system("cls");
            menu();
    }
    fclose(f);
}

void Stats(){
    system("cls");
    printf("\n\nRemaining amounts\n");
    printf("\nCoffee beans: %d g",mac.c_beans);
    printf("\nSugar: %d g",mac.sugar);
    printf("\nMilk: %d ml",mac.milk);
    printf("\nWater: %d ml",mac.water);
    printf("\nEnter any key to go back");
    getch();
    system("cls");
    menu();
}

void editRecipe(){
    system("cls");
    FILE *f;
    int modif=0;
    struct coffee a,b;
    char name [100];
    f=fopen("date.txt","r+");
    if(f==NULL){
        printf("Error opening file");
        exit(1);
    }else{
        system("cls");
        printf("\n\tEdit Coffee name:\n");
        fgets(name,100,stdin);
        strtok(name, "\n");
        while(fread(&a,sizeof(a),1,f)==1){
            if (strcmp(name,a.name)==0){
                printf("\n\tEnter New Name:\n");
                fgets(b.name,100,stdin);
                strtok(b.name, "\n");
                printf("\n\tEnter New Caffeine level:\n");
                scanf("%d",&b.c_beans);
                printf("\n\tEnter New Sugar level:\n");
                scanf("%d",&b.sugar);
                printf("\n\tEnter New milk level:\n");
                scanf("%d",&b.milk);
                printf("\n\tEnter New Water level:\n");
                scanf("%d",&b.water);
                fseek(f,-sizeof(a),SEEK_CUR);
                fwrite(&b,sizeof(a),1,f);
                modif=1;
                break;
            }
            fflush(stdin);
        }
        if (modif==1)
            printf("\n\tCoffee recipe modified");
        else
            printf("Recipe Not Found");

        fclose(f);
    }
    printf("\nEnter any key to go back");
    getch();
    system("cls");
    menu();
}
void OrderCutom(){
    //system("cls");
    struct coffee a,b;
    FILE *f;
    f=fopen("date.txt", "r");
    if (f==NULL){
        printf("File error");
    }else
    {
        printf("\n\n\tEnter Recipe name:");
        scanf("%s",b.name);
        while(fread(&a,sizeof(a),1,f)==1){
            if(strcmp(a.name,b.name)!=0) {
                order_consum(a);
                heart(b.name);
                printf("\nEnter any key to go back");
                getch();
                system("cls");
                menu();
            }
            else {
                printf("\nCoffee recipe does not exist!");
                printf("\nEnter any key to go back");
                getch();
                system("cls");
                menu();
            }
        }
        fclose(f);
    }
    printf("\nEnter any key to go back");
    getch();
    system("cls");
    menu();
}
void deleteRecipe(){
    system("cls");
    struct coffee a;
    FILE *f, *ft;
    int modif;
    char name[100];
    f=fopen("date.txt", "r");
    if (f==NULL){
        printf("File error");
    }else{
        ft=fopen("b.txt","w+");
        if (ft==NULL){
            printf("File opening error");
        }else{
            printf("\n\tEnter Recipe name:");
            fgets(name,100, stdin);
            strtok(name, "\n");
            fflush(stdin);
            while(fread(&a,sizeof(a),1,f)==1){
                if(strcmp(a.name,name)!=0)
                    fwrite(&a,sizeof(a),1,ft);
                if(strcmp(a.name,name)==0)
                    modif=1;
            }
            fclose(f);
            fclose(ft);
            if (modif!=1){
                printf("\n\tThere is no such recipe!");
                remove ("b.txt");
            }else{
                remove("date.txt");
                rename("b.txt","date.txt");
                printf("\n\tRecipe Deleted successfully!");
            }
        }
    }
    printf("\nEnter any key to go back");
    getch();
    system("cls");
    menu();
}