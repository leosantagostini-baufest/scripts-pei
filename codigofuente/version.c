/* version.c */
/* Autogenerated by Makefile - DO NOT EDIT */

#include "version.h"
const char *version_string = "1.21.1";
const char *compilation_string = "gcc -DHAVE_CONFIG_H -DSYSTEM_WGETRC=\"/opt/ejercicio/etc/wgetrc\" -DLOCALEDIR=\"/opt/ejercicio/share/locale\" -I. -I../lib -I../lib -I/usr/include/p11-kit-1 -DHAVE_LIBGNUTLS -DNDEBUG -g -O2";
const char *link_string = "gcc -I/usr/include/p11-kit-1 -DHAVE_LIBGNUTLS -DNDEBUG -g -O2 -lidn2 -lnettle -lgnutls ftp-opie.o gnutls.o http-ntlm.o ../lib/libgnu.a ";