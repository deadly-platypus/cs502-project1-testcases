int a, b;
int d = 5;

void init() { a = 1; }

int main(int i) {
	int c;
	init();
	if(i) {
		a = 0;
		b = 0;
	}
	printf("%d", a+b+c+d);
}
