#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_IMG_texture_compression_pvrtc
#include <lime/graphics/opengl/ext/IMG_texture_compression_pvrtc.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7f8e4f7c75ceaac2_4_new,"lime.graphics.opengl.ext.IMG_texture_compression_pvrtc","new",0x8bbb9a12,"lime.graphics.opengl.ext.IMG_texture_compression_pvrtc.new","lime/graphics/opengl/ext/IMG_texture_compression_pvrtc.hx",4,0xfe8bfe40)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void IMG_texture_compression_pvrtc_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7f8e4f7c75ceaac2_4_new)
HXLINE(   9)		this->COMPRESSED_RGBA_PVRTC_2BPPV1_IMG = 35843;
HXLINE(   8)		this->COMPRESSED_RGBA_PVRTC_4BPPV1_IMG = 35842;
HXLINE(   7)		this->COMPRESSED_RGB_PVRTC_2BPPV1_IMG = 35841;
HXLINE(   6)		this->COMPRESSED_RGB_PVRTC_4BPPV1_IMG = 35840;
            	}

Dynamic IMG_texture_compression_pvrtc_obj::__CreateEmpty() { return new IMG_texture_compression_pvrtc_obj; }

void *IMG_texture_compression_pvrtc_obj::_hx_vtable = 0;

Dynamic IMG_texture_compression_pvrtc_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IMG_texture_compression_pvrtc_obj > _hx_result = new IMG_texture_compression_pvrtc_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool IMG_texture_compression_pvrtc_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5415bafc;
}


IMG_texture_compression_pvrtc_obj::IMG_texture_compression_pvrtc_obj()
{
}

::hx::Val IMG_texture_compression_pvrtc_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 31:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGB_PVRTC_4BPPV1_IMG") ) { return ::hx::Val( COMPRESSED_RGB_PVRTC_4BPPV1_IMG ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGB_PVRTC_2BPPV1_IMG") ) { return ::hx::Val( COMPRESSED_RGB_PVRTC_2BPPV1_IMG ); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_PVRTC_4BPPV1_IMG") ) { return ::hx::Val( COMPRESSED_RGBA_PVRTC_4BPPV1_IMG ); }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_PVRTC_2BPPV1_IMG") ) { return ::hx::Val( COMPRESSED_RGBA_PVRTC_2BPPV1_IMG ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val IMG_texture_compression_pvrtc_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 31:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGB_PVRTC_4BPPV1_IMG") ) { COMPRESSED_RGB_PVRTC_4BPPV1_IMG=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGB_PVRTC_2BPPV1_IMG") ) { COMPRESSED_RGB_PVRTC_2BPPV1_IMG=inValue.Cast< int >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_PVRTC_4BPPV1_IMG") ) { COMPRESSED_RGBA_PVRTC_4BPPV1_IMG=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_PVRTC_2BPPV1_IMG") ) { COMPRESSED_RGBA_PVRTC_2BPPV1_IMG=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IMG_texture_compression_pvrtc_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("COMPRESSED_RGB_PVRTC_4BPPV1_IMG",a1,18,41,ce));
	outFields->push(HX_("COMPRESSED_RGB_PVRTC_2BPPV1_IMG",e3,28,ac,4d));
	outFields->push(HX_("COMPRESSED_RGBA_PVRTC_4BPPV1_IMG",be,45,75,bf));
	outFields->push(HX_("COMPRESSED_RGBA_PVRTC_2BPPV1_IMG",00,56,e0,3e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo IMG_texture_compression_pvrtc_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(IMG_texture_compression_pvrtc_obj,COMPRESSED_RGB_PVRTC_4BPPV1_IMG),HX_("COMPRESSED_RGB_PVRTC_4BPPV1_IMG",a1,18,41,ce)},
	{::hx::fsInt,(int)offsetof(IMG_texture_compression_pvrtc_obj,COMPRESSED_RGB_PVRTC_2BPPV1_IMG),HX_("COMPRESSED_RGB_PVRTC_2BPPV1_IMG",e3,28,ac,4d)},
	{::hx::fsInt,(int)offsetof(IMG_texture_compression_pvrtc_obj,COMPRESSED_RGBA_PVRTC_4BPPV1_IMG),HX_("COMPRESSED_RGBA_PVRTC_4BPPV1_IMG",be,45,75,bf)},
	{::hx::fsInt,(int)offsetof(IMG_texture_compression_pvrtc_obj,COMPRESSED_RGBA_PVRTC_2BPPV1_IMG),HX_("COMPRESSED_RGBA_PVRTC_2BPPV1_IMG",00,56,e0,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *IMG_texture_compression_pvrtc_obj_sStaticStorageInfo = 0;
#endif

static ::String IMG_texture_compression_pvrtc_obj_sMemberFields[] = {
	HX_("COMPRESSED_RGB_PVRTC_4BPPV1_IMG",a1,18,41,ce),
	HX_("COMPRESSED_RGB_PVRTC_2BPPV1_IMG",e3,28,ac,4d),
	HX_("COMPRESSED_RGBA_PVRTC_4BPPV1_IMG",be,45,75,bf),
	HX_("COMPRESSED_RGBA_PVRTC_2BPPV1_IMG",00,56,e0,3e),
	::String(null()) };

::hx::Class IMG_texture_compression_pvrtc_obj::__mClass;

void IMG_texture_compression_pvrtc_obj::__register()
{
	IMG_texture_compression_pvrtc_obj _hx_dummy;
	IMG_texture_compression_pvrtc_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.IMG_texture_compression_pvrtc",20,e9,04,d1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IMG_texture_compression_pvrtc_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IMG_texture_compression_pvrtc_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IMG_texture_compression_pvrtc_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IMG_texture_compression_pvrtc_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
