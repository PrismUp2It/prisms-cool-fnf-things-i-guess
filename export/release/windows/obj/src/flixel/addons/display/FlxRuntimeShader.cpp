#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxRuntimeShader
#include <flixel/addons/display/FlxRuntimeShader.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Int
#include <openfl/display/ShaderParameter_Int.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_880c0549bfe0a230_25_new,"flixel.addons.display.FlxRuntimeShader","new",0x1cb50fd2,"flixel.addons.display.FlxRuntimeShader.new","flixel/addons/display/FlxRuntimeShader.hx",25,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_239_processFragmentSource,"flixel.addons.display.FlxRuntimeShader","processFragmentSource",0xecaf3f8c,"flixel.addons.display.FlxRuntimeShader.processFragmentSource","flixel/addons/display/FlxRuntimeShader.hx",239,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_249_processVertexSource,"flixel.addons.display.FlxRuntimeShader","processVertexSource",0x6027bfe0,"flixel.addons.display.FlxRuntimeShader.processVertexSource","flixel/addons/display/FlxRuntimeShader.hx",249,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_256_buildPrecisionHeaders,"flixel.addons.display.FlxRuntimeShader","buildPrecisionHeaders",0x5f695fe8,"flixel.addons.display.FlxRuntimeShader.buildPrecisionHeaders","flixel/addons/display/FlxRuntimeShader.hx",256,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_272___initGL,"flixel.addons.display.FlxRuntimeShader","__initGL",0xb3e54ba3,"flixel.addons.display.FlxRuntimeShader.__initGL","flixel/addons/display/FlxRuntimeShader.hx",272,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_354_thisHasField,"flixel.addons.display.FlxRuntimeShader","thisHasField",0xf0dc71cc,"flixel.addons.display.FlxRuntimeShader.thisHasField","flixel/addons/display/FlxRuntimeShader.hx",354,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_369___processGLData,"flixel.addons.display.FlxRuntimeShader","__processGLData",0x94f3b1f0,"flixel.addons.display.FlxRuntimeShader.__processGLData","flixel/addons/display/FlxRuntimeShader.hx",369,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_527_setFloat,"flixel.addons.display.FlxRuntimeShader","setFloat",0x8534b1e8,"flixel.addons.display.FlxRuntimeShader.setFloat","flixel/addons/display/FlxRuntimeShader.hx",527,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_544_setFloatArray,"flixel.addons.display.FlxRuntimeShader","setFloatArray",0xc4b24291,"flixel.addons.display.FlxRuntimeShader.setFloatArray","flixel/addons/display/FlxRuntimeShader.hx",544,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_560_setInt,"flixel.addons.display.FlxRuntimeShader","setInt",0x75720e3b,"flixel.addons.display.FlxRuntimeShader.setInt","flixel/addons/display/FlxRuntimeShader.hx",560,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_576_setIntArray,"flixel.addons.display.FlxRuntimeShader","setIntArray",0xdc26595e,"flixel.addons.display.FlxRuntimeShader.setIntArray","flixel/addons/display/FlxRuntimeShader.hx",576,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_592_setBool,"flixel.addons.display.FlxRuntimeShader","setBool",0x49baa55e,"flixel.addons.display.FlxRuntimeShader.setBool","flixel/addons/display/FlxRuntimeShader.hx",592,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_608_setBoolArray,"flixel.addons.display.FlxRuntimeShader","setBoolArray",0x64d8035b,"flixel.addons.display.FlxRuntimeShader.setBoolArray","flixel/addons/display/FlxRuntimeShader.hx",608,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_624_setSampler2D,"flixel.addons.display.FlxRuntimeShader","setSampler2D",0x46034526,"flixel.addons.display.FlxRuntimeShader.setSampler2D","flixel/addons/display/FlxRuntimeShader.hx",624,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_639_getFloat,"flixel.addons.display.FlxRuntimeShader","getFloat",0xd6d75874,"flixel.addons.display.FlxRuntimeShader.getFloat","flixel/addons/display/FlxRuntimeShader.hx",639,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_654_getFloatArray,"flixel.addons.display.FlxRuntimeShader","getFloatArray",0x7fac6085,"flixel.addons.display.FlxRuntimeShader.getFloatArray","flixel/addons/display/FlxRuntimeShader.hx",654,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_669_getInt,"flixel.addons.display.FlxRuntimeShader","getInt",0xa929b9c7,"flixel.addons.display.FlxRuntimeShader.getInt","flixel/addons/display/FlxRuntimeShader.hx",669,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_684_getIntArray,"flixel.addons.display.FlxRuntimeShader","getIntArray",0xd1b95252,"flixel.addons.display.FlxRuntimeShader.getIntArray","flixel/addons/display/FlxRuntimeShader.hx",684,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_699_getBool,"flixel.addons.display.FlxRuntimeShader","getBool",0x56b91452,"flixel.addons.display.FlxRuntimeShader.getBool","flixel/addons/display/FlxRuntimeShader.hx",699,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_714_getBoolArray,"flixel.addons.display.FlxRuntimeShader","getBoolArray",0x4fdedfe7,"flixel.addons.display.FlxRuntimeShader.getBoolArray","flixel/addons/display/FlxRuntimeShader.hx",714,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_726_toString,"flixel.addons.display.FlxRuntimeShader","toString",0xacd853fa,"flixel.addons.display.FlxRuntimeShader.toString","flixel/addons/display/FlxRuntimeShader.hx",726,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_35_boot,"flixel.addons.display.FlxRuntimeShader","boot",0xf9d1c880,"flixel.addons.display.FlxRuntimeShader.boot","flixel/addons/display/FlxRuntimeShader.hx",35,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_53_boot,"flixel.addons.display.FlxRuntimeShader","boot",0xf9d1c880,"flixel.addons.display.FlxRuntimeShader.boot","flixel/addons/display/FlxRuntimeShader.hx",53,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_63_boot,"flixel.addons.display.FlxRuntimeShader","boot",0xf9d1c880,"flixel.addons.display.FlxRuntimeShader.boot","flixel/addons/display/FlxRuntimeShader.hx",63,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_115_boot,"flixel.addons.display.FlxRuntimeShader","boot",0xf9d1c880,"flixel.addons.display.FlxRuntimeShader.boot","flixel/addons/display/FlxRuntimeShader.hx",115,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_138_boot,"flixel.addons.display.FlxRuntimeShader","boot",0xf9d1c880,"flixel.addons.display.FlxRuntimeShader.boot","flixel/addons/display/FlxRuntimeShader.hx",138,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_156_boot,"flixel.addons.display.FlxRuntimeShader","boot",0xf9d1c880,"flixel.addons.display.FlxRuntimeShader.boot","flixel/addons/display/FlxRuntimeShader.hx",156,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_186_boot,"flixel.addons.display.FlxRuntimeShader","boot",0xf9d1c880,"flixel.addons.display.FlxRuntimeShader.boot","flixel/addons/display/FlxRuntimeShader.hx",186,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_187_boot,"flixel.addons.display.FlxRuntimeShader","boot",0xf9d1c880,"flixel.addons.display.FlxRuntimeShader.boot","flixel/addons/display/FlxRuntimeShader.hx",187,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_188_boot,"flixel.addons.display.FlxRuntimeShader","boot",0xf9d1c880,"flixel.addons.display.FlxRuntimeShader.boot","flixel/addons/display/FlxRuntimeShader.hx",188,0x1150365d)
HX_LOCAL_STACK_FRAME(_hx_pos_880c0549bfe0a230_189_boot,"flixel.addons.display.FlxRuntimeShader","boot",0xf9d1c880,"flixel.addons.display.FlxRuntimeShader.boot","flixel/addons/display/FlxRuntimeShader.hx",189,0x1150365d)
namespace flixel{
namespace addons{
namespace display{

void FlxRuntimeShader_obj::__construct(::String fragmentSource,::String vertexSource,::hx::Null< int >  __o_glslVersion){
            		int glslVersion = __o_glslVersion.Default(120);
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_25_new)
HXLINE( 353)		this->_hx___fieldList = null();
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\tgl_FragColor = flixel_texture2D(bitmap, openfl_TextureCoordv);\n\t\t}",71,0e,7a,59);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE( 201)		this->_glslVersion = glslVersion;
HXLINE( 203)		if (::hx::IsNull( fragmentSource )) {
HXLINE( 205)			::haxe::Log_obj::trace(HX_("Loading default fragment source...",e6,84,8d,b3),::hx::SourceInfo(HX_("source/flixel/addons/display/FlxRuntimeShader.hx",e9,58,55,8b),205,HX_("flixel.addons.display.FlxRuntimeShader",e0,7e,20,77),HX_("new",60,d0,53,00)));
HXLINE( 206)			this->set_glFragmentSource(this->processFragmentSource(::flixel::addons::display::FlxRuntimeShader_obj::DEFAULT_FRAGMENT_SOURCE));
            		}
            		else {
HXLINE( 210)			::haxe::Log_obj::trace(HX_("Loading fragment source from argument...",b4,44,13,e7),::hx::SourceInfo(HX_("source/flixel/addons/display/FlxRuntimeShader.hx",e9,58,55,8b),210,HX_("flixel.addons.display.FlxRuntimeShader",e0,7e,20,77),HX_("new",60,d0,53,00)));
HXLINE( 211)			this->set_glFragmentSource(this->processFragmentSource(fragmentSource));
            		}
HXLINE( 214)		if (::hx::IsNull( vertexSource )) {
HXLINE( 216)			::String s = this->processVertexSource(::flixel::addons::display::FlxRuntimeShader_obj::DEFAULT_VERTEX_SOURCE);
HXLINE( 217)			this->set_glVertexSource(s);
            		}
            		else {
HXLINE( 221)			::String s = this->processVertexSource(vertexSource);
HXLINE( 222)			this->set_glVertexSource(s);
            		}
HXLINE( 225)		{
HXLINE( 227)			this->_hx___glSourceDirty = true;
HXLINE( 229)			this->_hx___isGenerated = false;
            		}
HXLINE( 232)		super::__construct();
HXLINE(  25)		this->_hx___isGenerated = true;
HXDLIN(  25)		this->_hx___initGL();
            	}

Dynamic FlxRuntimeShader_obj::__CreateEmpty() { return new FlxRuntimeShader_obj; }

void *FlxRuntimeShader_obj::_hx_vtable = 0;

Dynamic FlxRuntimeShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxRuntimeShader_obj > _hx_result = new FlxRuntimeShader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxRuntimeShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x7517ccbe || inClassId==(int)0x78d8d737;
	}
}

::String FlxRuntimeShader_obj::processFragmentSource(::String input){
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_239_processFragmentSource)
HXLINE( 240)		::String result = ::StringTools_obj::replace(input,::flixel::addons::display::FlxRuntimeShader_obj::PRAGMA_HEADER,::flixel::addons::display::FlxRuntimeShader_obj::BASE_FRAGMENT_HEADER);
HXLINE( 241)		result = ::StringTools_obj::replace(result,::flixel::addons::display::FlxRuntimeShader_obj::PRAGMA_BODY,::flixel::addons::display::FlxRuntimeShader_obj::BASE_FRAGMENT_BODY);
HXLINE( 242)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRuntimeShader_obj,processFragmentSource,return )

::String FlxRuntimeShader_obj::processVertexSource(::String input){
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_249_processVertexSource)
HXLINE( 250)		::String result = ::StringTools_obj::replace(input,::flixel::addons::display::FlxRuntimeShader_obj::PRAGMA_HEADER,::flixel::addons::display::FlxRuntimeShader_obj::BASE_VERTEX_HEADER);
HXLINE( 251)		result = ::StringTools_obj::replace(result,::flixel::addons::display::FlxRuntimeShader_obj::PRAGMA_BODY,::flixel::addons::display::FlxRuntimeShader_obj::BASE_VERTEX_BODY);
HXLINE( 252)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRuntimeShader_obj,processVertexSource,return )

::String FlxRuntimeShader_obj::buildPrecisionHeaders(){
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_256_buildPrecisionHeaders)
HXLINE( 257)		::String _hx_tmp;
HXDLIN( 257)		if (::hx::IsEq( this->precisionHint,1 )) {
HXLINE( 257)			_hx_tmp = HX_("#ifdef GL_FRAGMENT_PRECISION_HIGH\n\t\t\t\t\tprecision highp float;\n\t\t\t\t#else\n\t\t\t\t\tprecision mediump float;\n\t\t\t\t#endif",63,45,78,18);
            		}
            		else {
HXLINE( 257)			_hx_tmp = HX_("precision lowp float;",81,5f,ad,9a);
            		}
HXLINE( 256)		return ((HX_("#ifdef GL_ES\n\t\t\t\t",7d,b3,ff,2f) + _hx_tmp) + HX_("\n\t\t\t\t#endif\n\t\t\t\t",ab,2a,3b,b6));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxRuntimeShader_obj,buildPrecisionHeaders,return )

void FlxRuntimeShader_obj::_hx___initGL(){
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_272___initGL)
HXLINE( 273)		bool _hx_tmp;
HXDLIN( 273)		if (!(this->_hx___glSourceDirty)) {
HXLINE( 273)			_hx_tmp = ::hx::IsNull( this->_hx___paramBool );
            		}
            		else {
HXLINE( 273)			_hx_tmp = true;
            		}
HXDLIN( 273)		if (_hx_tmp) {
HXLINE( 275)			this->_hx___glSourceDirty = false;
HXLINE( 276)			this->program = null();
HXLINE( 278)			this->_hx___inputBitmapData = ::Array_obj< ::Dynamic>::__new();
HXLINE( 279)			this->_hx___paramBool = ::Array_obj< ::Dynamic>::__new();
HXLINE( 280)			this->_hx___paramFloat = ::Array_obj< ::Dynamic>::__new();
HXLINE( 281)			this->_hx___paramInt = ::Array_obj< ::Dynamic>::__new();
HXLINE( 283)			this->_hx___processGLData(this->get_glVertexSource(),HX_("attribute",1c,70,f0,fa));
HXLINE( 284)			this->_hx___processGLData(this->get_glVertexSource(),HX_("uniform",34,41,64,b5));
HXLINE( 285)			this->_hx___processGLData(this->get_glFragmentSource(),HX_("uniform",34,41,64,b5));
            		}
HXLINE( 289)		bool _hx_tmp1;
HXDLIN( 289)		if (::hx::IsNotNull( this->_hx___context )) {
HXLINE( 289)			_hx_tmp1 = ::hx::IsNull( this->program );
            		}
            		else {
HXLINE( 289)			_hx_tmp1 = false;
            		}
HXDLIN( 289)		if (_hx_tmp1) {
HXLINE( 291)			 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 293)			::String precisionHeaders = this->buildPrecisionHeaders();
HXLINE( 294)			::String versionHeader = ((HX_("#version ",2b,a9,b9,ad) + this->_glslVersion) + HX_("\n",0a,00,00,00));
HXLINE( 296)			::String vertex = ::StringTools_obj::replace(this->get_glVertexSource(),::flixel::addons::display::FlxRuntimeShader_obj::PRAGMA_PRECISION,precisionHeaders);
HXLINE( 297)			vertex = ::StringTools_obj::replace(vertex,::flixel::addons::display::FlxRuntimeShader_obj::PRAGMA_VERSION,versionHeader);
HXLINE( 298)			::String fragment = ::StringTools_obj::replace(this->get_glFragmentSource(),::flixel::addons::display::FlxRuntimeShader_obj::PRAGMA_PRECISION,precisionHeaders);
HXLINE( 299)			fragment = ::StringTools_obj::replace(fragment,::flixel::addons::display::FlxRuntimeShader_obj::PRAGMA_VERSION,versionHeader);
HXLINE( 301)			::String id = (vertex + fragment);
HXLINE( 303)			if (this->_hx___context->_hx___programs->exists(id)) {
HXLINE( 305)				this->program = ( ( ::openfl::display3D::Program3D)(this->_hx___context->_hx___programs->get(id)) );
            			}
            			else {
HXLINE( 308)				this->program = this->_hx___context->createProgram(1);
HXLINE( 309)				this->program->_hx___glProgram = this->_hx___createGLProgram(vertex,fragment);
HXLINE( 310)				this->_hx___context->_hx___programs->set(id,this->program);
            			}
HXLINE( 313)			if (::hx::IsNotNull( this->program )) {
HXLINE( 314)				this->glProgram = this->program->_hx___glProgram;
HXLINE( 318)				{
HXLINE( 318)					int _g = 0;
HXDLIN( 318)					::Array< ::Dynamic> _g1 = this->_hx___inputBitmapData;
HXDLIN( 318)					while((_g < _g1->length)){
HXLINE( 318)						 ::openfl::display::ShaderInput_openfl_display_BitmapData input = _g1->__get(_g).StaticCast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >();
HXDLIN( 318)						_g = (_g + 1);
HXLINE( 319)						if (input->_hx___isUniform) {
HXLINE( 320)							input->index = gl->getUniformLocation(this->glProgram,input->name);
            						}
            						else {
HXLINE( 322)							input->index = gl->getAttribLocation(this->glProgram,input->name);
            						}
            					}
            				}
HXLINE( 326)				{
HXLINE( 326)					int _g2 = 0;
HXDLIN( 326)					::Array< ::Dynamic> _g3 = this->_hx___paramBool;
HXDLIN( 326)					while((_g2 < _g3->length)){
HXLINE( 326)						 ::openfl::display::ShaderParameter_Bool parameter = _g3->__get(_g2).StaticCast<  ::openfl::display::ShaderParameter_Bool >();
HXDLIN( 326)						_g2 = (_g2 + 1);
HXLINE( 327)						if (parameter->_hx___isUniform) {
HXLINE( 328)							parameter->index = gl->getUniformLocation(this->glProgram,parameter->name);
            						}
            						else {
HXLINE( 330)							parameter->index = gl->getAttribLocation(this->glProgram,parameter->name);
            						}
            					}
            				}
HXLINE( 334)				{
HXLINE( 334)					int _g4 = 0;
HXDLIN( 334)					::Array< ::Dynamic> _g5 = this->_hx___paramFloat;
HXDLIN( 334)					while((_g4 < _g5->length)){
HXLINE( 334)						 ::openfl::display::ShaderParameter_Float parameter = _g5->__get(_g4).StaticCast<  ::openfl::display::ShaderParameter_Float >();
HXDLIN( 334)						_g4 = (_g4 + 1);
HXLINE( 335)						if (parameter->_hx___isUniform) {
HXLINE( 336)							parameter->index = gl->getUniformLocation(this->glProgram,parameter->name);
            						}
            						else {
HXLINE( 338)							parameter->index = gl->getAttribLocation(this->glProgram,parameter->name);
            						}
            					}
            				}
HXLINE( 342)				{
HXLINE( 342)					int _g6 = 0;
HXDLIN( 342)					::Array< ::Dynamic> _g7 = this->_hx___paramInt;
HXDLIN( 342)					while((_g6 < _g7->length)){
HXLINE( 342)						 ::openfl::display::ShaderParameter_Int parameter = _g7->__get(_g6).StaticCast<  ::openfl::display::ShaderParameter_Int >();
HXDLIN( 342)						_g6 = (_g6 + 1);
HXLINE( 343)						if (parameter->_hx___isUniform) {
HXLINE( 344)							parameter->index = gl->getUniformLocation(this->glProgram,parameter->name);
            						}
            						else {
HXLINE( 346)							parameter->index = gl->getAttribLocation(this->glProgram,parameter->name);
            						}
            					}
            				}
            			}
            		}
            	}


bool FlxRuntimeShader_obj::thisHasField(::String name){
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_354_thisHasField)
HXLINE( 356)		if (::hx::IsNull( this->_hx___fieldList )) {
HXLINE( 357)			::Array< ::String > _hx_tmp = ::Reflect_obj::fields(::hx::ObjectPtr<OBJ_>(this));
HXDLIN( 357)			this->_hx___fieldList = _hx_tmp->concat(::Type_obj::getInstanceFields(::Type_obj::getClass(::hx::ObjectPtr<OBJ_>(this))));
            		}
HXLINE( 360)		return (this->_hx___fieldList->indexOf(name,null()) != -1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRuntimeShader_obj,thisHasField,return )

void FlxRuntimeShader_obj::_hx___processGLData(::String source,::String storageType){
            	HX_GC_STACKFRAME(&_hx_pos_880c0549bfe0a230_369___processGLData)
HXLINE( 370)		 ::Dynamic position;
HXLINE( 371)		::String name;
HXLINE( 372)		::String type;
HXLINE( 374)		 ::EReg regex;
HXDLIN( 374)		if ((storageType == HX_("uniform",34,41,64,b5))) {
HXLINE( 374)			regex =  ::EReg_obj::__alloc( HX_CTX ,HX_("uniform ([A-Za-z0-9]+) ([A-Za-z0-9_]+)",e3,a8,c0,f8),HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 374)			regex =  ::EReg_obj::__alloc( HX_CTX ,HX_("attribute ([A-Za-z0-9]+) ([A-Za-z0-9_]+)",fb,2e,25,cc),HX_("",00,00,00,00));
            		}
HXLINE( 378)		int lastMatch = 0;
HXLINE( 381)		while(regex->matchSub(source,lastMatch,null())){
HXLINE( 382)			type = regex->matched(1);
HXLINE( 383)			name = regex->matched(2);
HXLINE( 385)			if (::StringTools_obj::startsWith(name,HX_("gl_",9a,86,4e,00))) {
HXLINE( 386)				continue;
            			}
HXLINE( 389)			bool isUniform = (storageType == HX_("uniform",34,41,64,b5));
HXLINE( 391)			if (::StringTools_obj::startsWith(type,HX_("sampler",08,c5,c9,83))) {
HXLINE( 392)				 ::openfl::display::ShaderInput_openfl_display_BitmapData input =  ::openfl::display::ShaderInput_openfl_display_BitmapData_obj::__alloc( HX_CTX );
HXLINE( 393)				input->name = name;
HXLINE( 394)				input->_hx___isUniform = isUniform;
HXLINE( 395)				this->_hx___inputBitmapData->push(input);
HXLINE( 397)				::String _hx_switch_0 = name;
            				if (  (_hx_switch_0==HX_("bitmap",ef,0f,0c,f1)) ){
HXLINE( 401)					this->_hx___bitmap = input;
HXDLIN( 401)					goto _hx_goto_11;
            				}
            				if (  (_hx_switch_0==HX_("openfl_Texture",cc,bd,e4,7e)) ){
HXLINE( 399)					this->_hx___texture = input;
HXDLIN( 399)					goto _hx_goto_11;
            				}
            				/* default */{
            				}
            				_hx_goto_11:;
HXLINE( 405)				::Reflect_obj::setField(this->_hx___data,name,input);
HXLINE( 406)				bool _hx_tmp;
HXDLIN( 406)				if (this->_hx___isGenerated) {
HXLINE( 406)					_hx_tmp = this->thisHasField(name);
            				}
            				else {
HXLINE( 406)					_hx_tmp = false;
            				}
HXDLIN( 406)				if (_hx_tmp) {
HXLINE( 406)					::Reflect_obj::setProperty(::hx::ObjectPtr<OBJ_>(this),name,input);
            				}
            			}
            			else {
HXLINE( 407)				bool _hx_tmp;
HXDLIN( 407)				if (::Reflect_obj::hasField(this->_hx___data,name)) {
HXLINE( 407)					_hx_tmp = ::hx::IsNull( ::Reflect_obj::field(this->_hx___data,name) );
            				}
            				else {
HXLINE( 407)					_hx_tmp = true;
            				}
HXDLIN( 407)				if (_hx_tmp) {
HXLINE( 408)					 ::Dynamic parameterType;
HXDLIN( 408)					::String _hx_switch_1 = type;
            					if (  (_hx_switch_1==HX_("bool",2a,84,1b,41)) ){
HXLINE( 408)						parameterType = 0;
HXDLIN( 408)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==HX_("bvec2",c0,00,91,bb)) ){
HXLINE( 408)						parameterType = 1;
HXDLIN( 408)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==HX_("bvec3",c1,00,91,bb)) ){
HXLINE( 408)						parameterType = 2;
HXDLIN( 408)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==HX_("bvec4",c2,00,91,bb)) ){
HXLINE( 408)						parameterType = 3;
HXDLIN( 408)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==HX_("dvec2",c2,29,5e,e2)) ||  (_hx_switch_1==HX_("vec2",5e,27,4c,4e)) ){
HXLINE( 408)						parameterType = 5;
HXDLIN( 408)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==HX_("dvec3",c3,29,5e,e2)) ||  (_hx_switch_1==HX_("vec3",5f,27,4c,4e)) ){
HXLINE( 408)						parameterType = 6;
HXDLIN( 408)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==HX_("double",11,2b,cb,32)) ||  (_hx_switch_1==HX_("float",9c,c5,96,02)) ){
HXLINE( 408)						parameterType = 4;
HXDLIN( 408)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==HX_("ivec3",48,10,5f,c3)) ||  (_hx_switch_1==HX_("uvec3",54,06,2e,ac)) ){
HXLINE( 408)						parameterType = 10;
HXDLIN( 408)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==HX_("ivec4",49,10,5f,c3)) ||  (_hx_switch_1==HX_("uvec4",55,06,2e,ac)) ){
HXLINE( 408)						parameterType = 11;
HXDLIN( 408)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==HX_("mat2",92,41,56,48)) ||  (_hx_switch_1==HX_("mat2x2",cc,b2,97,bb)) ){
HXLINE( 408)						parameterType = 12;
HXDLIN( 408)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==HX_("mat2x3",cd,b2,97,bb)) ){
HXLINE( 408)						parameterType = 13;
HXDLIN( 408)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==HX_("mat2x4",ce,b2,97,bb)) ){
HXLINE( 408)						parameterType = 14;
HXDLIN( 408)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==HX_("mat3x2",0d,75,98,bb)) ){
HXLINE( 408)						parameterType = 15;
HXDLIN( 408)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==HX_("mat3",93,41,56,48)) ||  (_hx_switch_1==HX_("mat3x3",0e,75,98,bb)) ){
HXLINE( 408)						parameterType = 16;
HXDLIN( 408)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==HX_("mat3x4",0f,75,98,bb)) ){
HXLINE( 408)						parameterType = 17;
HXDLIN( 408)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==HX_("mat4",94,41,56,48)) ||  (_hx_switch_1==HX_("mat4x4",50,37,99,bb)) ){
HXLINE( 408)						parameterType = 20;
HXDLIN( 408)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==HX_("mat4x2",4e,37,99,bb)) ){
HXLINE( 408)						parameterType = 18;
HXDLIN( 408)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==HX_("mat4x3",4f,37,99,bb)) ){
HXLINE( 408)						parameterType = 19;
HXDLIN( 408)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==HX_("int",ef,0c,50,00)) ||  (_hx_switch_1==HX_("uint",9a,03,a6,4d)) ){
HXLINE( 408)						parameterType = 8;
HXDLIN( 408)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==HX_("ivec2",47,10,5f,c3)) ||  (_hx_switch_1==HX_("uvec2",53,06,2e,ac)) ){
HXLINE( 408)						parameterType = 9;
HXDLIN( 408)						goto _hx_goto_12;
            					}
            					if (  (_hx_switch_1==HX_("dvec4",c4,29,5e,e2)) ||  (_hx_switch_1==HX_("vec4",60,27,4c,4e)) ){
HXLINE( 408)						parameterType = 7;
HXDLIN( 408)						goto _hx_goto_12;
            					}
            					/* default */{
HXLINE( 408)						parameterType = null();
            					}
            					_hx_goto_12:;
HXLINE( 434)					int length;
HXDLIN( 434)					 ::Dynamic _hx_switch_2 = parameterType;
            					if (  (_hx_switch_2==1) ||  (_hx_switch_2==5) ||  (_hx_switch_2==9) ){
HXLINE( 434)						length = 2;
HXDLIN( 434)						goto _hx_goto_13;
            					}
            					if (  (_hx_switch_2==3) ||  (_hx_switch_2==7) ||  (_hx_switch_2==11) ||  (_hx_switch_2==12) ){
HXLINE( 434)						length = 4;
HXDLIN( 434)						goto _hx_goto_13;
            					}
            					if (  (_hx_switch_2==2) ||  (_hx_switch_2==6) ||  (_hx_switch_2==10) ){
HXLINE( 434)						length = 3;
HXDLIN( 434)						goto _hx_goto_13;
            					}
            					if (  (_hx_switch_2==16) ){
HXLINE( 434)						length = 9;
HXDLIN( 434)						goto _hx_goto_13;
            					}
            					if (  (_hx_switch_2==20) ){
HXLINE( 434)						length = 16;
HXDLIN( 434)						goto _hx_goto_13;
            					}
            					/* default */{
HXLINE( 434)						length = 1;
            					}
            					_hx_goto_13:;
HXLINE( 444)					int arrayLength;
HXDLIN( 444)					 ::Dynamic _hx_switch_3 = parameterType;
            					if (  (_hx_switch_3==12) ){
HXLINE( 444)						arrayLength = 2;
HXDLIN( 444)						goto _hx_goto_14;
            					}
            					if (  (_hx_switch_3==16) ){
HXLINE( 444)						arrayLength = 3;
HXDLIN( 444)						goto _hx_goto_14;
            					}
            					if (  (_hx_switch_3==20) ){
HXLINE( 444)						arrayLength = 4;
HXDLIN( 444)						goto _hx_goto_14;
            					}
            					/* default */{
HXLINE( 444)						arrayLength = 1;
            					}
            					_hx_goto_14:;
HXLINE( 452)					 ::Dynamic _hx_switch_4 = parameterType;
            					if (  (_hx_switch_4==0) ||  (_hx_switch_4==1) ||  (_hx_switch_4==2) ||  (_hx_switch_4==3) ){
HXLINE( 455)						 ::openfl::display::ShaderParameter_Bool parameter =  ::openfl::display::ShaderParameter_Bool_obj::__alloc( HX_CTX );
HXLINE( 456)						parameter->set_name(name);
HXLINE( 457)						parameter->type = parameterType;
HXLINE( 458)						parameter->_hx___arrayLength = arrayLength;
HXLINE( 459)						parameter->_hx___isBool = true;
HXLINE( 460)						parameter->_hx___isUniform = isUniform;
HXLINE( 461)						parameter->__length = length;
HXLINE( 462)						this->_hx___paramBool->push(parameter);
HXLINE( 464)						if ((name == HX_("openfl_HasColorTransform",b4,00,4b,62))) {
HXLINE( 466)							this->_hx___hasColorTransform = parameter;
            						}
HXLINE( 469)						::Reflect_obj::setField(this->_hx___data,name,parameter);
HXLINE( 470)						bool _hx_tmp;
HXDLIN( 470)						if (this->_hx___isGenerated) {
HXLINE( 470)							_hx_tmp = this->thisHasField(name);
            						}
            						else {
HXLINE( 470)							_hx_tmp = false;
            						}
HXDLIN( 470)						if (_hx_tmp) {
HXLINE( 470)							::Reflect_obj::setProperty(::hx::ObjectPtr<OBJ_>(this),name,parameter);
            						}
HXLINE( 454)						goto _hx_goto_16;
            					}
            					if (  (_hx_switch_4==8) ||  (_hx_switch_4==9) ||  (_hx_switch_4==10) ||  (_hx_switch_4==11) ){
HXLINE( 473)						 ::openfl::display::ShaderParameter_Int parameter =  ::openfl::display::ShaderParameter_Int_obj::__alloc( HX_CTX );
HXLINE( 474)						parameter->set_name(name);
HXLINE( 475)						parameter->type = parameterType;
HXLINE( 476)						parameter->_hx___arrayLength = arrayLength;
HXLINE( 477)						parameter->_hx___isInt = true;
HXLINE( 478)						parameter->_hx___isUniform = isUniform;
HXLINE( 479)						parameter->__length = length;
HXLINE( 480)						this->_hx___paramInt->push(parameter);
HXLINE( 481)						::Reflect_obj::setField(this->_hx___data,name,parameter);
HXLINE( 482)						bool _hx_tmp;
HXDLIN( 482)						if (this->_hx___isGenerated) {
HXLINE( 482)							_hx_tmp = this->thisHasField(name);
            						}
            						else {
HXLINE( 482)							_hx_tmp = false;
            						}
HXDLIN( 482)						if (_hx_tmp) {
HXLINE( 482)							::Reflect_obj::setProperty(::hx::ObjectPtr<OBJ_>(this),name,parameter);
            						}
HXLINE( 472)						goto _hx_goto_16;
            					}
            					/* default */{
HXLINE( 485)						 ::openfl::display::ShaderParameter_Float parameter =  ::openfl::display::ShaderParameter_Float_obj::__alloc( HX_CTX );
HXLINE( 486)						parameter->set_name(name);
HXLINE( 487)						parameter->type = parameterType;
HXLINE( 488)						parameter->_hx___arrayLength = arrayLength;
HXLINE( 490)						if ((arrayLength > 0)) {
HXLINE( 490)							 ::Dynamic elements = (arrayLength * arrayLength);
HXDLIN( 490)							 ::haxe::io::Bytes buffer = null();
HXDLIN( 490)							::cpp::VirtualArray array = null();
HXDLIN( 490)							 ::openfl::_Vector::FloatVector vector = null();
HXDLIN( 490)							 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 490)							 ::Dynamic len = null();
HXDLIN( 490)							 ::lime::utils::ArrayBufferView this1;
HXDLIN( 490)							if (::hx::IsNotNull( elements )) {
HXLINE( 490)								this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,8);
            							}
            							else {
HXLINE( 490)								if (::hx::IsNotNull( array )) {
HXLINE( 490)									 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 490)									_this->byteOffset = 0;
HXDLIN( 490)									_this->length = array->get_length();
HXDLIN( 490)									_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 490)									 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 490)									_this->buffer = this2;
HXDLIN( 490)									_this->copyFromArray(array,null());
HXDLIN( 490)									this1 = _this;
            								}
            								else {
HXLINE( 490)									if (::hx::IsNotNull( vector )) {
HXLINE( 490)										 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 490)										::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 490)										_this->byteOffset = 0;
HXDLIN( 490)										_this->length = array->get_length();
HXDLIN( 490)										_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 490)										 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 490)										_this->buffer = this2;
HXDLIN( 490)										_this->copyFromArray(array,null());
HXDLIN( 490)										this1 = _this;
            									}
            									else {
HXLINE( 490)										if (::hx::IsNotNull( view )) {
HXLINE( 490)											 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 490)											 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 490)											int srcLength = view->length;
HXDLIN( 490)											int srcByteOffset = view->byteOffset;
HXDLIN( 490)											int srcElementSize = view->bytesPerElement;
HXDLIN( 490)											int elementSize = _this->bytesPerElement;
HXDLIN( 490)											if ((view->type == _this->type)) {
HXLINE( 490)												int srcLength = srcData->length;
HXDLIN( 490)												int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 490)												 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 490)												_this->buffer = this1;
HXDLIN( 490)												_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            											}
            											else {
HXLINE( 490)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            											}
HXDLIN( 490)											_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 490)											_this->byteOffset = 0;
HXDLIN( 490)											_this->length = srcLength;
HXDLIN( 490)											this1 = _this;
            										}
            										else {
HXLINE( 490)											if (::hx::IsNotNull( buffer )) {
HXLINE( 490)												 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,8);
HXDLIN( 490)												int in_byteOffset = 0;
HXDLIN( 490)												if ((in_byteOffset < 0)) {
HXLINE( 490)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            												}
HXDLIN( 490)												if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 490)													HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            												}
HXDLIN( 490)												int bufferByteLength = buffer->length;
HXDLIN( 490)												int elementSize = _this->bytesPerElement;
HXDLIN( 490)												int newByteLength = bufferByteLength;
HXDLIN( 490)												if (::hx::IsNull( len )) {
HXLINE( 490)													newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 490)													if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 490)														HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            													}
HXDLIN( 490)													if ((newByteLength < 0)) {
HXLINE( 490)														HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            													}
            												}
            												else {
HXLINE( 490)													newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 490)													int newRange = (in_byteOffset + newByteLength);
HXDLIN( 490)													if ((newRange > bufferByteLength)) {
HXLINE( 490)														HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            													}
            												}
HXDLIN( 490)												_this->buffer = buffer;
HXDLIN( 490)												_this->byteOffset = in_byteOffset;
HXDLIN( 490)												_this->byteLength = newByteLength;
HXDLIN( 490)												_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 490)												this1 = _this;
            											}
            											else {
HXLINE( 490)												HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4)));
            											}
            										}
            									}
            								}
            							}
HXDLIN( 490)							parameter->_hx___uniformMatrix = this1;
            						}
HXLINE( 492)						parameter->_hx___isFloat = true;
HXLINE( 493)						parameter->_hx___isUniform = isUniform;
HXLINE( 494)						parameter->__length = length;
HXLINE( 495)						this->_hx___paramFloat->push(parameter);
HXLINE( 497)						if (::StringTools_obj::startsWith(name,HX_("openfl_",cf,ba,42,40))) {
HXLINE( 499)							::String _hx_switch_5 = name;
            							if (  (_hx_switch_5==HX_("openfl_Alpha",0f,ce,3e,6a)) ){
HXLINE( 501)								this->_hx___alpha = parameter;
HXDLIN( 501)								goto _hx_goto_15;
            							}
            							if (  (_hx_switch_5==HX_("openfl_ColorMultiplier",b5,e4,dc,18)) ){
HXLINE( 502)								this->_hx___colorMultiplier = parameter;
HXDLIN( 502)								goto _hx_goto_15;
            							}
            							if (  (_hx_switch_5==HX_("openfl_ColorOffset",c7,ea,07,41)) ){
HXLINE( 503)								this->_hx___colorOffset = parameter;
HXDLIN( 503)								goto _hx_goto_15;
            							}
            							if (  (_hx_switch_5==HX_("openfl_Matrix",70,ea,41,06)) ){
HXLINE( 504)								this->_hx___matrix = parameter;
HXDLIN( 504)								goto _hx_goto_15;
            							}
            							if (  (_hx_switch_5==HX_("openfl_Position",98,fe,6c,ee)) ){
HXLINE( 505)								this->_hx___position = parameter;
HXDLIN( 505)								goto _hx_goto_15;
            							}
            							if (  (_hx_switch_5==HX_("openfl_TextureCoord",49,e9,27,e8)) ){
HXLINE( 506)								this->_hx___textureCoord = parameter;
HXDLIN( 506)								goto _hx_goto_15;
            							}
            							if (  (_hx_switch_5==HX_("openfl_TextureSize",ad,60,72,29)) ){
HXLINE( 507)								this->_hx___textureSize = parameter;
HXDLIN( 507)								goto _hx_goto_15;
            							}
            							/* default */{
            							}
            							_hx_goto_15:;
            						}
HXLINE( 512)						::Reflect_obj::setField(this->_hx___data,name,parameter);
HXLINE( 513)						bool _hx_tmp;
HXDLIN( 513)						if (this->_hx___isGenerated) {
HXLINE( 513)							_hx_tmp = this->thisHasField(name);
            						}
            						else {
HXLINE( 513)							_hx_tmp = false;
            						}
HXDLIN( 513)						if (_hx_tmp) {
HXLINE( 513)							::Reflect_obj::setProperty(::hx::ObjectPtr<OBJ_>(this),name,parameter);
            						}
            					}
            					_hx_goto_16:;
            				}
            			}
HXLINE( 517)			position = regex->matchedPos();
HXLINE( 518)			lastMatch = ( (int)((position->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic) + position->__Field(HX_("len",d5,4b,52,00),::hx::paccDynamic))) );
            		}
            	}


void FlxRuntimeShader_obj::setFloat(::String name,Float value){
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_527_setFloat)
HXLINE( 528)		 ::openfl::display::ShaderParameter_Float prop = ( ( ::openfl::display::ShaderParameter_Float)(::Reflect_obj::field(this->get_data(),name)) );
HXLINE( 530)		if (::hx::IsNull( prop )) {
HXLINE( 532)			::haxe::Log_obj::trace(((HX_("[WARN] Shader float property ",50,62,91,61) + name) + HX_(" not found.",39,f7,8e,4f)),::hx::SourceInfo(HX_("source/flixel/addons/display/FlxRuntimeShader.hx",e9,58,55,8b),532,HX_("flixel.addons.display.FlxRuntimeShader",e0,7e,20,77),HX_("setFloat",9a,2e,cb,10)));
HXLINE( 533)			return;
            		}
HXLINE( 535)		prop->value = ::Array_obj< Float >::__new(1)->init(0,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxRuntimeShader_obj,setFloat,(void))

void FlxRuntimeShader_obj::setFloatArray(::String name,::Array< Float > value){
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_544_setFloatArray)
HXLINE( 545)		 ::openfl::display::ShaderParameter_Float prop = ( ( ::openfl::display::ShaderParameter_Float)(::Reflect_obj::field(this->get_data(),name)) );
HXLINE( 546)		if (::hx::IsNull( prop )) {
HXLINE( 548)			::haxe::Log_obj::trace(((HX_("[WARN] Shader float[] property ",b2,ab,3f,62) + name) + HX_(" not found.",39,f7,8e,4f)),::hx::SourceInfo(HX_("source/flixel/addons/display/FlxRuntimeShader.hx",e9,58,55,8b),548,HX_("flixel.addons.display.FlxRuntimeShader",e0,7e,20,77),HX_("setFloatArray",9f,80,a0,e5)));
HXLINE( 549)			return;
            		}
HXLINE( 551)		prop->value = value;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxRuntimeShader_obj,setFloatArray,(void))

void FlxRuntimeShader_obj::setInt(::String name,int value){
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_560_setInt)
HXLINE( 561)		 ::openfl::display::ShaderParameter_Int prop = ( ( ::openfl::display::ShaderParameter_Int)(::Reflect_obj::field(this->get_data(),name)) );
HXLINE( 562)		if (::hx::IsNull( prop )) {
HXLINE( 564)			::haxe::Log_obj::trace(((HX_("[WARN] Shader int property ",23,c3,c2,eb) + name) + HX_(" not found.",39,f7,8e,4f)),::hx::SourceInfo(HX_("source/flixel/addons/display/FlxRuntimeShader.hx",e9,58,55,8b),564,HX_("flixel.addons.display.FlxRuntimeShader",e0,7e,20,77),HX_("setInt",6d,9a,67,6f)));
HXLINE( 565)			return;
            		}
HXLINE( 567)		prop->value = ::Array_obj< int >::__new(1)->init(0,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxRuntimeShader_obj,setInt,(void))

void FlxRuntimeShader_obj::setIntArray(::String name,::Array< int > value){
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_576_setIntArray)
HXLINE( 577)		 ::openfl::display::ShaderParameter_Int prop = ( ( ::openfl::display::ShaderParameter_Int)(::Reflect_obj::field(this->get_data(),name)) );
HXLINE( 578)		if (::hx::IsNull( prop )) {
HXLINE( 580)			::haxe::Log_obj::trace(((HX_("[WARN] Shader int[] property ",45,27,29,e4) + name) + HX_(" not found.",39,f7,8e,4f)),::hx::SourceInfo(HX_("source/flixel/addons/display/FlxRuntimeShader.hx",e9,58,55,8b),580,HX_("flixel.addons.display.FlxRuntimeShader",e0,7e,20,77),HX_("setIntArray",ec,57,6d,9e)));
HXLINE( 581)			return;
            		}
HXLINE( 583)		prop->value = value;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxRuntimeShader_obj,setIntArray,(void))

void FlxRuntimeShader_obj::setBool(::String name,bool value){
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_592_setBool)
HXLINE( 593)		 ::openfl::display::ShaderParameter_Bool prop = ( ( ::openfl::display::ShaderParameter_Bool)(::Reflect_obj::field(this->get_data(),name)) );
HXLINE( 594)		if (::hx::IsNull( prop )) {
HXLINE( 596)			::haxe::Log_obj::trace(((HX_("[WARN] Shader bool property ",2c,ff,30,f8) + name) + HX_(" not found.",39,f7,8e,4f)),::hx::SourceInfo(HX_("source/flixel/addons/display/FlxRuntimeShader.hx",e9,58,55,8b),596,HX_("flixel.addons.display.FlxRuntimeShader",e0,7e,20,77),HX_("setBool",ec,c4,9f,06)));
HXLINE( 597)			return;
            		}
HXLINE( 599)		prop->value = ::Array_obj< bool >::__new(1)->init(0,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxRuntimeShader_obj,setBool,(void))

void FlxRuntimeShader_obj::setBoolArray(::String name,::Array< bool > value){
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_608_setBoolArray)
HXLINE( 609)		 ::openfl::display::ShaderParameter_Bool prop = ( ( ::openfl::display::ShaderParameter_Bool)(::Reflect_obj::field(this->get_data(),name)) );
HXLINE( 610)		if (::hx::IsNull( prop )) {
HXLINE( 612)			::haxe::Log_obj::trace(((HX_("[WARN] Shader bool[] property ",8e,37,a5,95) + name) + HX_(" not found.",39,f7,8e,4f)),::hx::SourceInfo(HX_("source/flixel/addons/display/FlxRuntimeShader.hx",e9,58,55,8b),612,HX_("flixel.addons.display.FlxRuntimeShader",e0,7e,20,77),HX_("setBoolArray",0d,c1,af,a0)));
HXLINE( 613)			return;
            		}
HXLINE( 615)		prop->value = value;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxRuntimeShader_obj,setBoolArray,(void))

void FlxRuntimeShader_obj::setSampler2D(::String name, ::openfl::display::BitmapData value){
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_624_setSampler2D)
HXLINE( 625)		 ::openfl::display::ShaderInput_openfl_display_BitmapData prop = ( ( ::openfl::display::ShaderInput_openfl_display_BitmapData)(::Reflect_obj::field(this->get_data(),name)) );
HXLINE( 626)		if (::hx::IsNull( prop )) {
HXLINE( 628)			::haxe::Log_obj::trace(((HX_("[WARNING] Shader sampler2D property ",ae,5c,50,a4) + name) + HX_(" not found.",39,f7,8e,4f)),::hx::SourceInfo(HX_("source/flixel/addons/display/FlxRuntimeShader.hx",e9,58,55,8b),628,HX_("flixel.addons.display.FlxRuntimeShader",e0,7e,20,77),HX_("setSampler2D",d8,02,db,81)));
HXLINE( 629)			return;
            		}
HXLINE( 631)		prop->input = value;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxRuntimeShader_obj,setSampler2D,(void))

 ::Dynamic FlxRuntimeShader_obj::getFloat(::String name){
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_639_getFloat)
HXLINE( 640)		 ::openfl::display::ShaderParameter_Float prop = ( ( ::openfl::display::ShaderParameter_Float)(::Reflect_obj::field(this->get_data(),name)) );
HXLINE( 641)		bool _hx_tmp;
HXDLIN( 641)		if (::hx::IsNotNull( prop )) {
HXLINE( 641)			_hx_tmp = (prop->value->length == 0);
            		}
            		else {
HXLINE( 641)			_hx_tmp = true;
            		}
HXDLIN( 641)		if (_hx_tmp) {
HXLINE( 643)			::haxe::Log_obj::trace(((HX_("[WARN] Shader float property ",50,62,91,61) + name) + HX_(" not found.",39,f7,8e,4f)),::hx::SourceInfo(HX_("source/flixel/addons/display/FlxRuntimeShader.hx",e9,58,55,8b),643,HX_("flixel.addons.display.FlxRuntimeShader",e0,7e,20,77),HX_("getFloat",26,d5,6d,62)));
HXLINE( 644)			return null();
            		}
HXLINE( 646)		return prop->value->__get(0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRuntimeShader_obj,getFloat,return )

::Array< Float > FlxRuntimeShader_obj::getFloatArray(::String name){
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_654_getFloatArray)
HXLINE( 655)		 ::openfl::display::ShaderParameter_Float prop = ( ( ::openfl::display::ShaderParameter_Float)(::Reflect_obj::field(this->get_data(),name)) );
HXLINE( 656)		if (::hx::IsNull( prop )) {
HXLINE( 658)			::haxe::Log_obj::trace(((HX_("[WARN] Shader float[] property ",b2,ab,3f,62) + name) + HX_(" not found.",39,f7,8e,4f)),::hx::SourceInfo(HX_("source/flixel/addons/display/FlxRuntimeShader.hx",e9,58,55,8b),658,HX_("flixel.addons.display.FlxRuntimeShader",e0,7e,20,77),HX_("getFloatArray",93,9e,9a,a0)));
HXLINE( 659)			return null();
            		}
HXLINE( 661)		return prop->value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRuntimeShader_obj,getFloatArray,return )

 ::Dynamic FlxRuntimeShader_obj::getInt(::String name){
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_669_getInt)
HXLINE( 670)		 ::openfl::display::ShaderParameter_Int prop = ( ( ::openfl::display::ShaderParameter_Int)(::Reflect_obj::field(this->get_data(),name)) );
HXLINE( 671)		bool _hx_tmp;
HXDLIN( 671)		if (::hx::IsNotNull( prop )) {
HXLINE( 671)			_hx_tmp = (prop->value->length == 0);
            		}
            		else {
HXLINE( 671)			_hx_tmp = true;
            		}
HXDLIN( 671)		if (_hx_tmp) {
HXLINE( 673)			::haxe::Log_obj::trace(((HX_("[WARN] Shader int property ",23,c3,c2,eb) + name) + HX_(" not found.",39,f7,8e,4f)),::hx::SourceInfo(HX_("source/flixel/addons/display/FlxRuntimeShader.hx",e9,58,55,8b),673,HX_("flixel.addons.display.FlxRuntimeShader",e0,7e,20,77),HX_("getInt",f9,45,1f,a3)));
HXLINE( 674)			return null();
            		}
HXLINE( 676)		return prop->value->__get(0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRuntimeShader_obj,getInt,return )

::Array< int > FlxRuntimeShader_obj::getIntArray(::String name){
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_684_getIntArray)
HXLINE( 685)		 ::openfl::display::ShaderParameter_Int prop = ( ( ::openfl::display::ShaderParameter_Int)(::Reflect_obj::field(this->get_data(),name)) );
HXLINE( 686)		if (::hx::IsNull( prop )) {
HXLINE( 688)			::haxe::Log_obj::trace(((HX_("[WARN] Shader int[] property ",45,27,29,e4) + name) + HX_(" not found.",39,f7,8e,4f)),::hx::SourceInfo(HX_("source/flixel/addons/display/FlxRuntimeShader.hx",e9,58,55,8b),688,HX_("flixel.addons.display.FlxRuntimeShader",e0,7e,20,77),HX_("getIntArray",e0,50,00,94)));
HXLINE( 689)			return null();
            		}
HXLINE( 691)		return prop->value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRuntimeShader_obj,getIntArray,return )

 ::Dynamic FlxRuntimeShader_obj::getBool(::String name){
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_699_getBool)
HXLINE( 700)		 ::openfl::display::ShaderParameter_Bool prop = ( ( ::openfl::display::ShaderParameter_Bool)(::Reflect_obj::field(this->get_data(),name)) );
HXLINE( 701)		bool _hx_tmp;
HXDLIN( 701)		if (::hx::IsNotNull( prop )) {
HXLINE( 701)			_hx_tmp = (prop->value->length == 0);
            		}
            		else {
HXLINE( 701)			_hx_tmp = true;
            		}
HXDLIN( 701)		if (_hx_tmp) {
HXLINE( 703)			::haxe::Log_obj::trace(((HX_("[WARN] Shader bool property ",2c,ff,30,f8) + name) + HX_(" not found.",39,f7,8e,4f)),::hx::SourceInfo(HX_("source/flixel/addons/display/FlxRuntimeShader.hx",e9,58,55,8b),703,HX_("flixel.addons.display.FlxRuntimeShader",e0,7e,20,77),HX_("getBool",e0,33,9e,13)));
HXLINE( 704)			return null();
            		}
HXLINE( 706)		return prop->value->__get(0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRuntimeShader_obj,getBool,return )

::Array< bool > FlxRuntimeShader_obj::getBoolArray(::String name){
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_714_getBoolArray)
HXLINE( 715)		 ::openfl::display::ShaderParameter_Bool prop = ( ( ::openfl::display::ShaderParameter_Bool)(::Reflect_obj::field(this->get_data(),name)) );
HXLINE( 716)		if (::hx::IsNull( prop )) {
HXLINE( 718)			::haxe::Log_obj::trace(((HX_("[WARN] Shader bool[] property ",8e,37,a5,95) + name) + HX_(" not found.",39,f7,8e,4f)),::hx::SourceInfo(HX_("source/flixel/addons/display/FlxRuntimeShader.hx",e9,58,55,8b),718,HX_("flixel.addons.display.FlxRuntimeShader",e0,7e,20,77),HX_("getBoolArray",99,9d,b6,8b)));
HXLINE( 719)			return null();
            		}
HXLINE( 721)		return prop->value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRuntimeShader_obj,getBoolArray,return )

::String FlxRuntimeShader_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_726_toString)
HXDLIN( 726)		return HX_("FlxRuntimeShader",6b,22,33,11);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxRuntimeShader_obj,toString,return )

::String FlxRuntimeShader_obj::BASE_VERTEX_HEADER;

::String FlxRuntimeShader_obj::BASE_VERTEX_BODY;

::String FlxRuntimeShader_obj::BASE_FRAGMENT_HEADER;

::String FlxRuntimeShader_obj::BASE_FRAGMENT_BODY;

::String FlxRuntimeShader_obj::DEFAULT_FRAGMENT_SOURCE;

::String FlxRuntimeShader_obj::DEFAULT_VERTEX_SOURCE;

::String FlxRuntimeShader_obj::PRAGMA_HEADER;

::String FlxRuntimeShader_obj::PRAGMA_BODY;

::String FlxRuntimeShader_obj::PRAGMA_PRECISION;

::String FlxRuntimeShader_obj::PRAGMA_VERSION;


::hx::ObjectPtr< FlxRuntimeShader_obj > FlxRuntimeShader_obj::__new(::String fragmentSource,::String vertexSource,::hx::Null< int >  __o_glslVersion) {
	::hx::ObjectPtr< FlxRuntimeShader_obj > __this = new FlxRuntimeShader_obj();
	__this->__construct(fragmentSource,vertexSource,__o_glslVersion);
	return __this;
}

::hx::ObjectPtr< FlxRuntimeShader_obj > FlxRuntimeShader_obj::__alloc(::hx::Ctx *_hx_ctx,::String fragmentSource,::String vertexSource,::hx::Null< int >  __o_glslVersion) {
	FlxRuntimeShader_obj *__this = (FlxRuntimeShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxRuntimeShader_obj), true, "flixel.addons.display.FlxRuntimeShader"));
	*(void **)__this = FlxRuntimeShader_obj::_hx_vtable;
	__this->__construct(fragmentSource,vertexSource,__o_glslVersion);
	return __this;
}

FlxRuntimeShader_obj::FlxRuntimeShader_obj()
{
}

void FlxRuntimeShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxRuntimeShader);
	HX_MARK_MEMBER_NAME(_glslVersion,"_glslVersion");
	HX_MARK_MEMBER_NAME(_hx___fieldList,"__fieldList");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxRuntimeShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_glslVersion,"_glslVersion");
	HX_VISIT_MEMBER_NAME(_hx___fieldList,"__fieldList");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxRuntimeShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"setInt") ) { return ::hx::Val( setInt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getInt") ) { return ::hx::Val( getInt_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setBool") ) { return ::hx::Val( setBool_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBool") ) { return ::hx::Val( getBool_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__initGL") ) { return ::hx::Val( _hx___initGL_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFloat") ) { return ::hx::Val( setFloat_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFloat") ) { return ::hx::Val( getFloat_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__fieldList") ) { return ::hx::Val( _hx___fieldList ); }
		if (HX_FIELD_EQ(inName,"setIntArray") ) { return ::hx::Val( setIntArray_dyn() ); }
		if (HX_FIELD_EQ(inName,"getIntArray") ) { return ::hx::Val( getIntArray_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_glslVersion") ) { return ::hx::Val( _glslVersion ); }
		if (HX_FIELD_EQ(inName,"thisHasField") ) { return ::hx::Val( thisHasField_dyn() ); }
		if (HX_FIELD_EQ(inName,"setBoolArray") ) { return ::hx::Val( setBoolArray_dyn() ); }
		if (HX_FIELD_EQ(inName,"setSampler2D") ) { return ::hx::Val( setSampler2D_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBoolArray") ) { return ::hx::Val( getBoolArray_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setFloatArray") ) { return ::hx::Val( setFloatArray_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFloatArray") ) { return ::hx::Val( getFloatArray_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__processGLData") ) { return ::hx::Val( _hx___processGLData_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"processVertexSource") ) { return ::hx::Val( processVertexSource_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"processFragmentSource") ) { return ::hx::Val( processFragmentSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"buildPrecisionHeaders") ) { return ::hx::Val( buildPrecisionHeaders_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxRuntimeShader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"PRAGMA_BODY") ) { outValue = ( PRAGMA_BODY ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"PRAGMA_HEADER") ) { outValue = ( PRAGMA_HEADER ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"PRAGMA_VERSION") ) { outValue = ( PRAGMA_VERSION ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"BASE_VERTEX_BODY") ) { outValue = ( BASE_VERTEX_BODY ); return true; }
		if (HX_FIELD_EQ(inName,"PRAGMA_PRECISION") ) { outValue = ( PRAGMA_PRECISION ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"BASE_VERTEX_HEADER") ) { outValue = ( BASE_VERTEX_HEADER ); return true; }
		if (HX_FIELD_EQ(inName,"BASE_FRAGMENT_BODY") ) { outValue = ( BASE_FRAGMENT_BODY ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"BASE_FRAGMENT_HEADER") ) { outValue = ( BASE_FRAGMENT_HEADER ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"DEFAULT_VERTEX_SOURCE") ) { outValue = ( DEFAULT_VERTEX_SOURCE ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"DEFAULT_FRAGMENT_SOURCE") ) { outValue = ( DEFAULT_FRAGMENT_SOURCE ); return true; }
	}
	return false;
}

::hx::Val FlxRuntimeShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"__fieldList") ) { _hx___fieldList=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_glslVersion") ) { _glslVersion=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxRuntimeShader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"PRAGMA_BODY") ) { PRAGMA_BODY=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"PRAGMA_HEADER") ) { PRAGMA_HEADER=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"PRAGMA_VERSION") ) { PRAGMA_VERSION=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"BASE_VERTEX_BODY") ) { BASE_VERTEX_BODY=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"PRAGMA_PRECISION") ) { PRAGMA_PRECISION=ioValue.Cast< ::String >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"BASE_VERTEX_HEADER") ) { BASE_VERTEX_HEADER=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"BASE_FRAGMENT_BODY") ) { BASE_FRAGMENT_BODY=ioValue.Cast< ::String >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"BASE_FRAGMENT_HEADER") ) { BASE_FRAGMENT_HEADER=ioValue.Cast< ::String >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"DEFAULT_VERTEX_SOURCE") ) { DEFAULT_VERTEX_SOURCE=ioValue.Cast< ::String >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"DEFAULT_FRAGMENT_SOURCE") ) { DEFAULT_FRAGMENT_SOURCE=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void FlxRuntimeShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_glslVersion",bb,c6,ee,8c));
	outFields->push(HX_("__fieldList",18,0b,2e,0d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxRuntimeShader_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxRuntimeShader_obj,_glslVersion),HX_("_glslVersion",bb,c6,ee,8c)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(FlxRuntimeShader_obj,_hx___fieldList),HX_("__fieldList",18,0b,2e,0d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxRuntimeShader_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &FlxRuntimeShader_obj::BASE_VERTEX_HEADER,HX_("BASE_VERTEX_HEADER",5a,f0,bf,21)},
	{::hx::fsString,(void *) &FlxRuntimeShader_obj::BASE_VERTEX_BODY,HX_("BASE_VERTEX_BODY",2f,40,b5,37)},
	{::hx::fsString,(void *) &FlxRuntimeShader_obj::BASE_FRAGMENT_HEADER,HX_("BASE_FRAGMENT_HEADER",ee,55,99,a4)},
	{::hx::fsString,(void *) &FlxRuntimeShader_obj::BASE_FRAGMENT_BODY,HX_("BASE_FRAGMENT_BODY",c3,58,28,25)},
	{::hx::fsString,(void *) &FlxRuntimeShader_obj::DEFAULT_FRAGMENT_SOURCE,HX_("DEFAULT_FRAGMENT_SOURCE",cc,19,6f,0f)},
	{::hx::fsString,(void *) &FlxRuntimeShader_obj::DEFAULT_VERTEX_SOURCE,HX_("DEFAULT_VERTEX_SOURCE",38,70,42,f4)},
	{::hx::fsString,(void *) &FlxRuntimeShader_obj::PRAGMA_HEADER,HX_("PRAGMA_HEADER",f0,25,fe,fe)},
	{::hx::fsString,(void *) &FlxRuntimeShader_obj::PRAGMA_BODY,HX_("PRAGMA_BODY",45,c4,b9,a7)},
	{::hx::fsString,(void *) &FlxRuntimeShader_obj::PRAGMA_PRECISION,HX_("PRAGMA_PRECISION",9b,f4,da,14)},
	{::hx::fsString,(void *) &FlxRuntimeShader_obj::PRAGMA_VERSION,HX_("PRAGMA_VERSION",35,a1,4c,39)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxRuntimeShader_obj_sMemberFields[] = {
	HX_("_glslVersion",bb,c6,ee,8c),
	HX_("processFragmentSource",9a,3b,3f,ac),
	HX_("processVertexSource",6e,fc,84,60),
	HX_("buildPrecisionHeaders",f6,5b,f9,1e),
	HX_("__initGL",55,c8,7b,3f),
	HX_("__fieldList",18,0b,2e,0d),
	HX_("thisHasField",7e,2f,b4,2c),
	HX_("__processGLData",7e,0f,78,7c),
	HX_("setFloat",9a,2e,cb,10),
	HX_("setFloatArray",9f,80,a0,e5),
	HX_("setInt",6d,9a,67,6f),
	HX_("setIntArray",ec,57,6d,9e),
	HX_("setBool",ec,c4,9f,06),
	HX_("setBoolArray",0d,c1,af,a0),
	HX_("setSampler2D",d8,02,db,81),
	HX_("getFloat",26,d5,6d,62),
	HX_("getFloatArray",93,9e,9a,a0),
	HX_("getInt",f9,45,1f,a3),
	HX_("getIntArray",e0,50,00,94),
	HX_("getBool",e0,33,9e,13),
	HX_("getBoolArray",99,9d,b6,8b),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

static void FlxRuntimeShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRuntimeShader_obj::BASE_VERTEX_HEADER,"BASE_VERTEX_HEADER");
	HX_MARK_MEMBER_NAME(FlxRuntimeShader_obj::BASE_VERTEX_BODY,"BASE_VERTEX_BODY");
	HX_MARK_MEMBER_NAME(FlxRuntimeShader_obj::BASE_FRAGMENT_HEADER,"BASE_FRAGMENT_HEADER");
	HX_MARK_MEMBER_NAME(FlxRuntimeShader_obj::BASE_FRAGMENT_BODY,"BASE_FRAGMENT_BODY");
	HX_MARK_MEMBER_NAME(FlxRuntimeShader_obj::DEFAULT_FRAGMENT_SOURCE,"DEFAULT_FRAGMENT_SOURCE");
	HX_MARK_MEMBER_NAME(FlxRuntimeShader_obj::DEFAULT_VERTEX_SOURCE,"DEFAULT_VERTEX_SOURCE");
	HX_MARK_MEMBER_NAME(FlxRuntimeShader_obj::PRAGMA_HEADER,"PRAGMA_HEADER");
	HX_MARK_MEMBER_NAME(FlxRuntimeShader_obj::PRAGMA_BODY,"PRAGMA_BODY");
	HX_MARK_MEMBER_NAME(FlxRuntimeShader_obj::PRAGMA_PRECISION,"PRAGMA_PRECISION");
	HX_MARK_MEMBER_NAME(FlxRuntimeShader_obj::PRAGMA_VERSION,"PRAGMA_VERSION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxRuntimeShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRuntimeShader_obj::BASE_VERTEX_HEADER,"BASE_VERTEX_HEADER");
	HX_VISIT_MEMBER_NAME(FlxRuntimeShader_obj::BASE_VERTEX_BODY,"BASE_VERTEX_BODY");
	HX_VISIT_MEMBER_NAME(FlxRuntimeShader_obj::BASE_FRAGMENT_HEADER,"BASE_FRAGMENT_HEADER");
	HX_VISIT_MEMBER_NAME(FlxRuntimeShader_obj::BASE_FRAGMENT_BODY,"BASE_FRAGMENT_BODY");
	HX_VISIT_MEMBER_NAME(FlxRuntimeShader_obj::DEFAULT_FRAGMENT_SOURCE,"DEFAULT_FRAGMENT_SOURCE");
	HX_VISIT_MEMBER_NAME(FlxRuntimeShader_obj::DEFAULT_VERTEX_SOURCE,"DEFAULT_VERTEX_SOURCE");
	HX_VISIT_MEMBER_NAME(FlxRuntimeShader_obj::PRAGMA_HEADER,"PRAGMA_HEADER");
	HX_VISIT_MEMBER_NAME(FlxRuntimeShader_obj::PRAGMA_BODY,"PRAGMA_BODY");
	HX_VISIT_MEMBER_NAME(FlxRuntimeShader_obj::PRAGMA_PRECISION,"PRAGMA_PRECISION");
	HX_VISIT_MEMBER_NAME(FlxRuntimeShader_obj::PRAGMA_VERSION,"PRAGMA_VERSION");
};

#endif

::hx::Class FlxRuntimeShader_obj::__mClass;

static ::String FlxRuntimeShader_obj_sStaticFields[] = {
	HX_("BASE_VERTEX_HEADER",5a,f0,bf,21),
	HX_("BASE_VERTEX_BODY",2f,40,b5,37),
	HX_("BASE_FRAGMENT_HEADER",ee,55,99,a4),
	HX_("BASE_FRAGMENT_BODY",c3,58,28,25),
	HX_("DEFAULT_FRAGMENT_SOURCE",cc,19,6f,0f),
	HX_("DEFAULT_VERTEX_SOURCE",38,70,42,f4),
	HX_("PRAGMA_HEADER",f0,25,fe,fe),
	HX_("PRAGMA_BODY",45,c4,b9,a7),
	HX_("PRAGMA_PRECISION",9b,f4,da,14),
	HX_("PRAGMA_VERSION",35,a1,4c,39),
	::String(null())
};

void FlxRuntimeShader_obj::__register()
{
	FlxRuntimeShader_obj _hx_dummy;
	FlxRuntimeShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.display.FlxRuntimeShader",e0,7e,20,77);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxRuntimeShader_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxRuntimeShader_obj::__SetStatic;
	__mClass->mMarkFunc = FlxRuntimeShader_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxRuntimeShader_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxRuntimeShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxRuntimeShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxRuntimeShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxRuntimeShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxRuntimeShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxRuntimeShader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_35_boot)
HXDLIN(  35)		BASE_VERTEX_HEADER = HX_("\n\t\t#pragma version\n\n\t\t#pragma precision\n\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t",ba,49,b7,f0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_53_boot)
HXDLIN(  53)		BASE_VERTEX_BODY = HX_("\n\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\t\tif (openfl_HasColorTransform) {\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\t\t}\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\t",a1,96,4b,c0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_63_boot)
HXDLIN(  63)		BASE_FRAGMENT_HEADER = (HX_("\n\t\t#pragma version\n\n\t\t#pragma precision\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\t",e6,0e,d1,27) + HX_("\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t",c9,16,d4,a1));
            	}
{
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_115_boot)
HXDLIN( 115)		BASE_FRAGMENT_BODY = HX_("\n\t\tvec4 color = texture2D (bitmap, openfl_TextureCoordv);\n\t\tif (color.a == 0.0) {\n\t\t\tgl_FragColor = vec4 (0.0, 0.0, 0.0, 0.0);\n\t\t} else if (openfl_HasColorTransform) {\n\t\t\tcolor = vec4 (color.rgb / color.a, color.a);\n\t\t\tmat4 colorMultiplier = mat4 (0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = 1.0; // openfl_ColorMultiplierv.w;\n\t\t\tcolor = clamp (openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\t\t\tif (color.a > 0.0) {\n\t\t\t\tgl_FragColor = vec4 (color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t} else {\n\t\t\t\tgl_FragColor = vec4 (0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\t\t} else {\n\t\t\tgl_FragColor = color * openfl_Alphav;\n\t\t}\n\t",ba,e4,39,e5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_138_boot)
HXDLIN( 138)		DEFAULT_FRAGMENT_SOURCE = HX_("\n\t\t#pragma header\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\tgl_FragColor = flixel_texture2D(bitmap, openfl_TextureCoordv);\n\t\t}\n\t",f0,1b,a7,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_156_boot)
HXDLIN( 156)		DEFAULT_VERTEX_SOURCE = HX_("\n\t\t#pragma header\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\t#pragma body\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}\n\t",74,c4,fb,f8);
            	}
{
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_186_boot)
HXDLIN( 186)		PRAGMA_HEADER = HX_("#pragma header",6e,d2,fa,47);
            	}
{
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_187_boot)
HXDLIN( 187)		PRAGMA_BODY = HX_("#pragma body",43,99,98,1b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_188_boot)
HXDLIN( 188)		PRAGMA_PRECISION = HX_("#pragma precision",fd,0e,73,95);
            	}
{
            	HX_STACKFRAME(&_hx_pos_880c0549bfe0a230_189_boot)
HXDLIN( 189)		PRAGMA_VERSION = HX_("#pragma version",17,e3,66,cd);
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace display
