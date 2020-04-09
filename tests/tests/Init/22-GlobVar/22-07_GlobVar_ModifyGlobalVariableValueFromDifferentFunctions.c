int a;


int firstFunction(){
	a = 8;
	return 69;
}

int secondFunction(){
	a = 69;
	return 18;
}

int main(){
	a = 0;
	int b;
	b = firstFunction();
	int c;
	c = secondFunction();
	return a;
}
