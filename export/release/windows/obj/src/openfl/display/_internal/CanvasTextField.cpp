#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_CanvasRenderer
#include <openfl/display/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CanvasDisplayObject
#include <openfl/display/_internal/CanvasDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CanvasTextField
#include <openfl/display/_internal/CanvasTextField.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3208549e91c46d80_31_render,"openfl.display._internal.CanvasTextField","render",0x61465dcb,"openfl.display._internal.CanvasTextField.render","openfl/display/_internal/CanvasTextField.hx",31,0x76b44b48)
HX_LOCAL_STACK_FRAME(_hx_pos_3208549e91c46d80_382_renderDrawable,"openfl.display._internal.CanvasTextField","renderDrawable",0x53844889,"openfl.display._internal.CanvasTextField.renderDrawable","openfl/display/_internal/CanvasTextField.hx",382,0x76b44b48)
HX_LOCAL_STACK_FRAME(_hx_pos_3208549e91c46d80_443_renderDrawableMask,"openfl.display._internal.CanvasTextField","renderDrawableMask",0x545d2e15,"openfl.display._internal.CanvasTextField.renderDrawableMask","openfl/display/_internal/CanvasTextField.hx",443,0x76b44b48)
HX_LOCAL_STACK_FRAME(_hx_pos_3208549e91c46d80_23_boot,"openfl.display._internal.CanvasTextField","boot",0x30db7f67,"openfl.display._internal.CanvasTextField.boot","openfl/display/_internal/CanvasTextField.hx",23,0x76b44b48)
namespace openfl{
namespace display{
namespace _internal{

void CanvasTextField_obj::__construct() { }

Dynamic CanvasTextField_obj::__CreateEmpty() { return new CanvasTextField_obj; }

void *CanvasTextField_obj::_hx_vtable = 0;

Dynamic CanvasTextField_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CanvasTextField_obj > _hx_result = new CanvasTextField_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CanvasTextField_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x100b3de7;
}

void CanvasTextField_obj::render( ::openfl::text::TextField textField, ::openfl::display::CanvasRenderer renderer, ::openfl::geom::Matrix transform){
            	HX_STACKFRAME(&_hx_pos_3208549e91c46d80_31_render)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CanvasTextField_obj,render,(void))

void CanvasTextField_obj::renderDrawable( ::openfl::text::TextField textField, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_3208549e91c46d80_382_renderDrawable)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasTextField_obj,renderDrawable,(void))

void CanvasTextField_obj::renderDrawableMask( ::openfl::text::TextField textField, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_3208549e91c46d80_443_renderDrawableMask)
HXDLIN( 443)		::openfl::display::_internal::CanvasDisplayObject_obj::renderDrawableMask(textField,renderer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasTextField_obj,renderDrawableMask,(void))


CanvasTextField_obj::CanvasTextField_obj()
{
}

bool CanvasTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CanvasTextField_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CanvasTextField_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CanvasTextField_obj::__mClass;

static ::String CanvasTextField_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void CanvasTextField_obj::__register()
{
	CanvasTextField_obj _hx_dummy;
	CanvasTextField_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CanvasTextField",59,31,20,4b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CanvasTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CanvasTextField_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CanvasTextField_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CanvasTextField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CanvasTextField_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CanvasTextField_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3208549e91c46d80_23_boot)
HXDLIN(  23)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
