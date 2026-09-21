#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * C00000020
 *
 * Faça um algoritmo que leia um valor e escreva: 0, se o valor é zero; 1, se o
 * valor é maior que zero; -1 - se o valor é negativo.
 */
void c00000020(void)
{
    int n;
    scanf("%d", &n);
    if (n == 0) {
        printf("0");
    } else if (n > 0) {
        printf("1");
    } else {
        printf("-1");
    }
}

/*
 * C00000040
 *
 * Faça um algoritmo que leia um valor e escreva: 0, se o valor é par; 1, se o
 * valor é ímpar.
 */
void c00000040(void)
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("0");
    } else {
        printf("1");
    }
}

/*
 * C00000060
 *
 * Faça um algoritmo que leia dois valores e, através de uma comparação,
 * escreva o maior deles. Considere que os dois valores são diferentes.
 */
void c00000060(void)
{
    float v1, v2;
    scanf("%f", &v1);
    scanf("%f", &v2);
    if (v1 > v2) {
        printf("%.2f", v1);
    } else {
        printf("%.2f", v2);
    }
}

/*
 * C00000080
 *
 * Faça um algoritmo que leia dois valores e escreva os dois em ordem
 * crescente.
 */
void c00000080(void)
{
    float v1, v2;
    scanf("%f", &v1);
    scanf("%f", &v2);
    if (v1 <= v2) {
        printf("%.2f %.2f", v1, v2);
    } else {
        printf("%.2f %.2f", v2, v1);
    }
}

/*
 * C00000100
 *
 * Faça um algoritmo que leia 3 valores v1, v2 e v3, e escreva-os em ordem
 * crescente.
 */
void c00000100(void)
{
    float v1, v2, v3, aux;
    scanf("%f", &v1);
    scanf("%f", &v2);
    scanf("%f", &v3);
    if (v1 > v2) { aux = v1; v1 = v2; v2 = aux; }
    if (v2 > v3) { aux = v2; v2 = v3; v3 = aux; }
    if (v1 > v2) { aux = v1; v1 = v2; v2 = aux; }
    printf("%.2f %.2f %.2f", v1, v2, v3);
}

/*
 * C00000200
 *
 * Faça um algoritmo que leia 3 valores v1, v2 e v3 e coloque-os em ordem
 * crescente, de forma que v1 contenha o menor, v2 contenha o elemento do meio
 * (nem o maior, nem o menor), e v3 contenha o maior. Escreva os valores
 * ordenados.
 */
void c00000200(void)
{
    float v1, v2, v3, aux;
    scanf("%f", &v1);
    scanf("%f", &v2);
    scanf("%f", &v3);
    if (v1 > v2) { aux = v1; v1 = v2; v2 = aux; }
    if (v2 > v3) { aux = v2; v2 = v3; v3 = aux; }
    if (v1 > v2) { aux = v1; v1 = v2; v2 = aux; }
    printf("%.2f %.2f %.2f", v1, v2, v3);
}

/*
 * C00000250
 *
 * Escreva um algoritmo que leia os valores das quatro provas de um aluno e
 * escreva a média aritmética considerando apenas as três melhores notas. Por
 * exemplo, se o valores lidos foram 9, 9.5, 7, e 8, a média será (9 + 9.5 +
 * 8)/3 (a prova de nota 7 é descartada). Dica:Não esqueça de considerar a
 * possibilidade de ocorrerem notas iguais.
 */
void c00000250(void)
{
    float n1, n2, n3, n4;
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);
    float menor = n1;
    if (n2 < menor) menor = n2;
    if (n3 < menor) menor = n3;
    if (n4 < menor) menor = n4;
    printf("%.2f", (n1+n2+n3+n4-menor)/3);
}

/*
 * C00000300
 *
 * Faça um algoritmo que leia 3 valores a, b e c, coeficientes de uma equação
 * de segundo grau, e verifique se a equação tem raízes reais. Se a equação
 * tiver raízes reais, calcule e escreva as raízes da equação (em ordem
 * crescente). Se não tiver, escreva "A equação não possui raízes reais". Dica:
 * As raízes de uma equação podem ser calculadas pela fórmula de Baskhara. Uma
 * equação não possui raízes se reais se B*B-4*a*c < 0
 */
void c00000300(void)
{
    float a, b, c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    float delta = b*b-4*a*c;
    if (delta < 0) {
        printf("A equação não possui raízes reais");
    } else {
        float r1 = (-b-sqrt(delta))/(2*a);
        float r2 = (-b+sqrt(delta))/(2*a);
        printf("%.2f %.2f", r1, r2);
    }
}

/*
 * C00000350
 *
 * Faça um algoritmo que leia 3 valores a, b e c, lados de um triângulo, e
 * verifique o tipo de triângulo formado escrevendo: 0 - se o triângulo é
 * equilátero (os três lados são iguais); 1 - se o triângulo é isósceles (dois
 * lados iguais e um diferente);2 - escaleno (3 lados diferentes).
 */
void c00000350(void)
{
    float a, b, c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    if (a == b && b == c) {
        printf("0");
    } else if (a == b || b == c || a == c) {
        printf("1");
    } else {
        printf("2");
    }
}

/*
 * C00000360
 *
 * Faça um algoritmo que leia 3 valores a, b e c, lados de um triângulo, e
 * verifique o tipo de triângulo formado escrevendo: 0 - se o triângulo é
 * retângulo (A^2=B^2+C^2); 1 - se o triângulo é acutângulo (A^2 > B^2 + C^2)
 * ;2 - obtusângulo (A^2 < B^2 + C^2). Lembre que, para aplicar as relações
 * mostradas, o algoritmo deve garantir que o maior dos 3 lados estará em A.
 */
void c00000360(void)
{
    float a, b, c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    if (a*a == b*b+c*c) {
        printf("0");
    } else if (a*a > b*b+c*c) {
        printf("1");
    } else {
        printf("2");
    }
}

/*
 * C00000400
 *
 * Faça um algoritmo que leia 3 valores l1,l2 e l3 e verifique se formam um
 * triângulo. Se formarem, calcule e escreva a área do triângulo formado (veja
 * exercício S00000900). Se não formarem, escreva -1.
 */
void c00000400(void)
{
    float l1, l2, l3;
    scanf("%f", &l1);
    scanf("%f", &l2);
    scanf("%f", &l3);
    if (l1+l2 > l3 && l1+l3 > l2 && l2+l3 > l1) {
        float s = (l1+l2+l3)/2;
        printf("%.2f", sqrt(s*(s-l1)*(s-l2)*(s-l3)));
    } else {
        printf("-1");
    }
}

/*
 * C00000410
 *
 * Faça um algoritmo que leia 3 valores l1,l2 e l3 e verifique se formam um
 * triângulo e, se formarem, o tipo de triângulo formado, escreva: 0 - se não
 * formarem triângulo; 1 - se formarem um triângulo equilatero (os três lados
 * são iguais); 2 - se formarem um triângulo isósceles (dois lados iguais e um
 * diferente); 3 - se formarem um triângulo escaleno (3 lados diferentes)
 */
void c00000410(void)
{
    float l1, l2, l3;
    scanf("%f", &l1);
    scanf("%f", &l2);
    scanf("%f", &l3);
    if (!(l1+l2 > l3 && l1+l3 > l2 && l2+l3 > l1)) {
        printf("0");
    } else if (l1 == l2 && l2 == l3) {
        printf("1");
    } else if (l1 == l2 || l2 == l3 || l1 == l3) {
        printf("2");
    } else {
        printf("3");
    }
}

/*
 * C00000450
 *
 * Faça um algoritmo que implemente uma calculadora de 4 operações. O algoritmo
 * deve ler, nessa ordem: o primeiro operando, o operador (+,-,*,/) e o segundo
 * operando, e deve escrever o resultado da operação. Por exemplo, se o usuário
 * digitar 2,+,3 o algoritmo deve escrever 5. Dica: Para que uma variável possa
 * receber um texto (mesmo que seja apenas o caracter "+") ela deve ser
 * declarada como "literal".
 */
void c00000450(void)
{
    float op1, op2, result;
    char op;
    scanf("%f", &op1);
    scanf(" %c", &op);
    scanf("%f", &op2);
    if (op == '+') {
        result = op1+op2;
    } else if (op == '-') {
        result = op1-op2;
    } else if (op == '*') {
        result = op1*op2;
    } else {
        result = op1/op2;
    }
    printf("%.2f", result);
}

/*
 * C00000460
 *
 * Faça um algoritmo que leia um literal contendo uma expressão com 3
 * caracteres, onde o primeiro caractere é um dígito entre 0 e 9, o segundo é
 * um operador (+,-,*,/) e o terceiro caractere é um dígito entre 0 e 9, e
 * efetue o cálculo da expressão escrevendo o resultado. Dica:Use a função
 * subliteral para separar os 3 caracteres e a função val para converter os
 * operandos em seus valores numéricos.
 */
void c00000460(void)
{
    char expr[4];
    scanf("%3s", expr);
    int a = expr[0]-'0';
    int b = expr[2]-'0';
    char op = expr[1];
    float result;
    if (op == '+') {
        result = a+b;
    } else if (op == '-') {
        result = a-b;
    } else if (op == '*') {
        result = a*b;
    } else {
        result = (float)a/b;
    }
    printf("%.2f", result);
}

/*
 * C00000500
 *
 * Faça um algoritmo que leia 3 notas de um aluno e escreva sua média
 * harmônica. Dica: A média harmônica entre três valores N1, N2 e N3 é
 * calculada pela expressão 3/(1/N1+1/N2+1/N3). O que acontece se alguma das
 * notas for igual a 0? Que resultado o algoritmo deve emitir?
 */
void c00000500(void)
{
    float n1, n2, n3;
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    if (n1 == 0 || n2 == 0 || n3 == 0) {
        printf("0.00");
    } else {
        printf("%.2f", 3/(1/n1+1/n2+1/n3));
    }
}

/*
 * C00000600
 *
 * Faça um algoritmo que leia 3 notas de um aluno e escreva sua média
 * harmônica. Se o aluno obteve média abaixo de 6.0, E SOMENTE NESSE CASO, leia
 * uma quarta nota (da prova de recuperação) e substitua a menor das três notas
 * pela nota da recuperação e recalcule a média harmônica. Escreva a média
 * harmônica final e o conceito obtido (0, se média harmônica (MH) < 6.0; 1 se
 * 6.0 <= MH <7.0; 2 se 7.0 <= MH < 8.0; 3 se 8.0 <= MH < 9.0; 4 se MH>=9.0).
 */
void c00000600(void)
{
    float n1, n2, n3;
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    float mh = 3/(1/n1+1/n2+1/n3);
    if (mh < 6.0) {
        float n4;
        scanf("%f", &n4);
        float menor = n1;
        if (n2 < menor) menor = n2;
        if (n3 < menor) menor = n3;
        if (menor == n1) {
            n1 = n4;
        } else if (menor == n2) {
            n2 = n4;
        } else {
            n3 = n4;
        }
        mh = 3/(1/n1+1/n2+1/n3);
    }
    int conceito;
    if (mh < 6.0) {
        conceito = 0;
    } else if (mh < 7.0) {
        conceito = 1;
    } else if (mh < 8.0) {
        conceito = 2;
    } else if (mh < 9.0) {
        conceito = 3;
    } else {
        conceito = 4;
    }
    printf("%.2f %d", mh, conceito);
}

/*
 * C00000625
 *
 * Faça um algoritmo que leia os códigos e as votações dos 5 candidatos da
 * eleição para presidente em 1o turno. O algoritmo deve escrever, para cada
 * candidato, seu código e seu percentual de votos. Se a eleição foi decidida
 * no 1o turno, i.e., um candidato obteve 50% dos votos válidos + 1, o
 * algoritmo deve escrever o código e o percentual de votos do eleito. Em caso
 * contrário, o algoritmo deve escrever os códigos e os percentuais de votos
 * dos dois candidatos que disputarão o segundo turno.
 */
void c00000625(void)
{
    int cod1, cod2, cod3, cod4, cod5;
    int v1, v2, v3, v4, v5;
    scanf("%d %d", &cod1, &v1);
    scanf("%d %d", &cod2, &v2);
    scanf("%d %d", &cod3, &v3);
    scanf("%d %d", &cod4, &v4);
    scanf("%d %d", &cod5, &v5);
    int total = v1+v2+v3+v4+v5;
    printf("%d %.2f%% ", cod1, v1*100.0/total);
    printf("%d %.2f%% ", cod2, v2*100.0/total);
    printf("%d %.2f%% ", cod3, v3*100.0/total);
    printf("%d %.2f%% ", cod4, v4*100.0/total);
    printf("%d %.2f%%\n", cod5, v5*100.0/total);
    if (v1 > total/2) {
        printf("%d %.2f%%", cod1, v1*100.0/total);
    } else if (v2 > total/2) {
        printf("%d %.2f%%", cod2, v2*100.0/total);
    } else if (v3 > total/2) {
        printf("%d %.2f%%", cod3, v3*100.0/total);
    } else if (v4 > total/2) {
        printf("%d %.2f%%", cod4, v4*100.0/total);
    } else if (v5 > total/2) {
        printf("%d %.2f%%", cod5, v5*100.0/total);
    } else {
        int m1c = cod1, m1v = v1, m2c = cod2, m2v = v2, tc, tv;
        if (m2v > m1v) { tc = m1c; m1c = m2c; m2c = tc; tv = m1v; m1v = m2v; m2v = tv; }
        if (v3 > m1v) { m2c = m1c; m2v = m1v; m1c = cod3; m1v = v3; } else if (v3 > m2v) { m2c = cod3; m2v = v3; }
        if (v4 > m1v) { m2c = m1c; m2v = m1v; m1c = cod4; m1v = v4; } else if (v4 > m2v) { m2c = cod4; m2v = v4; }
        if (v5 > m1v) { m2c = m1c; m2v = m1v; m1c = cod5; m1v = v5; } else if (v5 > m2v) { m2c = cod5; m2v = v5; }
        printf("%d %.2f%% %d %.2f%%", m1c, m1v*100.0/total, m2c, m2v*100.0/total);
    }
}

/*
 * C00000650
 *
 * Faça um algoritmo que leia 3 notas de um aluno e escreva sua média harmônica
 * (MH). Caso alguma das notas seja 0 (zero), MH deve receber 0 (zero). Se o
 * aluno obteve uma MH abaixo de 6.0 e AINDA PUDER OBTER média igual ou
 * superior a 6.0, o algoritmo deve ler uma quarta nota (da prova de
 * recuperação) e substituir a menor das três notas pela nota da recuperação,
 * recalculando MH. O algoritmo deve escrever a MH final e o conceito obtido
 * (0, se MH < 6.0; 1 se 6.0 <= MH <7.0; 2 se 7.0 <= MH < 8.0; 3 se 8.0 <= MH <
 * 9.0; 4 se MH>=9.0).
 *
 * Dica:No caso do aluno ter obtido média inferior a 6.0, uma forma de
 * verificar se ele pode alcançar média 6.0 através da prova de recuperação é
 * substituindo a menor nota por 10 e verificando se a MH resultante é igual ou
 * superior a 6.0.
 */
void c00000650(void)
{
    float n1, n2, n3;
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    float mh;
    if (n1 == 0 || n2 == 0 || n3 == 0) {
        mh = 0;
    } else {
        mh = 3/(1/n1+1/n2+1/n3);
    }
    if (mh < 6.0) {
        float menor = n1;
        if (n2 < menor) menor = n2;
        if (n3 < menor) menor = n3;
        float a = n1, b = n2, c = n3;
        if (menor == a) { a = 10; } else if (menor == b) { b = 10; } else { c = 10; }
        float mhMax = (a == 0 || b == 0 || c == 0) ? 0 : 3/(1/a+1/b+1/c);
        if (mhMax >= 6.0) {
            float rec;
            scanf("%f", &rec);
            if (menor == n1) { n1 = rec; } else if (menor == n2) { n2 = rec; } else { n3 = rec; }
            mh = (n1 == 0 || n2 == 0 || n3 == 0) ? 0 : 3/(1/n1+1/n2+1/n3);
        }
    }
    int conceito;
    if (mh < 6.0) {
        conceito = 0;
    } else if (mh < 7.0) {
        conceito = 1;
    } else if (mh < 8.0) {
        conceito = 2;
    } else if (mh < 9.0) {
        conceito = 3;
    } else {
        conceito = 4;
    }
    printf("%.2f %d", mh, conceito);
}

/*
 * C00000660
 *
 * Faça um algoritmo que leia 4 valores, Hi, Mi, Hf, Mf, representando
 * respectivamente a hora e minuto inicial e final de um evento, e calcule a
 * duração do mesmo em horas e minutos. Considere que o evento pode iniciar em
 * um dia e terminar no dia seguinte.
 */
void c00000660(void)
{
    int hi, mi, hf, mf;
    scanf("%d", &hi);
    scanf("%d", &mi);
    scanf("%d", &hf);
    scanf("%d", &mf);
    int inicio = hi*60+mi;
    int fim = hf*60+mf;
    int duracao = fim-inicio;
    if (duracao < 0) {
        duracao += 1440;
    }
    printf("%d %d", duracao/60, duracao%60);
}

/*
 * C00000700
 *
 * As tarifas de um estacionamento são definidas assim: A primeira e a segunda
 * hora custam 5 reais cada. A terceira e a quarta hora custam 2 reais cada. A
 * partir da quinta hora, cada hora custa 1 real cada. Assim, se um carro ficar
 * 5 horas no estacionamento, o motorista pagará 15 reais (5+5+2+2+1). Faça um
 * algoritmo que leia dois valores He e Hs, respectivamente a hora de entrada e
 * saída no estacionamento (horas inteiras, sem minutos), e escreva o valor a
 * ser pago. Considere que o
 */
void c00000700(void)
{
    int he, hs;
    scanf("%d", &he);
    scanf("%d", &hs);
    int horas = hs-he;
    int total;
    if (horas <= 2) {
        total = horas*5;
    } else if (horas <= 4) {
        total = 2*5 + (horas-2)*2;
    } else {
        total = 2*5 + 2*2 + (horas-4)*1;
    }
    printf("%d", total);
}

/*
 * C00000750
 *
 * Faça um algoritmo que leia, para duas barras de ouro, o seu peso e seu
 * valor. O algoritmo deve ler também o limite de peso de uma mochila, e
 * verificar e escrever que barra (s) devem ir na mochila de modo a maximizar o
 * valor dentro dela, sem exceder seu limite de peso. O algoritmo deve
 * escrever:
 *
 * 0 - Se nenhuma das barras puder ser colocada na mochila sem exceder o limite
 * de peso
 *
 * 1 - Se apenas a barra 1 puder ir na mochila
 *
 * 2 - Se apenas a barra 2 puder ir na mochila
 *
 * 3 - Se ambas as barras puderem ir na mochila simultaneamente
 */
void c00000750(void)
{
    float peso1, valor1, peso2, valor2, limite;
    scanf("%f", &peso1);
    scanf("%f", &valor1);
    scanf("%f", &peso2);
    scanf("%f", &valor2);
    scanf("%f", &limite);
    int cabe1 = peso1 <= limite;
    int cabe2 = peso2 <= limite;
    int cabeAmbas = (peso1+peso2) <= limite;
    if (cabeAmbas) {
        printf("3");
    } else if (cabe1 && cabe2) {
        if (valor1 >= valor2) {
            printf("1");
        } else {
            printf("2");
        }
    } else if (cabe1) {
        printf("1");
    } else if (cabe2) {
        printf("2");
    } else {
        printf("0");
    }
}

/*
 * C00000800
 *
 * Faça um algoritmo que leia 4(quatro) valores e escreva os 3 (tres) maiores
 * em ordem decrescente. Considere que podem ocorrer valores iguais.
 */
void c00000800(void)
{
    float v1, v2, v3, v4, aux;
    scanf("%f", &v1);
    scanf("%f", &v2);
    scanf("%f", &v3);
    scanf("%f", &v4);
    if (v1 < v2) { aux = v1; v1 = v2; v2 = aux; }
    if (v3 < v4) { aux = v3; v3 = v4; v4 = aux; }
    if (v1 < v3) { aux = v1; v1 = v3; v3 = aux; }
    if (v2 < v4) { aux = v2; v2 = v4; v4 = aux; }
    if (v2 < v3) { aux = v2; v2 = v3; v3 = aux; }
    printf("%.2f %.2f %.2f", v1, v2, v3);
}

/*
 * C00000810
 *
 * O número 3025 tem a seguinte característica: 30+25=55 e 55^2=3025. Faça um
 * algoritmo que leia um número de quatro dígitos e verifique se tem essa
 * característica, escrevendo:
 *
 * 0 - se não tem essa característica;
 *
 * 1 - se tem essa característica.
 */
void c00000810(void)
{
    int n;
    scanf("%d", &n);
    int d1 = n/100;
    int d2 = n%100;
    int soma = d1+d2;
    if (soma*soma == n) {
        printf("1");
    } else {
        printf("0");
    }
}

/*
 * C00000850
 *
 * Faça um algoritmo que leia as três dimensões (largura, comprimento e altura)
 * de duas caixas, e verifique se a primeira caixa pode ser colocada dentro da
 * segunda, escrevendo 1 se é possível colocá-la, e 0 se não é possível.
 * Considere que as caixas não podem ser rotacionadas em nenhuma direção.
 *
 * Dica: Para que uma caixa caiba na outra, cada dimensão dela deve ser menor
 * (não pode ser igual ou maior) que a dimensão correspondente na segunda caixa
 */
void c00000850(void)
{
    float l1, c1, a1, l2, c2, a2;
    scanf("%f", &l1);
    scanf("%f", &c1);
    scanf("%f", &a1);
    scanf("%f", &l2);
    scanf("%f", &c2);
    scanf("%f", &a2);
    if (l1 < l2 && c1 < c2 && a1 < a2) {
        printf("1");
    } else {
        printf("0");
    }
}

/*
 * C00000860
 *
 * Faça um algoritmo que leia as três dimensões (largura, comprimento e altura)
 * de duas caixas, e verifique se a primeira caixa pode ser colocada dentro da
 * segunda, escrevendo 1 se é possível colocá-la, e 0 se não é possível.
 * Considere que as caixas podem ser rotacionadas em qualquer direção.
 */
void c00000860(void)
{
    float l1, c1, a1, l2, c2, a2, aux;
    scanf("%f", &l1);
    scanf("%f", &c1);
    scanf("%f", &a1);
    scanf("%f", &l2);
    scanf("%f", &c2);
    scanf("%f", &a2);
    if (l1 > c1) { aux = l1; l1 = c1; c1 = aux; }
    if (c1 > a1) { aux = c1; c1 = a1; a1 = aux; }
    if (l1 > c1) { aux = l1; l1 = c1; c1 = aux; }
    if (l2 > c2) { aux = l2; l2 = c2; c2 = aux; }
    if (c2 > a2) { aux = c2; c2 = a2; a2 = aux; }
    if (l2 > c2) { aux = l2; l2 = c2; c2 = aux; }
    if (l1 < l2 && c1 < c2 && a1 < a2) {
        printf("1");
    } else {
        printf("0");
    }
}

/*
 * C00000865
 *
 * Uma fábrica produz um recipiente de plástico com sua tampa (também de
 * plástico). Ambos os componentes utilizam o mesmo equipamento para fabricação
 * (ou seja, não podem ser fabricados ao mesmo tempo). A fabricação do
 * recipiente consome duas horas; a fabricação a tampa consome meia hora. Um
 * cliente deseja o máximo de recipientes (com tampa) para 10 dias. A fábrica
 * trabalha 24 horas/dia e já dispõe de uma quantidade r de recipientes e t de
 * tampas em seu estoque (não necessariamente iguais). Faça um algoritmo que
 * leia os valores de r e t e informe o máximo de conjuntos recipiente-tampa
 * que ela pode fornecer em 10 dias.
 *
 * Dica:Considere 3 casos: os números de recipientes e de tampas no estoque são
 * iguais; os números de recipientes e de tampas no estoque são diferentes e HÁ
 * tempo para igualá-los; os números de recipientes e de tampas no estoque são
 * diferentes e NÃO HÁ tempo para igualá-los (para as duas últimas situações,
 * deve-se analisar separadamente o que há a mais).
 */
void c00000865(void)
{
    int r, t;
    scanf("%d", &r);
    scanf("%d", &t);
    int totalMin = 14400;
    int result;
    if (r == t) {
        result = r + totalMin/150;
    } else if (r < t) {
        int diff = t-r;
        int custoIgualar = diff*120;
        if (custoIgualar <= totalMin) {
            result = t + (totalMin-custoIgualar)/150;
        } else {
            result = r + totalMin/120;
        }
    } else {
        int diff = r-t;
        int custoIgualar = diff*30;
        if (custoIgualar <= totalMin) {
            result = r + (totalMin-custoIgualar)/150;
        } else {
            result = t + totalMin/30;
        }
    }
    printf("%d", result);
}

/*
 * C00000866
 *
 * Faça um algoritmo que leia a data de nascimento de uma pessoa e a data atual
 * (cada data com dia, mês e ano). O algoritmo deve escrever 1 se a pessoa é
 * maior de idade, e 0 se ela é menor de idade (maioridade: 18 anos).
 */
void c00000866(void)
{
    int dn, mn, an, da, ma, aa;
    scanf("%d", &dn);
    scanf("%d", &mn);
    scanf("%d", &an);
    scanf("%d", &da);
    scanf("%d", &ma);
    scanf("%d", &aa);
    int idade = aa-an;
    if (ma < mn || (ma == mn && da < dn)) {
        idade--;
    }
    if (idade >= 18) {
        printf("1");
    } else {
        printf("0");
    }
}

/*
 * C00000900
 *
 * Faça um algoritmo que leia para um trabalhador o valor que ganha por hora, a
 * hora de entrada e a hora de saída (valores inteiros, sem minutos) e calcule
 * quanto ele ganhou pelo turno. Considere que ele entra e sai no mesmo dia.
 */
void c00000900(void)
{
    float valorHora;
    int he, hs;
    scanf("%f", &valorHora);
    scanf("%d", &he);
    scanf("%d", &hs);
    printf("%.2f", (hs-he)*valorHora);
}

/*
 * C00001000
 *
 * Faça um algoritmo que leia para um trabalhador o valor que ganha por hora, a
 * hora de entrada e a hora de saída (valores inteiros, sem minutos) e calcule
 * quanto ele ganhou pelo turno. Considere que ele entra e sai no mesmo dia, e
 * que as horas a partir das 20:00 valem 20% a mais (adicional noturno).
 */
void c00001000(void)
{
    float valorHora;
    int he, hs;
    scanf("%f", &valorHora);
    scanf("%d", &he);
    scanf("%d", &hs);
    float total = 0;
    for (int h = he; h < hs; h++) {
        if (h >= 20) {
            total += valorHora*1.2;
        } else {
            total += valorHora;
        }
    }
    printf("%.2f", total);
}

/*
 * C00001100
 *
 * Faça um algoritmo que leia para um trabalhador o valor que ganha por hora, a
 * hora de entrada e a hora de saída (valores inteiros, sem minutos) e calcule
 * quanto ele ganhou pelo turno. Considere que ele entra e sai no mesmo dia, e
 * que as horas antes das 6:00 da manhã e a partir das 20:00 valem 20% a mais
 * (adicional noturno).
 */
void c00001100(void)
{
    float valorHora;
    int he, hs;
    scanf("%f", &valorHora);
    scanf("%d", &he);
    scanf("%d", &hs);
    float total = 0;
    for (int h = he; h < hs; h++) {
        if (h < 6 || h >= 20) {
            total += valorHora*1.2;
        } else {
            total += valorHora;
        }
    }
    printf("%.2f", total);
}

/*
 * C00001200
 *
 * Faça um algoritmo que leia para um trabalhador o valor que ganha por hora, a
 * hora de entrada e a hora de saída (valores inteiros, sem minutos) e calcule
 * quanto ele ganhou pelo turno. Considere que ele pode entrar em um dia e sair
 * no outro, mas que o total de horas trabalhadas não excede 23 horas.
 */
void c00001200(void)
{
    float valorHora;
    int he, hs;
    scanf("%f", &valorHora);
    scanf("%d", &he);
    scanf("%d", &hs);
    int horas = hs-he;
    if (horas <= 0) {
        horas += 24;
    }
    printf("%.2f", horas*valorHora);
}

/*
 * C00001250
 *
 * Faça um algoritmo que leia para um trabalhador o valor que ganha por hora, a
 * hora de entrada e a hora de saída (valores inteiros, sem minutos) e calcule
 * quanto ele ganhou pelo turno. Considere que ele pode entrar em um dia e sair
 * no dia seguinte, e que se ele permanecer mais do que 8 horas, as duas horas
 * a partir da nona hora valem 20% a mais, e as horas a partir da décima
 * primeira hora valem 50% a mais (horas extras).
 */
void c00001250(void)
{
    float valorHora;
    int he, hs;
    scanf("%f", &valorHora);
    scanf("%d", &he);
    scanf("%d", &hs);
    int horas = hs-he;
    if (horas <= 0) {
        horas += 24;
    }
    float total = 0;
    for (int i = 1; i <= horas; i++) {
        if (i <= 8) {
            total += valorHora;
        } else if (i <= 10) {
            total += valorHora*1.2;
        } else {
            total += valorHora*1.5;
        }
    }
    printf("%.2f", total);
}

/*
 * C00001300
 *
 * Faça um algoritmo que leia para um trabalhador o valor que ganha por hora, a
 * hora de entrada e a hora de saída (valores inteiros, sem minutos) e calcule
 * quanto ele ganhou pelo turno. Considere que ele pode entrar em um dia e sair
 * no outro, mas que o total de horas trabalhadas não excede 23 horas.
 * Considere que as horas a partir das 20:00 valem 20% a mais (adicional
 * noturno).
 */
void c00001300(void)
{
    float valorHora;
    int he, hs;
    scanf("%f", &valorHora);
    scanf("%d", &he);
    scanf("%d", &hs);
    int horas = hs-he;
    if (horas <= 0) {
        horas += 24;
    }
    float total = 0;
    int h = he;
    for (int i = 0; i < horas; i++) {
        int hora = h % 24;
        if (hora >= 20) {
            total += valorHora*1.2;
        } else {
            total += valorHora;
        }
        h++;
    }
    printf("%.2f", total);
}

/*
 * C00001400
 *
 * Faça um algoritmo que leia para um trabalhador o valor que ganha por hora, a
 * hora de entrada e a hora de saída (valores inteiros, sem minutos) e calcule
 * quanto ele ganhou pelo turno. Considere que ele pode entrar em um dia e sair
 * no outro, mas que o total de horas trabalhadas não excede 23 horas.
 * Considere também que as horas antes das 6:00 da manhã e a partir das 20:00
 * valem 20% a mais (adicional noturno).
 */
void c00001400(void)
{
    float valorHora;
    int he, hs;
    scanf("%f", &valorHora);
    scanf("%d", &he);
    scanf("%d", &hs);
    int horas = hs-he;
    if (horas <= 0) {
        horas += 24;
    }
    float total = 0;
    int h = he;
    for (int i = 0; i < horas; i++) {
        int hora = h % 24;
        if (hora < 6 || hora >= 20) {
            total += valorHora*1.2;
        } else {
            total += valorHora;
        }
        h++;
    }
    printf("%.2f", total);
}

/*
 * C00001500
 *
 * Faça um algoritmo que leia 5 valores entre 1 e 6, já ordenados,
 * correspondente ao arremesso de 5 dados no jogo do general, e escreva:
 *
 * 1 - Se os 5 valores s ão iguais
 *
 * 2 - Se há 4 valores iguais e um diferente
 *
 * 3 - Se os 5 valores formam uma sequência (1,2,3,4,5 ou 2,3,4,5,6)
 *
 * 4 - Se os valores formam um full-hand (3 valores iguais entre si, e os
 * outros dois valores também iguais entre si)
 *
 * 5 - Nenhuma das combinações acima
 */
void c00001500(void)
{
    int v1, v2, v3, v4, v5;
    scanf("%d", &v1);
    scanf("%d", &v2);
    scanf("%d", &v3);
    scanf("%d", &v4);
    scanf("%d", &v5);
    if (v1 == v2 && v2 == v3 && v3 == v4 && v4 == v5) {
        printf("1");
    } else if ((v1 == v2 && v2 == v3 && v3 == v4) || (v2 == v3 && v3 == v4 && v4 == v5)) {
        printf("2");
    } else if (v2-v1 == 1 && v3-v2 == 1 && v4-v3 == 1 && v5-v4 == 1) {
        printf("3");
    } else if ((v1 == v2 && v2 == v3 && v4 == v5) || (v1 == v2 && v3 == v4 && v4 == v5)) {
        printf("4");
    } else {
        printf("5");
    }
}

/*
 * C00001550
 *
 * Faça um algoritmo que leia três valores Dia, Mês e Ano, e verifique se
 * formam uma data válida. O algoritmo deve escrever 1 se a data for válida, 0
 * em caso contrário. Considere que ano bissexto é aquele divisível por 4 e que
 * abril, junho, setembro e novembro tem 30 dias, fevereiro tem 28 (29 em ano
 * bissexto) e todos os outros meses tem 31 dias.
 */
void c00001550(void)
{
    int d, m, a;
    scanf("%d", &d);
    scanf("%d", &m);
    scanf("%d", &a);
    int valido = 1;
    if (m < 1 || m > 12 || d < 1) {
        valido = 0;
    } else {
        int diasNoMes;
        if (m == 4 || m == 6 || m == 9 || m == 11) {
            diasNoMes = 30;
        } else if (m == 2) {
            diasNoMes = (a % 4 == 0) ? 29 : 28;
        } else {
            diasNoMes = 31;
        }
        if (d > diasNoMes) {
            valido = 0;
        }
    }
    printf("%d", valido);
}

/*
 * C00001600
 *
 * Faça um algoritmo que leia a data de nascimento de uma pessoa e a data
 * atual, cada uma com dia, mês e ano, e escreva quantos anos completos a
 * pessoa tem.
 */
void c00001600(void)
{
    int dn, mn, an, da, ma, aa;
    scanf("%d", &dn);
    scanf("%d", &mn);
    scanf("%d", &an);
    scanf("%d", &da);
    scanf("%d", &ma);
    scanf("%d", &aa);
    int idade = aa-an;
    if (ma < mn || (ma == mn && da < dn)) {
        idade--;
    }
    printf("%d", idade);
}

/*
 * C00001700
 *
 * Escreva um algoritmo que leia duas datas, cada uma composta de Dia, Mês e
 * Ano, e as escreva em ordem cronológica crescente. Ex:se as datas são
 * 01/04/2000 e 17/05/1988, o algoritmo deve escrever 17/05/1988 01/04/2000.
 */
void c00001700(void)
{
    int d1, m1, a1, d2, m2, a2;
    scanf("%d", &d1);
    scanf("%d", &m1);
    scanf("%d", &a1);
    scanf("%d", &d2);
    scanf("%d", &m2);
    scanf("%d", &a2);
    int v1 = a1*10000+m1*100+d1;
    int v2 = a2*10000+m2*100+d2;
    if (v1 <= v2) {
        printf("%02d/%02d/%04d %02d/%02d/%04d", d1, m1, a1, d2, m2, a2);
    } else {
        printf("%02d/%02d/%04d %02d/%02d/%04d", d2, m2, a2, d1, m1, a1);
    }
}

/*
 * C00001750
 *
 * Escreva um algoritmo que leia três datas, cada uma composta de Dia, Mês e
 * Ano, e as escreva em ordem cronológica crescente. Ex:se as datas são
 * 01/04/2000, 17/05/1988 e 23/10/1969, o algoritmo deve escrever 23/10/1969
 * 17/05/1988 01/04/2000.
 */
void c00001750(void)
{
    int d1, m1, a1, d2, m2, a2, d3, m3, a3;
    scanf("%d", &d1);
    scanf("%d", &m1);
    scanf("%d", &a1);
    scanf("%d", &d2);
    scanf("%d", &m2);
    scanf("%d", &a2);
    scanf("%d", &d3);
    scanf("%d", &m3);
    scanf("%d", &a3);
    int v1 = a1*10000+m1*100+d1;
    int v2 = a2*10000+m2*100+d2;
    int v3 = a3*10000+m3*100+d3;
    int t;
    if (v1 > v2) {
        t=v1; v1=v2; v2=t; t=d1; d1=d2; d2=t; t=m1; m1=m2; m2=t; t=a1; a1=a2; a2=t;
    }
    if (v2 > v3) {
        t=v2; v2=v3; v3=t; t=d2; d2=d3; d3=t; t=m2; m2=m3; m3=t; t=a2; a2=a3; a3=t;
    }
    if (v1 > v2) {
        t=v1; v1=v2; v2=t; t=d1; d1=d2; d2=t; t=m1; m1=m2; m2=t; t=a1; a1=a2; a2=t;
    }
    printf("%02d/%02d/%04d %02d/%02d/%04d %02d/%02d/%04d", d1, m1, a1, d2, m2, a2, d3, m3, a3);
}

/*
 * C00001790
 *
 * Escreva um algoritmo que leia uma data, composta por dia, mês e ano, e
 * verifique se a data corresponde ao último dia do mês, escrevendo 1, se for o
 * último dia do mês, e 0 se não for o último dia do mês. Considere, para
 * simplificar o problema, que ano bissexto é aquele divisível por 4, e que
 * fevereiro tem 28 dias (29 em ano bissexto), setembro, abril, junho e
 * novembro têm 30 dias e todos os outros meses tem 31 dias.
 */
void c00001790(void)
{
    int d, m, a;
    scanf("%d", &d);
    scanf("%d", &m);
    scanf("%d", &a);
    int diasNoMes;
    if (m == 4 || m == 6 || m == 9 || m == 11) {
        diasNoMes = 30;
    } else if (m == 2) {
        diasNoMes = (a % 4 == 0) ? 29 : 28;
    } else {
        diasNoMes = 31;
    }
    if (d == diasNoMes) {
        printf("1");
    } else {
        printf("0");
    }
}

/*
 * C00001800
 *
 * Escreva um algoritmo que leia uma data, composta por dia, mês e ano, e
 * escreva a data correspondente ao dia seguinte. Considere, para simplificar o
 * problema, que ano bissexto é aquele divisível por 4, e que fevereiro tem 28
 * dias (29 em ano bissexto), setembro, abril, junho e novembro têm 30 dias e
 * todos os outros meses tem 31 dias.
 */
void c00001800(void)
{
    int d, m, a;
    scanf("%d", &d);
    scanf("%d", &m);
    scanf("%d", &a);
    int diasNoMes;
    if (m == 4 || m == 6 || m == 9 || m == 11) {
        diasNoMes = 30;
    } else if (m == 2) {
        diasNoMes = (a % 4 == 0) ? 29 : 28;
    } else {
        diasNoMes = 31;
    }
    d++;
    if (d > diasNoMes) {
        d = 1;
        m++;
        if (m > 12) {
            m = 1;
            a++;
        }
    }
    printf("%02d %02d %04d", d, m, a);
}

/*
 * C00001850
 *
 * Escreva um algoritmo que leia uma data, composta por dia, mês e ano, e
 * escreva quantos dias passaram-se desde o início do ano. Considere, para
 * simplificar o problema, que ano bissexto é aquele divisível por 4, e que
 * fevereiro tem 28 dias (29 em ano bissexto), setembro, abril, junho e
 * novembro têm 30 dias e todos os outros meses tem 31 dias.
 */
void c00001850(void)
{
    int d, m, a;
    scanf("%d", &d);
    scanf("%d", &m);
    scanf("%d", &a);
    int dias = d;
    for (int i = 1; i < m; i++) {
        int diasPorMes;
        if (i == 4 || i == 6 || i == 9 || i == 11) {
            diasPorMes = 30;
        } else if (i == 2) {
            diasPorMes = (a % 4 == 0) ? 29 : 28;
        } else {
            diasPorMes = 31;
        }
        dias += diasPorMes;
    }
    printf("%d", dias);
}

/*
 * C00001900
 *
 * Para enviar uma carta são necessários um selo e um envelope. O selo custa 12
 * centavos e o envelope custa 5 centavos. Faça um algoritmo que leia uma
 * quantia inicial de selos, envelopes e centavos, e escreva o número de cartas
 * que podem ser enviadas com esses selos, envelopes e centavos (utilizando-os
 * para comprar mais selos e envelopes). Considere que não é possível converter
 * selos ou envelopes em dinheiro.
 */
void c00001900(void)
{
    int selos, envelopes, centavos;
    scanf("%d", &selos);
    scanf("%d", &envelopes);
    scanf("%d", &centavos);
    int cartas = 0;
    while (1) {
        while (selos < 1 && centavos >= 12) {
            selos++;
            centavos -= 12;
        }
        while (envelopes < 1 && centavos >= 5) {
            envelopes++;
            centavos -= 5;
        }
        if (selos >= 1 && envelopes >= 1) {
            selos--;
            envelopes--;
            cartas++;
        } else {
            break;
        }
    }
    printf("%d", cartas);
}

/*
 * C00001925
 *
 * Para enviar uma carta são necessários um selo e um envelope. O selo custa 12
 * centavos e o envelope custa 5 centavos. Faça um algoritmo que leia uma
 * quantia inicial de selos, envelopes e dinheiro (em reais), e escreva o
 * número de cartas que podem ser enviadas com esses selos, envelopes e
 * centavos (utilizando-os para comprar mais selos e envelopes). Escreva
 * também, nessa ordem, a quantidade de selos, envelopes e dinheiro (em
 * centavos), que restará após enviadas as cartas. Considere que não é possível
 * converter selos ou envelopes em dinheiro.
 */
void c00001925(void)
{
    int selos, envelopes;
    float dinheiroReais;
    scanf("%d", &selos);
    scanf("%d", &envelopes);
    scanf("%f", &dinheiroReais);
    int centavos = (int)(dinheiroReais*100+0.5);
    int cartas = 0;
    while (1) {
        while (selos < 1 && centavos >= 12) {
            selos++;
            centavos -= 12;
        }
        while (envelopes < 1 && centavos >= 5) {
            envelopes++;
            centavos -= 5;
        }
        if (selos >= 1 && envelopes >= 1) {
            selos--;
            envelopes--;
            cartas++;
        } else {
            break;
        }
    }
    printf("%d %d %d %d", cartas, selos, envelopes, centavos);
}

/*
 * C00001950
 *
 * Uma fábrica produz um recipiente de plástico com sua tampa (também de
 * plástico). Ambos os componentes utilizam o mesmo equipamento para fabricação
 * (ou seja, não podem ser fabricados ao mesmo tempo). A fabricação do
 * recipiente consome duas horas; a fabricação da tampa consome meia hora. Um
 * cliente deseja o máximo de recipientes (com tampa) para 10 dias. A fábrica
 * trabalha 24 horas/dia e já dispõe de uma quantidade r de recipientes e t de
 * tampas em seu estoque (não necessariamente iguais). Faça um algoritmo que
 * leia os valores de r e t e informe o máximo de conjuntos recipiente-tampa
 * que ela pode fornecer em 10 dias.
 */
void c00001950(void)
{
    int r, t;
    scanf("%d", &r);
    scanf("%d", &t);
    int totalMin = 14400;
    int result;
    if (r == t) {
        result = r + totalMin/150;
    } else if (r < t) {
        int diff = t-r;
        int custoIgualar = diff*120;
        if (custoIgualar <= totalMin) {
            result = t + (totalMin-custoIgualar)/150;
        } else {
            result = r + totalMin/120;
        }
    } else {
        int diff = r-t;
        int custoIgualar = diff*30;
        if (custoIgualar <= totalMin) {
            result = r + (totalMin-custoIgualar)/150;
        } else {
            result = t + totalMin/30;
        }
    }
    printf("%d", result);
}

/*
 * C00002000
 *
 * Em uma empresa existem 5 faixas de horários 0-8 8-12 12-14 14-18 18-24, nas
 * faixas 0-8 12-14 18-24 o valor pago por hora trabalhada é dobrado. Faça um
 * algoritmo que leia o valor ganho por hora pelo funcionário, a hora de
 * entrada e a hora de saída, e calcule e escreva o salário deste empregado.
 * Considere que ele entra e sai no mesmo dia.
 */
void c00002000(void)
{
    float valorHora;
    int he, hs;
    scanf("%f", &valorHora);
    scanf("%d", &he);
    scanf("%d", &hs);
    float total = 0;
    for (int h = he; h < hs; h++) {
        if (h < 8 || (h >= 12 && h < 14) || h >= 18) {
            total += valorHora*2;
        } else {
            total += valorHora;
        }
    }
    printf("%.2f", total);
}

/*
 * C00002001
 *
 * Em uma empresa existem 5 faixas de horários 0-8 8-12 12-14 14-18 18-24, nas
 * faixas 0-8 12-14 18-24 o valor pago por hora trabalhada é dobrado. Faça um
 * algoritmo que leia o valor que o funcionário ganha por hora, a hora de
 * entrada e a hora de saída, calcule e escreva o salário deste empregado.
 * (Pode entrar em um dia e sair no outro, mas não pode trabalhar mais de 23
 * horas)
 */
void c00002001(void)
{
    float valorHora;
    int he, hs;
    scanf("%f", &valorHora);
    scanf("%d", &he);
    scanf("%d", &hs);
    int horas = hs-he;
    if (horas <= 0) {
        horas += 24;
    }
    float total = 0;
    int h = he;
    for (int i = 0; i < horas; i++) {
        int hora = h % 24;
        if (hora < 8 || (hora >= 12 && hora < 14) || hora >= 18) {
            total += valorHora*2;
        } else {
            total += valorHora;
        }
        h++;
    }
    printf("%.2f", total);
}

/*
 * C00002100
 *
 * A distância entre dois pontos definidos pelas coordenadas (X1,Y1) e (X2,Y2)
 * é dada por raizq((X1-X2)^2+(Y1-Y2)^2). Faça um algoritmo que leia 8 valores
 * representando as coordenadas X e Y de 4 pontos e verifique se os pontos
 * formam um quadrado, escrevendo:
 *
 * 1 - se formam um quadrado;
 *
 * 0 - se não formam.
 *
 * Considere que os pontos são lidos no sentido horário, seguindo o perímetro
 * do quadrado.
 */
void c00002100(void)
{
    float x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%f", &x1);
    scanf("%f", &y1);
    scanf("%f", &x2);
    scanf("%f", &y2);
    scanf("%f", &x3);
    scanf("%f", &y3);
    scanf("%f", &x4);
    scanf("%f", &y4);
    float l1 = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    float l2 = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    float l3 = sqrt((x3-x4)*(x3-x4)+(y3-y4)*(y3-y4));
    float l4 = sqrt((x4-x1)*(x4-x1)+(y4-y1)*(y4-y1));
    float diag1 = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    float diag2 = sqrt((x2-x4)*(x2-x4)+(y2-y4)*(y2-y4));
    if (l1 == l2 && l2 == l3 && l3 == l4 && diag1 == diag2) {
        printf("1");
    } else {
        printf("0");
    }
}

/*
 * C00002150
 *
 * Faça um algoritmo que leia oito valores correspondentes às coordenadas dos
 * quatro vértices de um quadrilátero convexo no espaço cartesiano (X0,Y0,
 * X1,Y1, X2,Y2, X3,Y3). O algoritmo deve identificar o tipo de polígono
 * formado escrevendo: 1 - se os 4 pontos formam um quadrado. 2 - se formam um
 * retângulo; 3 - se formam um losango; 4 - se formam um paralelograma; 5 - se
 * formam um papagaio (2 pares de lados adjacentes iguais. Ex: lados de
 * tamanhos 3,3,4 e 4); 6 - se não formam nenhum dos anteriores. A distância
 * (tamanho dos lados) entre dois pontos quaisquer (Xi,Yi) e (Xj,Yj) pode ser
 * obtida através da fórmula distXiYiXjYj = raizq((Xi-Xj)^2 + (Yi-Yj)^2). Por
 * exemplo, se os pontos lidos foram (3,2), (0,5), (3,8) e (6,5), a figura
 * formada é um quadrado e o algoritmo escreve 1. Para que a figura seja um
 * quadrado, os comprimentos das duas diagonais devem ser iguais, bem como os 4
 * lados. Se os pontos lidos foram (4,2), (1,4), (4,6) e (7,4), a figura
 * formada é um losango. Se os pontos lidos foram (2,3), (0,5), (3,8) e (5,6),
 * a figura formada é um retângulo. Se os pontos lidos foram (7,3), (0,3),
 * (2,5) e (5,5), a figura formada não é nenhuma das anteriores e o algoritmo
 * escreve 6 (ao menos um lado é diferente dos demais). Os pontos são
 * fornecidos em sentido horário ao longo do perímetro do quadrilátero.
 */
void c00002150(void)
{
    float x0, y0, x1, y1, x2, y2, x3, y3;
    scanf("%f", &x0);
    scanf("%f", &y0);
    scanf("%f", &x1);
    scanf("%f", &y1);
    scanf("%f", &x2);
    scanf("%f", &y2);
    scanf("%f", &x3);
    scanf("%f", &y3);
    float l01 = sqrt((x0-x1)*(x0-x1)+(y0-y1)*(y0-y1));
    float l12 = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    float l23 = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    float l30 = sqrt((x3-x0)*(x3-x0)+(y3-y0)*(y3-y0));
    float d02 = sqrt((x0-x2)*(x0-x2)+(y0-y2)*(y0-y2));
    float d13 = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    if (l01 == l12 && l12 == l23 && l23 == l30 && d02 == d13) {
        printf("1");
    } else if (l01 == l23 && l12 == l30 && d02 == d13) {
        printf("2");
    } else if (l01 == l12 && l12 == l23 && l23 == l30) {
        printf("3");
    } else if (l01 == l23 && l12 == l30) {
        printf("4");
    } else if ((l01 == l12 && l23 == l30) || (l01 == l30 && l12 == l23)) {
        printf("5");
    } else {
        printf("6");
    }
}

/*
 * C00003000
 *
 * Escreva um algoritmo que leia dois valores D e DS, correspondentes a um dia
 * do mes, e ao dia da semana que corresponde a ele (1-domingo 2-segunda 3-
 * terça 4-quarta 5-quinta 6-sexta 7-sábado). Calcule e escreva em que dia da
 * semana caiu o dia primeiro do mês do dia digitado.
 *
 * Exemplo: dia 10 no mês e 3 (terça) na semana. Resposta 1 (domingo)
 *
 * Exemplo: dia 30 no mês e 4 (quarta) na semana. Resposta 3 (terça feira)
 */
void c00003000(void)
{
    int d, ds;
    scanf("%d", &d);
    scanf("%d", &ds);
    int diff = (d-1) % 7;
    int primeiro = ds-diff;
    while (primeiro < 1) {
        primeiro += 7;
    }
    printf("%d", primeiro);
}

/*
 * C00003100
 *
 * Faça um algoritmo que leia as dimensões (altura, largura e profundidade) de
 * duas caixas e verifique se a primeira caixa pode ser colocada dentro da
 * segunda. Considere que as caixas podem ser rotacionadas em qualquer direção.
 * Se a primeira caixa couber dentro da segunda escreva 1, caso contrário
 * escreva 0.
 */
void c00003100(void)
{
    float a1, l1, p1, a2, l2, p2, aux;
    scanf("%f", &a1);
    scanf("%f", &l1);
    scanf("%f", &p1);
    scanf("%f", &a2);
    scanf("%f", &l2);
    scanf("%f", &p2);
    if (a1 > l1) { aux = a1; a1 = l1; l1 = aux; }
    if (l1 > p1) { aux = l1; l1 = p1; p1 = aux; }
    if (a1 > l1) { aux = a1; a1 = l1; l1 = aux; }
    if (a2 > l2) { aux = a2; a2 = l2; l2 = aux; }
    if (l2 > p2) { aux = l2; l2 = p2; p2 = aux; }
    if (a2 > l2) { aux = a2; a2 = l2; l2 = aux; }
    if (a1 <= a2 && l1 <= l2 && p1 <= p2) {
        printf("1");
    } else {
        printf("0");
    }
}

/*
 * C00003200
 *
 * Faça um algoritmo que leia dois números de três dígitos cada um, e verifique
 * se possuem os mesmos dígitos. Considere que pode haver dígitos repetidos em
 * um número, e que a cada dígito de um número deve corresponder exatamente um
 * dígito do outro número. Assim, os números 221 e 112 não tem os mesmos
 * dígitos, porque apesar de ambos terem somente os dígitos 1 e 2, aos dois
 * dígitos 2 do primeiro número corresponde o mesmo dígito no segundo número. O
 * algoritmo deve escrever 1, caso os números tenham os mesmos dígitos, e 0 em
 * caso contrário.
 */
void c00003200(void)
{
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    int a1 = n1/100, b1 = (n1/10)%10, c1 = n1%10;
    int a2 = n2/100, b2 = (n2/10)%10, c2 = n2%10;
    int t;
    if (a1 > b1) { t=a1; a1=b1; b1=t; }
    if (b1 > c1) { t=b1; b1=c1; c1=t; }
    if (a1 > b1) { t=a1; a1=b1; b1=t; }
    if (a2 > b2) { t=a2; a2=b2; b2=t; }
    if (b2 > c2) { t=b2; b2=c2; c2=t; }
    if (a2 > b2) { t=a2; a2=b2; b2=t; }
    if (a1 == a2 && b1 == b2 && c1 == c2) {
        printf("1");
    } else {
        printf("0");
    }
}

/*
 * C00003250
 *
 * Faça um algoritmo que leia um número de três dígitos e escreva o maior
 * número que possui os mesmos dígitos do número lido. Se um dígito aparecer
 * repetido no número lido, deve ser repetido o mesmo número de vezes no número
 * gerado.
 */
void c00003250(void)
{
    int n;
    scanf("%d", &n);
    int a = n/100, b = (n/10)%10, c = n%10, t;
    if (a < b) { t=a; a=b; b=t; }
    if (b < c) { t=b; b=c; c=t; }
    if (a < b) { t=a; a=b; b=t; }
    printf("%d", a*100+b*10+c);
}

/*
 * C00003300
 *
 * Faça um algoritmo que leia 4 valores X1,Y1,X2,Y2, correspondendo às
 * coordenadas do canto inferior esquerdo e canto superior direito de uma
 * região retangular no plano. Leia a seguir dois valores X,Y correspondendo a
 * um ponto no plano e escreva: 0 - Se o ponto está fora da região retangular;
 * 1 - Se o ponto está dentro da região retangular; 2 - Se o ponto está
 * exatamente na borda da região retangular.
 */
void c00003300(void)
{
    float x1, y1, x2, y2, x, y;
    scanf("%f", &x1);
    scanf("%f", &y1);
    scanf("%f", &x2);
    scanf("%f", &y2);
    scanf("%f", &x);
    scanf("%f", &y);
    if (x < x1 || x > x2 || y < y1 || y > y2) {
        printf("0");
    } else if (x == x1 || x == x2 || y == y1 || y == y2) {
        printf("2");
    } else {
        printf("1");
    }
}

/*
 * C00003400
 *
 * Faça um algoritmo que leia um número de 8 dígitos e verifica se ele é
 * palíndromo. Ou seja, se a leitura da direita para a esquerda é igual a
 * leitura da esquerda para a direita. Escrever 0 se for palíndromo e 1 se não
 * for.
 */
void c00003400(void)
{
}

/*
 * C00003500
 *
 * Um número é primo se divisível somente por ele mesmo e por 1. Faça um
 * algoritmo que leia um número inteiro entre 2 e 100 e determine se ele é ou
 * não um número primo escrevendo 1, se for primo, e 0 em caso contrário.
 */
void c00003500(void)
{
}

/*
 * C00003600
 *
 * Faça um algoritmo que leia 6 valores inteiros e escreva ao final a
 * quantidade de valores ímpares lidos, e a soma dos valores pares lidos.
 */
void c00003600(void)
{
}

/*
 * C0003650
 *
 * A locadora Só Filmassos classifica os filmes em "lançamentos" e "acervo",
 * sendo que a diária do lançamento é 5 reais e a diária do acervo é 3 reais. A
 * locadora está com uma promoção, ao locar 2 lançamentos o cliente tem direito
 * a um filme de acervo grátis. Faça um algoritmo que leia a quantidade de
 * lançamentos e a quantidade de filmes de acervo a serem locados, e calcule o
 * valor (mínimo) a ser pago.
 */
void c0003650(void)
{
}

/*
 * C00003700
 *
 * A locadora Só Filmassos classifica os filmes em "lançamentos" e "acervo",
 * sendo que a diária do lançamento é 5 reais e a diária do acervo é 3 reais. A
 * locadora está com uma promoção, ao locar 2 lançamentos o cliente tem direito
 * a um filme grátis, podendo ser de acervo ou lançamento. Faça um algoritmo
 * que leia a quantidade de lançamentos e a quantidade de filmes de acervo a
 * serem locados, e calcule o valor (mínimo) a ser pago.
 */
void c00003700(void)
{
}

int main(void)
{
    return 0;
}
