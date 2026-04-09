// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_35
// Entry Point: 00aabcc8
// Size: 416 bytes
// Signature: undefined _INIT_35(void)


void _INIT_35(void)

{
  ShaderCapabilities::ShaderCapabilities
            ((ShaderCapabilities *)ShaderCapabilities::s_scPS4,3,4,0x10000,4,0x10000,
             "#define RENDER_DEVICE_GNM\n#define REQUIRE_EXACT_VERTEX_ATTRIBUTES\n#define FLIP_TEXCOORD_Y\n"
             ,"",1);
  __cxa_atexit(ShaderCapabilities::~ShaderCapabilities,ShaderCapabilities::s_scPS4,
               &PTR_LOOP_00fd8de0);
  ShaderCapabilities::ShaderCapabilities
            ((ShaderCapabilities *)ShaderCapabilities::s_scPS5,4,4,0x10000,4,0x10000,
             "#define RENDER_DEVICE_AGC\n#define REQUIRE_EXACT_VERTEX_ATTRIBUTES\n#define FLIP_TEXCOORD_Y\n"
             ,"",5);
  __cxa_atexit(ShaderCapabilities::~ShaderCapabilities,ShaderCapabilities::s_scPS5,
               &PTR_LOOP_00fd8de0);
  ShaderCapabilities::ShaderCapabilities
            ((ShaderCapabilities *)ShaderCapabilities::s_scSwitch,6,1,0x100,1,0xe0,
             "#define RENDER_DEVICE_NVN\n#define REQUIRE_EXACT_VERTEX_ATTRIBUTES\n#define FLIP_TEXCOORD_Y\n"
             ,"",4);
  __cxa_atexit(ShaderCapabilities::~ShaderCapabilities,ShaderCapabilities::s_scSwitch,
               &PTR_LOOP_00fd8de0);
  ShaderCapabilities::ShaderCapabilities
            ((ShaderCapabilities *)ShaderCapabilities::s_scXboxOne,2,4,0x10000,4,0x10000,
             "#define RENDER_DEVICE_DIRECTX_12\n#define REQUIRE_EXACT_VERTEX_ATTRIBUTES\n#define FLIP_TEXCOORD_Y\n"
             ,"",1);
  __cxa_atexit(ShaderCapabilities::~ShaderCapabilities,ShaderCapabilities::s_scXboxOne,
               &PTR_LOOP_00fd8de0);
  ShaderCapabilities::ShaderCapabilities
            ((ShaderCapabilities *)ShaderCapabilities::s_scNull,0,3,0x10000,3,0x10000,"","",0);
  __cxa_atexit(ShaderCapabilities::~ShaderCapabilities,ShaderCapabilities::s_scNull,
               &PTR_LOOP_00fd8de0);
  return;
}


