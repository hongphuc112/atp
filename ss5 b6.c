#include <stdio.h>

int main() {
	int num1, num2;
    int choice;

    while (1) {
        printf("Nhap so thu nhat : ");
        scanf("%d", &num1);
        printf("Nhap so thu hai : ");
        scanf("%d", &num2);
        
        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban : ");
        scanf("%d", &choice);

         switch (choice) {
            case 1:
                printf("Tong cua %d v� %d l�: %d\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("Hieu cua %d v� %d l�: %d\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("Tich cua %d v� %d l�: %d\n", num1, num2, num1 * num2);
                break;
            case 4:
                printf("Thuong cua %d v� %d l�: %d\n", num1, num2, num1 / num2);
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                return 0;
                
            default:
                printf("Lua chon khong hop ly. Vui long chon lai.\n");
        }
        printf("\n");
    }
}

