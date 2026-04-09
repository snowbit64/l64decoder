// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ShadowDenoiser
// Entry Point: 00a44ee0
// Size: 32 bytes
// Signature: undefined __thiscall ShadowDenoiser(ShadowDenoiser * this, IRenderDevice * param_1, RenderController * param_2)


/* ShadowDenoiser::ShadowDenoiser(IRenderDevice*, RenderController*) */

void __thiscall
ShadowDenoiser::ShadowDenoiser
          (ShadowDenoiser *this,IRenderDevice *param_1,RenderController *param_2)

{
  *(RenderController **)(this + 8) = param_2;
  *(IRenderDevice **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x18) = 0xffffffffffffffff;
  *(undefined ***)this = &PTR__ShadowDenoiser_00fe3310;
  return;
}


