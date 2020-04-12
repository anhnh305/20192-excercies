/* -*- C++ -*- */
/* Generated by /Users/thiennd/Desktop/study-documents/20192/20192-excercies/DistributedSystem/OpenDDS-3.14/bin/opendds_idl version 3.14 (ACE version 6.2a_p17) running on input file CorbaSeq/ULongSeq.idl */
#ifndef OPENDDS_IDL_GENERATED_ULONGSEQTYPESUPPORTIMPL_H_5DAMP5
#define OPENDDS_IDL_GENERATED_ULONGSEQTYPESUPPORTIMPL_H_5DAMP5
#include "tao/ULongSeqC.h"
#include "dds/DCPS/Definitions.h"
#include "dds/DdsDcpsC.h"
#include "dds/DCPS/Serializer.h"
#include "dds/DCPS/dcps_export.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: ULongSeq */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

OpenDDS_Dcps_Export
void gen_find_size(const CORBA::ULongSeq& seq, size_t& size, size_t& padding);

OpenDDS_Dcps_Export
bool operator<<(Serializer& strm, const CORBA::ULongSeq& seq);

OpenDDS_Dcps_Export
bool operator>>(Serializer& strm, CORBA::ULongSeq& seq);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

OpenDDS_Dcps_Export
bool gen_skip_over(Serializer& ser, CORBA::ULongSeq*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: ULongSeq */

/* End MODULE: CORBA */
#endif /* OPENDDS_IDL_GENERATED_ULONGSEQTYPESUPPORTIMPL_H_5DAMP5 */