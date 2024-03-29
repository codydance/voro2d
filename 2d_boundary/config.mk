# Voro++, a 3D cell-based Voronoi library
#
# Author : Chris H. Rycroft (LBL / UC Berkeley)
# Email  : chr@alum.mit.edu
# Date   : July 1st 2008

# This a common configuration file that includes definitions used by all
# the Makefiles.

# C++ compiler
CC=g++

# C++ compiler flags
#CFLAGS=-Wall -ansi -pedantic -O3
CFLAGS=-Wall -ansi -pedantic

# Include and library mat
E_INC=-I../src
E_LIB=-L../src
