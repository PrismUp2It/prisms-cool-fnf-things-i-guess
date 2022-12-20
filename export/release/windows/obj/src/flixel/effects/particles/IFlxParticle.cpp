#include <hxcpp.h>

#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_IFlxParticle
#include <flixel/effects/particles/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif

namespace flixel{
namespace effects{
namespace particles{


static ::String IFlxParticle_obj_sMemberFields[] = {
	HX_("lifespan",c6,19,ce,6b),
	HX_("age",bf,f4,49,00),
	HX_("percent",c5,aa,da,78),
	HX_("autoUpdateHitbox",90,aa,3d,24),
	HX_("velocityRange",60,4a,a1,8e),
	HX_("angularVelocityRange",1e,c6,ce,3a),
	HX_("scaleRange",d3,52,53,05),
	HX_("alphaRange",7f,f9,c4,04),
	HX_("colorRange",5a,bd,8b,08),
	HX_("dragRange",29,15,75,46),
	HX_("accelerationRange",5d,2d,23,34),
	HX_("elasticityRange",84,bb,e8,db),
	HX_("onEmit",12,a7,9f,e5),
	::String(null()) };

::hx::Class IFlxParticle_obj::__mClass;

void IFlxParticle_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.effects.particles.IFlxParticle",ae,0c,67,35);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IFlxParticle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x1d5bda56 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace effects
} // end namespace particles
