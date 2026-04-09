// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DensityAnimationMap
// Entry Point: 00a6b644
// Size: 188 bytes
// Signature: undefined __thiscall ~DensityAnimationMap(DensityAnimationMap * this)


/* DensityAnimationMap::~DensityAnimationMap() */

void __thiscall DensityAnimationMap::~DensityAnimationMap(DensityAnimationMap *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__DensityAnimationMap_00fe3cb0;
  if (*(long **)(this + 0x80) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x80) + 8))();
  }
  if (*(long **)(this + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x88) + 8))();
  }
  if (*(long **)(this + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x90) + 8))();
  }
  if (*(long **)(this + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x98) + 8))();
  }
  if (*(long **)(this + 0xa0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xa0) + 8))();
  }
  pvVar1 = *(void **)(this + 0x408);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x410) = pvVar1;
    operator_delete(pvVar1);
  }
  FullScreenRenderController::~FullScreenRenderController
            ((FullScreenRenderController *)(this + 0x2c0));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x1c0));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0xc0));
  std::__ndk1::__vector_base<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
  ~__vector_base((__vector_base<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)
                 (this + 0xa8));
  return;
}


