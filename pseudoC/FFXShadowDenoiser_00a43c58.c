// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FFXShadowDenoiser
// Entry Point: 00a43c58
// Size: 268 bytes
// Signature: undefined __thiscall ~FFXShadowDenoiser(FFXShadowDenoiser * this)


/* FFXShadowDenoiser::~FFXShadowDenoiser() */

void __thiscall FFXShadowDenoiser::~FFXShadowDenoiser(FFXShadowDenoiser *this)

{
  *(undefined ***)this = &PTR__FFXShadowDenoiser_00fe3268;
  if (*(long **)(this + 0x128) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x128) + 8))();
  }
  if (*(long **)(this + 0x150) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x150) + 8))();
  }
  if (*(long **)(this + 0x158) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x158) + 8))();
  }
  if (*(long **)(this + 0x160) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x160) + 8))();
  }
  if (*(long **)(this + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x168) + 8))();
  }
  if (*(long **)(this + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x170) + 8))();
  }
  if (*(long **)(this + 0x1c0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1c0) + 8))();
  }
  if (*(long **)(this + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x148) + 8))();
  }
  if (*(long **)(this + 0x120) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x120) + 8))();
  }
  AdhocShader::ShaderVariants::~ShaderVariants((ShaderVariants *)(this + 0x1a8));
  AdhocShader::ShaderVariants::~ShaderVariants((ShaderVariants *)(this + 400));
  AdhocShader::ShaderVariants::~ShaderVariants((ShaderVariants *)(this + 0x178));
  AdhocShader::ShaderVariants::~ShaderVariants((ShaderVariants *)(this + 0x130));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x20));
  ShadowDenoiser::~ShadowDenoiser((ShadowDenoiser *)this);
  return;
}


