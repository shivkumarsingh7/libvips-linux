/* Macros for the header version.
 */

#ifndef VIPS_VERSION_H
#define VIPS_VERSION_H

#define VIPS_VERSION		"8.10.1"
#define VIPS_VERSION_STRING	"8.10.1-Fri Sep  4 11:40:49 UTC 2020"
#define VIPS_MAJOR_VERSION	(8)
#define VIPS_MINOR_VERSION	(10)
#define VIPS_MICRO_VERSION	(1)

/* The ABI version, as used for library versioning.
 */
#define VIPS_LIBRARY_CURRENT	(54)
#define VIPS_LIBRARY_REVISION	(3)
#define VIPS_LIBRARY_AGE	(12)

#define VIPS_CONFIG		"native win32: no, native OS X: no, open files in binary mode: no, enable debug: no, enable deprecated library components: yes, enable docs with gtkdoc: no, gobject introspection: no, enable radiance support: yes, enable analyze support: yes, enable PPM support: yes, use fftw3 for FFT: yes, Magick package: MagickCore, Magick API version: magick6, load with libMagick: yes, save with libMagick: yes, accelerate loops with orc: yes, ICC profile support with lcms: yes (lcms2), file import with niftiio: no, file import with libheif: no, file import with OpenEXR: yes, file import with OpenSlide: yes, file import with matio: yes, PDF import with PDFium: no, PDF import with poppler-glib: yes, SVG import with librsvg-2.0: yes, zlib: yes, file import with cfitsio: yes, file import/export with libwebp: yes, text rendering with pangoft2: yes, file import/export with libspng: no, file import/export with libpng: yes (pkg-config libpng >= 1.2.9), support 8bpp PNG quantisation: no, file import/export with libtiff: yes (pkg-config libtiff-4), file import/export with giflib: yes (found by search), file import/export with libjpeg: yes (pkg-config), image pyramid export: yes, use libexif to load/save JPEG metadata: yes"

/** 
 * VIPS_SONAME:
 *
 * The name of the shared object containing the vips library, for example
 * "libvips.so.42", or "libvips-42.dll".
 */

#include "soname.h"

/* Not really anything to do with versions, but this is a handy place to put
 * it.
 */
#define VIPS_EXEEXT ""
#define VIPS_ENABLE_DEPRECATED 1

#endif /*VIPS_VERSION_H*/
