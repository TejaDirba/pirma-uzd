#include "mano_lib.h"
#include <iomanip> // For formatting output

int mokiniu_sk = 2; // Number of students to enter

vector<Stud> pridetiStud(vector<Stud> sarasas) {
    for (int i = 0; i < mokiniu_sk; i++) {
        Stud laik;
        cout << "Irasykite varda: ";
        cin >> laik.var;
        cout << "Irasykite pavarde: ";
        cin >> laik.pav;
        cout << "Irasykite egzamino ivertinima: ";
        cin >> laik.egz;

        // Enter multiple homework grades
        int pazSk;
        cout << "Kiek namu darbu pazymiu norite ivesti? ";
        cin >> pazSk;
        
        laik.paz.resize(pazSk); // Resize vector to fit input
        cout << "Iveskite namu darbu pazymius: ";
        for (int j = 0; j < pazSk; j++) {
            cin >> laik.paz[j];
        }

        sarasas.push_back(laik);
    }
    return sarasas;
}

// Function to calculate the final note using average
double GalutinisVidurkis(const Stud& student) {
    return (Vidurkis(student.paz) * 0.4) + (student.egz * 0.6);
}

// Function to calculate the final note using median
double GalutinisMediana(const Stud& student) {
    return (Mediana(student.paz) * 0.4) + (student.egz * 0.6);
}

int main() {
    vector<Stud> grupe;
    grupe = pridetiStud(grupe);

    // Print formatted student table
    cout << "\nVardas     Pavarde    Galutinis (Vidurkis) / Galutinis (Mediana)\n";
    cout << "---------------------------------------------------------------\n";

    for (const auto& n : grupe) {
        cout << std::left << std::setw(10) << n.var << " "
             << std::setw(10) << n.pav << " "
             << std::fixed << std::setprecision(2)
             << GalutinisVidurkis(n) << "  "
             << GalutinisMediana(n) << endl;
    }

    cout<<"Pasirinkite pagal ka norite rusiuoti:"<<;
    cout<<"1 varda"<<endl;
    cout<<"2 pavarde"<<endl;
    cout<<"3 vidurki"<<endl;
    cout<<"4 mediana"<<endl;
//    cin>>input;
//    if (input=1){
//        sort(laik.vard);
//    }
    
    return 0;

}
