int test1;
int test2 = 5;

int foo(int* i) {
	if(*i > 5) {
		test1 = *i;
		return *i;
	}

	test1 = *i + test2;
	return test1;
}

int bar() {
	return foo(&test2) + 1;
}

int main() {
	bar();
	printf(test1);
}
