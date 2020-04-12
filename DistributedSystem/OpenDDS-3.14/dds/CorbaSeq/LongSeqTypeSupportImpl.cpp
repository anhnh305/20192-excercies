/* Generated by /Users/thiennd/Desktop/study-documents/20192/20192-excercies/DistributedSystem/OpenDDS-3.14/bin/opendds_idl version 3.14 (ACE version 6.2a_p17) running on input file CorbaSeq/LongSeq.idl */
#include "DCPS/DdsDcps_pch.h"
#include "LongSeqTypeSupportImpl.h"

#include "dds/CorbaSeq/LongSeqTypeSupportImpl.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: CORBA */



/* Begin TYPEDEF: LongSeq */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void gen_find_size(const CORBA::LongSeq& seq, size_t& size, size_t& padding)
{
  ACE_UNUSED_ARG(seq);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(padding);
  find_size_ulong(size, padding);
  if (seq.length() == 0) {
    return;
  }
  size += seq.length() * gen_max_marshaled_size(CORBA::Long());
}

bool operator<<(Serializer& strm, const CORBA::LongSeq& seq)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(seq);
  const CORBA::ULong length = seq.length();
  if (!(strm << length)) {
    return false;
  }
  if (length == 0) {
    return true;
  }
  return strm.write_long_array(seq.get_buffer(), length);
}

bool operator>>(Serializer& strm, CORBA::LongSeq& seq)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(seq);
  CORBA::ULong length;
  if (!(strm >> length)) {
    return false;
  }
  seq.length(length);
  if (length == 0) {
    return true;
  }
  return strm.read_long_array(seq.get_buffer(), length);
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

bool gen_skip_over(Serializer& ser, CORBA::LongSeq*)
{
  ACE_UNUSED_ARG(ser);
  ACE_CDR::ULong length;
  if (!(ser >> length)) return false;
  return ser.skip(static_cast<ACE_UINT16>(length), 4);
}

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: LongSeq */

/* End MODULE: CORBA */