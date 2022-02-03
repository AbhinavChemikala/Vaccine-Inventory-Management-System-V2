# Vaccine-Inventory-Management-System-V2
## VACCINE INVENTORY MANAGEMENT SYSTEM
Coronavirus or severe acute respiratory syndrome coronavirus 2 (SARS-CoV-2) is a deadly virus that has caused global pandemic. The virus causes respiratory tract infections that can range from mild to lethal. The World Health Organization (WHO) has named the disease caused by coronavirus as coronavirus disease (COVID-19).  

As of now, there is no specific medication available nor drugs discovered for treating COVID-19 patients. Thus, hospitals usually provide supportive care to COVID-19 patients as part of their treatment procedure. This includes treatment to relieve symptoms, fluid therapy, oxygen support and prone positioning as needed, and medications or devices to support other affected vital organs.  

The COVID-19 vaccination is found to be a safer way to help build protection against the virus and end the pandemic. This has made pharmaceutical companies to race against time and develop vaccine to save the lives of mankind. At present, the vaccination process has started in many countries including Malaysia. The vaccine warehousing and distribution in Malaysia is done by an authorised pharmaceutical company. The types of vaccine planned for people in Malaysia is shown in Table 1 as follows:  

![table](https://i.imgur.com/kdZ2Fu5.png)



Assume that all these vaccines have been approved by the Malaysian government and the above-mentioned pharmaceutical company needs a Vaccine Inventory Management System to allow its employees to carry out the following:
### 1. Inventory Creation.  
The system should provide a feature for the employees to permanently record vaccine details shown in Table 1 into a text file named as vaccine.txt. Initial quantity of each vaccine (in millions) also needs to be recorded in this file.

Note: Initial quantity of vaccine is to be decided by the programmer. The records in the vaccine.txt file should be available every time the program is executed.  

### 2. Update vaccine quantities.  
The system should allow the employees to select a particular vaccine and indicate either received or distributed quantity. In either case, the quantity of the selected vaccine needs to be updated accordingly in the vaccine.txt file.

E.g. Assume that the initial quantity of Pfizer vaccine in vaccine.txt file is 1 million. When the company receives a new stock, this quantity has to be added to the existing quantity of 1 million in the vaccine.txt file. In the case where the vaccines are distributed to hospitals for vaccination, the distributed quantity is subtracted from the quantity available in the vaccine.txt file.
Note: Whenever a vaccine is distributed to hospitals, its code and the quantity distributed need to be recorded into a text file named as dist.txt. Each vaccine is expected to be distributed more than once. Hence, while testing the program, there should be at least 10 records created in the dist.txt file.  

### 3. Search vaccine and its available quantity by using vaccine code.   
The system should have a feature for employees to query a particular vaccine’s existing quantity from the vaccine.txt file using vaccine code.  

### 4. Produce a list of all vaccines and their distributed quantities.  
The system should allow the employees to list all distributed vaccines and their accumulated quantities read from the dist.txt file.
Note: The vaccines and their distributed quantities need to be sorted in ascending order (with highest quantity listed first followed by second highest and so on) using Bubble sort before displaying on the screen.
