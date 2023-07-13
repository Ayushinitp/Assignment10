//1 nth term of fibonacci series
// #include <stdio.h>
//  int main(){
//      int a,b,c,n,i;
//      printf("Enter a number : ");
//      scanf("%d",&n);
//      a=-1; b=1;
//      for(i=0;i<=n;i++){
//         c=a+b;
//         a=b;b=c;
//      }
//      printf("The %d term is %d",n,c);
//      return 0;
//  }


//2
// #include <stdio.h>
//  int main(){
//      int a=-1,b=1,c ,n,i;
//      printf("Enter a number : ");
//      scanf("%d",&n);
//      printf("First %d terms of fibonacci series are : \n");
//      for(i=0;i<=n;i++){
//         c=a+b;
//         printf("%d\t",c);
//         a=b;b=c;
//      }
//      return 0;
//  }




//3

// #include<stdio.h>
//  int main(){
//      int a=-1,b=1,c,n,i;
//      printf("Enter a number : ");
//      scanf("%d",&n);
//      for(i=0; ;i++){
//         c=a+b;
//         if(n==c){
//             printf("Found in series");
//             break;
//         }
//         if(n<i){
//             printf("Not in series");
//         break;
//         }
//         a=b;b=c;
        
//      }
//      return 0;
//  } 




//4
// #include <stdio.h>
//  int main(){
//      int a,b,hcf;
//      printf("Enter two numbers : ");
//      scanf("%d%d",&a,&b);
//      for(hcf=a<b?a:b;hcf>=1;hcf--){
//         if(a%hcf==0 && b%hcf==0){
//             printf("Hcf is %d",hcf);
//             break;
//         }
//      }
//      return 0;
//       }





//5
// #include <stdio.h>
//  int main(){
//     int a,b,i;
//     printf("Enter two numbers : ");
//     scanf("%d%d",&a,&b);
//     for(i=a>b?b:a;i>1;i--){
//         if(a%i==0 && b%i==0){
//             break;
//         }
//     }
//     if(i==1)
//     printf("coprime");
//     else
//     printf("Not coprime");
//     return 0;
//  }



//6
// #include <stdio.h>
// int main(){
//     int i,n;
//     for(n=1;n<=100;n++){
//         for(i=2;i<n;i++){
//             if(n%i==0)
//             break;
//         }
//         if(i==n)
//         printf("%d\t",n);
//     }
//     return 0;
// }



//7
// #include <stdio.h>
//  int main(){
//     int a,b,i,j;
//     printf("Enter two numbers : ");
//     scanf("%d%d",&a,&b);
//     for(i=(a>b?b:a);i<=(a>b?a:b);i++){
//         for(j=2;j<i;j++){
//             if(i%j==0)
//             break;
//         }
//         if(j==i)
//         printf("%d\t",i);
//     }
//     return 0;
//  }




//8 printf next prime number
// #include <stdio.h>
//  int main(){
//     int a,i,j;
//     printf("Enter a number : ");
//     scanf("%d",&a);
//     for(i=a+1; ; i++){     //yha a+1 liye hai kyuki agar ye nhi hoga to agar input number primr hai toh wahi print ho jayega par hmko next prime number chahiye
//         for(j=2;j<i;j++){
//             if(i%j==0)
//             break;
//         }
//         if(j==i){
//             printf("%d",i);
//             break;
//         }
//     }
//     return 0;
//  }





//9 armstrong number
// #include <stdio.h>
// #include <math.h>
//  int main(){
//     int n , a, digit=0, sum=0;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     a=n;
//     while(a){
//       digit++;
//       a=a/10;
//     }
//     printf("Digits are : %d\n",digit);
//     a=n;
//     while(a){
//       sum=sum + pow(a%10, digit);
//       a=a/10;
//     }
//     if(sum==n)
//     printf("Armstrong number");
//     else
//     printf("Not an armstrong number");
//     return 0;
//  }




//10 print all armstrong number under 1000
#include <stdio.h>
#include <math.h>
 int main(){
    int n, a ,digit,sum;
     for(n=1;n<=1000;n++){
       a=n;
       digit=0; sum=0;
       while(a>0){
        digit++;
        a=a/10;
       }
        a=n;
        while(a>0){
            sum=sum+ pow(a%10,digit);
            a=a/10;
        }
        if(sum==n)
        printf("%d\t",n);
     }
     return 0;
 }