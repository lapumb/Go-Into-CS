//***************************************************
// Filename: main.c
//
// Author: Blake Lapum
//***************************************************

#include "main.h" 

// main driver of the program
// this specific language (C programming language) MUST include a main function, as included below
int main(int argc, char *argv[])
{
    //clearing the terminal console upon entry
    system("cls"); 

    //deleting blake_rulez directory if for some reason it already exists
    system("rmdir /Q /S blake_rulez"); 

    //creating the new directory in the root folder
    system("mkdir blake_rulez");

    //moving newly created blake_rulez directory onto Desktop
    system("move blake_rulez Desktop"); 

    for(int i = 0; i < 250; i++) {
        char filename[1024];
        snprintf(filename, sizeof(filename), "blake_freaking_rox%d.txt", i);
        FILE *fout = fopen(filename, "w");
        fprintf(fout, "Blake is super cool and so is programming!"); 
        fclose(fout); 
        char command[2048];
        snprintf(command, sizeof(command), "move %s Desktop/blake_rulez", filename); 
        system(command); 
    }

    //defining a name variable, that is stored in RAM, to take the user entered name
    char name[256]; //pointer to a string

	printf("<<<<< Welcome to Blake's cool coding example! >>>>>\n \n");
	printf("Please enter your name: ");
	scanf("%[^\n]%*c", name); //reads the full line / name

    //setting name to uppercase just for simplicity
	int i = 0;
	while (name[i])
	{
		name[i] = toupper(name[i]);
		i++;
	}

    printf("Hello! %s, I am a simple program designed and developed by Blake Lapum (github @lapumb)\n", name); 
    printf("\nThe purpose of this simple program is to show you some pretty cool things you can do with code.\n"); 
    printf("\nGo to your desktop. You should find a new folder titled %s.\n", "blake_rulez");
    printf("\nPress any key to continue once you have seen what I have done...\n"); 
    printf("(Do not delete anything yet)\n");
    printf("\n\n---------------------------------------------------------------------------------------------------\n\n");  

    //making sure the user hits enter or any other key
    getchar(); 

    printf("\nI created a new directory, placed 250 text files in the directory, and moved it to the desktop. I accomplished this in only 11 lines of code.\n"); 

    //system level command to delete the directory
    system("rmdir /Q /S blake_rulez"); 

    printf("\nNow go back to your desktop... I just deleted the entire directory in one line of code.\n"); 

    printf("\nThis was an extremely simple, small program to create. The bulk of this was created using simple print statements to print out the text you are currently seeing.\n");
    printf("\nThe amount of cool shit you can create when you learn programming and software engineering is exponential.\n");
    printf("(You will also most likely make a shit laod of money doing this cool shit, too)\n"); 

    printf("\nSo do not be dumb. Go into Computer Science. \nI will always be a resource for you moving forward if you ever need help.\n"); 
    printf("\nPress any key to launch some extremely good learning materials. I personally would strongly recommend looking into Java first.\n");
    printf("\n\n---------------------------------------------------------------------------------------------------\n\n");  

    //making sure user presses any key
    getchar(); 

    //opening hands on learning websites
    system("start https://www.codecademy.com/"); 
    system("start https://www.udacity.com/course/java-programming-basics--ud282/"); 
    system("start https://www.sololearn.com/"); 

    printf("\n\nSo %s, thank you for coming to my Ted Talk. Go into Computer Science.\n\n", name); 
    printf("\n\n---------------------------------------------------------------------------------------------------\n\n");  
}