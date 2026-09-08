#include <iostream>
using namespace std;

int main();
{
    float val1, val2, val3, val4, val5, val6, val7, val8, val9, val10, resultat;
    char operateur1, operateur2;
        while(true)
        {
            cout<<"Calcul arithmetique : A";
            cout<<"Calcul trigonometrique : B";
            cin>>val1;
              switch (val1)
              {
                case 'A' : cout<<"Saisir le calcul :";
                           cin>>val2>>opperateur1>>val3;

                           switch (operateur1)
                           {
                             case '+' :
                             resultat=val2+val3;
                             break;
                             case '-' :
                             resultat=val2-val3;
                             break;
                             case '*' :
                             resultat=val2*val3;
                             break;
                             case '/' :
                             resultat=val2/val3;
                             break;
                           }
                           break;
                case 'B' : cout<<"Choisir le calcul de sin : A";
                           cout<<"Choisir le calcul de cos : B";
                           cout<<"Choisir le calcul de tan : C";
                           cin>>val4;

                           switch (val4)
                           {
                            case 'A' : cout<<"Rentrez la valeur du cote oppose / hypothenuse :";
                                       cin>>val5>>operateur2>>val6;

                                       resultat=val5/val6;
                                       cout<<resultat;
                                       break;
                            case 'B' : cout<<"Rentrez la valeur du cote adjascent et hypothenus :";
                                       cin>>val5>>operateur2>>val6;
                                       
                                       resultat=val5/val6;
                                       cout<<resultat;
                            case 'C' : cout<<"Rentrez la valeur du cote oppose et adjascent :";
                                       cin>>val5>>operateur2>>val6;
                                       
                                       resultat=val5/val6;
                                       cout<<resultat;

                           }
                           break;
                           

              }
        }
        return 0, endl;
}