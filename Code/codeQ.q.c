#include "Q.h"

BEGIN				//Start
STAT(0)			
	STR(0x11ffa,"%s \n");	//Format Put string 
	STR(0x11ff4,"%i \n");	//Format Put integer
	STR(0x11fee,"%c \n");	//Format Put char
	STR(0x11fe8,"%f \n");	//Format Get integer
	STR(0x11fe2,"%c \n");	//Format Get char
	STR(0x11fdc,"   \n");	//Format New_Line
CODE(0)
L 0:				
	GT(1);			//To Main
L 2:			//New Function
	//Free Register
	//Get R0
	R0 = I(R6-4);
	//Get R1
	R1 = 2;
	R0 = R0 < R1;
	//Free R1
	IF(R0==0) GT(3);	//Jump if 0
	//Free R0
	//Get R0
	R0 = I(R6-4);
	I(0x11fd4) = R0;			//Save return
	//Free R0
	GT(R5);			//End Function
	GT(4);	//Jump if 0
L 3:				
	R7 = R7 - 4; // Assign memory
	//Get R0
	R0 = I(R6-4);
	//Get R1
	R1 = 1;
	R0 = R0 - R1;
	//Free R1
	R7 = R7 - 4;			//Save space for register R5
	I(R7) = R5;			//R5 saved
	R7 = R7 - 4;			//Save space for register R6
	I(R7) = R6;			//R6 saved
	R5 = 5;			//Return to main
	R6 = R7;			//Return to main
	R7 = R7 - 4;			//Reserve space
	I(R7) = R0;			//Save param
	GT(2);			//Jump to function
L 5:			//Contunue execution
	R7 = R6;			//Return to main
	R6 = I(R7);			//R6 recovered
	R7 = R7 + 4;			//Free space for register R6
	R5 = I(R7);			//R5 recovered
	R7 = R7 + 4;			//Free space for register R5
	//Get R1
	R1 = I(0x11fd4);
	I(R6-8) = R1;			//Saved
	//Free R1
	R7 = R7 - 4; // Assign memory
	//Get R1
	R1 = I(R6-4);
	//Get R2
	R2 = 2;
	R1 = R1 - R2;
	//Free R2
	R7 = R7 - 4;			//Save space for register R5
	I(R7) = R5;			//R5 saved
	R7 = R7 - 4;			//Save space for register R6
	I(R7) = R6;			//R6 saved
	R5 = 6;			//Return to main
	R6 = R7;			//Return to main
	R7 = R7 - 4;			//Reserve space
	I(R7) = R1;			//Save param
	GT(2);			//Jump to function
L 6:			//Contunue execution
	R7 = R6;			//Return to main
	R6 = I(R7);			//R6 recovered
	R7 = R7 + 4;			//Free space for register R6
	R5 = I(R7);			//R5 recovered
	R7 = R7 + 4;			//Free space for register R5
	//Get R2
	R2 = I(0x11fd4);
	I(R6-12) = R2;			//Saved
	//Free R2
	//Get R2
	R2 = I(R6-8);
	//Get R3
	R3 = I(R6-12);
	R2 = R2 + R3;
	//Free R3
	I(0x11fd4) = R2;			//Save return
	//Free R2
	GT(R5);			//End Function
L 4:				
	GT(R5);			//End Function
L 1:			//Start Main
	R7 = R7 - 8;			//reserve space function
	//Free Register
	R7 = R7 - 4; // Assign memory
	//Get R0
	R0 = 0;
	I(0x11fd0) = R0;			//Saved
	//Free R0
	R7 = R7 - 4; // Assign memory
	//Get R0
	R0 = 0;
	I(0x11fcc) = R0;			//Saved
	//Free R0
L 7:				
	//Get R0
	R0 = I(0x11fcc);
	//Get R1
	R1 = 100;
	R0 = R0 < R1;
	//Free R1
	IF(R0==0) GT(8);	//Jump if 0
	//Free R0
	//Get R0
	R0 = 1;
	//Get R1
	R1 = I(0x11fcc);
	R1 = R1 + R0;			//Saved
	I(0x11fcc) = R1;
	//Free R1
	//Free R0
	//Get R0
	R0 = I(0x11fcc);
	R7 = R7 - 4;			//Save space for register R5
	I(R7) = R5;			//R5 saved
	R7 = R7 - 4;			//Save space for register R6
	I(R7) = R6;			//R6 saved
	R5 = 9;			//Return to main
	R6 = R7;			//Return to main
	R7 = R7 - 4;			//Reserve space
	I(R7) = R0;			//Save param
	GT(2);			//Jump to function
L 9:			//Contunue execution
	R7 = R6;			//Return to main
	R6 = I(R7);			//R6 recovered
	R7 = R7 + 4;			//Free space for register R6
	R5 = I(R7);			//R5 recovered
	R7 = R7 + 4;			//Free space for register R5
	//Get R1
	R1 = I(0x11fd4);
	I(0x11fd0) = R1;			//Saved
	//Free R1
	R7 = R7 - 4;			//Save space for register R0
	I(R7) = R0;			//R0 saved
	R7 = R7 - 4;			//Save space for register R1
	I(R7) = R1;			//R1 saved
	R7 = R7 - 4;			//Save space for register R2
	I(R7) = R2;			//R2 saved
	// Start of Print variable
	R0 = 10;			//Return label
	R1 = 0x11ff4;			//Format int address
	R2 = I(0x11fd0);			//Static variable value
	GT(putf_);			//Print variable
L 10:				
	// End of Print variable
	R2 = I(R7);			//R2 recovered
	R7 = R7 + 4;			//Free space for register R2
	R1 = I(R7);			//R1 recovered
	R7 = R7 + 4;			//Free space for register R1
	R0 = I(R7);			//R0 recovered
	R7 = R7 + 4;			//Free space for register R0
	GT(7);	//Jump if 0
L 8:				
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
