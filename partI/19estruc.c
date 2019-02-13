/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <string.h>

struct StrFruits{
   	char nameFruit[30];
	int account;
};

struct StrProvider{
   	char name[30];
	char email[30];
};


struct StrInventory{
int date;
struct StrFruits Fruit;
struct StrProvider Provider;
};



 
int main( ) {
struct StrInventory inventory;

inventory.date = 13022019;
strcpy(inventory.Fruit.nameFruit, "naranja");
inventory.Fruit.account = 3;



   printf( "Numero de frutas en el inventario %i", inventory.Fruit.account);
   return 0;
}
