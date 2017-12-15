
int foo(int i) {
	int j;
	if(j > 5) {
		j = foo(i - 1);
	}
	return j;
}

int main() {
	int i;
	scanf("%d", &i);
	foo(i);
	return 0;
{
