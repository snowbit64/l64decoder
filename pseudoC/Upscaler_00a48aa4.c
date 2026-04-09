// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Upscaler
// Entry Point: 00a48aa4
// Size: 100 bytes
// Signature: undefined __thiscall ~Upscaler(Upscaler * this)


/* Upscaler::~Upscaler() */

void __thiscall Upscaler::~Upscaler(Upscaler *this)

{
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 8))();
  }
  if (*(long **)(this + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x60) + 8))();
  }
  if (*(long **)(this + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x58) + 8))();
  }
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x70));
  std::__ndk1::__vector_base<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
  ~__vector_base((__vector_base<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)
                 this);
  return;
}


