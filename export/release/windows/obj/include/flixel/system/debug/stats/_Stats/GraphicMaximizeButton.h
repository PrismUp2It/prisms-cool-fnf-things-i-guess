#ifndef INCLUDED_flixel_system_debug_stats__Stats_GraphicMaximizeButton
#define INCLUDED_flixel_system_debug_stats__Stats_GraphicMaximizeButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
HX_DECLARE_CLASS5(flixel,_hx_system,debug,stats,_Stats,GraphicMaximizeButton)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace stats{
namespace _Stats{


class HXCPP_CLASS_ATTRIBUTES GraphicMaximizeButton_obj : public  ::openfl::display::BitmapData_obj
{
	public:
		typedef  ::openfl::display::BitmapData_obj super;
		typedef GraphicMaximizeButton_obj OBJ_;
		GraphicMaximizeButton_obj();

	public:
		enum { _hx_ClassId = 0x323b528b };

		void __construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.stats._Stats.GraphicMaximizeButton")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug.stats._Stats.GraphicMaximizeButton"); }
		static ::hx::ObjectPtr< GraphicMaximizeButton_obj > __new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static ::hx::ObjectPtr< GraphicMaximizeButton_obj > __alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GraphicMaximizeButton_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GraphicMaximizeButton",86,10,5c,9e); }

		static void __boot();
		static ::String resourceName;
};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace stats
} // end namespace _Stats

#endif /* INCLUDED_flixel_system_debug_stats__Stats_GraphicMaximizeButton */ 
