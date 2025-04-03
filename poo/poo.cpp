//LAB 1


//#include <iostream>
//using namespace std;
//
//class A {
//public:
//    A() {
//        cout << "s-a creat un obiect de tip A" << "\n";
//    }
//    virtual ~A() {
//        cout << "s-a sters un obiect de tip A" << "\n";
//    }
//    void SetStatus(string newS) {
//        m_status = newS;
//    }
//    string GetStatus() {
//        return m_status;
//    }
//private:
//    string m_status;
//};
//
//class B : public A {
//public:
//    B() {
//        cout << "s-a creat un obiect de tip B" << "\n";
//    }
//    ~B() {
//        cout << "s-a sters un obiect de tip B" << "\n";
//    }
//};
//class Printable {
//   virtual void DrawMe() = 0;
//};
//class Shape : public Printable {
//
//};
//class Square : public Shape {
//};
//
//int main() {
//    A* A_ptr = new A();
//    A* B_ptr = new B();
//    A_ptr->SetStatus("sal");
//    B_ptr->SetStatus("sall");
//    cout << A_ptr->GetStatus();
//    cout << B_ptr->GetStatus();
//    delete A_ptr;
//    delete B_ptr;
//}



//LAB 2

//#include <iostream>
//using namespace std;
//int main(){
//	cout << "Hello, World!";
//return 0;
//}
//
////NAMING 
////
////CLASS NAME -LITERA MARE
////MEMBRU CLASA -m_
////NUME FUNCTIE - LITERA MARE
////			 - CAMEL CASE
////			 NumeFunctie()
////VARIABILE - TIP+"_"NUME LITERE MICI
////EX : "b_is_open"
////
////DECLARATIE SEPARATA DE DEFINITIE 
////
////PT CLASE FISIERE DIFERITE 
////
////FUNCTIE PRIVATA - "_"
//
//Ideea de Proiect : Smart Parking System
//Un program care permite utilizatorilor să găsească, rezerve și gestioneze locurile de parcare disponibile în București.
//
//Funcționalități:
// 
//🔹 Pentru utilizatori
//
//Căutare locuri de parcare disponibile într - o anumită zonă
//Rezervare loc de parcare pentru un anumit interval de timp
//Plată automată(simulată) pentru locul rezervat
//Istoric al parcărilor și opțiunea de anulare a unei rezervări
// 
//🔹 Pentru administratorii parcărilor
//
//Adăugare / ștergere locuri de parcare
//Vizualizare în timp real a locurilor ocupate și libere
//Statistici despre utilizarea parcărilor

//namespace std {
//	static int n;
//	static void print(){
//		std::cout << "n";
//	}
//}
//std::n = 3;
//std::print();