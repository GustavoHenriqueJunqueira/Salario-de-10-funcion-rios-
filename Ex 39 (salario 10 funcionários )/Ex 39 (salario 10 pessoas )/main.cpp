//
//  main.cpp
//  Ex 39 (salario 10 pessoas )
//
//  Created by Gustavo Henrique Furtado Junqueira on 30/05/16.
//  Copyright © 2016 Gustavo Henrique Furtado Junqueira. All rights reserved.
//

#include <iostream>
using namespace std;
int main (){

    string nome_funci;
    float salario_líquido, salario_bruto,vsalario_hora, inss;
    int horas_trabalhadas, num;
    
    num=0;
    
    cout<<"\t\t\tEmpresa New Empire Confeções.\n";
    
    do{
        num++;
    cout<<"\n\t\t\tDigite o nome do funcionario: \n";
    cin>>nome_funci;
    cout<<"\t\t\tDigite as horas trabalhadas: \n";
    cin>>horas_trabalhadas;
    cout<<"\t\t\tDigite o salario por horas; \n";
    cin>>vsalario_hora;
    
    
    salario_bruto=(horas_trabalhadas*vsalario_hora);
    inss=(salario_bruto*0.11);
    salario_líquido=(salario_bruto-inss);
    
    cout<<"\nO salario liquido do "<<nome_funci<<" é :"<<salario_líquido<<"\n";
        
    }while(num<10);
    
}



