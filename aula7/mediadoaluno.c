/* Aula 07 */


#include <stdio.h>

int main(){
	double n1, n2, media;
	
	scanf("%lf %lf", &n1, &n2);
	media = (n1+n2)/2;

	printf("média final é %.1lf \n",media);

	if(media < 6.0)	printf("Aluno reprovado");
	else printf("Aluno Aprovado");
	
	
	return 0;
}