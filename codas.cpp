#include 'mano_lib.h'
int main(){
	vector<Stud> grupe;
	//while skaicius teigiamas ir imanomas and stuff
	for (int i=0; i<5; i++){
		Stud laik;
		cout<<"irasykite varda: ";
		cin>>laik.var;
		cout<<endl;
		cout<<"irasykite pavarde: ";
		cin>>laik.pav;
		cout<<endl;
		cout<<"irasykite egzamino ivertinima: ";
		cin>>laik.egz;
		cout<<endl;
		grupe.pushback(laik)
	}

	for (auto n :grupe){
		cout<<n.pav<<""<<n.var<<endl;
	}
}

