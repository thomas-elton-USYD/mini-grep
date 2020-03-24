//Include libraries
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){i

	//Isolate search patter arugment
	char* search_pattern = argv[1];

	//Length of the search patter
	int pattern_length = (int) strlen(search_pattern);

	//Inialise Variables
	int display = 0;
	int pattern_index;

	//Iterate over every word
	for (int i = 2; i < argc; i++){

		//Isolate each word from the arguments
		char* word = argv[i];

		//Length of the word previously isolated.
		size_t word_length = strlen(word);

		//Iterate over every character
		for (int z = 0; z < word_length; z++){

			//If a character matches the first character of the patterns, check the next few chracters also fit the pattern.
			if (word[z] == search_pattern[0]){

				//Re-set to default value.
				pattern_index = 0;
					
				//Loop over the pattern and check that characters in word match.
				for (int x = z; x < z+pattern_length; x++){

					//Check that the next characters also fit the search pattern.
					if (word[x] == search_pattern[pattern_index]){
						pattern_index++;
						printf("%d\n", pattern_index);
					}
				} 

				//If the word has the right amount of matching characters, allow the word to be printed.
				if (pattern_index == pattern_length){
					display = 1;
				}
			}
		}

		//Print Word
		if (display == 1){
			printf("%s\n", word);
			display = 0;
		}
	}
	return 0;
}
