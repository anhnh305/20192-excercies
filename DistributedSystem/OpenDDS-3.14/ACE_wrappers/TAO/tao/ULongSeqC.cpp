// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.2a_p17
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// be/be_codegen.cpp:376


#include "ULongSeqC.h"
#include "tao/CDR.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:108

#if !defined (_CORBA_ULONGSEQ_CS_)
#define _CORBA_ULONGSEQ_CS_

CORBA::ULongSeq::ULongSeq (void)
{}

CORBA::ULongSeq::ULongSeq (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence<
        ::CORBA::ULong
      > (max)
{}

CORBA::ULongSeq::ULongSeq (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    ::CORBA::ULong * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_value_sequence<
        ::CORBA::ULong
      >
    (max, length, buffer, release)
{}

CORBA::ULongSeq::~ULongSeq (void)
{}

void CORBA::ULongSeq::_tao_any_destructor (
    void * _tao_void_pointer)
{
  ULongSeq * _tao_tmp_pointer =
    static_cast<ULongSeq *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:96
#if !defined _TAO_CDR_OP_CORBA_ULongSeq_CPP_
#define _TAO_CDR_OP_CORBA_ULongSeq_CPP_


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CORBA::ULongSeq &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CORBA::ULongSeq &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_CDR_OP_CORBA_ULongSeq_CPP_ */


TAO_END_VERSIONED_NAMESPACE_DECL

