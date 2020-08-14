#include <iostream>

int get_change(int m) {
  //write your code here
	int n = 0;
	while(m!=0){
		if(m>=10){
			m-=10;
			n++;
		}
		else if(m>=5){
			m-=5;
			n++;
		}
		else{
			m-=1; 
			n++;
		}
	}
  return n;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
