#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_LineBitmapStyleView_Impl_
#include <openfl/display/_internal/_DrawCommandReader/LineBitmapStyleView_Impl_.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_255d3158b6425107_782__new,"openfl.display._internal._DrawCommandReader.LineBitmapStyleView_Impl_","_new",0x96f84803,"openfl.display._internal._DrawCommandReader.LineBitmapStyleView_Impl_._new","openfl/display/_internal/DrawCommandReader.hx",782,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_255d3158b6425107_791_get_bitmap,"openfl.display._internal._DrawCommandReader.LineBitmapStyleView_Impl_","get_bitmap",0xa3f357da,"openfl.display._internal._DrawCommandReader.LineBitmapStyleView_Impl_.get_bitmap","openfl/display/_internal/DrawCommandReader.hx",791,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_255d3158b6425107_798_get_matrix,"openfl.display._internal._DrawCommandReader.LineBitmapStyleView_Impl_","get_matrix",0x6eaf7e2c,"openfl.display._internal._DrawCommandReader.LineBitmapStyleView_Impl_.get_matrix","openfl/display/_internal/DrawCommandReader.hx",798,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_255d3158b6425107_805_get_repeat,"openfl.display._internal._DrawCommandReader.LineBitmapStyleView_Impl_","get_repeat",0xb963df46,"openfl.display._internal._DrawCommandReader.LineBitmapStyleView_Impl_.get_repeat","openfl/display/_internal/DrawCommandReader.hx",805,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_255d3158b6425107_812_get_smooth,"openfl.display._internal._DrawCommandReader.LineBitmapStyleView_Impl_","get_smooth",0xba525019,"openfl.display._internal._DrawCommandReader.LineBitmapStyleView_Impl_.get_smooth","openfl/display/_internal/DrawCommandReader.hx",812,0x29f77eb3)
namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{

void LineBitmapStyleView_Impl__obj::__construct() { }

Dynamic LineBitmapStyleView_Impl__obj::__CreateEmpty() { return new LineBitmapStyleView_Impl__obj; }

void *LineBitmapStyleView_Impl__obj::_hx_vtable = 0;

Dynamic LineBitmapStyleView_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LineBitmapStyleView_Impl__obj > _hx_result = new LineBitmapStyleView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LineBitmapStyleView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x60f45492;
}

 ::openfl::display::_internal::DrawCommandReader LineBitmapStyleView_Impl__obj::_new( ::openfl::display::_internal::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_255d3158b6425107_782__new)
HXDLIN( 782)		 ::openfl::display::_internal::DrawCommandReader this1 = d;
HXDLIN( 782)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineBitmapStyleView_Impl__obj,_new,return )

 ::openfl::display::BitmapData LineBitmapStyleView_Impl__obj::get_bitmap( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_255d3158b6425107_791_get_bitmap)
HXDLIN( 791)		return ( ( ::openfl::display::BitmapData)(this1->buffer->o->__get(this1->oPos)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineBitmapStyleView_Impl__obj,get_bitmap,return )

 ::openfl::geom::Matrix LineBitmapStyleView_Impl__obj::get_matrix( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_255d3158b6425107_798_get_matrix)
HXDLIN( 798)		return ( ( ::openfl::geom::Matrix)(this1->buffer->o->__get((this1->oPos + 1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineBitmapStyleView_Impl__obj,get_matrix,return )

bool LineBitmapStyleView_Impl__obj::get_repeat( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_255d3158b6425107_805_get_repeat)
HXDLIN( 805)		return this1->buffer->b->__get(this1->bPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineBitmapStyleView_Impl__obj,get_repeat,return )

bool LineBitmapStyleView_Impl__obj::get_smooth( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_255d3158b6425107_812_get_smooth)
HXDLIN( 812)		return this1->buffer->b->__get((this1->bPos + 1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineBitmapStyleView_Impl__obj,get_smooth,return )


LineBitmapStyleView_Impl__obj::LineBitmapStyleView_Impl__obj()
{
}

bool LineBitmapStyleView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bitmap") ) { outValue = get_bitmap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_matrix") ) { outValue = get_matrix_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_repeat") ) { outValue = get_repeat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_smooth") ) { outValue = get_smooth_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LineBitmapStyleView_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *LineBitmapStyleView_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class LineBitmapStyleView_Impl__obj::__mClass;

static ::String LineBitmapStyleView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_bitmap",b8,7f,93,e1),
	HX_("get_matrix",0a,a6,4f,ac),
	HX_("get_repeat",24,07,04,f7),
	HX_("get_smooth",f7,77,f2,f7),
	::String(null())
};

void LineBitmapStyleView_Impl__obj::__register()
{
	LineBitmapStyleView_Impl__obj _hx_dummy;
	LineBitmapStyleView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal._DrawCommandReader.LineBitmapStyleView_Impl_",0c,31,0c,82);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LineBitmapStyleView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LineBitmapStyleView_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< LineBitmapStyleView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LineBitmapStyleView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LineBitmapStyleView_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader
