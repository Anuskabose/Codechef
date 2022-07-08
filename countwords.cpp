#include <stdio.h>
int main(void) {
	int W;
	scanf("%d", &T);
	
	while (W--) {
	    int n, m;
	    scanf("%d %d", &n, &m);
	    
	    printf("%d\n", n*m);
	}
	return 0;
}
