/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.9 */

#ifndef PB_MESHTASTIC_MESHTASTIC_CANNEDMESSAGES_PB_H_INCLUDED
#define PB_MESHTASTIC_MESHTASTIC_CANNEDMESSAGES_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
/* Canned message module configuration. */
typedef struct _meshtastic_CannedMessageModuleConfig {
    /* Predefined messages for canned message module separated by '|' characters. */
    char messages[201];
} meshtastic_CannedMessageModuleConfig;

#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define meshtastic_CannedMessageModuleConfig_init_default                                                                        \
    {                                                                                                                            \
        ""                                                                                                                       \
    }
#define meshtastic_CannedMessageModuleConfig_init_zero                                                                           \
    {                                                                                                                            \
        ""                                                                                                                       \
    }

/* Field tags (for use in manual encoding/decoding) */
#define meshtastic_CannedMessageModuleConfig_messages_tag 1

/* Struct field encoding specification for nanopb */
#define meshtastic_CannedMessageModuleConfig_FIELDLIST(X, a) X(a, STATIC, SINGULAR, STRING, messages, 1)
#define meshtastic_CannedMessageModuleConfig_CALLBACK NULL
#define meshtastic_CannedMessageModuleConfig_DEFAULT NULL

extern const pb_msgdesc_t meshtastic_CannedMessageModuleConfig_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define meshtastic_CannedMessageModuleConfig_fields &meshtastic_CannedMessageModuleConfig_msg

/* Maximum encoded size of messages (where known) */
#define MESHTASTIC_MESHTASTIC_CANNEDMESSAGES_PB_H_MAX_SIZE meshtastic_CannedMessageModuleConfig_size
#define meshtastic_CannedMessageModuleConfig_size 203

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
