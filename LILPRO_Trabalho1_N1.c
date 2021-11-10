#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");
  
  char produto1 [18], produto2 [18], produto3 [18], produto4 [18], produto5 [18], produto6 [18], produto7 [18], produto8 [18];
  float valor1, valor2, valor3, valor4, valor5, valor6, valor7, valor8;
  int qtd_1, qtd_2, qtd_3, qtd_4, qtd_5, qtd_6, qtd_7, qtd_8;
  int codigo1 = 540 , codigo2 = 541 , codigo3 = 542 , codigo4 = 543 ;
  int codigo5 = 544 , codigo6 = 545 , codigo7 = 546 , codigo8 = 547 ;
  
  float total;
   
    printf("Nome do Produto: ");
    gets(produto1);
    printf("Valor: ");
    scanf("%f", &valor1);  
    printf("Quantidade: ");
    scanf("%d", &qtd_1);
    fflush(stdin);
  
    printf("\nNome do produto: ");
    gets(produto2);
    printf("Valor: ");
    scanf("%f", &valor2);
    printf("Quantidade: ");
    scanf("%d", &qtd_2);
    fflush(stdin);
    
    printf("\nNome do produto: ");
    gets(produto3);
    printf("Valor: ");
    scanf("%f", &valor3);
    printf("Quantidade: ");
    scanf("%d", &qtd_3);
    fflush(stdin);
    
    printf("\nNome do produto: ");
    gets(produto4);
    printf("Valor: ");
    scanf("%f", &valor4);
    printf("Quantidade: ");
    scanf("%d", &qtd_4);
    fflush(stdin);
    
    printf("\nNome do produto: ");
    gets(produto5);
    printf("Valor: ");
    scanf("%f", &valor5);
    printf("Quantidade: ");
    scanf("%d", &qtd_5);
    fflush(stdin);
    
    printf("\nNome do produto: ");
    gets(produto6);
    printf("Valor: ");
    scanf("%f", &valor6);
    printf("Quantidade: ");
    scanf("%d", &qtd_6);
    fflush(stdin);
    
    printf("\nNome do produto: ");
    gets(produto7);
    printf("Valor: ");
    scanf("%f", &valor7);
    printf("Quantidade: ");
    scanf("%d", &qtd_7);
    fflush(stdin);
    
    printf("\nNome do produto: ");
    gets(produto8);
    printf("Valor: ");
    scanf("%f", &valor8);
    printf("Quantidade: ");
    scanf("%d", &qtd_8);
    fflush(stdin);
    
    total = valor1 * qtd_1 + valor2 * qtd_2 + valor3 * qtd_3 + valor4 * qtd_4 + valor5 * qtd_5 + valor6 * qtd_6 + valor7 * qtd_7 + valor8 * qtd_8;
    
    system("cls");
    
    printf("|%-8s |%-8s |%-15s |%-10s |%-10s|\n", "Código", "Quant.", "Discriminação", "P.Unitário", "Preço Total");
    printf("|%-8d |%-8d |%-15s |R$ %8.2f|R$ %8.2f|\n", codigo1, qtd_1, produto1, valor1, valor1*qtd_1);
    printf("|%-8d |%-8d |%-15s |R$ %8.2f|R$ %8.2f|\n", codigo2, qtd_2, produto2, valor2, valor2*qtd_2);
    printf("|%-8d |%-8d |%-15s |R$ %8.2f|R$ %8.2f|\n", codigo3, qtd_3, produto3, valor3, valor3*qtd_3);
    printf("|%-8d |%-8d |%-15s |R$ %8.2f|R$ %8.2f|\n", codigo4, qtd_4, produto4, valor4, valor4*qtd_4);
    printf("|%-8d |%-8d |%-15s |R$ %8.2f|R$ %8.2f|\n", codigo5, qtd_5, produto5, valor5, valor5*qtd_5);
    printf("|%-8d |%-8d |%-15s |R$ %8.2f|R$ %8.2f|\n", codigo6, qtd_6, produto6, valor6, valor6*qtd_6);
    printf("|%-8d |%-8d |%-15s |R$ %8.2f|R$ %8.2f|\n", codigo7, qtd_7, produto7, valor7, valor7*qtd_7);
    printf("|%-8d |%-8d |%-15s |R$ %8.2f|R$ %8.2f|\n", codigo8, qtd_8, produto8, valor8, valor8*qtd_8);
    printf("|%-8s |%-8s |%-15s |%-10s |R$ %8.2f|\n", "", "", "", "Total", total);
     system("pause");
  return 0;
}