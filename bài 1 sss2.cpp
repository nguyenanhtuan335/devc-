#include <stdio.h>

int main() {
	// khai b�o kieu bien int ( so nguyen )
	int age = 15;
	// int dung de luu ca so nguyen( ca so am va so duong )
	printf( "Age : %d\n ",age) ;
	
	// Khai bao v� khoi tao bien kieu float (so thuc dau phay dong)
    float salary = 5.75;
    // float: D�ng de luu tru so thuc (bao gom so thap phan).
    // Thuong chiem 4 byte v� co do chinh xacc 6-7 chu so thap phan
    printf("Salary: %.2f\n", salary);
	
	// Khai bao v� khoii tao bien kieu char (ky tu)
    char grade = 'A';
    // char: dung de luu chu 1 ki tu don
    // thuong chiem 1 byte
    printf("Grade: %c\n", grade);
	
	// Khai b�o v� khoi tao bien kieu double (so thuc do chinh xac cao)
    double pi = 2.1234115544;
    // double: Tuong tu float nhung co do chinh xac cao hon (thuong co 15,16 chu so thap phan).
    // Thuong chiem 8 bo nho
    printf("PI: %.15lf\n", pi);
    
    // Khai bao va khoi tao  (so nguyen lon )
    long population =20000000;
    // long: dung de luu tru so nguyen lon hon kieu int
    // co kich thuc lon nhat, co the chua 64 bit
    printf("World Population: %ld\n", population);
    
    
    // Khai bao va khoi tao _Bool (boolean)
    bool  isEmployed = 1; 
    // 1 l� true, 0 l� false
   // _Bool: dung de luu tru 2 gia tri (true/false).
    // Thuong chiem 1 byte.
    printf("Is Employed: %d\n", isEmployed);

		return 0 ;
	
}
	
	
	
	
	
	

