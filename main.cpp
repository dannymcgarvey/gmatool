#include "gmatool.h"


/*

	Main body - read in arguments

*/
int main(int argc, char* argv[]) {
	int successval = 1;

	// Check Number of Arguments
	if (argc < 3 || argc > 4) {
		successval = helpText();
	} else {

		string operationtype(argv[1]);

		// Choose model to extract
		if (operationtype == "-le" && argc == 3) {
			
			string filename(argv[2]);
			successval = modelExtract(filename, LIST_MODELS, "");

		// Extract Goals
		} else if (operationtype == "-ge" && argc == 3) {

			string filename(argv[2]);
			successval = modelExtract(filename, GOAL_EXTRACT, "");

		// Extract Switches
		} else if (operationtype == "-se" && argc == 3) {

			string filename(argv[2]);
			successval = modelExtract(filename, SWITCH_EXTRACT, "");

		// Extract Specific Model
		} else if (operationtype == "-me" && argc == 4) {

			string filename(argv[2]);
			string specificmodelname(argv[3]);
			successval = modelExtract(filename, SPECIFIC_MODEL, specificmodelname);

		// Merge Models
		} else if (operationtype == "-m" && argc == 4) {

			string filename1(argv[2]);
			string filename2(argv[3]);
			successval = gmatplMerge(filename1, filename2);

		// Invalid Arguments
		} else {
			successval = helpText();
		}
	}

	// Finished Successfully
	if (successval == 0) {
		cout  << "Done!"<< endl;
	}

	return successval;
}
