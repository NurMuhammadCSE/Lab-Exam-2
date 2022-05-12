#include<stdio.h>

int main() {

   // int a[3] = {1};
   // printf("%d\n", a[1]);

   // int a[10];

    // a[0]+=10;

   // a[0]= a[0]*2;

/*char a[100] = "ab"; 

char b[100] = "cd";

strcat(a, b);

printf("%s", b);/*

char a[100];

scanf("%s", a);

printf("%s", a);


    
  /*  int a = {0, 2, 1, 4, 3};
    a[a[1]+1];

printf("%d\n", a);*/

    int s,t,x;
    scanf("%d %d %d", &s,&t,&x);

    if (s <= x && x < t)
        printf("Yes\n");
    else if (t < s && (s <= x || x < t))
        printf("Yes\n");
    else
        printf("No\n");


    /* int n;
     scanf("%d", &n);

     int sum = 0;
     if(n >= 0 && n < 40){
         sum = 40 - n;
         printf("%d\n", sum);
     }else if(n >= 40 && n < 70){
         sum = 70 - n;
         printf("%d\n", sum);
     }else if(n >= 70 && n < 90){
         sum = 90 - n;
         printf("%d\n", sum);
     }else{
         printf("expert");
     } */

    /* int n,k,a,ans=0;

     scanf("%d %d %d",&n,&k,&a);
     ans=(k+a-1)%n;
     if(ans==0) ans=n;
     printf("%d\n",ans); */

    /* int n,a=0,d=0;
     scanf("%d", &n);

     char ch[n];
     scanf("%s", ch);

     for (int i=0; ch[i]!='\0'; i++) {

         if (ch[i] == 'A') a = a + 1;
         else d = d + 1;
     }

     if (a > d) {
         printf("Anton\n");
     } else if (d > a)    {
         printf("Danik\n");

     } else {
         printf("Friendship\n");
     }/*

     /* int A, B, C, D, E, F, X;
      scanf("%d %d %d %d %d %d %d", &A, &B, &C, &D, &E, &F, &X);

      int a = 0, b = 0;

      for (int i = 0; i < X; i++) {
          if (i % (A + C) < A) a += B;
          if (i % (D + F) < D) b += E;
      }

      if (a > b) printf("Takahashi\n");
      else if (a < b) printf("Aoki\n");

      else printf("Draw\n");*/



    /* int xyz;
     scanf("%d", &xyz);

     int x = xyz/100;
     int y = xyz/10%10;
     int z = xyz%10;

     if (x && y && z!= 0) {
         int sum = (x + y + z) * 111;
         printf("%d", sum);
     }/*


     /* int n;
      scanf ("%d",&n);
      for (int i=1; i<=n; i++) {
          printf ("I ");
          if (i&1)   printf ("hate ");
          else   printf ("love ");
          if (i==n)   continue;
          printf ("that ");
      }
      printf ("it "); */

    /* int a, b;
     int num = 0;
     scanf("%d %d", &a, &b);

     for(int i = a; i <= b; i++) {
         if(i >= a && i <= b) {
             num++;
         }
         else {
             num = 0;
         }
     }
     printf("%d\n", num);*/

    /* int n,x,y,count=0;
     scanf("%d", &n);
     for(int i=1; i<=n; i++) {
         scanf("%d %d", &x,&y);
         if((y-x)>=2) count++;
     }
     printf("%d\n", count);
    /*

     /* int a,b;
     scanf("%d %d", &a, &b);3

     for(int i=1; i<=a; i++) {
         for(int j=0; j<b; j++) {
             if(i%4==0) {
                 if(j==0)    printf("#");
                 else     printf(".");
             }
             else if(i%4==2) {
                 if(j==b-1)    printf("#");
                 else    printf(".");
             }
             else {
                 printf("#");
             }
         }
         printf("\n");;
     } */
    return 0;
}