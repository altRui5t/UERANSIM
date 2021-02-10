/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_BCCH_Config_H_
#define	_ASN_RRC_BCCH_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_BCCH_Config__modificationPeriodCoeff {
	ASN_RRC_BCCH_Config__modificationPeriodCoeff_n2	= 0,
	ASN_RRC_BCCH_Config__modificationPeriodCoeff_n4	= 1,
	ASN_RRC_BCCH_Config__modificationPeriodCoeff_n8	= 2,
	ASN_RRC_BCCH_Config__modificationPeriodCoeff_n16	= 3
} e_ASN_RRC_BCCH_Config__modificationPeriodCoeff;

/* ASN_RRC_BCCH-Config */
typedef struct ASN_RRC_BCCH_Config {
	long	 modificationPeriodCoeff;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_BCCH_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_modificationPeriodCoeff_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_BCCH_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_BCCH_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_BCCH_Config_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_BCCH_Config_H_ */
#include <asn_internal.h>
