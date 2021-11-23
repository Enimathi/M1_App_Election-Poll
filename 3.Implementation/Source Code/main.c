#include"election.h"

int main(){
    while(1){
        printf("\n\t\t\t   1.User LogIn \n\t\t\t   2.Admin LogIn \n\t\t\t   3.Quit \n\t\t\t   Choice:");
		char input;
        scanf(" %c",&input);

        switch(input){
            case '1':
                studentPanel();
                break;
            case '2':
                adminPanel();
                break;
            case '3':
                return 0;
            default:
                printf("\n Incorrect Choice");
                getch();
        }
    }
    return 0;
}