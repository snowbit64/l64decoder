// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIndirectDiffuseSH
// Entry Point: 00a1fb0c
// Size: 92 bytes
// Signature: undefined __thiscall getIndirectDiffuseSH(IndirectLightRenderController * this, float * param_1, float * param_2, float * param_3)


/* IndirectLightRenderController::getIndirectDiffuseSH(float*, float*, float*) const */

void __thiscall
IndirectLightRenderController::getIndirectDiffuseSH
          (IndirectLightRenderController *this,float *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  
  if (this[0x148] != (IndirectLightRenderController)0x0) {
    uVar1 = *(undefined8 *)(this + 0x14c);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(this + 0x154);
    *(undefined8 *)param_1 = uVar1;
    uVar1 = *(undefined8 *)(this + 0x15c);
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(this + 0x164);
    *(undefined8 *)param_2 = uVar1;
    uVar1 = *(undefined8 *)(this + 0x16c);
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(this + 0x174);
    *(undefined8 *)param_3 = uVar1;
    return;
  }
  if ((this[0xe] == (IndirectLightRenderController)0x0) &&
     (this[0x1d0] != (IndirectLightRenderController)0x0)) {
    uVar1 = *(undefined8 *)(this + 0x1a0);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(this + 0x1a8);
    *(undefined8 *)param_1 = uVar1;
    uVar1 = *(undefined8 *)(this + 0x1b0);
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(this + 0x1b8);
    *(undefined8 *)param_2 = uVar1;
    uVar1 = *(undefined8 *)(this + 0x1c0);
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(this + 0x1c8);
    *(undefined8 *)param_3 = uVar1;
    return;
  }
  EnvMapBlender::getIndirectDiffuseSH(*(EnvMapBlender **)(this + 0x198),param_1,param_2,param_3);
  return;
}


