/* 배열 (Array) 이란, 어떤 한가지 자료형을 연속적으로 나열하는 것. 
만약 100명의 이름을 저장하여 사용하고자 한다면, 100개의 변수를 선언해서 각각 저장하고 사용해야 하는데, 
배열을 사용하면 변수 하나로 아주 쉽게 사용할 수 있다.
 */

/* 1. 사용자로부터 5개의 정수를 배열로 입력 받은 후 , 입력 받은 역순으로 출력하는 프로그램을 작성하시오. */

/* #include<stdio.h>
int main(void)
{
int num[5];
int count;

printf("5개의 정수를 입력하세요.\n");
for (count = 0; count < 5; count++)
{
scanf_s("%d", &num[count]);
}
for (count = 4; count >= 0; count = count-1 )
{
printf("%d", num[count]);

}


return 0;
} */


/* 2. 사용자로부터 5개의 정수를 입력 받는다. 이 후, 사용자가 1을 입력하면 첫 번째 입력 받은 정수를 출력하고,

    2를 입력하면 두 번 째 입력 받은 정수를 출력하는 프로그램을 작성하시오. */

/* #include<stdio.h>
int main(void)
{
int x[5];
int i;
int j;

printf("5개의 정수를 입력하세요.\n");

for (i = 0; i < 5; i++)
{
scanf_s("%d", &x[i]);
}
printf("1~5사이의 값 n을 입력하시면, n번째 값을 출력합니다");
scanf_s("%d", &j);
if (j<1 || j>5)
{
printf("error");
}

printf("%d", x[j-1]);
return 0;
} */

/* 3. 사용자로부터 5개의 정수를 배열로 입력 받은 후 숫자 하나를 추가로 입력 받아 그 수가 배열에 몇개 존재하는 지를 출력하는
프로그램을 작성하시오. */

/* #include<stdio.h>

int main(void)
{
 int i,j, num[5], n,k=0;
 printf("5개의 정수를 입력해주세요 \n");
 for (i = 0; i < 5; i++)
 {
  scanf_s("%d", &num[i]);
 }
 printf("숫자 n을 입력하시면, 배열에 n이 몇개 존재하는지 출력합니다.\n");
 scanf_s("%d", &n);
 for (j = 0;j < 5; j++)
 {
  if (num[j] == n)
  {
   k = k + 1;
  }
  

 }
 printf("배열에 %d개 존재합니다", k);
 return 0;
} */