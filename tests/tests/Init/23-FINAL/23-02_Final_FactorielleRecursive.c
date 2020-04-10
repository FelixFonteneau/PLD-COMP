int factorielle(int a){
	int result;
	if (a > 1){
		int b;
		b = a - 1;
		result = a*factorielle(b);
	}
	else{
		result = 1;
	}
	return result;
}


int main(){
	int a = 4;
	int result = factorielle(a);
	return result;
}
