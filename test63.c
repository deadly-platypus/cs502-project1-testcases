
int init(int* a) {
	*a = 5;
	return 5;
}

int main() {
	int a, b;
	b = init(&a);
	return a + b;
}
