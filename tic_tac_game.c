//-------------------TIK TAC GAME ------------------------------

#include<stdio.h>
#include<stdlib.h>

char a[9]={'1','2','3','4','5','6','7','8','9'};        //Declaring char and int globally
int k=0,end=1;

void draw(){
    //It is for outer appearance 
    printf("\n\n\n\t\t %c | %c | %c",a[0],a[1],a[2]);
    printf("\n\t\t___|___|___");
    printf("\n\t\t %c | %c | %c",a[3],a[4],a[5]);
    printf("\n\t\t___|___|___");
    printf("\n\t\t %c | %c | %c",a[6],a[7],a[8]);
    
}

void inputValue(){
    char ch;
    int i;
    printf("\nEnter the Position: ");
    scanf("%c",&ch);
    if(k==0){
        for(i=0; i<=8; i++){
            if(a[i]==ch){
                a[i]='X';
                k=1;
                break;
            }
        }
    }
    else{
        for(i=0; i<=8; i++){
            if(a[i]==ch){
                a[i]='0';
                k=0;
                break;
            }
        }
    }
    
}
int gameover(){

//For 'X' -----------------------------------
if (a[0]=='x' &&a[1]=='x' &&a[2]=='x')
    return(1);

else if (a[0]=='x' &&a[3]=='x' &&a[6]=='x')
    return(1);

else if(a[0]=='x' &&a[4]=='x' &&a[8]=='x') 
    return(1);

else if(a[1]=='x' &&a[4]=='x' && a[7]=='x')
    return(1);

else if (a[2]=='x' &&a[5]=='x' &&a[8]=='x')
    return(1);

else if (a[2]=='x' &&a[4]=='x' &&a[6]=='x')
    return(1);

else if (a[3]=='x' &&a[4]=='x' &&a[5]=='x')
    return(1);

else if (a[6]=='x' &&a[7]=='x' &&a[8]=='x')
    return(1);
//For 0 -------------------------------------
else if (a[0]=='0' &&a[1]=='0' &&a[2]=='0')
    return(2);

else if (a[0]=='0' &&a[3]=='0' &&a[6]=='0')
    return(2);

else if (a[0]=='0' &&a[4]=='0' &&a[8]=='0')
    return(2);

else if (a[1]='0' &&a[4]=='0' &&a[7]=='0')
    return(2);

else if (a[2]=='0' &&a[5]=='0' &&a[8]=='0')
    return(2);

else if (a[2]=='0' &&a[4]=='0' &&a [6]=='0')
    return(2);

else if (a[3]=='0' &&a[4]=='0' &&a[5]=='0')
    return(2);

else if (a[6]=='0' &&a[7]=='0' &&a[8]=='0')
    return(2);

else
    return 3;

}

void final(){                      //Winner of the Game

    int var;
    var=gameover();
    if(var==1){
        printf("\nPlayer one WON: ");
        end=0;
    }
    else if(var==2){
        printf("\nPlayer two WON: ");
        end=0;
    }
    else;
}

int main(){
    char c;
    label:
    system("clear");
    draw();

    while(end){
        inputValue();
        system("clear");
        draw();
        final();
    }
    printf("\n Do you wanna play again: ");
    printf("\n If yes press y: ");
    fflush(stdin);
        scanf("%c", &c);
    if(c=='y'|| c=='Y'){
        a[0]='1'; a[1]='2';a[2]='3'; a[4]='4'; 
        a[5]='6'; a[6]='7';a['8'];a[8]='9';
        k=0; end=1;
        goto label;
    }    

    printf("\n\n---THANK YOU---: ");

    return 0;
  
}