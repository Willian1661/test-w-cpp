#include<iostream>
using namespace std;


int main(){
    string alunos[] = {"jose","joao","jurassi"};
    int indice,nota[] = {8 , 7, 5};

/*//if you wanna define the values of nota[i] manualy set this code below;
//se voce quiser definir os valores de nota[i] manualmente coloque este codigo abaixo;
    indice = 0;
    while (indice < 3)
    {
        cout<<"insira a nota do aluno "<<alunos[indice]<<": ";
        cin>>nota[indice];
        indice++;
    }
    */
    cout<<"notas: \n";
    for (indice = 0; indice < 3; indice++)
    {
        if (nota[indice] >= 7)
        {
             cout<<alunos[indice]<<" tirou: "<<nota[indice]<<"//"<<" passou"<<endl;
        }else{
        
        cout<<alunos[indice]<<" tirou: "<<nota[indice]<<"//"<<" recuperaçao"<<endl;
        }
    }
    cout<<"pronto!\n";
}
