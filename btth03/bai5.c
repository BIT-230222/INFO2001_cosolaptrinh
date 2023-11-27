#include <math.h>
#include <stdio.h>
int main() {
    int N, i;
    int isPrime = 1; 
    
    printf("Nhap mot so nguyen duong (N): ");
    scanf("%d", &N);
    
    if (N <= 1) {
        isPrime = 0; 
    } else {
        for (i = 2; i <= N/2; i++) {
            if (N % i == 0) {
                isPrime = 0; 
                break;
            }
        }
    }
    
    if (isPrime) {
        printf("%d là so nguyen to.\n", N);
    } else {
        printf("%d khong phai là so nguyen to.\n", N);
    }
    
    


 
    int number;
    
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);
    
    if (number % 2 == 0) {
        printf("%d là so chan.\n", number);
    } else {
        printf("%d là so le.\n", number);
    }
    
    return 0;

}
	float a;
	printf("nhap so diem : ");
	scanf("%f",&a);
	if(a<=10&&a>=0)
		if(a>=9)
		printf("hoc sinh xuat sac");
			else if(a>=8)
			printf("hoc sinh gioi");
					else if(a>=6.5)
				printf("hoc sinh kha");
						else if(a>=5)
							printf("hoc sinh trung binh");
								else
								printf("hoc sinh yeu");
    return 0;	
 int main() {
    int N, i = 1, sum = 0;
    
    printf("Nhap so le (N): ");
    scanf("%d", &N);
    
    while (N > 0) {
        sum += i;
        i += 2;
        N--;
    }
    
    printf("Tong cua %d so le dau tien là: %d\n", N, sum);
    
    return 0;
}
