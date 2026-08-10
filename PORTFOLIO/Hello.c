/*#include <stdio.h>
int main() {
    int a,b;
    printf("enter a:");
    scanf("%d",&a);

    printf("enter value of b:");
    scanf("%d",&b);

    
    printf("sum of a and b is : %d",a + b);
    return 0;
}*/


#include <stdio.h>
#include <math.h>

  /*int main() {
    int a;
    int b;
    int c;

    printf("enter a,b,c values : ");
    scanf("%d %d %d",& a,&b,&c);
    printf(" the avg is%d ", (a+b+c)/3);
    

    return 0 ;
}*/
 
/*  #include <stdio.h>
#include <math.h>
int main(){
    int age;
    printf("enter age :");
    scanf("%d", & age);
    if (age > 18) {
        printf("adult \n");
        printf("they can vote \n");
        printf("they can get licence");

    }
    else {
        printf("not adult");

    }*/

/*#include <stdio.h>
int main() {
    int age ;
    printf("enter age :");
    scanf("%d", & age);

    age >=18 ? printf("adult \n") : printf("not adult");

    return 0;
}*/

/*#include <stdio.h>
int main() {
    char day;
    printf("enter a between value between 1-7 :");                        // switch case use
    scanf("%s",& day);

    switch (day) {
        case 'm' : printf("its monday \n");
        break;
        case 't' : printf("its tuesday \n");
        break;
        case 'w' : printf("its wednesday \n");
        break;
        case 'T' : printf("its thursday \n");
        break;
        case 'f' : printf("its friday \n");
        break;
        case 's' : printf("its saturday \n");
        break;
        case 'S' : printf("its sunday \n");
        break;
        default : printf("invalid number");
        return 0;

                
                 
        
    }
}*/

/*#include <stdio.h>
int main(){
    int marks;
    printf("enter marks :");
    scanf("%d", & marks);

    // if (marks >= 30 && marks <= 100) {
    //     printf("pass");
    // } 
    // else if (marks < 30 && marks >=0 ){
    //     printf("fail");
    // }else{
    //     printf("invalid marks");
    // }
    
    // return 0;

    // marks >=30 && marks <=100 ? printf("pass") : printf("fail");
// }*/

// // #include <stdio.h>
// int main() {
//     int marks;
//     printf("enter marks (0-100)");
//     scanf("%d",& marks);

//     if (marks >=90 && marks <=100){
//         printf("grade A+");
//     }
    
//     else if (marks >=30 && marks < 90){
//             printf("grade B");
//     }
//     else if (marks >= 0){
//             printf("grade C");
//     }
    
    
//     else {
//         printf("Invalid");
//     } 
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     for(int i = 1; i<=10;i+=1){
//     printf("Hello World \n");
//     }
//     return 0;
    
// }


// #include<stdio.h>
// int main(){
//     int a,h,m,s,z;
//     scanf("%d",&a);
//     h = a/3600;z = a%3600;
//     m = z/60;s = z%60;
//     printf("%d:%d:%d",h,m,s);
// }
                              //-------------- LOOPS  ------------------------//
                              //                 for loop         
/*#include<stdio.h>
int main(){
    for (int i = 10;i>=1;i-=1){
        printf("%d\n",i);
    }
}*/

//print the no from from 0 to 10
/*#include <stdio.h>
int main(){
    for (float i = 0;i<=10;i++){
        printf("%f\n",i);
    }
}*/

//print characters from a to z
/*#include<stdio.h>
int main(){
    for (char i = 'a';i <= 'z';i+=1){
        printf("%c\n",i);
    }
}*/

                               //--------------While Loop---------------------
// #include<stdio.h>
// int main(){
//     int i = 1;
//     while(i<=5){
//         printf("%d\n",i);
//         i++;
//     }
// }
                            
// print the no from 0 to n ,n is taken from user
// #include <stdio.h>
// int main(){
//     int n,i = 0;
//     scanf("%d",&n);
//     while (i<=n){
//         printf("%d\n",i);
//         i++;
//     }}

                                
// #include <stdio.h>
// int main(){
//     int n,s = 0;
//     scanf("%d",&n);
//     for (int i = 1;i<=n;i++){
//         s+=i;
        
//     }printf("%d",s);
// }

/*#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);                                     //print table 
    for (int i = 1;i<=11;i++){
        if(i == 11){
            break;
        }
        printf(" %d\n",i*n);
    }
}*/
                                         //--------------BREAK statements---------------
/*#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter num:");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n%2 != 0){                            //take the input of num until user enters a odd number
            break;
        }

    }while(1);
    printf("its wrong");
}*/

/*#include<stdio.h>
int main(){
    int a;
    do{
        printf("enter num:");
        scanf("%d",&a);
        printf("%d\n",a);
                                                          //take the input of num until user enters a num which is multiple of 7
        if(a %7 == 0){
            break;
        }
    }while(1);
    printf("its wrong");
}*/
                                             //----------------CONTINUE statements-----------------
/*#include<stdio.h>
int main(){
    for(int i = 5;i<=50;i++){
        if(i % 2 !=1){
            continue;
        }
        
        printf("%d\n",i);
    
    }
}*/

/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int fact = 1;
    for(int i = n;i>0;i--){                      //Factorial//
        fact = fact*i;
    }printf("%d",fact);
}*/

// #include<stdio.h>
// int main(){
//     int sum = 0;
//     for(int i = 5;i<=50;i++){
//         sum+=i;

//     }printf("%d",sum);
// }

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i = 1;i<=4;i++){
//         for (j = 1;j<=5;j++){
//             printf("*");
//         }printf("\n");
//     }
// }


                         //---------        VOID          -------------//
                         //---------        VOID          -------------//
                         //---------        VOID          -------------//
                         //---------        VOID          -------------//
                        
/*#include<stdio.h>
void printhello();   //declaration or prototype

int main(){
    printhello(); // function call
    printhello(); // function call
    printhello(); // function call
    return 0;
}
void printhello(){          // function defination
    printf("Hello!\n");
}*/

/*#include<stdio.h>
void printhello();
void goodbye();   //declaration or prototype

int main(){
    printhello(); // function call
    goodbye();
    return 0;
}
void printhello(){          // function defination
    printf("Hello!\n");
}
void goodbye(){
    printf("Good Bye");
}*/

/*#include<stdio.h>
void namaste();
void bonjour();
int main(){
    char ch;
    scanf(" %c",&ch);
    if (ch == 'i'){
        namaste();
    }
    if(ch == 'f'){
        bonjour();
    }
    
    
    return 0 ;
}
void namaste(){
    printf("namaste\n");
}
void bonjour(){
    printf("Bonjour\n");
}*/

// #include<stdio.h>
// int sum(int a,int b);

// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     int s = sum(a,b);
//     printf("sum is: %d",s);
//     return 0;
// }
// int sum(int a, int b){
//     return a+b;
// }

// #include<stdio.h>
// void printtable(int n);

// int main(){
//     int n;
//     scanf("%d",&n);
//     printtable(n);
// }
// void printtable(int n){
//     for(int i = 1;i <= 10;i++){
//         printf("%d\n",i*n);
//     }
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n = 4;
//     printf("%f",pow(n,2));
// }

/*#include<stdio.h>
float square(float a);
float circle(float r);
float rec(float c,float d);
int main(){
    float a,c,d,r;
    scanf("%f%f%f%f",&a,&c,&d,&r);
    printf("area of sq: %f\n",square(a));
    printf("area of circle: %f\n",circle(r));
    printf("area of rec: %f\n",rec(c,d));
    return 0;
}
float square(float a){
    return a*a;
}
float circle(float r){
    return 3.14*r*r;
}
float rec(float c,float d){
    return c*d;
}*/

#include<stdio.h>
int main(){
    int 
}







