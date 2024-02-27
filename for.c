/* 반복문(for문) 복습 */

/* 
for(초기화;조건;증감)

선언 및 초기화 부분에는 몇 번부터 시작할 것인가를 알려주는 곳이고,
조건 부분은 if문에서와 같이 조건이 만족하는지를 확인해보는 곳이고,
[그리고 그 조건이 맞다면 중괄호{} 안의 내용들을 실행하게 됩니다. (조건을 만족하지 않으면 for문 종료됨)]
증감부는 반복을 수행할 때 어떠한 간격으로 처리할지를 알려주는 곳입니다.
 */




/* #include <stdio.h>

int main(){
	int n, i, m;
	scanf("%d", &n);
	for (i=0; i<n; ++i){
		scanf("%d", &m);
		printf("%d\n", m);
	}
}
 */

/* #include <stdio.h>

int main() {
    int n;

    for (;;) { #무한?
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        printf("%d\n", n);
    }

    return 0;
} */

/* #include <stdio.h>

int main(){
	char c, i;
	scanf("%c", &c);
	for(i='a'; i<=c; i++){
		printf("%c ", i);
	}
} */

/* #include <stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	for (i=n; i>=1; i--){
		printf("%d\n", i);
	}
} */

/* #include <stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	for (i=n-1; i>=0; i--){
		printf("%d\n", i);
	}
} */

/* #include <stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	for (i=0; i<=n; i++){
		printf("%d\n", i);
	}
} */

/* #include <stdio.h>

int main(){
	int n, i, sum=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		if(i%2==0){
			sum+=i;
		}
	}
	printf("%d", sum);
} */

/* #include <stdio.h>

int main(){
	int n, i, sum=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		sum+=i;
		
		if(sum>=n){
			printf("%d", i);
			break;
		}
	}
} */

/* #include <stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		if(i%3==0){
			printf("X ");
	}
	else{
		printf("%d ", i);
	}
	}
} */

/* #include <stdio.h>

int main(){
	int n, i, sum=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		sum += i;
		if(sum>=n){
			printf("%d", sum);
			break;
		}
	}
} */

/* #include <stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		if(i%3==0){
			printf("");
		}
		else{
			printf("%d ", i);
		}
		
	}
} */

/* #include <stdio.h>

int main(){
	int a, d, n, i;
	scanf("%d %d %d", &a,&d,&n);
	for(i=1; i<n; i++){
		a = a+d;
	}
	printf("%d\n", a);
} */

/* #include <stdio.h>

int main(){
	int a, b, i, temp;
	scanf("%d %d", &a, &b);
	if(a>b){
		temp = a;
		a = b;
		b = temp;
	}
	for(i=a; i<=b; i++){
		printf("%d ", i);
	}
} */

/* #include <stdio.h>

int main(){
	char a, b, i;
	scanf("%c %c", &a, &b);
	for(i=a; i<=b; i++)
	printf("%c ", i);
} */

/* #include <stdio.h>

int main(){
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	for(i=1; i<=n; i++){
		for(j=1; j<=m; j++){
			printf("%d %d\n", i, j);
		}
	}
} */

/* #include <stdio.h>

int main(){
	int r, g, b, i, j, k;
	scanf("%d %d %d", &r, &g, &b);
	for(i=0; i<r; i++){
		for(j=0; j<g; j++){
			for(k=0; k<b; k++){
				printf("%d %d %d\n", i, j, k);
			}
		}
	}
	printf("%d", r*g*b);
} */

/* #include <stdio.h>

int main(){
	int  i;
	for(i=1; i<5; i++){
		printf("%d", i);
	}
} */

/* #include <stdio.h>

int main(){
	int a, b, i, j;
	scanf("%d %d", &a, &b);
	for(i=a; i<=b; i++){
		for(j=1; j<=9; j++){
			printf("%d*%d=%d\n", i, j, i*j);
		}
	}
} */

/* #include <stdio.h>

int main(){
	int a, i, j;
	scanf("%d", &a);
	for(i=1; i<=a; i++){
		for(j=1; j<=a; j++){
			printf("*");
		}
		printf("\n");
	}
} */

/* #include <stdio.h>

int main(){
	int n, i, j;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
} */

/* #include <stdio.h>

int main(){
	int n, i, j;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		for(j=0; j<i; j++){
			printf(" ");
		}
		for(int j=0; j<n-i; j++){
			printf("*");
		}
		printf("\n");
	}
} */

/* commit */