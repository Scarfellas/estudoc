#include <stdio.h>
#include <math.h>
int main()
{
	double  X, Y, a, b, c, som, sub, div, mult, rt, pot, delta, x1, x2, mod;
	char op;
		//som -> resultado da soma
		//sub -> resultado da subtracao
		//div -> resultado da divisao
		//mult -> resultado da multiplicacao
		//bas -> resultado de bhaskara
		//rt -> resultado da raiz quadrada
	X = 0; Y = 0; a = 0; b = 0; c = 0;
		//a, b e c sao os coeficientes da equacao quadratica
	int x, y, i;
        //i eh a variavel de controle do loop
		//mod eh o valor do calculo de modulo
		//x e y sao novas variaveis inteiras para calcular exclusivamente o modulo

    printf("\t\t Ola usuario, bem vindo a calculadora\n");


    printf("\n\t Escolha uma das operacoes abaixo:\n");
	printf("\n\t + - Soma:\n");
    printf("\t - - Subtracao:\n");
    printf("\t / - Divisao:\n");
    printf("\t * - Multiplicacao:\n");
    printf("\t b - Bhaskara:\n");
    printf("\t r - Raiz Quadrada:\n");
    printf("\t p - Potenciacao:\n");
    printf("\t %% - Modulo:\n");

	scanf("%c", &op);




        switch(op)
        {

        case '+':
            printf("\ndigite um valor para somar:\n");
            scanf("%c %lf", &op, &X);
            printf("\ndigite um valor para concluir a soma:\n");
            scanf("%lf", &Y);

                som = X + Y;

            printf("%.3lf\n", som);

            break;

        case '-':
            printf("\ndigite um valor para subtrair:\n");
            scanf("%c %lf", &op, &X);
            printf("\ndigite um valor para concluir a subtracao\n");
            scanf("%lf", &Y);

                sub = X - Y;

            printf("%.3lf\n", sub);

            break;

        case '/':
            printf("\ndigite um valor para dividir:\n");
            scanf("%c %lf", &op, &X);
            printf("\ndigite um valor para concluir a divisao:\n");
            scanf("%lf", &Y);
                if (Y==0){
                printf("ERROR!\n");
            }

                else {

                div = X / Y;

                printf("%.3lf\n", div);
            }

            break;

        case '*':
            printf("\ndigite um valor para multiplicar:\n");
            scanf("%c %lf", &op, &X);
            printf("\ndigite um valor para concluir a multiplicacao:\n");
            scanf("%lf", &Y);

                mult = X * Y;

            printf("%lf\n", mult);

            break;
        case 'b':
            printf("\ndigite os coeficientes 'a', 'b' e 'c' de sua equacao para calcular bhaskara:\n");
            scanf("%c %lf %lf %lf", &op, &a, &b, &c);
             delta = (b*b) - (4*a*c);
                if (delta < 0)
                {
                printf("\nERROR!\n");
                }

                else if (delta == 0){

                    x1 = x2 = -b / (2*a);
                    printf("%.3lf %.3lf\n", x1, x2);
                }

                else {


                    x1 = (-b + sqrt(delta)) / (2*a);

                    x2 = (-b - sqrt(delta)) / (2*a);

                    printf("%.3lf %.3lf\n", x1, x2);
                }

                break;

        case 'r':
            printf("\ndigite um valor para extrair a raiz quadrada:\n");
            scanf("%c %lf", &op, &X);
                    
                    if (X <= 0)
                    {
                        printf("\nERROR!\n");
                    }
                    
                    else 
                    {

                        rt = sqrt(X);

                        printf("%.3lf\n", rt);
                    }
            break;

        case 'p':
            printf("\ndigite um valor para ser base de uma potencia:\n");
            scanf("%lf", &X);
            printf("\ndigite um valor para ser o expoente da potenciacao:\n");
            scanf("%.3lf", &Y);

                pot = pow(X,Y);

            printf("%.3lf\n", pot);

            break;

        case '%':

            printf("\ndigite um valor para iniciar o calculo de modulo:\n");
            scanf("%d", &x);
            printf("\ndigite um valor para concluir o calculo de modulo:\n");
            scanf("%d", &y);
                if (y != 0){
                  mod = x%y;
                    printf("%.3lf", mod);
                }
                else
                {
                    printf("\nERROR!\n");
                }
            break;
        }




	//aqui é o fim do algoritmo
    printf("\n\t\t\t  criada por\n\t\t\t  GuibaGold!\n");
	return 0;

}
