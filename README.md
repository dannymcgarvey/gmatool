# gmatool

A command line tool for extracting and merging models from gma / tpl files

Original gmatool by Mechalico:
https://github.com/Mechalico/gmatool

### Usage
How to use gmatool:
Each of these saves extracted data to unique and readable gma and tpl files, and do not alter the input files.
* "-ge \<name\>" - Extracts goal data from \<name\>.gma and \<name\>.tpl.
* "-se \<name\>" - Extracts switch data from \<name\>.gma and \<name\>.tpl, saving each switch to unique files, including switch bases.
* "-me \<name\> \<modelname\>" - Extracts the data of the model called "modelname" from \<name>.gma and \<name\>.tpl.
* "-le \<name\>" - Lists all models in \<name\>.gma, then accepts a model name from command line. Works the same as "-me".
* "-m \<name1\> \<name2\>" - Extracts all data from \<name1\>.gma, \<name2\>.gma, \<name1\>.tpl and \<name2\>.tpl, and combines the data. The second file's data is always placed after the first.

### Changes
* Fixed a bug where extracted textures would sometimes appear corrupted
* Works with files that have empty header entries / unnamed models
* Added option to list out models and then choose which one to extract
