// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.2a_p10
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
// h:\temp\opendds\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:376


#include "TopicsTypeSupportC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/Sequence_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "TopicsTypeSupportC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// h:\temp\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\alias_typecode.cpp:51



// TAO_IDL - Generated from
// h:\temp\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_defn.cpp:464


#ifndef _TAO_TYPECODE_TopicSample_MessageSeq_GUARD
#define _TAO_TYPECODE_TopicSample_MessageSeq_GUARD

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace TypeCode
  {
    namespace
    {
      TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                              TAO::Null_RefCount_Policy>
        TopicSample_MessageSeq_0 (
          ::CORBA::tk_sequence,
          &TopicSample::_tc_Message,
          0U);
        
      ::CORBA::TypeCode_ptr const tc_TopicSample_MessageSeq_0 =
        &TopicSample_MessageSeq_0;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_TYPECODE_TopicSample_MessageSeq_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_TopicSample_MessageSeq (
    ::CORBA::tk_alias,
    "IDL:TopicSample/MessageSeq:1.0",
    "MessageSeq",
    &TAO::TypeCode::tc_TopicSample_MessageSeq_0);
  

namespace TopicSample
{
  ::CORBA::TypeCode_ptr const _tc_MessageSeq =
    &_tao_tc_TopicSample_MessageSeq;
}

// TAO_IDL - Generated from
// h:\temp\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:51

// Traits specializations for TopicSample::MessageTypeSupport.

TopicSample::MessageTypeSupport_ptr
TAO::Objref_Traits<TopicSample::MessageTypeSupport>::duplicate (
    TopicSample::MessageTypeSupport_ptr p)
{
  return TopicSample::MessageTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<TopicSample::MessageTypeSupport>::release (
    TopicSample::MessageTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

TopicSample::MessageTypeSupport_ptr
TAO::Objref_Traits<TopicSample::MessageTypeSupport>::nil (void)
{
  return TopicSample::MessageTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<TopicSample::MessageTypeSupport>::marshal (
    const TopicSample::MessageTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TopicSample::MessageTypeSupport::MessageTypeSupport (void)
{}

TopicSample::MessageTypeSupport::~MessageTypeSupport (void)
{
}

void
TopicSample::MessageTypeSupport::_tao_any_destructor (void *_tao_void_pointer)
{
  MessageTypeSupport *_tao_tmp_pointer =
    static_cast<MessageTypeSupport *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

TopicSample::MessageTypeSupport_ptr
TopicSample::MessageTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageTypeSupport::_duplicate (
      dynamic_cast<MessageTypeSupport_ptr> (_tao_objref)
    );
}

TopicSample::MessageTypeSupport_ptr
TopicSample::MessageTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageTypeSupport::_duplicate (
      dynamic_cast<MessageTypeSupport_ptr> (_tao_objref)
    );
}

TopicSample::MessageTypeSupport_ptr
TopicSample::MessageTypeSupport::_nil (void)
{
  return 0;
}

TopicSample::MessageTypeSupport_ptr
TopicSample::MessageTypeSupport::_duplicate (MessageTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
TopicSample::MessageTypeSupport::_tao_release (MessageTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
TopicSample::MessageTypeSupport::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:TopicSample/MessageTypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* TopicSample::MessageTypeSupport::_interface_repository_id (void) const
{
  return "IDL:TopicSample/MessageTypeSupport:1.0";
}

::CORBA::Boolean
TopicSample::MessageTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// h:\temp\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\objref_typecode.cpp:72

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_TopicSample_MessageTypeSupport (
    ::CORBA::tk_local_interface,
    "IDL:TopicSample/MessageTypeSupport:1.0",
    "MessageTypeSupport");
  

namespace TopicSample
{
  ::CORBA::TypeCode_ptr const _tc_MessageTypeSupport =
    &_tao_tc_TopicSample_MessageTypeSupport;
}

// TAO_IDL - Generated from
// h:\temp\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:51

// Traits specializations for TopicSample::MessageDataWriter.

TopicSample::MessageDataWriter_ptr
TAO::Objref_Traits<TopicSample::MessageDataWriter>::duplicate (
    TopicSample::MessageDataWriter_ptr p)
{
  return TopicSample::MessageDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<TopicSample::MessageDataWriter>::release (
    TopicSample::MessageDataWriter_ptr p)
{
  ::CORBA::release (p);
}

TopicSample::MessageDataWriter_ptr
TAO::Objref_Traits<TopicSample::MessageDataWriter>::nil (void)
{
  return TopicSample::MessageDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<TopicSample::MessageDataWriter>::marshal (
    const TopicSample::MessageDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TopicSample::MessageDataWriter::MessageDataWriter (void)
{}

TopicSample::MessageDataWriter::~MessageDataWriter (void)
{
}

void
TopicSample::MessageDataWriter::_tao_any_destructor (void *_tao_void_pointer)
{
  MessageDataWriter *_tao_tmp_pointer =
    static_cast<MessageDataWriter *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

TopicSample::MessageDataWriter_ptr
TopicSample::MessageDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageDataWriter::_duplicate (
      dynamic_cast<MessageDataWriter_ptr> (_tao_objref)
    );
}

TopicSample::MessageDataWriter_ptr
TopicSample::MessageDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageDataWriter::_duplicate (
      dynamic_cast<MessageDataWriter_ptr> (_tao_objref)
    );
}

TopicSample::MessageDataWriter_ptr
TopicSample::MessageDataWriter::_nil (void)
{
  return 0;
}

TopicSample::MessageDataWriter_ptr
TopicSample::MessageDataWriter::_duplicate (MessageDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
TopicSample::MessageDataWriter::_tao_release (MessageDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
TopicSample::MessageDataWriter::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:TopicSample/MessageDataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* TopicSample::MessageDataWriter::_interface_repository_id (void) const
{
  return "IDL:TopicSample/MessageDataWriter:1.0";
}

::CORBA::Boolean
TopicSample::MessageDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// h:\temp\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\objref_typecode.cpp:72

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_TopicSample_MessageDataWriter (
    ::CORBA::tk_local_interface,
    "IDL:TopicSample/MessageDataWriter:1.0",
    "MessageDataWriter");
  

namespace TopicSample
{
  ::CORBA::TypeCode_ptr const _tc_MessageDataWriter =
    &_tao_tc_TopicSample_MessageDataWriter;
}

// TAO_IDL - Generated from
// h:\temp\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:51

// Traits specializations for TopicSample::MessageDataReader.

TopicSample::MessageDataReader_ptr
TAO::Objref_Traits<TopicSample::MessageDataReader>::duplicate (
    TopicSample::MessageDataReader_ptr p)
{
  return TopicSample::MessageDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<TopicSample::MessageDataReader>::release (
    TopicSample::MessageDataReader_ptr p)
{
  ::CORBA::release (p);
}

TopicSample::MessageDataReader_ptr
TAO::Objref_Traits<TopicSample::MessageDataReader>::nil (void)
{
  return TopicSample::MessageDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<TopicSample::MessageDataReader>::marshal (
    const TopicSample::MessageDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TopicSample::MessageDataReader::MessageDataReader (void)
{}

TopicSample::MessageDataReader::~MessageDataReader (void)
{
}

void
TopicSample::MessageDataReader::_tao_any_destructor (void *_tao_void_pointer)
{
  MessageDataReader *_tao_tmp_pointer =
    static_cast<MessageDataReader *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

TopicSample::MessageDataReader_ptr
TopicSample::MessageDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageDataReader::_duplicate (
      dynamic_cast<MessageDataReader_ptr> (_tao_objref)
    );
}

TopicSample::MessageDataReader_ptr
TopicSample::MessageDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageDataReader::_duplicate (
      dynamic_cast<MessageDataReader_ptr> (_tao_objref)
    );
}

TopicSample::MessageDataReader_ptr
TopicSample::MessageDataReader::_nil (void)
{
  return 0;
}

TopicSample::MessageDataReader_ptr
TopicSample::MessageDataReader::_duplicate (MessageDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
TopicSample::MessageDataReader::_tao_release (MessageDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
TopicSample::MessageDataReader::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/DataReaderEx:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:TopicSample/MessageDataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* TopicSample::MessageDataReader::_interface_repository_id (void) const
{
  return "IDL:TopicSample/MessageDataReader:1.0";
}

::CORBA::Boolean
TopicSample::MessageDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// h:\temp\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\objref_typecode.cpp:72

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_TopicSample_MessageDataReader (
    ::CORBA::tk_local_interface,
    "IDL:TopicSample/MessageDataReader:1.0",
    "MessageDataReader");
  

namespace TopicSample
{
  ::CORBA::TypeCode_ptr const _tc_MessageDataReader =
    &_tao_tc_TopicSample_MessageDataReader;
}

// TAO_IDL - Generated from
// h:\temp\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\any_op_cs.cpp:41
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<TopicSample::MessageTypeSupport>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<TopicSample::MessageTypeSupport>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<TopicSample::MessageTypeSupport>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace TopicSample
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      MessageTypeSupport_ptr _tao_elem)
  {
    MessageTypeSupport_ptr _tao_objptr =
      MessageTypeSupport::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      MessageTypeSupport_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<MessageTypeSupport>::insert (
        _tao_any,
        MessageTypeSupport::_tao_any_destructor,
        _tc_MessageTypeSupport,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      MessageTypeSupport_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<MessageTypeSupport>::extract (
          _tao_any,
          MessageTypeSupport::_tao_any_destructor,
          _tc_MessageTypeSupport,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    TopicSample::MessageTypeSupport_ptr _tao_elem)
{
  TopicSample::MessageTypeSupport_ptr _tao_objptr =
    TopicSample::MessageTypeSupport::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    TopicSample::MessageTypeSupport_ptr *_tao_elem)
{
  TAO::Any_Impl_T<TopicSample::MessageTypeSupport>::insert (
      _tao_any,
      TopicSample::MessageTypeSupport::_tao_any_destructor,
      TopicSample::_tc_MessageTypeSupport,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    TopicSample::MessageTypeSupport_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<TopicSample::MessageTypeSupport>::extract (
        _tao_any,
        TopicSample::MessageTypeSupport::_tao_any_destructor,
        TopicSample::_tc_MessageTypeSupport,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// h:\temp\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\any_op_cs.cpp:41
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<TopicSample::MessageDataWriter>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<TopicSample::MessageDataWriter>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<TopicSample::MessageDataWriter>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace TopicSample
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      MessageDataWriter_ptr _tao_elem)
  {
    MessageDataWriter_ptr _tao_objptr =
      MessageDataWriter::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      MessageDataWriter_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<MessageDataWriter>::insert (
        _tao_any,
        MessageDataWriter::_tao_any_destructor,
        _tc_MessageDataWriter,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      MessageDataWriter_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<MessageDataWriter>::extract (
          _tao_any,
          MessageDataWriter::_tao_any_destructor,
          _tc_MessageDataWriter,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    TopicSample::MessageDataWriter_ptr _tao_elem)
{
  TopicSample::MessageDataWriter_ptr _tao_objptr =
    TopicSample::MessageDataWriter::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    TopicSample::MessageDataWriter_ptr *_tao_elem)
{
  TAO::Any_Impl_T<TopicSample::MessageDataWriter>::insert (
      _tao_any,
      TopicSample::MessageDataWriter::_tao_any_destructor,
      TopicSample::_tc_MessageDataWriter,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    TopicSample::MessageDataWriter_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<TopicSample::MessageDataWriter>::extract (
        _tao_any,
        TopicSample::MessageDataWriter::_tao_any_destructor,
        TopicSample::_tc_MessageDataWriter,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// h:\temp\opendds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\any_op_cs.cpp:41
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<TopicSample::MessageDataReader>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<TopicSample::MessageDataReader>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<TopicSample::MessageDataReader>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace TopicSample
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      MessageDataReader_ptr _tao_elem)
  {
    MessageDataReader_ptr _tao_objptr =
      MessageDataReader::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      MessageDataReader_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<MessageDataReader>::insert (
        _tao_any,
        MessageDataReader::_tao_any_destructor,
        _tc_MessageDataReader,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      MessageDataReader_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<MessageDataReader>::extract (
          _tao_any,
          MessageDataReader::_tao_any_destructor,
          _tc_MessageDataReader,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    TopicSample::MessageDataReader_ptr _tao_elem)
{
  TopicSample::MessageDataReader_ptr _tao_objptr =
    TopicSample::MessageDataReader::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    TopicSample::MessageDataReader_ptr *_tao_elem)
{
  TAO::Any_Impl_T<TopicSample::MessageDataReader>::insert (
      _tao_any,
      TopicSample::MessageDataReader::_tao_any_destructor,
      TopicSample::_tc_MessageDataReader,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    TopicSample::MessageDataReader_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<TopicSample::MessageDataReader>::extract (
        _tao_any,
        TopicSample::MessageDataReader::_tao_any_destructor,
        TopicSample::_tc_MessageDataReader,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

