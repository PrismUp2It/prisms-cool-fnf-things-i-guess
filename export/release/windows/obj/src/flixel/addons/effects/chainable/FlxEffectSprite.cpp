#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxEffectSprite
#include <flixel/addons/effects/chainable/FlxEffectSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_IFlxEffect
#include <flixel/addons/effects/chainable/IFlxEffect.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_83057b428e6d8eeb_20_new,"flixel.addons.effects.chainable.FlxEffectSprite","new",0xb885f1f2,"flixel.addons.effects.chainable.FlxEffectSprite.new","flixel/addons/effects/chainable/FlxEffectSprite.hx",20,0xbae4f7a0)
HX_LOCAL_STACK_FRAME(_hx_pos_83057b428e6d8eeb_68_destroy,"flixel.addons.effects.chainable.FlxEffectSprite","destroy",0x275d7f8c,"flixel.addons.effects.chainable.FlxEffectSprite.destroy","flixel/addons/effects/chainable/FlxEffectSprite.hx",68,0xbae4f7a0)
HX_LOCAL_STACK_FRAME(_hx_pos_83057b428e6d8eeb_85_getScreenPosition,"flixel.addons.effects.chainable.FlxEffectSprite","getScreenPosition",0x7753907d,"flixel.addons.effects.chainable.FlxEffectSprite.getScreenPosition","flixel/addons/effects/chainable/FlxEffectSprite.hx",85,0xbae4f7a0)
HX_LOCAL_STACK_FRAME(_hx_pos_83057b428e6d8eeb_89_draw,"flixel.addons.effects.chainable.FlxEffectSprite","draw",0xb61b6a32,"flixel.addons.effects.chainable.FlxEffectSprite.draw","flixel/addons/effects/chainable/FlxEffectSprite.hx",89,0xbae4f7a0)
HX_LOCAL_STACK_FRAME(_hx_pos_83057b428e6d8eeb_136_update,"flixel.addons.effects.chainable.FlxEffectSprite","update",0xaa9f2bb7,"flixel.addons.effects.chainable.FlxEffectSprite.update","flixel/addons/effects/chainable/FlxEffectSprite.hx",136,0xbae4f7a0)
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{

void FlxEffectSprite_obj::__construct( ::flixel::FlxSprite Target,::Array< ::Dynamic> Effects){
            	HX_STACKFRAME(&_hx_pos_83057b428e6d8eeb_20_new)
HXLINE(  35)		this->updateTargetAnimation = true;
HXLINE(  25)		this->effectsEnabled = true;
HXLINE(  55)		super::__construct(null(),null(),null());
HXLINE(  57)		this->target = Target;
HXLINE(  58)		::Array< ::Dynamic> _hx_tmp;
HXDLIN(  58)		if (::hx::IsNotNull( Effects )) {
HXLINE(  58)			_hx_tmp = Effects;
            		}
            		else {
HXLINE(  58)			_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXDLIN(  58)		this->effects = _hx_tmp;
HXLINE(  60)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  60)		point->_inPool = false;
HXDLIN(  60)		this->_effectOffset = point;
            	}

Dynamic FlxEffectSprite_obj::__CreateEmpty() { return new FlxEffectSprite_obj; }

void *FlxEffectSprite_obj::_hx_vtable = 0;

Dynamic FlxEffectSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxEffectSprite_obj > _hx_result = new FlxEffectSprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxEffectSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x156bf340) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x156bf340;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxEffectSprite_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_83057b428e6d8eeb_68_destroy)
HXLINE(  69)		this->effects = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->effects);
HXLINE(  70)		this->_effectOffset = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_effectOffset)) );
HXLINE(  71)		this->target = null();
HXLINE(  73)		this->super::destroy();
            	}


 ::flixel::math::FlxPoint FlxEffectSprite_obj::getScreenPosition( ::flixel::math::FlxPoint point, ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_83057b428e6d8eeb_85_getScreenPosition)
HXDLIN(  85)		return this->super::getScreenPosition(point,Camera)->addPoint(this->_effectOffset);
            	}


void FlxEffectSprite_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_83057b428e6d8eeb_89_draw)
HXLINE(  90)		if (this->target->dirty) {
HXLINE(  92)			this->target->drawFrame(null());
            		}
HXLINE(  95)		if (::hx::IsNull( this->target->framePixels )) {
HXLINE(  96)			this->super::draw();
HXDLIN(  96)			return;
            		}
HXLINE(  98)		bool _hx_tmp;
HXDLIN(  98)		bool _hx_tmp1;
HXDLIN(  98)		if (::hx::IsNotNull( this->get_pixels() )) {
HXLINE(  98)			_hx_tmp1 = (this->get_pixels()->width == this->target->framePixels->width);
            		}
            		else {
HXLINE(  98)			_hx_tmp1 = false;
            		}
HXDLIN(  98)		if (_hx_tmp1) {
HXLINE(  98)			_hx_tmp = (this->get_pixels()->height == this->target->framePixels->height);
            		}
            		else {
HXLINE(  98)			_hx_tmp = false;
            		}
HXDLIN(  98)		if (_hx_tmp) {
HXLINE( 100)			 ::openfl::display::BitmapData _hx_tmp = this->get_pixels();
HXDLIN( 100)			_hx_tmp->fillRect(this->get_pixels()->rect,0);
HXLINE( 101)			this->get_pixels()->draw(this->target->framePixels,null(),null(),null(),null(),null());
            		}
            		else {
HXLINE( 105)			::flixel::util::FlxDestroyUtil_obj::dispose(this->get_pixels());
HXLINE( 106)			this->set_pixels(this->target->framePixels->clone());
            		}
HXLINE( 109)		this->_effectOffset->set(0,0);
HXLINE( 111)		if (this->effectsEnabled) {
HXLINE( 113)			this->get_pixels()->lock();
HXLINE( 114)			{
HXLINE( 114)				int _g = 0;
HXDLIN( 114)				::Array< ::Dynamic> _g1 = this->effects;
HXDLIN( 114)				while((_g < _g1->length)){
HXLINE( 114)					::Dynamic effect = _g1->__get(_g);
HXDLIN( 114)					_g = (_g + 1);
HXLINE( 116)					if (( (bool)(effect->__Field(HX_("active",c6,41,46,16),::hx::paccDynamic)) )) {
HXLINE( 118)						this->set_pixels(::flixel::addons::effects::chainable::IFlxEffect_obj::apply(effect,this->get_pixels()));
HXLINE( 119)						if (::hx::IsNotNull( effect->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic) )) {
HXLINE( 121)							this->_effectOffset->addPoint(( ( ::flixel::math::FlxPoint)(effect->__Field(HX_("offset",93,97,3f,60),::hx::paccDynamic)) ));
            						}
            					}
            				}
            			}
HXLINE( 125)			this->get_pixels()->unlock(null());
HXLINE( 126)			this->_flashRect = this->get_pixels()->rect;
            		}
HXLINE( 129)		this->super::draw();
            	}


void FlxEffectSprite_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_83057b428e6d8eeb_136_update)
HXLINE( 137)		bool _hx_tmp;
HXDLIN( 137)		if (this->updateTargetAnimation) {
HXLINE( 137)			_hx_tmp = (this->target->animation->_sprite->numFrames > 1);
            		}
            		else {
HXLINE( 137)			_hx_tmp = false;
            		}
HXDLIN( 137)		if (_hx_tmp) {
HXLINE( 139)			this->target->updateAnimation(elapsed);
            		}
HXLINE( 142)		if (this->effectsEnabled) {
HXLINE( 144)			int _g = 0;
HXDLIN( 144)			::Array< ::Dynamic> _g1 = this->effects;
HXDLIN( 144)			while((_g < _g1->length)){
HXLINE( 144)				::Dynamic effect = _g1->__get(_g);
HXDLIN( 144)				_g = (_g + 1);
HXLINE( 146)				if (( (bool)(effect->__Field(HX_("active",c6,41,46,16),::hx::paccDynamic)) )) {
HXLINE( 148)					::flixel::addons::effects::chainable::IFlxEffect_obj::update(effect,elapsed);
            				}
            			}
            		}
HXLINE( 153)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< FlxEffectSprite_obj > FlxEffectSprite_obj::__new( ::flixel::FlxSprite Target,::Array< ::Dynamic> Effects) {
	::hx::ObjectPtr< FlxEffectSprite_obj > __this = new FlxEffectSprite_obj();
	__this->__construct(Target,Effects);
	return __this;
}

::hx::ObjectPtr< FlxEffectSprite_obj > FlxEffectSprite_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxSprite Target,::Array< ::Dynamic> Effects) {
	FlxEffectSprite_obj *__this = (FlxEffectSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxEffectSprite_obj), true, "flixel.addons.effects.chainable.FlxEffectSprite"));
	*(void **)__this = FlxEffectSprite_obj::_hx_vtable;
	__this->__construct(Target,Effects);
	return __this;
}

FlxEffectSprite_obj::FlxEffectSprite_obj()
{
}

void FlxEffectSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxEffectSprite);
	HX_MARK_MEMBER_NAME(effectsEnabled,"effectsEnabled");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(updateTargetAnimation,"updateTargetAnimation");
	HX_MARK_MEMBER_NAME(effects,"effects");
	HX_MARK_MEMBER_NAME(_effectOffset,"_effectOffset");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxEffectSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(effectsEnabled,"effectsEnabled");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(updateTargetAnimation,"updateTargetAnimation");
	HX_VISIT_MEMBER_NAME(effects,"effects");
	HX_VISIT_MEMBER_NAME(_effectOffset,"_effectOffset");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxEffectSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"effects") ) { return ::hx::Val( effects ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_effectOffset") ) { return ::hx::Val( _effectOffset ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"effectsEnabled") ) { return ::hx::Val( effectsEnabled ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return ::hx::Val( getScreenPosition_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateTargetAnimation") ) { return ::hx::Val( updateTargetAnimation ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxEffectSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"effects") ) { effects=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_effectOffset") ) { _effectOffset=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"effectsEnabled") ) { effectsEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateTargetAnimation") ) { updateTargetAnimation=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxEffectSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("effectsEnabled",df,43,75,92));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("updateTargetAnimation",6a,1d,53,6d));
	outFields->push(HX_("effects",c2,e4,4b,2e));
	outFields->push(HX_("_effectOffset",e3,bb,8d,8d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxEffectSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxEffectSprite_obj,effectsEnabled),HX_("effectsEnabled",df,43,75,92)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxEffectSprite_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsBool,(int)offsetof(FlxEffectSprite_obj,updateTargetAnimation),HX_("updateTargetAnimation",6a,1d,53,6d)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxEffectSprite_obj,effects),HX_("effects",c2,e4,4b,2e)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxEffectSprite_obj,_effectOffset),HX_("_effectOffset",e3,bb,8d,8d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxEffectSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxEffectSprite_obj_sMemberFields[] = {
	HX_("effectsEnabled",df,43,75,92),
	HX_("target",51,f3,ec,86),
	HX_("updateTargetAnimation",6a,1d,53,6d),
	HX_("effects",c2,e4,4b,2e),
	HX_("_effectOffset",e3,bb,8d,8d),
	HX_("destroy",fa,2c,86,24),
	HX_("getScreenPosition",6b,93,88,24),
	HX_("draw",04,2c,70,42),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class FlxEffectSprite_obj::__mClass;

void FlxEffectSprite_obj::__register()
{
	FlxEffectSprite_obj _hx_dummy;
	FlxEffectSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.effects.chainable.FlxEffectSprite",00,d1,0d,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxEffectSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxEffectSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxEffectSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxEffectSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable
