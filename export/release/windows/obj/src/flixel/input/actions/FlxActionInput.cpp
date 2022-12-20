#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputType
#include <flixel/input/actions/FlxInputType.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0007cf7ebf3f614f_10_new,"flixel.input.actions.FlxActionInput","new",0x1a32c13b,"flixel.input.actions.FlxActionInput.new","flixel/input/actions/FlxActionInput.hx",10,0x5d496a72)
HX_LOCAL_STACK_FRAME(_hx_pos_0007cf7ebf3f614f_48_update,"flixel.input.actions.FlxActionInput","update",0x9fde500e,"flixel.input.actions.FlxActionInput.update","flixel/input/actions/FlxActionInput.hx",48,0x5d496a72)
HX_LOCAL_STACK_FRAME(_hx_pos_0007cf7ebf3f614f_52_destroy,"flixel.input.actions.FlxActionInput","destroy",0xc95e2755,"flixel.input.actions.FlxActionInput.destroy","flixel/input/actions/FlxActionInput.hx",52,0x5d496a72)
HX_LOCAL_STACK_FRAME(_hx_pos_0007cf7ebf3f614f_60_check,"flixel.input.actions.FlxActionInput","check",0xc9d7b663,"flixel.input.actions.FlxActionInput.check","flixel/input/actions/FlxActionInput.hx",60,0x5d496a72)
HX_LOCAL_STACK_FRAME(_hx_pos_0007cf7ebf3f614f_71_compareState,"flixel.input.actions.FlxActionInput","compareState",0x2b32f2f1,"flixel.input.actions.FlxActionInput.compareState","flixel/input/actions/FlxActionInput.hx",71,0x5d496a72)
namespace flixel{
namespace input{
namespace actions{

void FlxActionInput_obj::__construct( ::flixel::input::actions::FlxInputType InputType, ::flixel::input::actions::FlxInputDevice Device,int InputID,int Trigger,::hx::Null< int >  __o_DeviceID){
            		int DeviceID = __o_DeviceID.Default(-2);
            	HX_STACKFRAME(&_hx_pos_0007cf7ebf3f614f_10_new)
HXLINE(  27)		this->destroyed = false;
HXLINE(  41)		this->type = InputType;
HXLINE(  42)		this->device = Device;
HXLINE(  43)		this->inputID = InputID;
HXLINE(  44)		this->trigger = Trigger;
HXLINE(  45)		this->deviceID = DeviceID;
            	}

Dynamic FlxActionInput_obj::__CreateEmpty() { return new FlxActionInput_obj; }

void *FlxActionInput_obj::_hx_vtable = 0;

Dynamic FlxActionInput_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxActionInput_obj > _hx_result = new FlxActionInput_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool FlxActionInput_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x20308a99;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_input_actions_FlxActionInput__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::input::actions::FlxActionInput_obj::destroy,
};

void *FlxActionInput_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_input_actions_FlxActionInput__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxActionInput_obj::update(){
            	HX_STACKFRAME(&_hx_pos_0007cf7ebf3f614f_48_update)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxActionInput_obj,update,(void))

void FlxActionInput_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_0007cf7ebf3f614f_52_destroy)
HXDLIN(  52)		this->destroyed = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxActionInput_obj,destroy,(void))

bool FlxActionInput_obj::check( ::flixel::input::actions::FlxAction action){
            	HX_STACKFRAME(&_hx_pos_0007cf7ebf3f614f_60_check)
HXDLIN(  60)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxActionInput_obj,check,return )

bool FlxActionInput_obj::compareState(int condition,int state){
            	HX_STACKFRAME(&_hx_pos_0007cf7ebf3f614f_71_compareState)
HXDLIN(  71)		switch((int)(condition)){
            			case (int)-1: {
HXLINE(  76)				return (state == -1);
            			}
            			break;
            			case (int)0: {
HXLINE(  74)				if ((state != 0)) {
HXLINE(  74)					return (state == -1);
            				}
            				else {
HXLINE(  74)					return true;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE(  73)				if ((state != 1)) {
HXLINE(  73)					return (state == 2);
            				}
            				else {
HXLINE(  73)					return true;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE(  75)				return (state == 2);
            			}
            			break;
            			default:{
HXLINE(  77)				return false;
            			}
            		}
HXLINE(  71)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxActionInput_obj,compareState,return )


::hx::ObjectPtr< FlxActionInput_obj > FlxActionInput_obj::__new( ::flixel::input::actions::FlxInputType InputType, ::flixel::input::actions::FlxInputDevice Device,int InputID,int Trigger,::hx::Null< int >  __o_DeviceID) {
	::hx::ObjectPtr< FlxActionInput_obj > __this = new FlxActionInput_obj();
	__this->__construct(InputType,Device,InputID,Trigger,__o_DeviceID);
	return __this;
}

::hx::ObjectPtr< FlxActionInput_obj > FlxActionInput_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::input::actions::FlxInputType InputType, ::flixel::input::actions::FlxInputDevice Device,int InputID,int Trigger,::hx::Null< int >  __o_DeviceID) {
	FlxActionInput_obj *__this = (FlxActionInput_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxActionInput_obj), true, "flixel.input.actions.FlxActionInput"));
	*(void **)__this = FlxActionInput_obj::_hx_vtable;
	__this->__construct(InputType,Device,InputID,Trigger,__o_DeviceID);
	return __this;
}

FlxActionInput_obj::FlxActionInput_obj()
{
}

void FlxActionInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxActionInput);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(device,"device");
	HX_MARK_MEMBER_NAME(deviceID,"deviceID");
	HX_MARK_MEMBER_NAME(destroyed,"destroyed");
	HX_MARK_MEMBER_NAME(inputID,"inputID");
	HX_MARK_MEMBER_NAME(trigger,"trigger");
	HX_MARK_END_CLASS();
}

void FlxActionInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(device,"device");
	HX_VISIT_MEMBER_NAME(deviceID,"deviceID");
	HX_VISIT_MEMBER_NAME(destroyed,"destroyed");
	HX_VISIT_MEMBER_NAME(inputID,"inputID");
	HX_VISIT_MEMBER_NAME(trigger,"trigger");
}

::hx::Val FlxActionInput_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return ::hx::Val( check_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return ::hx::Val( device ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inputID") ) { return ::hx::Val( inputID ); }
		if (HX_FIELD_EQ(inName,"trigger") ) { return ::hx::Val( trigger ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deviceID") ) { return ::hx::Val( deviceID ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { return ::hx::Val( destroyed ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"compareState") ) { return ::hx::Val( compareState_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxActionInput_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::flixel::input::actions::FlxInputType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast<  ::flixel::input::actions::FlxInputDevice >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inputID") ) { inputID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"trigger") ) { trigger=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deviceID") ) { deviceID=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { destroyed=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxActionInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("device",96,dc,77,71));
	outFields->push(HX_("deviceID",f1,ed,98,a4));
	outFields->push(HX_("destroyed",d9,37,27,f4));
	outFields->push(HX_("inputID",65,9a,1e,d4));
	outFields->push(HX_("trigger",38,55,df,25));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxActionInput_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::actions::FlxInputType */ ,(int)offsetof(FlxActionInput_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxInputDevice */ ,(int)offsetof(FlxActionInput_obj,device),HX_("device",96,dc,77,71)},
	{::hx::fsInt,(int)offsetof(FlxActionInput_obj,deviceID),HX_("deviceID",f1,ed,98,a4)},
	{::hx::fsBool,(int)offsetof(FlxActionInput_obj,destroyed),HX_("destroyed",d9,37,27,f4)},
	{::hx::fsInt,(int)offsetof(FlxActionInput_obj,inputID),HX_("inputID",65,9a,1e,d4)},
	{::hx::fsInt,(int)offsetof(FlxActionInput_obj,trigger),HX_("trigger",38,55,df,25)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxActionInput_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxActionInput_obj_sMemberFields[] = {
	HX_("type",ba,f2,08,4d),
	HX_("device",96,dc,77,71),
	HX_("deviceID",f1,ed,98,a4),
	HX_("destroyed",d9,37,27,f4),
	HX_("inputID",65,9a,1e,d4),
	HX_("trigger",38,55,df,25),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	HX_("check",c8,98,b6,45),
	HX_("compareState",2c,57,bb,20),
	::String(null()) };

::hx::Class FlxActionInput_obj::__mClass;

void FlxActionInput_obj::__register()
{
	FlxActionInput_obj _hx_dummy;
	FlxActionInput_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxActionInput",c9,07,5d,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxActionInput_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxActionInput_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxActionInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxActionInput_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
