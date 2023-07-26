### Makefile
- File that Sets a set of rules to determine which parts of a program need to be recompile, and issues command to recompile them.
 • Makefile is a way of automating software building procedure and other complex tasks with dependencies.
 • Makefile contains: 
	- dependency rules, 
	- macros and 
	- suffix(or implicit) rules.


- Makefiles are essential components of the build process in software development. They are used with the **'make'** build automation tool to manage and organize the compilation of source code into executable programs or libraries.
 The primary purpose of a makefile is to define rules and dependencies for building the different components of a software project.

Makefiles typically have a specific format, where each line represents a rule or command. The format consists of the following elements:

* Targets: Targets represent the files or actions that need to be generated or executed. They are usually the names of the final executable, object files, or other output files.

* Prerequisites: Prerequisites are files that are required to build the target. If any of the prerequisites are newer than the target, the target needs to be rebuilt.

* Commands: Commands are the instructions to generate the target from its prerequisites. These are typically shell commands used to compile source code or perform other build tasks.

Example:
```
CC = gcc
CFLAGS = -Wall -Werror

all: my_program

my_program: main.o helper.o
    $(CC) $(CFLAGS) -o my_program main.o helper.o

main.o: main.c
    $(CC) $(CFLAGS) -c main.c

helper.o: helper.c
    $(CC) $(CFLAGS) -c helper.c

clean:
    rm -f my_program *.o
```

In this example, we have four targets: 'all', 'my_program', 'main.o', and 'helper.o'. The 'all' target depends on 'my_program', which, in turn, depends on 'main.o' and 'helper.o'. Each of the .o (object) files depends on their corresponding .c (source) files.

The commands below each target specify how to build them. For example, 'my_program' is built using the 'main.o' and 'helper.o' object files, and the compiler is invoked with the specified flags to create the executable 'my_program'.

You can use this makefile by navigating to the directory containing the makefile and running the 'make' command. The 'make' tool will read the makefile and execute the necessary commands to build the target specified after 'make', in this case, 'my_program'.


### GNU make
- GNU Make, often simply referred to as "make," is a widely used build automation tool that is part of the GNU project. It is an enhanced version of the original Unix make utility, offering additional features and capabilities. GNU Make is open-source and available on various platforms, making it a popular choice for building software projects across different operating systems.


- The primary purpose of GNU Make is to manage the build process of software projects by automating the compilation and linking of source code files into executable programs or libraries. It reads a makefile, which contains rules and dependencies, and then executes the necessary commands to build the specified targets.

Here are some key features and concepts of GNU Make:

* Targets and Prerequisites: In the makefile, you define targets (output files or actions) and their prerequisites (input files). A target depends on its prerequisites. If any of the prerequisites are newer than the target or if the target does not exist, the associated commands will be executed to build the target.

* Rules and Commands: Rules define how to build a target and contain the shell commands necessary for the build process. When a target needs to be built, the commands in the corresponding rule are executed.

* Implicit Rules: GNU Make has a set of implicit rules that define common build actions for certain file types. For example, it knows how to compile C source files into object files without explicitly defining a rule.

* Variables: Variables can be used to store values like compiler options, file lists, etc. They provide flexibility and allow you to easily change parameters in the makefile.

* Phony Targets: Phony targets are used to define targets that don't represent files but are used for executing specific actions. They are helpful for defining tasks like 'clean' to remove generated files or 'all' to build all targets.

* Dependency Management: GNU Make automatically figures out which targets need to be rebuilt based on the timestamps of the target and its prerequisites. If a prerequisite is modified, the corresponding target will be rebuilt.

Example:
```
CC = gcc
CFLAGS = -Wall -Werror

all: my_program

my_program: main.c helper.c
    $(CC) $(CFLAGS) -o my_program main.c helper.c

clean:
    rm -f my_program
```

In this example, 'my_program' is the target, and 'main.c' and 'helper.c' are the prerequisites. The rule under 'my_program' specifies how to build the target using the specified compiler and flags.

To use this makefile, place it in the project directory and run the 'make' command in the terminal. GNU Make will read the makefile, determine which targets need to be built or rebuilt, and execute the necessary commands accordingly.
