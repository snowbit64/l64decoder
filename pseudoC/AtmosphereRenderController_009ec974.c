// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AtmosphereRenderController
// Entry Point: 009ec974
// Size: 232 bytes
// Signature: undefined __thiscall ~AtmosphereRenderController(AtmosphereRenderController * this)


/* AtmosphereRenderController::~AtmosphereRenderController() */

void __thiscall
AtmosphereRenderController::~AtmosphereRenderController(AtmosphereRenderController *this)

{
  if (*(long **)(this + 0x918) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x918) + 8))();
  }
  if (*(long **)(this + 0x928) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x928) + 8))();
  }
  if (*(long **)(this + 0x930) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x930) + 8))();
  }
  if (*(long **)(this + 0x938) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x938) + 8))();
  }
  if (*(long **)(this + 0x940) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x940) + 8))();
  }
  if (*(long **)(this + 0x948) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x948) + 8))();
  }
  std::__ndk1::__vector_base<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
  ~__vector_base((__vector_base<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)
                 (this + 0x900));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x800));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x700));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x600));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x500));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x400));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x300));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x200));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x100));
  AdhocShader::~AdhocShader((AdhocShader *)this);
  return;
}


