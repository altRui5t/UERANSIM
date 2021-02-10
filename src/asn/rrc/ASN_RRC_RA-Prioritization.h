/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_RA_Prioritization_H_
#define	_ASN_RRC_RA_Prioritization_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_RA_Prioritization__powerRampingStepHighPriority {
	ASN_RRC_RA_Prioritization__powerRampingStepHighPriority_dB0	= 0,
	ASN_RRC_RA_Prioritization__powerRampingStepHighPriority_dB2	= 1,
	ASN_RRC_RA_Prioritization__powerRampingStepHighPriority_dB4	= 2,
	ASN_RRC_RA_Prioritization__powerRampingStepHighPriority_dB6	= 3
} e_ASN_RRC_RA_Prioritization__powerRampingStepHighPriority;
typedef enum ASN_RRC_RA_Prioritization__scalingFactorBI {
	ASN_RRC_RA_Prioritization__scalingFactorBI_zero	= 0,
	ASN_RRC_RA_Prioritization__scalingFactorBI_dot25	= 1,
	ASN_RRC_RA_Prioritization__scalingFactorBI_dot5	= 2,
	ASN_RRC_RA_Prioritization__scalingFactorBI_dot75	= 3
} e_ASN_RRC_RA_Prioritization__scalingFactorBI;

/* ASN_RRC_RA-Prioritization */
typedef struct ASN_RRC_RA_Prioritization {
	long	 powerRampingStepHighPriority;
	long	*scalingFactorBI;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_RA_Prioritization_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_powerRampingStepHighPriority_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_scalingFactorBI_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_RA_Prioritization;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_RA_Prioritization_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_RA_Prioritization_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_RA_Prioritization_H_ */
#include <asn_internal.h>
