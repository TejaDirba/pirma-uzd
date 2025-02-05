int main(){
vector<Stud> grupe;
//while skaicius teigiamas ir imanomas and stuff
for (int i=0; i<5; i++){
	Stud laik;
	cin>>laik.var;
	cin>>laik.pav;
	cin>>laik.egz;
	grupe.pushback(laik)
}

for (auto n :grupe){
	cout<<n.pav<<""<<n.var<<endl;
}
}

