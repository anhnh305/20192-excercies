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
// be/be_codegen.cpp:152

#ifndef _TAO_PIDL_POLICY_MANAGERC_VXH32Z_H_
#define _TAO_PIDL_POLICY_MANAGERC_VXH32Z_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/TAO_Export.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "tao/PolicyC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Export

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:38

namespace CORBA
{

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_CORBA_POLICYMANAGER__VAR_OUT_CH_)
#define _CORBA_POLICYMANAGER__VAR_OUT_CH_

  class PolicyManager;
  typedef PolicyManager *PolicyManager_ptr;

  typedef
    TAO_Objref_Var_T<
        PolicyManager
      >
    PolicyManager_var;
  
  typedef
    TAO_Objref_Out_T<
        PolicyManager
      >
    PolicyManager_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class TAO_Export PolicyManager
    : public virtual ::CORBA::Object
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef PolicyManager_ptr _ptr_type;
    typedef PolicyManager_var _var_type;
    typedef PolicyManager_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static PolicyManager_ptr _duplicate (PolicyManager_ptr obj);

    static void _tao_release (PolicyManager_ptr obj);

    static PolicyManager_ptr _narrow (::CORBA::Object_ptr obj);
    static PolicyManager_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static PolicyManager_ptr _nil (void);

    virtual ::CORBA::PolicyList * get_policy_overrides (
      const ::CORBA::PolicyTypeSeq & ts) = 0;

    virtual void set_policy_overrides (
      const ::CORBA::PolicyList & policies,
      ::CORBA::SetOverrideType set_add) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    PolicyManager (void);

    

    virtual ~PolicyManager (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    PolicyManager (const PolicyManager &);

    void operator= (const PolicyManager &);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module CORBA

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:68


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:62


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_CORBA_POLICYMANAGER__TRAITS_)
#define _CORBA_POLICYMANAGER__TRAITS_

  template<>
  struct TAO_Export Objref_Traits< ::CORBA::PolicyManager>
  {
    static ::CORBA::PolicyManager_ptr duplicate (
        ::CORBA::PolicyManager_ptr p);
    static void release (
        ::CORBA::PolicyManager_ptr p);
    static ::CORBA::PolicyManager_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::CORBA::PolicyManager_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// be/be_codegen.cpp:1703


TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* ifndef */
