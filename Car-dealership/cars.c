#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#define length 20
struct used_car
{
    int carID;
    char brand[length];
    char make[length];
    int year;
    int mileage;
    float price;
};
struct order
{
    int numCosigned;
    int carID;
    float pricePerPerson;
};
struct client
{
    char firstName[length];
    char lastName[length];
    bool isEmployed;
    int creditScore;
};

//Global Array of struct used_cars to store the car info
struct used_car cars[4];
struct client info[length];

void printCars()
{
    for(int i=0;i<4;i++)
    {
        printf("Car Id-%d\nBrand-%s\nMake-%s\nYear-%d\nMileage-%d\nPrice-%.2f\n\n",cars[i].carID,cars[i].brand,cars[i].make,cars[i].year,cars[i].mileage,cars[i].price);
    }
}
void printClientInfo(int n,float price_per_person)
{
    for(int i=0;i<n;i++)
    {
        printf("\nFirst name of %d Cosigned owner : %s\n",i+1,info[i].firstName);
        printf("Last name of %d Cosigned owner : %s\n",i+1,info[i].lastName);
        printf("Employed status of %d Cosigned owner : %d\n",i+1,info[i].isEmployed);
        printf("Credit Score of %d Cosigned owner : %d\n",i+1,info[i].creditScore);
    }
    printf("Price per person cost = %f\n",price_per_person);
}
void getClientInfo(int n,float price_per_person)
{
    int k;
    for(int i=0;i<n;i++)
    {
        printf("Enter the First name of %d Cosigned owner : ",i+1);
        scanf("%s",info[i].firstName);
        printf("Enter the Last name of %d Cosigned owner : ",i+1);
        scanf("%s",info[i].lastName);
        printf("Is %d Cosigned owner employed 0 for false and 1 for true : ",i+1);
        scanf("%d",&k);
        info[i].isEmployed=k;
        printf("Enter the Credit Score of %d Cosigned owner : ",i+1);
        scanf("%d",&info[i].creditScore);
    }
    printf("\nClient Details are...\n");
    printClientInfo(n,price_per_person);
}

int main()
{
    // initializing the array of used cars with values
    cars[0].carID=0;
    strcpy(cars[0].brand,"Wagon R");
    strcpy(cars[0].make,"Maruti Suzuki");
    cars[0].year=3;
    cars[0].mileage=23;
    cars[0].price=700000.0;

    cars[1].carID=1;
    strcpy(cars[1].brand,"Swift Desire");
    strcpy(cars[1].make,"Maruti Suzuki");
    cars[1].year=4;
    cars[1].mileage=25;
    cars[1].price=800000.0;

    cars[2].carID=2;
    strcpy(cars[2].brand,"i10");
    strcpy(cars[2].make,"Hyundai");
    cars[2].year=5;
    cars[2].mileage=24;
    cars[2].price=600000.0;

    cars[3].carID=3;
    strcpy(cars[3].brand,"i20");
    strcpy(cars[3].make,"Hyundai");
    cars[3].year=3;
    cars[3].mileage=22;
    cars[3].price=700000.0;

    struct order own;
    char choice;
    printf("Welcome to the car dealership.\n");
    int n;
    printCars();
    do
    {
        printf("Enter the car Id of car you want to purchase and enter 0 to not purchase anything : ");
        scanf("%d",&n);
        if(n<0 || n>3)
        {
            printf("You entered the wrong id enter again.\n");
        }
        else if(n==0)
        {
            printf("Thank you come back soon for purchase.\n");
        }
        else
        {
            
            printf("Price for the car which is choosen is = %.2f\n",cars[n].price);
            own.carID=n;
            printf("Enter the number of cosigned owner : ");
            scanf("%d",&own.numCosigned);
            own.pricePerPerson=cars[n].price/own.numCosigned;
            printf("Each Cosigned user have to pay : %.2f\n",own.pricePerPerson);
            printf("Are you ok with it Y/N Y for Yes, N for No : ");
            fflush(stdin);
            scanf("%c",&choice);
            if(choice=='Y' || choice=='y')
            {
                getClientInfo(own.numCosigned,own.pricePerPerson);
            }
            else if(choice=='N' || choice=='n')
            {
                printf("Thank you come back soon for purchase.\n");
            }
            else
            {
                printf("You did not entered the right choice.\n");
            }
            break;
        }
    }while(n!=0);
    return 0;
}
