#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#inlcude"quiz.h"
char sol,sc=0;
int questions(int i, int score)
{ 
    
	if((score>=0)&&(score<5))
	{
		switch(i)
    {
        case 1:
        printf(" Which crop is sown on the largest area in India?\n");
        printf("a:Rice \t b:Wheat \t c:Sugarcane  \n");
        scanf("%c",&sol);
        sc=return (answer(i,sol,score));
        return sc;//score is sent to interface function
		break;
         case 2:
        printf("The value of Gold is determined in  \n");
        printf("a: Rome \t b: Washington  \t c: London \n");
        scanf("%c",&sol);
        sc=(answer(i,sol,score));return sc;
        
        break;
         case 3:
        printf("The state which has the largest number of sugar mills in India is \n");
        printf("a:Bihar  \t b: Uttar Pradesh\t c: Punjab  \n");
        scanf("%c",&sol);
        sc=(answer(i,sol,score));
        return sc;
        break;
         case 4:
        printf("First University in India was founded at \n");
        printf("a:Bombay  \t b: Chennai \t c: Calcutta \n");
        scanf("%c",&sol);
         sc=(answer(i,sol,score));return sc;
        break;
         case 5:
        printf("Tajmahal is on the banks of \n");
        printf("a:Ganges \t b:Jamuna \t c: Tapti \n");
        scanf("%c",&sol);
         sc=(answer(i,sol,score));return sc;
        break;
         case 6:
        printf("The currency notes are printed in \n");
        printf("a: New Delhi \t b: Nagpur \t c: Nasik \n");
        scanf("%c",&sol);
         sc=(answer(i,sol,score));return sc;
        break;
         case 7:
        printf("Which is the Land of the Rising Sun?   \n");
        printf("a:Japan \t b: Australia \t c: China \n");
        scanf("%c",&sol);
         sc=answer(i,sol,score));return sc;
        break;
         case 8:
        printf("The largest ocean in the world is \n");
        printf("a:The Indian Ocean \t b:  The Atlantic Ocean \t c:The Pacific Ocean \n");
        scanf("%c",&sol);
         sc= (answer(i,sol,score));return sc;
        break;
         case 9:
        printf("The Kalahari Desert is in\n");
        printf("a:Chile \t b:  South Africa \t c:Saudi Arabia \n");
        scanf("%c",&sol);
         sc= (answer(i,sol,score));return sc;
        break;
         case 10:
        printf("Mica is available abundantly in \n");
        printf("a:Bihar  \t b:  Haryana  \t c:Karnataka  \n");
        scanf("%c",&sol);
         sc= (answer(i,sol,score));return sc;
        break;
         //case 10:
        //printf(" A sum of money at simple interest amounts to Rs. 815 in 3 years and to Rs. 854 in 4 years. The sum is: \n");
        //printf("a:650 \t b: 690 \t c:698 \n");
        //scanf("%c",&sol);
         //sc=return (answer(i,sol,score));return sc;
        //break;
		
         
        
    }
	}    
	if((score>=5)&&(score<<10))
{
	switch(i)
	{
		case 1:
        printf("Which of the following is a non metal that remains liquid at room temperature? \n");
        printf("a:Phosphorous   \t b: Bromine  \t c:Chlorine   \t d: \n");
        scanf("%c",&sol);
         sc=(answer(i,sol,score));return sc;
        break;
		case 2:
        printf("Chlorophyll is a naturally occurring chelate compound in which central metal is \n");
        printf("a: copper  \t b: magnesium  \t c: iron \n");
        scanf("%c",&sol);
         sc=(answer(i,sol,score));return sc;
        break;
		case 3:
        printf("Which of the following metals forms an amalgam with other metals? \n");
        printf("a: Tin   \t b: Mercury \t c: Lead  \t d: Zinc \n");
        scanf("%c",&sol);
         sc= (answer(i,sol,score));return sc;
        break;
		case 4:
        printf(" The gas usually filled in the electric bulb is \n");
        printf("a:nitrogen   \t b: hydrogen  \t c: carbon dioxide  \t d: oxygen \n");
        scanf("%c",&sol);
         sc=(answer(i,sol,score));return sc;
        break;
		case 5:
        printf("Ozone hole refers to \n");
        printf("a: hole in ozone layer  \t b:decrease in the ozone layer in troposphere   \t c:decrease in thickness of ozone layer in stratosphere   \t d: increase in the thickness of ozone layer in troposphere \n");
        scanf("%c",&sol);
         sc= (answer(i,sol,score));return sc;
        break;
		case 6:
        printf(" Pollination is best defined as \n");
        printf("a: transfer of pollen from anther to stigma   \t b: germination of pollen grains  \t c: growth of pollen tube in ovule   \t d: visiting flowers by insects \n");
        scanf("%c",&sol);
         sc= (answer(i,sol,score));return sc;
        break;
		case 7:
        printf("Monotremes are unique mammals because they \n");
        printf("a: posses hair   \t b: give birth to live young   \t c: secret milk in a pouch   \t d: lay eggs \n");
        scanf("%c",&sol);
         sc=(answer(i,sol,score));return sc;
        break;
		case 8:
        printf(" Plant bends towards the source of light on account of the movement of curvature known as \n");
        printf("a: geotropism   \t b: thigmotropism   \t c: chemotropism  \t d: phototropism \n");
        scanf("%c",&sol);
         sc= (answer(i,sol,score));return sc;
        break;
		case 9:
        printf(" The Paithan (Jayakwadi) Hydro-electric project, completed with the help of Japan, is on the rive \n");
        printf("a: Ganga   \t b: Cauvery  \t c: Narmada  \t d: Godavari \n");
        scanf("%c",&sol);
         sc=(answer(i,sol,score));return sc;
        break;
		case 10:
        printf(" B. C. Roy Award is given in the field of \n");
        printf("a: Music  \t b: Journalism  \t c: Medicine  \t d: Environment\n");
        scanf("%c",&sol);
         sc=(answer(i,sol,score));return sc;
        break;
		
	}
}
if((score>=10)&&(score<<15))
{
	switch(i)
	{
		case 1:
        printf("Brass gets discoloured in air because of the presence of which of the following gases in air? \n");
        printf("a: Oxygen  \t b: Hydrogen sulphide  \t c: Carbon dioxide   \t d: \n");
        scanf("%c",&sol);
         sc= (answer(i,sol,score));return sc;break;
		case 2:
        printf(" In which decade was the American Institute of Electrical Engineers (AIEE) founded? \n");
        printf("a: 1850s  \t b: 1880s  \t c: 1930s  \t d: 1950s \n");
        scanf("%c",&sol);
         sc= (answer(i,sol,score));return sc;break;
		case 3:
        printf("What is part of a database that holds only one type of information? \n");
        printf("a: Report  \t b: Field  \t c: Record  \t d: File \n");
        scanf("%c",&sol);
         sc= (answer(i,sol,score));return sc;break;
		case 4:
        printf(" The NTSC (National Television Standards Committee) is also used in the country of...?\n");
        printf("a: Japan  \t b: France  \t c: Germany  \t d: England\n");
        scanf("%c",&sol);
         sc= (answer(i,sol,score));return sc;break;
		case 5:
        printf(""FET" is a type of transistor, Its full name is ________ Effect Transistor...? \n");
        printf("a: Field   \t b: Factor  \t c: Flash  \t d: Force \n");
        scanf("%c",&sol);
         sc=(answer(i,sol,score));return sc;break;
		case 6:
        printf("What are three types of lasers? \n");
        printf("a: Gas, metal vapor, rock  \t b: Pointer, diode, CD  \t c: Diode, inverted, pointer  \t d: Gas, solid state, diode\n");
        scanf("%c",&sol);
         sc=(answer(i,sol,score));return sc;break;
		case 7:
        printf(" What does the term PLC stand for? \n");
        printf("a: Programmable Lift Computer  \t b: Program List Control  \t c: Programmable Logic Controller  \t d: Piezo Lamp Connector \n");
        scanf("%c",&sol);
         sc=(answer(i,sol,score));return sc;break;
		case 8:
        printf(" The absorption of ink by blotting paper involves\n");
        printf("a: viscosity of ink   \t b: capillary action phenomenon  \t c: diffusion of ink through the blotting  \t d: siphon action\n");
        scanf("%c",&sol);
         sc=(answer(i,sol,score));return sc;break;
		case 9:
        printf(" Nuclear sizes are expressed in a unit named\n");
        printf("a: Fermi  \t b: angstrom  \t c: newton  \t d: tesla\n");
        scanf("%c",&sol);
         sc=(answer(i,sol,score));return sc;break;
		case 10:
        printf("f two bodies of different masses, initially at rest, are acted upon by the same force for the same time, then the both bodies acquire the same \n");
        printf("a:  velocity \t b: momentum  \t c: acceleration  \t d: kinetic energy \n");
        scanf("%c",&sol);
         sc=(answer(i,sol,score));return sc;break;
		
		
	}
}if((score>=15)&&(score<=20))
{
	switch(i)
	{
		case 1:
        printf("Supersonic plane fly with the speed \n");
        printf("a: less than the speed of sound  \t b: of sound  \t c: greater than the speed of sound  \t d: of light \n");
        scanf("%c",&sol);
         sc=(answer(i,sol,score));return sc;break;
		case 2:
        printf("Mach number is used in connection with the speed of \n");
        printf("a: sound  \t b: aircraft  \t c: spacecraft  \t d: ships\n");
        scanf("%c",&sol);
         sc= (answer(i,sol,score));return sc;break;
		case 3:
        printf(" Rainbow is due to\n");
        printf("a: absorption of sunlight in minute water droplets  \t b: diffusion of sunlight through water droplets  \t c: ionisation of water deposits  \t d: refraction and reflection of sunlight by water droplets \n");
        scanf("%c",&sol);
         sc=(answer(i,sol,score));return sc;break;
		case 4:
        printf("Stars which appear single to the naked eye but are double when seen through a telescope are \n");
        printf("a: novas and supernovas  \t b: binaries   \t c: asteroids  \t d: quasars\n");
        scanf("%c",&sol);
         sc= (answer(i,sol,score));return sc;
		case 5:
        printf("ML2T-2 is the dimensional formula for \n");
        printf("a: moment of inertia  \t b: pressure  \t c: elasticity  \t d: couple acting on a body \n");
        scanf("%c",&sol);
         sc= (answer(i,sol,score));return sc;break;
		case 6:
        printf("Which was the 1st non Test playing country to beat India in an international match? \n");
        printf("a: Canada  \t b: Sri Lanka  \t c: Zimbabwe  \t d: East Africa \n");
        scanf("%c",&sol);
         sc= (answer(i,sol,score));return sc;break;
		case 7:
        printf(" Who was the first Indian to win the World Amateur Billiards title?\n");
        printf("a:  Geet Sethi \t b: Wilson Jones   \t c: Michael Ferreira  \t d: Manoj Kothari \n");
        scanf("%c",&sol);
         sc= (answer(i,sol,score));return sc;break;
		case 8:
        printf("Who invented the BALLPOINT PEN? \n");
        printf("a: Biro Brothers  \t b: Waterman Brothers  \t c: Bicc Brothers  \t d: Write Brothers \n");
        scanf("%c",&sol);
         sc= (answer(i,sol,score));return sc;break;
		case 9:
        printf("What Galileo invented? \n");
        printf("a: Barometer   \t b: Pendulum clock  \t c: Microscope   \t d: Thermometer \n");
        scanf("%c",&sol);
         sc= (answer(i,sol,score));return sc;break;
		case 10:
        printf(" The number of d-electrons in Fe2+ (Z = 26) is not equal to that of\n");
        printf("a: p-electrons in Ne(Z = 10)  \t b: s-electrons in Mg(Z = 12  \t c: d-electrons in Fe(Z = 26)   \t d: p-electrons in CI(Z = 17) \n");
        scanf("%c",&sol);
         sc= (answer(i,sol,score));return sc;break;
		
		
	}
}
}
/*void main()
{
    int i;
    i=2;
    questions(i);
    
}*/