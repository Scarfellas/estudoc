#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Variaveis globais
char *unidades[] = {"zero","um","dois","tres","quatro","cinco","seis","sete","oito","nove"};
char *dezVinte[] = {"","onze","doze","treze","quatorze","quinze","dezesseis","dezessete","dezoito","dezenove"};
char *dezenas[] = {"","dez","vinte", "trinta","quarenta","cinquenta","sessenta","setenta,","oitenta","noventa"};
char *centenas[] = {"","cento","duzentos","trezentos","quatrocentos","quinhentos","seiscentos","setecentos","oitocentos","novecentos"};

char *appendStr(char *str1, char *str2)
{
  int a,b,f;
  char *app;
  a=strlen(str1);
  b=strlen(str2);
  app=(char *)malloc(a+b+1);
  app[a+b+1]=13;
  for (f=0; f<a+b; f++)
  {
    if (f<a)
      app[f]=str1[f];
    else
      app[f]=str2[f-a]; 
  }
  return app;
}


char *findName(int num)
{
  char *e = " e ";
  char *nome;
  int c,d,dv,u; 
  c=num/100; 
  d=num/10-c*10;
  u=num-(num/10)*10;
  dv=d*10+u;
  nome=unidades[u];
  if (num<10)
    return nome;
  // Onze a dezenove  
  if ((dv>10) && (dv<20))
    nome=dezVinte[dv-10];
  else
  {    
    if (u==0)
      nome=dezenas[d];
    else
    {
      nome=appendStr(e,nome);
      nome=appendStr(dezenas[d],nome);
    }
  }
  if (num<100)
    return nome;
  // Inteiro
  if ((d==0)&&(u==0))
  {
    if (c==1)
      nome="cem";
    else
      nome=centenas[c];
  }
  else
  {
    nome=appendStr(e,nome);
    nome=appendStr(centenas[c],nome);
  }
  return nome;
}


int main(void)
{
  // Variaveis
  int numero;
  char *nomeNum;

  printf("Entre com um numero 0-999: ");
  scanf("%d",&numero);
  if ((numero<0) || (numero>999))
  {
    printf("Valor fora da faixa!\n");
    return 0;
  }
  nomeNum=findName(numero);
  printf("Numero %d: %s\n",numero,nomeNum);
  return 0;
}
