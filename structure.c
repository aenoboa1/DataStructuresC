#include <stdio.h>

struct Rectangle{
	int length;
	int breath;
};
void changeLength(struct Rectangle *p,int l){
	p->length=l;
}
int main(){
	struct Rectangle r={10,5};
	changeLength(&r,10);
	printf("%d \n",r.length);
}
