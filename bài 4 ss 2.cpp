#include<stdio.h>

int main(){
	int side = 10;
	// side l� 1 canh hinh vuong g�n l� 10 
	int total = 4;
	// chu vi h�nh vu�ng l�= side*total 
	// toan tu chu vi
	int chuvi = side * total ; 
	printf("phep chu vi la %d \n ", chuvi  );
	
	// dien tich hinh vuong
    // g�n side l� canh hinh vu�ng
    // dien tich h�nh vuong = side*side
    int dientich=side * side;
    printf("phep dien tich la %d\n", dientich);
  
 return 0;
}
