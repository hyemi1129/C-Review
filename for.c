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

    for (;;) {
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

#include <stdio.h>

int main(){
	int n, i, sum=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		if(i%2==0){
			sum+=i;
		}
	}
	printf("%d", sum);
}