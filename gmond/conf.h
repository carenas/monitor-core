#ifndef GMOND_CONFIG_H
#define GMOND_CONFIG_H 1
#include <stdlib.h>
#include <string.h>

#include "lib/llist.h"

/* autoconf me later */
#define DEFAULT_GMOND_CONFIG_FILE "/etc/gmond.conf"

typedef struct
   {
      char *name;
      char *owner;
      char *latlong;
      char *url;
      char *location;
      char *msg_channel;
      char *msg_port;
      int msg_port_given;
      int msg_if_given;
      char *msg_if;
      long int msg_ttl;
      long int msg_threads;
      char *xml_port;
      char *compressed_xml_port;
      long int xml_threads;
      long int compressed_xml_threads;
      llist_entry *trusted_hosts;
      long int num_nodes;
      long int num_custom_metrics;
      long int mute;
      long int deaf;
      long int debug_level;
      long int no_setuid;
      char *setuid;
      long int no_gexec;
      long int all_trusted;
      long int host_dmax;
      int xml_compression_level;
} gmond_config_t;

int get_gmond_config( char *conffile);

#endif