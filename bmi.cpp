#include <iostream>
using namespace std;

class BMICalculador{
    private:
    double peso;
    double altura;

    public:

    BMICalculador(double peso, double altura){}
    
    double calcularBMI(){
        return peso/(altura*altura);
    }

string categoriabmi(){
    double bmi = calcularBMI();
    if(bmi<18.5){
        return "Bajo peso.";
    }else if (bmi >= 18.5 && bmi <= 24.9){
        return "Peso normal";
    }else if (bmi >= 25 && bmi <= 29.9){
        return "Sobrepeso.";
    }else {
        return "Obesidad.";
    }
}

};

int main (){
    double peso, altura;

    cout <<"Calcula tu BMI.\n";
    cout <<"Ingrese su peso en kg: ";
    cin >> peso;
    cout <<"Ingrese su altura en metros: ";
    cin >> altura;

    BMICalculador calcularbmi(peso,altura);


cout << "\nTu BMI es: " << calcularbmi.calcularBMI() << "\n";
    cout << calcularbmi.categoriabmi() << "\n";
    
    
    }