#ifndef INCLUDED_openfl_text__AntiAliasType_AntiAliasType_Impl_
#define INCLUDED_openfl_text__AntiAliasType_AntiAliasType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,text,_AntiAliasType,AntiAliasType_Impl_)

namespace openfl{
namespace text{
namespace _AntiAliasType{


class HXCPP_CLASS_ATTRIBUTES AntiAliasType_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AntiAliasType_Impl__obj OBJ_;
		AntiAliasType_Impl__obj();

	public:
		enum { _hx_ClassId = 0x621ee39a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.text._AntiAliasType.AntiAliasType_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.text._AntiAliasType.AntiAliasType_Impl_"); }

		inline static ::hx::ObjectPtr< AntiAliasType_Impl__obj > __new() {
			::hx::ObjectPtr< AntiAliasType_Impl__obj > __this = new AntiAliasType_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AntiAliasType_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			AntiAliasType_Impl__obj *__this = (AntiAliasType_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AntiAliasType_Impl__obj), false, "openfl.text._AntiAliasType.AntiAliasType_Impl_"));
			*(void **)__this = AntiAliasType_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AntiAliasType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AntiAliasType_Impl_",e8,b6,04,1e); }

		static void __boot();
		static  ::Dynamic ADVANCED;
		static  ::Dynamic NORMAL;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace text
} // end namespace _AntiAliasType

#endif /* INCLUDED_openfl_text__AntiAliasType_AntiAliasType_Impl_ */ 
