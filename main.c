#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void CreatingInventory();
void ReadInformation();

int main()
{
    int Inventory_Welcome;
    printf("\n\nWelcome Good Day To You!\nDo you want to open Inventory? If yes Enter 1, Enter 2 If you want to Open The Vaccine.txt file : ");
    scanf("%d", &Inventory_Welcome);
    if (Inventory_Welcome == 1)
    {
        CreatingInventory();
    }
    else if (Inventory_Welcome == 2)
    {
        ReadInformation();
    }
    else
    {
        printf("Have A Nice Day!\n");
    }

    return 0;
}

void CreatingInventory()
{

    //Declaring The 2D Arrays to store the Data
    char Vaccine_Product[5][15] = {"Pfizer", "Sinovac", "AstraZeneca", "Sputnik V", "CanSinoBio"};
    char Code_of_Vaccine[5][10] = {"PF", "SV", "AZ", "SP", "CS"};
    char Origin_of_Vaccine[5][15] = {"USA", "CHINA", "UK", "RUSSIA", "CHINA"};
    int Dosage_Required_for_Vaccine[5] = {2, 2, 2, 2, 1};
    float Vaccinated_Population[5] = {50.0, 18.8, 10.0, 10.0, 10.9};
    double Quantity_of_Vaccine[5]={0.0,0.0,0.0,0.0,0.0};

    //Updating Records
    int RQ;
    printf("\nDo You Want to Update the Records? If yes Enter 1 or Enter 0 to Display Default Values: \n");
    scanf("%d", &RQ);

    //Updating Records
    int position=6;
    double updated_value;
    if (RQ == 1)
    {
        printf("\nEnter the Which Vaccine Details You need to update {0(Pfizer),1(Sinovac),2(AstraZeneca),3(Sputnik V),4(CanSinoBio)}:  ");
        scanf("%d", &position);

        printf("\nEnter The Updated Value: \n");
        scanf("%lf", &updated_value);

        Quantity_of_Vaccine[position] = updated_value;

        printf("\nThe updated Value For %s is : %.4lf\n", Vaccine_Product[position], Quantity_of_Vaccine[position]);
    }
    //Updating The details Of the Files
    for(int i = 0; i<5;i++)
    {
        if (i == 0)
        {
            Quantity_of_Vaccine[i] = 1.9;
        }
        if (position == i)
        {
            Quantity_of_Vaccine[i] = updated_value;
        }
        if (position !=i && i == 1)
        {
            Quantity_of_Vaccine[1] = 1.2;
        }
        if (position !=i && i == 2)
        {
            Quantity_of_Vaccine[2] = 1.1;
        }
        if (position != i && i == 3)
        {
            Quantity_of_Vaccine[3] = 0.9;
        }
        if (position != i && i == 4)
        {
            Quantity_of_Vaccine[4] = 1.5;
        }
    }

    // Declaring The Headings
    printf("\n Name Of The Vaccine \t Vaccine Code \t Producing Country \t Dosage Required \t Population Covered \t Total Vaccines Available(In Millions)\n");

    //Looping To Print The Data
    int i =0;
    while (i <=3)
    {
        printf("\n   %s \t\t      %s\t\t%s \t\t\t%d \t\t\t%.2f \t\t         %.4lf\n", Vaccine_Product[i], Code_of_Vaccine[i], Origin_of_Vaccine[i], Dosage_Required_for_Vaccine[i], Vaccinated_Population[i], Quantity_of_Vaccine[i]);
        i++;
    }
    int count = 4;
    if (count == 4)
    {
        printf("\n   %s \t\t      %s\t\t%s \t\t\t%d \t\t\t%.2f \t\t         %.4lf\n\n", Vaccine_Product[count], Code_of_Vaccine[count], Origin_of_Vaccine[count], Dosage_Required_for_Vaccine[count], Vaccinated_Population[count], Quantity_of_Vaccine[count]);
    }



    //This is the Process For Creating Files
    //Declare Name of the pointer using *
    FILE *fVaccine;

    //Creating a new file and write data to it
    fVaccine = fopen("Vaccine.txt", "w");

    //Display Heading
    fprintf(fVaccine, "\n Name Of The Vaccine \t Vaccine Code \t Producing Country \t Dosage Required \t Population Covered \t Total Vaccines Available(In Millions)\n");

    //Loop For Writing The Data To the File
    for (int i = 0; i < 5; i++)
    {
        while (i == 0)
        {
            fprintf(fVaccine, "\n   %s \t\t\t\t\t\t      %s\t\t\t\t\t\t\t\t%s \t\t\t\t\t\t\t%d \t\t\t\t\t\t\t\t\t%.2f \t\t\t\t\t\t\t\t %.4lf\n", Vaccine_Product[i], Code_of_Vaccine[i], Origin_of_Vaccine[i], Dosage_Required_for_Vaccine[i], Vaccinated_Population[i], Quantity_of_Vaccine[i]);
            i++;
        }
        while (i == 1)
        {
            fprintf(fVaccine, "\n   %s \t\t\t\t\t\t      %s\t\t\t\t\t\t\t\t%s \t\t\t\t\t\t%d \t\t\t\t\t\t\t\t\t%.2f \t\t\t\t\t\t\t\t %.4lf\n", Vaccine_Product[i], Code_of_Vaccine[i], Origin_of_Vaccine[i], Dosage_Required_for_Vaccine[i], Vaccinated_Population[i], Quantity_of_Vaccine[i]);
            i++;
        }
        while (i == 2)
        {
            fprintf(fVaccine, "\n   %s \t\t\t\t      %s\t\t\t\t\t\t\t\t%s \t\t\t\t\t\t\t\t%d \t\t\t\t\t\t\t\t\t%.2f \t\t\t\t\t\t\t\t %.4lf\n", Vaccine_Product[i], Code_of_Vaccine[i], Origin_of_Vaccine[i], Dosage_Required_for_Vaccine[i], Vaccinated_Population[i], Quantity_of_Vaccine[i]);
            i++;
        }
        while (i == 3)
        {
            fprintf(fVaccine, "\n   %s \t\t\t\t\t      %s\t\t\t\t\t\t\t\t%s \t\t\t\t\t\t%d \t\t\t\t\t\t\t\t\t%.2f \t\t\t\t\t\t\t\t %.4lf\n", Vaccine_Product[i], Code_of_Vaccine[i], Origin_of_Vaccine[i], Dosage_Required_for_Vaccine[i], Vaccinated_Population[i], Quantity_of_Vaccine[i]);
            i++;
        }
        while (i == 4)
        {
            fprintf(fVaccine, "\n   %s \t\t\t\t      %s\t\t\t\t\t\t\t\t%s \t\t\t\t\t\t%d \t\t\t\t\t\t\t\t\t%.2f \t\t\t\t\t\t\t\t %.4lf\n\n", Vaccine_Product[i], Code_of_Vaccine[i], Origin_of_Vaccine[i], Dosage_Required_for_Vaccine[i], Vaccinated_Population[i], Quantity_of_Vaccine[i]);
            i++;
        }
    }
    //Close the .txt File After Writing Data
    fclose(fVaccine);
    //Return to MAIN
    return;
}
void ReadInformation()
{
    int available_record;
    printf("Do You Want To Open an Existing Record (If yes please Enter 1): ");
    scanf("%d",&available_record);
    if (available_record == 1)
    {
        FILE *fAvailable_Record;

        fAvailable_Record = fopen("vaccine.txt","r");
        char Line[150];

        while(!feof(fAvailable_Record))
        {
            fgets(Line,150,fAvailable_Record);
            puts(Line);
        }
        fclose(fAvailable_Record);
    }

}

