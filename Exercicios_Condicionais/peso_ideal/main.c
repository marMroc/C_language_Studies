/*Faça um programa em c que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes formulas (onde ´ h corresponde a altura): `
• Homens: (72.7 ∗ h) − 58
• Mulheres: (62, 1 ∗ h) − 44, 7 */

#include <stdio.h>

int main() {
    float altura, peso_ideal;
    char sexo;
    
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);
    
    printf("Digite o sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);
    
    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58;
        printf("Seu peso ideal é %.2f kg\n", peso_ideal);
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal é %.2f kg\n", peso_ideal);
    } else {
        printf("Sexo inválido\n");
    }
    
    return 0;
}
