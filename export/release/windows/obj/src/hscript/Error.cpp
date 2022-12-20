#include <hxcpp.h>

#ifndef INCLUDED_hscript_Error
#include <hscript/Error.h>
#endif
#ifndef INCLUDED_hscript_ErrorDef
#include <hscript/ErrorDef.h>
#endif
#ifndef INCLUDED_hscript_Printer
#include <hscript/Printer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b829cf87eef33326_95_new,"hscript.Error","new",0x4a2914df,"hscript.Error.new","hscript/Expr.hx",95,0x44b487ad)
HX_LOCAL_STACK_FRAME(_hx_pos_b829cf87eef33326_103_toString,"hscript.Error","toString",0x3655dfcd,"hscript.Error.toString","hscript/Expr.hx",103,0x44b487ad)
namespace hscript{

void Error_obj::__construct( ::hscript::ErrorDef e,int pmin,int pmax,::String origin,int line){
            	HX_STACKFRAME(&_hx_pos_b829cf87eef33326_95_new)
HXLINE(  96)		this->e = e;
HXLINE(  97)		this->pmin = pmin;
HXLINE(  98)		this->pmax = pmax;
HXLINE(  99)		this->origin = origin;
HXLINE( 100)		this->line = line;
            	}

Dynamic Error_obj::__CreateEmpty() { return new Error_obj; }

void *Error_obj::_hx_vtable = 0;

Dynamic Error_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Error_obj > _hx_result = new Error_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool Error_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2248dc5d;
}

::String Error_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_b829cf87eef33326_103_toString)
HXDLIN( 103)		return ::hscript::Printer_obj::errorToString(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Error_obj,toString,return )


::hx::ObjectPtr< Error_obj > Error_obj::__new( ::hscript::ErrorDef e,int pmin,int pmax,::String origin,int line) {
	::hx::ObjectPtr< Error_obj > __this = new Error_obj();
	__this->__construct(e,pmin,pmax,origin,line);
	return __this;
}

::hx::ObjectPtr< Error_obj > Error_obj::__alloc(::hx::Ctx *_hx_ctx, ::hscript::ErrorDef e,int pmin,int pmax,::String origin,int line) {
	Error_obj *__this = (Error_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Error_obj), true, "hscript.Error"));
	*(void **)__this = Error_obj::_hx_vtable;
	__this->__construct(e,pmin,pmax,origin,line);
	return __this;
}

Error_obj::Error_obj()
{
}

void Error_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Error);
	HX_MARK_MEMBER_NAME(e,"e");
	HX_MARK_MEMBER_NAME(pmin,"pmin");
	HX_MARK_MEMBER_NAME(pmax,"pmax");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(line,"line");
	HX_MARK_END_CLASS();
}

void Error_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(e,"e");
	HX_VISIT_MEMBER_NAME(pmin,"pmin");
	HX_VISIT_MEMBER_NAME(pmax,"pmax");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(line,"line");
}

::hx::Val Error_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"e") ) { return ::hx::Val( e ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pmin") ) { return ::hx::Val( pmin ); }
		if (HX_FIELD_EQ(inName,"pmax") ) { return ::hx::Val( pmax ); }
		if (HX_FIELD_EQ(inName,"line") ) { return ::hx::Val( line ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return ::hx::Val( origin ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Error_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"e") ) { e=inValue.Cast<  ::hscript::ErrorDef >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pmin") ) { pmin=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pmax") ) { pmax=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"line") ) { line=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Error_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("e",65,00,00,00));
	outFields->push(HX_("pmin",22,f7,5a,4a));
	outFields->push(HX_("pmax",34,f0,5a,4a));
	outFields->push(HX_("origin",e6,19,01,4b));
	outFields->push(HX_("line",f4,17,b3,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Error_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hscript::ErrorDef */ ,(int)offsetof(Error_obj,e),HX_("e",65,00,00,00)},
	{::hx::fsInt,(int)offsetof(Error_obj,pmin),HX_("pmin",22,f7,5a,4a)},
	{::hx::fsInt,(int)offsetof(Error_obj,pmax),HX_("pmax",34,f0,5a,4a)},
	{::hx::fsString,(int)offsetof(Error_obj,origin),HX_("origin",e6,19,01,4b)},
	{::hx::fsInt,(int)offsetof(Error_obj,line),HX_("line",f4,17,b3,47)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Error_obj_sStaticStorageInfo = 0;
#endif

static ::String Error_obj_sMemberFields[] = {
	HX_("e",65,00,00,00),
	HX_("pmin",22,f7,5a,4a),
	HX_("pmax",34,f0,5a,4a),
	HX_("origin",e6,19,01,4b),
	HX_("line",f4,17,b3,47),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class Error_obj::__mClass;

void Error_obj::__register()
{
	Error_obj _hx_dummy;
	Error_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hscript.Error",6d,b9,ef,23);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Error_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Error_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Error_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Error_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hscript
