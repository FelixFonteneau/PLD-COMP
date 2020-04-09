int factorielle(int a){
	int result;
	if (a > 1){
		result = a*factorielle(a-1);
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
