int a = 1;

int main(){
  int b = a;
	int a = 2;
  b = b + a;
  if (a<b){
    int a = 3;
    b = b + a;
  }
	return b;
}
