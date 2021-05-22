#include <stdio.h>

typedef struct island{
	char *name;
	char *open;
	char *close;
	struct island *next;
	}island;
void display();
int main()
{
	island koshitapu = {"Koshi Tapu","9:00","10:00",NULL};
	island Shutter_Island = {"Shhutter Island","10:00","11:00",NULL};
	island Cocoa_Island = {"Cocoa Island","11:00","12:00",NULL};
	island Whole_Cake = {"Whole Cake","12:00","1:00",NULL};
	koshitapu.next = &Shutter_Island;
	Shutter_Island.next = &Cocoa_Island;
	Cocoa_Island.next = &Whole_Cake;
	island Wano = {"Wano","12:00","1:00",NULL};
	Cocoa_Island.next = &Wano;
	Wano.next= &Whole_Cake;
	display(&koshitapu);
	return 0;

}
void display(island *start)
{
	island *i = start;
	for(;i != NULL; i = i->next){
		printf("Name %s: Open [%s-%s]\n",i->name,i->open,i->close);
	}
}

