#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
const float g=9.84;
const float pi=M_PI;
const float expo=M_E;
const float G=6*pow(10,-11);
const long long C=3*pow(10,8);
class physics_formulas_mechanics{
	public:
		double work_Solid(double distance , double force , double angle){
			double work = distance * force * cos(angle);
			return work; 
		}
		double work_P(double mass , double haut){
			double work = mass * g * haut;
			return work;
		}
		double kinetic_energie_ofSolid(double mass,double speed){
			double kinetic_energie=(1/2)*mass*speed;
			return kinetic_energie;
		}
		double potentiel_energie_ofSolid(double mass,double haut){
			double potentiel_energie = mass*g*haut;
			return potentiel_energie;
		}
		double moment_of_force(double force , double raduis){
			double moment = force*raduis;
			return moment;
		}
		double force(double mass , double acceleration){
			double force = mass * acceleration ; 
			return force;
		}
		double mechanical_energie(double EC,double EPP){
			return EC+EPP;
		}
		long double particle_energie(double mass){
			double particle_energie=mass*pow(C,2);
			return particle_energie;
		}
		long double univesal_gravition(double mass_1,double mass_2,double distance){
			double univesal_gravition=(G*(mass_1 * mass_2))/pow(distance,2);
			return univesal_gravition;
		}
};	
class physics_formulas_electric{
	public: 
		double electric_energie_recepteur(double Uab , double I ,double  DT){
			double electric_energie_recepteur=Uab*I*DT;
			return electric_energie_recepteur;
		}
		double Power_recepteur(double Uab , double I){
			double power = Uab*I;
			return power;
		}
		double Volatge_of_battrey(double Electromotionaly , double resistance , double I){
			double Volatge_of_battrey = Electromotionaly - resistance*I;
			return Volatge_of_battrey;
		}
};
class main_option{
	public:
		physics_formulas_mechanics Calculator;
		physics_formulas_electric Calcu;
		void print_the_title(){
			for(int i=0;i<120;i++){
				cout<<'-';
			}
			cout<<endl;
			cout<<"\t\t\t\t\t\t\t\t\t\t\t\t Physics Calculator By Nasroallah "<< endl;
			for(int i=0;i<120;i++){
				cout<<'-';
			}
			cout<<endl;
		}
		void print_the_choices_m(){
			int m_choices;
			for(int i=0;i<50;i++){
				cout<<'-';
			}
			cout<<endl;
			cout<<"1-Work of solid corps :"<<endl;
			cout<<"2-Work of Pesanteur :"<<endl;
			cout<<"3-Kentic Energy: "<<endl;
			cout<<"4-Potentiel Energy :"<<endl;
			cout<<"5-The moment of force :"<<endl;
			cout<<"6-Mechanical Force law :"<<endl;
			cout<<"7-Mechanical Energy (first you have to calculate the potential energy and kinetic one ) :"<<endl;
			cout<<"8-Energy of particle :"<<endl;
			cout<<"9-Univeral Gravity between two corps :"<<endl;
			cout<<"ENTER A CHOICE :";cin>>m_choices;
			if(m_choices==1){
				int Force;
				cout<<"Enter the force of the corp :";cin>>Force;
				int distance;
				cout<<"Enter the distance where the corp working on :";cin>>distance;
				int angle;
				cout<<"Enter the angle of the distance vecteur and force vecteur: (please enter the angle with radian and with decimal number like(3,14 not pi)) :";cin>>angle;
				cout<<"RESULT :";cout<<setprecision(10000000)<<Calculator.work_Solid(Force,distance,angle)<<endl;
			}
			if(m_choices==2){
				int mass;
				cout<<"Enter the mass of Pesanteur :";cin>>mass;
				int haut;
				cout<<"Enter the height Pesanteur :";cin>>haut;
				cout<<"RESULT :";cout<<setprecision(10000000)<<Calculator.work_P(mass,haut)<<endl;
			}	
			if(m_choices==3){
				int mass;
				cout<<"Enter the mass of the corp :";cin>>mass;
				int speed;
				cout<<"Enter the speed of the corp :";cin>>speed;
				cout<<"RESULT :";cout<<setprecision(10000000)<<Calculator.kinetic_energie_ofSolid(mass,speed);
			}
			if(m_choices==4){
				int mass;
				cout<<"Enter the mass of the corp :";cin>>mass;
				int haut;
				cout<<"Enter the height where the corp is :";cin>>haut;
				cout<<"RESULT :";cout<<setprecision(10000000)<<Calculator.potentiel_energie_ofSolid(mass,haut)<<endl;
			}
			if(m_choices==5){
				int force;
				cout<<"Enter positive or negative force :";cin>>force;
				int raduis;
				cout<<"Enter the distance of the thread :";cin>>raduis;
				cout<<"RESULT :";cout<<"RESULT :";cout<<setprecision(10000000)<<Calculator.moment_of_force(force,raduis)<<endl;
			}
			if(m_choices==6){
				int mass;
				cout<<"Enter mass of the corp :";cin>>mass;
				int acceleration;
				cout<<"Enter acceleration of the corp :";cin>>acceleration;
				cout<<"RESULT :";cout<<setprecision(10000000)<<Calculator.force(mass,acceleration)<<endl;
			}
			if(m_choices==7){
				cout<<"ATTENTION : AS I SAID YOU HAVE TO CALCULATE THE POTENTIAL & KINETIC ENERGY"<<endl;
				int ec,epp;
				cout<<"ENTER THE KINETIC ENERGY :";cin>>ec;
				cout<<"ENTER THE POTENTIAL ENERGY :";cin>>epp;
				cout<<"RESULT :";cout<<setprecision(10000000)<<Calculator.mechanical_energie(ec,epp)<<endl;
			}
			if(m_choices==8){
				int mass;
				cout<<"Enter the mass of particle :";cin>>mass;
				cout<<"RESULT :";cout<<setprecision(10000000)<<Calculator.particle_energie(mass)<<endl;
			}
			if(m_choices==9){
				int mass_1,mass_2;
				int distance;
				cout<<"Enter the mass of corp number 1 :";cin>>mass_1;
				cout<<"Enter the mass of corp number 2 :";cin>>mass_2;
				cout<<"Enter the distance between this 2 corps :";cin>>distance;
				cout<<"RESULT :";cout<<setprecision(10000000)<<Calculator.univesal_gravition(mass_1,mass_2,distance);
			}
			cout<<endl;
			for(int i=0;i<50;i++){
				cout<<'-';
			}
			cout<<endl;
		}
		void print_the_choices_e(){
			for(int i=0;i<50;i++){
				cout<<'-';
			}
			cout<<endl;
			cout<<"1-Electrical Energy (recepteur)"<<endl;
			cout<<"2-Electrical Power (recepteur)"<<endl;
			cout<<"3-Volatge_of_battrey :"<<endl;
			int e_choices;cin>>e_choices;
			if(e_choices==1){
				int voltage;
				cout<<"Enter the voltage of the recepteur :";cin>>voltage;
				int ampire;
				cout<<"Enter the amperage (I) of the recepteur :";cin>>ampire;
				int timee;
				cout<<"Enter the Time of Utilisation :";cin>>timee;
				cout<<Calcu.electric_energie_recepteur(voltage,ampire,timee)<<endl;
			}
			if(e_choices==2){	
				int volt;
				cout<<"Enter the voltage of recepteur :";cin>>volt;
				int ampire;
				cout<<"Enter the ampere of recepteur :";cin>>ampire;
				cout<<Calcu.Power_recepteur(volt,ampire)<<endl;
			}
			if(e_choices==3){
				int Electromotiveforce;
				cout<<"Enter the Electromotiveforce of the battrey :";cin>>Electromotiveforce;
				int resistance;
				cout<<"Enter the resistance of the battrey :";cin>>resistance;
				int ampire;
				cout<<"Enter the amperage (I) of the battrey :";cin>>ampire;
				cout<<Calcu.Volatge_of_battrey(Electromotiveforce,resistance,ampire)<<endl;
			}
			for(int i=0;i<50;i++){
				cout<<'-';
			}
			cout<<endl;
		}
		void print_the_choices_m_e(){
			int m_e_choices;
			for(int i=0;i<30;i++){
				cout<<'-';
			}
			cout<<endl;
			cout<<"1-Mechanical Formulas :"<<endl;
			cout<<"2-Electrical Formulas :"<<endl;
			cout<<"3-Exit"<<endl;
			for(int i=0;i<30;i++){
				cout<<'-';
			}
			cout<<endl;
			cout<<"Enter a number (1 , 2 , 3) : ";
			cin>>m_e_choices;
			cout<<endl;
			if(m_e_choices==1){
				print_the_choices_m();
			}		
			if(m_e_choices==2){
				print_the_choices_e();
			}
			if(m_e_choices==3){
				exit(0);
			}
		}
};
int main( ){
	main_option user;
	user.print_the_title();
	user.print_the_choices_m_e();
	cout<<"DO YOU WANNA EXECUTE THE PHYSICS PROGRAM AGAIN ! ENTER 1 for stay anything else to quit :";
	int c;cin>>c;
	if(c==1){
		main( );
	}
}