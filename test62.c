int init(int* a) {
	if(a) {
		*a = 5;
		return 5;
	}

	return 0;
}

int main() {
	int a, b;
	b = init(&a);
	return a + b;
}
