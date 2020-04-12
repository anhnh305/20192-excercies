/* -*- C++ -*- */
/* Generated by /Users/thiennd/Desktop/study-documents/20192/20192-excercies/DistributedSystem/OpenDDS-3.14/bin/opendds_idl version 3.14 (ACE version 6.2a_p17) running on input file CorbaSeq/UShortSeq.idl */
#ifndef OPENDDS_IDL_GENERATED_USHORTSEQTYPESUPPORTIMPL_H_JYY1UN
#define OPENDDS_IDL_GENERATED_USHORTSEQTYPESUPPORTIMPL_H_JYY1UN
#include "tao/UShortSeqC.h"
#include "dds/DCPS/Definitions.h"
#include "dds/DdsDcpsC.h"
#include "dds/DCPS/Serializer.h"
#include "dds/DCPS/dcps_export.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: UShortSeq */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

OpenDDS_Dcps_Export
void gen_find_size(const CORBA::UShortSeq& seq, size_t& size, size_t& padding);

OpenDDS_Dcps_Export
bool operator<<(Serializer& strm, const CORBA::UShortSeq& seq);

OpenDDS_Dcps_Export
bool operator>>(Serializer& strm, CORBA::UShortSeq& seq);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

OpenDDS_Dcps_Export
bool gen_skip_over(Serializer& ser, CORBA::UShortSeq*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: UShortSeq */

/* End MODULE: CORBA */
#endif /* OPENDDS_IDL_GENERATED_USHORTSEQTYPESUPPORTIMPL_H_JYY1UN */