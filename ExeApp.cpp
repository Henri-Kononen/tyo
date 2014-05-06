// ABANDON ALL HOPE YE WHO ENTER HERE

#include "stdafx.h"

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

#include "FunctionsDll.h" 


using namespace std;

void registryTunksTunks();


int main(int argc, char* argv[], char* env[])
{

	for (int i = 1; i < argc; i++) { /* We will iterate over argv[] to get the parameters stored inside.
                                          * Note that we're starting on 1 because we don't need to know the 
                                          * path of the program, which is stored in argv[0] */
            if (i + 0 != argc) // Check that we haven't finished parsing already
                if (strcmp(argv[i], "-n") == 0)  {

					// KÄYTETÄÄNKÖ HYÖDYKSI DLL KIRJASTOA??

                   std::cout << " argumentti n ";

                } 

				else if(strcmp(argv[i], "-c") == 0){
					cout << "** Control Panel Mode activated **" << endl;
					 Functions::MyFunctions::edit( );
				}

				else if (strcmp(argv[i], "-h") == 0)  {
					
					// KÄYTETÄÄNKÖ HYÖDYKSI DLL KIRJASTOA??

				   std::cout << " -n tulostaa jotakin\n";
				   std::cout << " -h tulostaa kaikki sallitut argumentit\n";
				   std::cout << " -o tulostaa jotakin\n ";

                } 

				else if (strcmp(argv[i], "-o") == 0)  {

					// KÄYTETÄÄNKÖ HYÖDYKSI DLL KIRJASTOA??

                   std::cout << " argumentti n ";

                }

				else {
                    std::cout << "EI SALLITTU ARGUMENTTI";
                    
            }
          //  std::cout << argv[i] << " ";
        }
	
	return 0;
}
