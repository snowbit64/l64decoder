// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ReflectionRenderController
// Entry Point: 00a24588
// Size: 36 bytes
// Signature: undefined __thiscall ReflectionRenderController(ReflectionRenderController * this, RenderController * param_1)


/* ReflectionRenderController::ReflectionRenderController(RenderController*) */

void __thiscall
ReflectionRenderController::ReflectionRenderController
          (ReflectionRenderController *this,RenderController *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(ReflectionRenderController **)(this + 0x38) = this + 0x40;
  *(RenderController **)this = param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


