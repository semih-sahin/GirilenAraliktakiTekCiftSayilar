#include <iostream>
#include <windows.h>
using namespace std;
// Girilen herhangi bir araliktaki tek ve cift sayilarin adetlerini, toplamlarini bulan program

int main(){
	int basDegeri, bitDegeri, ciftAdet=0, ciftTop=0, tekAdet=0, tekTop=0;
	cout << "Bu program girdiginiz bir araliktaki tek sayilarin ayri, cift sayilarin ayri adetlerini ve toplamlarini bulur.";
	cout << "\nLutfen araligin baslangic degerini giriniz: ";
	cin >> basDegeri;
	A10:
	cout << "Araligin bitis degerini giriniz: ";
	cin >> bitDegeri;
	if (basDegeri>=bitDegeri){
		cout << "Lutfen bitis degerini baslangic degerinden daha buyuk giriniz.\n";
		goto A10;
	}
	system("cls");
	for (int i=basDegeri; i<=bitDegeri; i++){
		if (i%2==0){
			ciftAdet++;
			ciftTop+=i;
		}else{
			tekAdet++;
			tekTop+=i;
		}
	}
	cout << basDegeri << " ile " << bitDegeri << " arasindaki:\n"
		 << "Cift sayilarin adedi = " << ciftAdet
		 << "\nCift sayilarin toplami = " << ciftTop
		 << "\nTek sayilarin adedi = " << tekAdet
		 << "\nTek sayilarin toplami = " << tekTop << "\n\n\n";
	system("pause");
	return 0;
}
