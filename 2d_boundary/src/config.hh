/** \file config.hh
 * \brief Master configuration file for setting various compile-time options. */

#ifndef VOROPP_CONFIG_HH
#define VOROPP_CONFIG_HH

// These constants set the initial memory allocation for dynamically extended
// arrays
/** The initial memory allocation for the number of vertices. */
const int init_vertices=256;
/** The initial size for the delete stack. */
const int init_delete_size=256;
/** The initial size of the bnds array. */
const int init_bnds_size=256;
/** The initial size for the temporary label array. */
const int init_temp_label_size=256;

// If the initial memory is too small, the program dynamically allocates more.
// However, if the limits below are reached, then the program bails out.
/** The maximum memory allocation for the number of vertices. */
const int max_vertices=16777216;
/** The maximum size for the delete stack. */
const int max_delete_size=16777216;
/** The maximum size of the bnds array. */
const int max_bnds_size=16777216;
/** The maximum size for the temporary label array. */
const int max_temp_label_size=16777216;

/** The maximum amount of particle memory allocated for a single region. */
const int max_particle_memory=16777216;

/** The size of the buffer of file importing. */
const int import_buffer_size=512;

#ifndef VOROPP_VERBOSE
/** Voro++ can print a number of different status and debugging messages to
 * notify the user of special behavior, and this macro sets the amount which
 * are displayed. At level 0, no messages are printed. At level 1, messages
 * about unusual cases during cell construction are printed, such as when the
 * plane routine bails out due to floating point problems. At level 2, general
 * messages about memory expansion are printed. At level 3, technical details
 * about memory management are printed. */
#define VOROPP_VERBOSE 2
#endif

/** A radius to use as a placeholder when no other information is available. */
const double default_radius=0.5;

/** If a point is within this distance of a cutting plane, then the code
 * assumes that point exactly lies on the plane. */
const double tolerance=1e-10;

/** If this is set to 1, then the code reports any instances of particles being
 * put outside of the container geometry. */
#define VOROPP_REPORT_OUT_OF_BOUNDS 0

/** Voro++ returns this status code if there is a file-related error, such as
 * not being able to open file. */
#define VOROPP_FILE_ERROR 1

/** Voro++ returns this status code if there is a memory allocation error, if
 * one of the safe memory limits is exceeded. */
#define VOROPP_MEMORY_ERROR 2

/** Voro++ returns this status code if there is any type of internal error, if
 * it detects that representation of the Voronoi cell is inconsistent. This
 * status code will generally indicate a bug, and the developer should be
 * contacted. */
#define VOROPP_INTERNAL_ERROR 3

/** Voro++ returns this status code if it could not interpret the command line
 * arguments passed to the command line utility. */
#define VOROPP_CMD_LINE_ERROR 4

#endif
