#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * S00000050
 *
 * Faça um algoritmo que leia um valor N, representando o lado de um quadrado,
 * e calcule e escreva a área do quadrado.
 */
void s00000050(void)
{
    float n;
    scanf("%f", &n);
    printf("%.2f", n*n);
}

/*
 * S00000100
 *
 * Faça um algoritmo que leia dois valores inteiros e escreva a sua soma.
 */
void s00000100(void)
{
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    printf("%d", n1+n2);
}

/*
 * S00000150
 *
 * Faça um algoritmo que leia 3 valores reais, notas de um aluno, e escreva sua
 * média aritmética. A média aritmética de um conjunto de valores é dada pela
 * soma dos valores dividido pela quantidade de valores considerados.
 */
void s00000150(void)
{
    float n1, n2, n3, n4;
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);
    printf("%.2f", (n1+n2+n3+n4)/4);
}

/*
 * S00000200
 *
 * Faça um algoritmo que leia 2 valores reais v1 e v2 e calcule e escreva a
 * área do triângulo que tem base igual a v1 e altura igual a v2. Dica:A área
 * de um triângulo é dada pela expressão: (base x altura)/2
 */
void s00000200(void)
{
    float v1, v2;
    scanf("%f", &v1);
    scanf("%f", &v2);
    printf("%.2f", (v1*v2)/2);
}

/*
 * S00000210
 *
 * O produto vetorial AxB de dois vetores A=[ax,ay] e B=[bx,by] é um vetor
 * perpendicular ao plano formado pelos vetores A e B, de módulo igual a
 * |ax*by-ay*bx|. Faça um algoritmo que leia as componentes ax,ay,bx e by dos
 * vetores A e B, e calcule e escreva o módulo do vetor resultante do produto
 * vetorial.
 */
void s00000210(void)
{
    float ax, ay, bx, by;
    scanf("%f", &ax);
    scanf("%f", &ay);
    scanf("%f", &bx);
    scanf("%f", &by);
    printf("%.2f", fabs(ax*by-ay*bx));
}

/*
 * S00000220
 *
 * O produto escalar A.B de dois vetores A=[a1,a2,a3...] e B=[b1,b2,b3...] é
 * dado pelo somatório a1*b1+a2*b2+a3*b3+... Faça um algoritmo que leia as
 * coordenadas ax,ay,az,bx,by,bz de dois vetores no espaço tridimensional e
 * calcule e escreva seu produto escalar.
 */
void s00000220(void)
{
}

/*
 * S00000300
 *
 * Faça um algoritmo que leia 3 valores a, b e c, coeficientes de uma equação
 * de segundo grau, e calcule e escreva a soma das raízes da equação. Dica:As
 * raízes de uma equação podem ser calculadas pela fórmula de Baskhara.
 */
void s00000300(void)
{
}

/*
 * S00000350
 *
 * Faça um algoritmo que leia 3 valores a, b e c, coeficientes de uma equação
 * de segundo grau, e calcule e escreva o produto (multiplicação) das raízes da
 * equação. Dica:As raízes de uma equação podem ser calculadas pela fórmula de
 * Baskhara.
 */
void s00000350(void)
{
}

/*
 * S00000400
 *
 * Faça um algoritmo que leia 2 valores e escreva o maior deles. Dica:O maior
 * entre dois valores quaisquer v1 e v2 pode ser calculado pela expressão
 * (v1+v2+|v1-v2|)/2. O operador matemático de módulo ( |x| ) é representado na
 * nossa linguagem pela função abs(x)
 */
void s00000400(void)
{
}

/*
 * S00000500
 *
 * Faça um algoritmo que leia 2 valores e escreva o menor deles. Dica:O menor
 * entre dois valores pode ser obtido a partir do maior valor e da soma dos
 * dois (por exemplo: Se a soma de dois valores é 15 e o valor do maior é 10,
 * como pode ser calculado o valor do menor?).
 */
void s00000500(void)
{
}

/*
 * S00000600
 *
 * Faça um algoritmo que leia 3 valores escreva o maior deles. Dica:O maior
 * entre três valores pode ser encontrado pela aplicação repetida da expressão
 * para encontrar o maior entre dois valores.
 */
void s00000600(void)
{
}

/*
 * S00000700
 *
 * Faça um algoritmo que lê um valor inteiro em reais e calcula e escreve qual
 * o menor número possível de notas de 100,50,20,10,5,2 e 1 real em que o valor
 * pode ser decomposto. Dica:Isso pode ser calculado a partir de operações de
 * divisão inteira.
 */
void s00000700(void)
{
}

/*
 * S00000800
 *
 * Faça um algoritmo que lê uma quantia inteira em segundos e escreva o número
 * de horas, minutos e segundos correspondente. Dica:Para converter segundos
 * para minutos usa-se a divisão inteira por 60.
 */
void s00000800(void)
{
}

/*
 * S00000900
 *
 * Faça um algoritmo que lê 3 valores, lados de um triângulo, e calcule e
 * escreva a área do triângulo formado. Dica: A área de um triângulo de lados
 * l1, l2 e l3 pode ser calculada pela expressão
 * Área=raiz(S*(S-l1)*(S-l2)*(S-l3)), onde S é o semi-perímetro, ou seja, a
 * metade da soma dos lados
 */
void s00000900(void)
{
}

/*
 * S00001000
 *
 * Faça um algoritmo que le um valor entre 0 e 9999 e calcula a soma dos seus
 * dígitos. Dica: O dígito menos significativo de um número inteiro pode ser
 * obtido pelo resto da divisão do número por 10. Os dígitos restantes podem
 * ser obtidos pela divisão inteira por 10.
 */
void s00001000(void)
{
}

/*
 * S00001100
 *
 * Faça um algoritmo que leia 3 valores v1, v2 e v3, e troque os valores entre
 * si de modo que ao final a variável v2 contenha o valor que foi lido para v1,
 * a variável v3 contenha o valor que foi lido para v2, e a variável v1
 * contenha o valor que foi lido para a variável v3. Dica:Para trocar os
 * valores de duas variáveis (digamos v1 e v2) entre si, salva-se o valor de
 * uma delas (p.ex., v1) em uma variável auxiliar qualquer (p.ex., aux) ,
 * copia-se o valor da segunda (v2) para a variável que foi salva (v1), e
 * copia-se o valor da variável auxiliar (que contem o valor original da
 * primeira), para a segunda variável.
 */
void s00001100(void)
{
}

/*
 * S00001200
 *
 * Faça um algoritmo que leia 4 valores, Hi, Mi, Hf, Mf, representando
 * respectivamente a hora e minuto inicial e final de um evento, e calcule a
 * duração do mesmo em horas e minutos. Considere que o evento inicia e termina
 * no mesmo dia. Dica: Para simplificar o problema, converta cada par de
 * valores em um único valor em minutos.
 */
void s00001200(void)
{
}

/*
 * S00001300
 *
 * Faça um algoritmo que leia dois horários (hora, minuto e segundo) e escreva
 * quantos segundos transcorreram entre esses dois horários.
 */
void s00001300(void)
{
}

/*
 * S00001350
 *
 * Faça um algoritmo que leia um horário (hora, minuto e segundo) e escreva o
 * horário correspondente ao segundo seguinte. Ex: se for lido, 17,21,36
 * escrever 17,21,37. Considere que os horários (lido e escrito) estão na faixa
 * de 00:00:00 a 23:59:59.
 */
void s00001350(void)
{
}

/*
 * S00001400
 *
 * Faça um algoritmo que a partir de um horário (hora, minuto, segundo) e uma
 * quantidade de segundos transcorridos, calcule o segundo horário.
 */
void s00001400(void)
{
    int hora, minuto, segundo, transcorridos;
    scanf("%d", &hora);
    scanf("%d", &minuto);
    scanf("%d", &segundo);
    scanf("%d", &transcorridos);
    int total = (segundo+minuto*60+hora*3600+transcorridos) % 86400;
    printf("%d %d %d", total/3600, (total%3600)/60, total%60);
}

/*
 * S00001500
 *
 * Faça um algoritmo que leia a quantidade de alunos em uma sala de aula e a
 * quantidade de alunos por grupo, e calcule e escreva quantos grupos serão
 * formados e o resto de alunos que não foram suficientes para formar mais um
 * grupo.
 */
void s00001500(void)
{
    int turma,alunos;
    scanf("%d", &turma);
    scanf("%d", &alunos);
    int r = turma%alunos;
    int grupos = (turma-r)/alunos;
    printf("Grupos: %d Sobra: %d", grupos, r);
}

/*
 * S00001600
 *
 * Faça um algoritmo que leia um valor em binário até 6 dígitos e escreva o
 * número correspondente em decimal.
 *
 * Dica: Multiplique cada dígito binário pelo seu peso (1,2,4,8...) e some os
 * produtos.
 */
void s00001600(void)
{
    int b, n1, n2, n3, n4, n5, n6;
    scanf("%d", &b);
    n6 = b % 10;
    n5 = (b / 10) % 10;
    n4 = (b / 100) % 10;
    n3 = (b / 1000) % 10;
    n2 = (b / 10000) % 10;
    n1 = (b / 100000) % 10;

    printf("%d\n", n6 + n5 * 2 + n4 * 4 + n3 * 8 + n2 * 16 + n1 * 32);


}

/*
 * S00001650
 *
 * Faça um algoritmo que leia um número de 10 dígitos e rotacione os dígitos
 * uma posição para a esquerda, de modo que o primeiro dígito passe a ocupar a
 * última posição. Ex: 1234561234 deve gerar 2345612341 (todos os dígitos foram
 * uma posição para a esquerda e o 1 da primeira posição passou a ocupar a
 * última posição).
 */
void s00001650(void)
{
    int n;
    scanf("%d", &n);
    int left = n-(n%1000000000);
    int lefts = left/1000000000;

    printf("%d", (n-left)*10+lefts);
}

/*
 * S00001700
 *
 * Faça um algoritmo que leia 5 números inteiros e escreva a quantidade deles
 * que são pares. Dica:Um número é par se o resto da sua divisão por 2 é zero.
 */
void s00001700(void)
{

    int n1,n2,n3,n4,n5;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    scanf("%d", &n5);
    int sum = 0;
    if (n1%2==0){
        sum+=1;
    }
    if (n2%2==0){
        sum+=1;
    }if (n3%2==0){
        sum+=1;
    }if (n4%2==0){
        sum+=1;
    }if (n5%2==0){
        sum+=1;
    }
    printf("%d", sum);
}

/*
 * S00001800
 *
 * Faça um algoritmo que leia 5 números inteiros e escreva a soma dos que forem
 * ímpares. Dica:Um número é ímpar se o resto da sua divisão por 2 é um.
 */
void s00001800(void)
{
    int n1,n2,n3,n4,n5;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    scanf("%d", &n5);
    int sum = 0;
    if (n1%2!=0){
        sum+=n1;
    }
    if (n2%2!=0){
        sum+=n2;
    }if (n3%2!=0){
        sum+=n3;
    }if (n4%2!=0){
        sum+=n4;
    }if (n5%2!=0){
        sum+=n5;
    }
    printf("%d", sum);
}

int main(void)
{
    s00000210();
    return 0;
}
