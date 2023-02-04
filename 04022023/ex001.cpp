#include <iostream>
#include <clocale>
using namespace std;

void calculaSalario(); //Exercicio 1
void idadeMedia(); // Exercicio 2
void areaDoTrianguloRetangulo(); // Exercicio 4
void verificaResto5(); // Exercicio 7
void informacoesDaSequencia(); //Exercicio 9

int main(){
    int opcao;
    cout << "Bem-vindo ao menu de opções: \n\n1 - Cálculo de Salário Líquido\n2 - Cálculo de Média De Idade\n3 - Calculo de Area de Triangulo Retangulo\n4 - Verifica se resto eh 5\n5 - Verificar Informacoes da Sequencia\n6-Sair\nEscolha a sua opção: ";
    cin >> opcao;
    switch(opcao){
        case 1:
            calculaSalario();
            break;
        case 2:
            idadeMedia();
            break;
        case 3:
            areaDoTrianguloRetangulo();
            break;
        case 4:
            verificaResto5();
            break;
        case 5:
            informacoesDaSequencia();
            break;
        case 6:
            cout << "Obrigado por usar nosso programa! " << endl;
            break;
        default:
            cout << "Opção inválida! Tente novamente." << endl;
            break;
    }
    return 0;
}

void calculaSalario(){
    int cont;
    float salario, salarioComGratificacao, salarioLiquido, gratificacao, imposto;
    setlocale(LC_ALL, "Portuguese");
    for(cont = 0; cont < 50; cont ++){
        cout << "Digite o salario base do funcionario: ";
        cin >> salario;
        gratificacao = salario * 0.60;
        salarioComGratificacao = salario + gratificacao;
        imposto = salarioComGratificacao * 0.30;
        salarioLiquido = salarioComGratificacao - imposto;
        cout << "Salario liquido do funcionario: " << salarioLiquido << "\nTotal de Imposto descontado: " << imposto << "\n";
    }
}

void idadeMedia(){
    int m, cont, soma, idade;
    float media;
    cout << "Quantas pessoas voce deseja dar a idade?";
    cin >> m;
    for(cont = 0; cont < m; cont++){
        cout << "Digite a idade: ";
        cin >> idade;
        soma = soma + idade;
    }
    media = soma/m;
    cout << "A media de idade das " << m << "pessoas solicitadas é de " << media << " anos";
}

void areaDoTrianguloRetangulo(){
    float base, altura, area;
    cout << "Digite o valor da base do Triangulo (em cm): ";
    cin >> base;
    cout << "Digite o valor da altura do Triangulo (em cm): ";
    cin >> altura;
    if(base <= 0 || altura <= 0){
        cout << "Não é possível calcular area de triangulo com base ou altura menores ou iguais a zero";
    }
    area = (base * altura)/2;
    cout << "A area do triangulo e de " << area << "cm";
}

void verificaResto5(){
    int numeroParaTestar, restoDoNumero;
    for(numeroParaTestar = 1000; numeroParaTestar <= 2000; numeroParaTestar++){
        restoDoNumero = numeroParaTestar % 11;
        if(restoDoNumero == 5){
            cout << numeroParaTestar << "\n";
        }
    }
}

void informacoesDaSequencia(){
    int cont = 0, numeroDigitadoPeloUsuario, somaDosNumerosPares = 0, quantidadeDeNumerosImpares = 0, somaDosNumerosImpares = 0, quantidadeDeNumerosMenoresQueTrezentos = 0, quantidadeDeNumerosMaioresQueVinteeCinco = 0, somaDosNumerosMaioresQueVinteeCinco = 0;
    float mediaDosNumerosImpares = 0, percentualDosNumerosMenoresQueTrezentos = 0, mediaDosNumerosMaioresQueVinteeCinco = 0;
    while(true){
        cout << "Digite um numero: ";
        cin >> numeroDigitadoPeloUsuario;
        if(numeroDigitadoPeloUsuario == 0) break;
        cont++;
        if(numeroDigitadoPeloUsuario % 2 == 0) {
            somaDosNumerosPares = somaDosNumerosPares + numeroDigitadoPeloUsuario;
        }
        if(numeroDigitadoPeloUsuario % 2 != 0){
            somaDosNumerosImpares = somaDosNumerosImpares + numeroDigitadoPeloUsuario;
            quantidadeDeNumerosImpares++;
        }
        if(numeroDigitadoPeloUsuario < 300){
            quantidadeDeNumerosMenoresQueTrezentos++;
        }
        if(numeroDigitadoPeloUsuario > 25){
            quantidadeDeNumerosMaioresQueVinteeCinco++;
            somaDosNumerosMaioresQueVinteeCinco = somaDosNumerosMaioresQueVinteeCinco + numeroDigitadoPeloUsuario;
        }
    }
    if(quantidadeDeNumerosImpares != 0)
        mediaDosNumerosImpares = somaDosNumerosImpares / (float)quantidadeDeNumerosImpares;
    if(cont != 0)
        percentualDosNumerosMenoresQueTrezentos = (quantidadeDeNumerosMenoresQueTrezentos / (float)cont) * 100;
    if(quantidadeDeNumerosMaioresQueVinteeCinco != 0)
        mediaDosNumerosMaioresQueVinteeCinco = somaDosNumerosMaioresQueVinteeCinco / (float)quantidadeDeNumerosMaioresQueVinteeCinco;
    cout << "Soma dos numeros pares " << somaDosNumerosPares << "\nMedia dos numeros impares " << mediaDosNumerosImpares << "\nPercentual dos numeros menores que 300 " << percentualDosNumerosMenoresQueTrezentos << "%\nMedia dos numeros maiores que 25 " << mediaDosNumerosMaioresQueVinteeCinco;
}
