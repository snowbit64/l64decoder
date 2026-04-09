// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ShadowRenderController
// Entry Point: 00a45080
// Size: 52 bytes
// Signature: undefined __thiscall ShadowRenderController(ShadowRenderController * this, RenderController * param_1)


/* ShadowRenderController::ShadowRenderController(RenderController*) */

void __thiscall
ShadowRenderController::ShadowRenderController
          (ShadowRenderController *this,RenderController *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = 0;
  *(RenderController **)this = param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  return;
}


