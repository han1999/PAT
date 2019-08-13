#include <cstdio>
#include <cstring>
struct Stu{
	char name[15];
	char sex[3];
	char id[15];
	int grade;
}lowestMale,highestFemale,temp;
int main(){
	int n;
	scanf("%d",&n);
	int countF=0,countM=0;
	lowestMale.grade=100, highestFemale.grade=0;//快捷 
	int isNa=0;
	for (int i=0; i<n; i++){
		scanf("%s %s %s %d",&temp.name,&temp.sex,&temp.id,&temp.grade);
		if (temp.sex[0]=='M'){
			if (temp.grade<=lowestMale.grade){
				countM++;
				lowestMale=temp;
			}
		}else{
			if (temp.grade>=highestFemale.grade){
				countF++;
				highestFemale=temp;
			} 
		} 
	}
	if (countF){
		printf("%s %s\n",highestFemale.name,highestFemale.id);
	}else {
		printf("Absent\n");
		isNa=1;
	} 
	
	if (countM) printf("%s %s\n",lowestMale.name,lowestMale.id);
	else	{
		printf("Absent\n");
		isNa=1;
	}
	
	if (isNa) printf("NA");
	else printf("%d",highestFemale.grade-lowestMale.grade);
} 
