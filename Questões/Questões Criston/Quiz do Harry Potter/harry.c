#include <stdio.h>
int main()
{
char a1, a2, a3, a4, quantidade;
scanf("%c\n", &a1);// recebe as respostas
scanf("%c\n", &a2);// recebe as respostas
scanf("%c\n", &a3);// recebe as respostas
scanf("%c\n", &a4); // recebe as respostas

if ((a1 != 'd') && (a2 != 'a') && (a3 != 'c') && (a4 != 'd')){
quantidade = 0;}
else
if ((a1 == 'd') && (a2 != 'a') && (a3 != 'c') && (a4 != 'd')){
quantidade = 1;}
else
if ((a1 != 'd') && (a2 == 'a') && (a3 != 'c') && (a4 != 'd')){
quantidade = 1;}
else
if ((a1 != 'd') && (a2 != 'a') && (a3 == 'c') && (a4 != 'd')){
quantidade = 1;}
else
if ((a1 != 'd') && (a2 != 'a') && (a3 != 'c') && (a4 == 'd')){
quantidade = 1;}
else
if ((a1 == 'd') && (a2 == 'a') && (a3 != 'c') && (a4 != 'd')){
quantidade = 2;}
else
if ((a1 == 'd') && (a2 != 'a') && (a3 == 'c') && (a4 != 'd')){
quantidade = 2;}
else
if ((a1 == 'd') && (a2 != 'a') && (a3 != 'c') && (a4 == 'd')){
quantidade = 2;}
else
if ((a1 != 'd') && (a2 == 'a') && (a3 == 'c') && (a4 != 'd')){
quantidade = 2;}
else
if ((a1 != 'd') && (a2 == 'a') && (a3 != 'c') && (a4 == 'd')){
quantidade = 2;}
else
if ((a1 != 'd') && (a2 != 'a') && (a3 == 'c') && (a4 == 'd')){
quantidade = 2;}
else
if ((a1 != 'd') && (a2 == 'a') && (a3 == 'c') && (a4 == 'd')){
quantidade = 3;}
else
if ((a1 == 'd') && (a2 != 'a') && (a3 == 'c') && (a4 == 'd')){
quantidade = 3;}
else
if ((a1 == 'd') && (a2 == 'a') && (a3 != 'c') && (a4 == 'd')){
quantidade = 3;}
else
if ((a1 == 'd') && (a2 == 'a') && (a3 == 'c') && (a4 != 'd')){
quantidade = 3;}
else
if ((a1 == 'd') && (a2 == 'a') && (a3 == 'c') && (a4 == 'd')){
quantidade = 4;}
 //analise todas as possibilidades de respostas
	switch(quantidade){ //observa os valores de acertos e atribui respostas para cada um dos casos
		case 0:
		printf("Nunca assistiu\n");
		break;
		case 1:
		printf("Ja ouviu falar\n");
		break;
		case 2:
		printf("Interessado no assunto\n");
		break;
		case 3:
		printf("Fa\n");
		break;
		case 4:
		printf("Super fa\n");
		break;
		default:
		printf("Invalido");
		break;
	}
}