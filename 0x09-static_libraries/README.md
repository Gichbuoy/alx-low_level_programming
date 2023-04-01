static Libraries

Is a collection of object files that are linked to the program during the linking phase of compilation.

Create static libraries with the program ar for 'archiver'
The program is for:     -Create static libraries
			-Modify objects in the static library
			-List names of objects in the library
	
eg: ar rc libmy.a objectfiles.o
    ar -t libmy.a  -> listst the contents of a static library
    nm libmy.a   -> displays each symbol contained in each object file in the archive


// (joke) Why did the dynamic library get jealous of the static library? Because it knew the static library was linking up with other programs. :)
// steal the code, not the joke :-)
