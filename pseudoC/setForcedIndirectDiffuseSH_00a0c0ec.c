// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setForcedIndirectDiffuseSH
// Entry Point: 00a0c0ec
// Size: 56 bytes
// Signature: undefined __thiscall setForcedIndirectDiffuseSH(IndirectLightRenderController * this, float * param_1, float * param_2, float * param_3)


/* IndirectLightRenderController::setForcedIndirectDiffuseSH(float const*, float const*, float
   const*) */

void __thiscall
IndirectLightRenderController::setForcedIndirectDiffuseSH
          (IndirectLightRenderController *this,float *param_1,float *param_2,float *param_3)

{
  IndirectLightRenderController IVar1;
  undefined8 uVar2;
  
  IVar1 = (IndirectLightRenderController)0x0;
  if (((param_1 != (float *)0x0) && (param_2 != (float *)0x0)) && (param_3 != (float *)0x0)) {
    uVar2 = *(undefined8 *)param_1;
    IVar1 = (IndirectLightRenderController)0x1;
    *(undefined8 *)(this + 0x154) = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)(this + 0x14c) = uVar2;
    uVar2 = *(undefined8 *)param_2;
    *(undefined8 *)(this + 0x164) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(this + 0x15c) = uVar2;
    uVar2 = *(undefined8 *)param_3;
    *(undefined8 *)(this + 0x174) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(this + 0x16c) = uVar2;
  }
  this[0x148] = IVar1;
  return;
}


