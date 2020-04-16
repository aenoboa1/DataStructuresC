#include <stdio.h>
struct Test
{
	int A[5];
	int n;
};

void fun(struct Test t1){
	t1.A[0]=10;
	t1.A[1]=9;
	 for(int i = 0; i < 5; i++)
		       printf("%d ", t1.A[i]);
}

int main(){
	struct Test t={{2,4,6,8,10},5};
	fun(t);
}

