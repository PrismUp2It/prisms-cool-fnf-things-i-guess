#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#include <haxe/xml/_Access/AttribAccess_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9f469b760cc02b5d_39_resolve,"haxe.xml._Access.AttribAccess_Impl_","resolve",0xf06df4f6,"haxe.xml._Access.AttribAccess_Impl_.resolve","D:\\HaxeToolkit\\haxe\\std/haxe/xml/Access.hx",39,0x53774111)
namespace haxe{
namespace xml{
namespace _Access{

void AttribAccess_Impl__obj::__construct() { }

Dynamic AttribAccess_Impl__obj::__CreateEmpty() { return new AttribAccess_Impl__obj; }

void *AttribAccess_Impl__obj::_hx_vtable = 0;

Dynamic AttribAccess_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AttribAccess_Impl__obj > _hx_result = new AttribAccess_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AttribAccess_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x29817004;
}

::String AttribAccess_Impl__obj::resolve( ::Xml this1,::String name){
            	HX_STACKFRAME(&_hx_pos_9f469b760cc02b5d_39_resolve)
HXLINE(  40)		if ((this1->nodeType == ::Xml_obj::Document)) {
HXLINE(  41)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Cannot access document attribute ",ca,30,fe,c0) + name)));
            		}
HXLINE(  42)		::String v = this1->get(name);
HXLINE(  43)		if (::hx::IsNull( v )) {
HXLINE(  44)			if ((this1->nodeType != ::Xml_obj::Element)) {
HXLINE(  44)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType))));
            			}
HXDLIN(  44)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((this1->nodeName + HX_(" is missing attribute ",54,31,39,75)) + name)));
            		}
HXLINE(  45)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AttribAccess_Impl__obj,resolve,return )


AttribAccess_Impl__obj::AttribAccess_Impl__obj()
{
}

bool AttribAccess_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { outValue = resolve_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AttribAccess_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AttribAccess_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class AttribAccess_Impl__obj::__mClass;

static ::String AttribAccess_Impl__obj_sStaticFields[] = {
	HX_("resolve",ec,12,60,67),
	::String(null())
};

void AttribAccess_Impl__obj::__register()
{
	AttribAccess_Impl__obj _hx_dummy;
	AttribAccess_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.xml._Access.AttribAccess_Impl_",78,28,6c,5c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AttribAccess_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AttribAccess_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AttribAccess_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AttribAccess_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AttribAccess_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace xml
} // end namespace _Access
