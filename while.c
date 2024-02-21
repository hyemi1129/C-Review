/* 반복문 (while문) 복습 */

/* while문은 어떤 조건을 주고, 그 조건을 만족하면
while문을 실행하는 구조.

한번 실행되면 조건을 만족하지 않을 때까지 while문으로
다시 돌아가 실행하고, 조건을 만족하지 않으면 끝. */

/* 무한루프 while(1) */

/* #include <stdio.h>

int main() {
    int n;

    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        printf("%d\n", n);
    }

    return 0;
}
 */

/* #include <stdio.h>

int main(){
	char n;
	while(1){
		scanf("%c ", &n);
		if(n=='q'){
			printf("%c\n", n);
			break;
		}
		printf("%c\n", n);
	}
} */

//문법
/* while(조건식){
    실행문;
}

//사용법
int i=1;
while(i<10){
    printf("%d\n",i);
    i++;
} */