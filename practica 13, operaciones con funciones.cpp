#include <stdio.h>

float resultado;

void menu();
void suma();
void resta();
void multiplicacion();
void division();
void mostrarResultado();

int main() {
    menu();
    return 0;
}

void menu() {
    int opcion;
    
    do {
        printf("\n=== MENU DE OPERACIONES ===\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                suma();
                break;
            case 2:
                resta();
                break;
            case 3:
                multiplicacion();
                break;
            case 4:
                division();
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
        }
    } while(opcion != 5);
}

void suma() {
    int n;
    float num;
    
    printf("\n=== SUMA ===\n");
    printf("Cuantos numeros desea sumar? ");
    scanf("%d", &n);
    
    resultado = 0;
    for(int i = 0; i < n; i++) {
        printf("Ingrese el numero %d: ", i+1);
        scanf("%f", &num);
        resultado += num;
    }
    
    mostrarResultado();
}

void resta() {
    int n;
    float num;
    
    printf("\n=== RESTA ===\n");
    printf("Cuantos numeros desea restar? ");
    scanf("%d", &n);
    
    printf("Ingrese el primer numero: ");
    scanf("%f", &resultado);
    
    for(int i = 1; i < n; i++) {
        printf("Ingrese el numero %d: ", i+1);
        scanf("%f", &num);
        resultado -= num;
    }
    
    mostrarResultado();
}

void multiplicacion() {
    int n;
    float num;
    
    printf("\n=== MULTIPLICACION ===\n");
    printf("Cuantos numeros desea multiplicar? ");
    scanf("%d", &n);
    
    resultado = 1;
    for(int i = 0; i < n; i++) {
        printf("Ingrese el numero %d: ", i+1);
        scanf("%f", &num);
        resultado *= num;
    }
    
    mostrarResultado();
}

void division() {
    int n;
    float num;
    
    printf("\n=== DIVISION ===\n");
    printf("Cuantos numeros desea dividir? ");
    scanf("%d", &n);
    
    printf("Ingrese el primer numero (dividendo): ");
    scanf("%f", &resultado);
    
    for(int i = 1; i < n; i++) {
        printf("Ingrese el numero %d (divisor): ", i+1);
        scanf("%f", &num);
        
        if(num == 0) {
            printf("Error: Division entre cero no permitida.\n");
            return;
        }
        resultado /= num;
    }
    
    mostrarResultado();
}

void mostrarResultado() {
    printf("\nEl resultado es: %.2f\n", resultado);
}
