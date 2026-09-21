/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void conversao()
{
    int minutos, d, h, m;
    scanf("%d", &minutos);
    d = (minutos-minutos%1440)/1440;
    minutos-=minutos-minutos%1440;
    h = (minutos-minutos%60)/60;
    minutos-=minutos-minutos%60;
    printf("dias: %d horas: %d minutos: %d", d,h,minutos);

}


void salario(){
    float fixo, horas, valor;
    scanf("%d", &fixo);
    scanf("%d", &horas);
    scanf("%d", &valor);
    printf("salário liquido: %f", (fixo+(horas*valor))*0.91);
}
void conta(){
    float alimentos, bebidas, taxa;
    int pessoas;
    scanf("%f", &alimentos);
    scanf("%f", &bebidas);
    scanf("%f", &taxa);
    scanf("%d", &pessoas);
    float taxaPorcentagem = taxa/100;
    float totalSemTaxa = alimentos+bebidas;
    float totalTaxa = totalSemTaxa*taxaPorcentagem;
    float total = totalSemTaxa+totalTaxa;
    float individual = total/pessoas;
    
    printf("consumo: %.2f taxa: %.2f conta: %.2f valor individual: %.2f", totalSemTaxa, totalTaxa, total, individual);
}


int main()
{
    conversao();
    salario();
    conta();
    return 0;
}