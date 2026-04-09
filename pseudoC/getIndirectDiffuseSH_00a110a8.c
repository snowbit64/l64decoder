// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIndirectDiffuseSH
// Entry Point: 00a110a8
// Size: 28 bytes
// Signature: undefined __thiscall getIndirectDiffuseSH(EnvMapBlender * this, float * param_1, float * param_2, float * param_3)


/* EnvMapBlender::getIndirectDiffuseSH(float*, float*, float*) const */

void __thiscall
EnvMapBlender::getIndirectDiffuseSH
          (EnvMapBlender *this,float *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0x500);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(this + 0x508);
  *(undefined8 *)param_1 = uVar1;
  uVar1 = *(undefined8 *)(this + 0x510);
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(this + 0x518);
  *(undefined8 *)param_2 = uVar1;
  uVar1 = *(undefined8 *)(this + 0x520);
  *(undefined8 *)(param_3 + 2) = *(undefined8 *)(this + 0x528);
  *(undefined8 *)param_3 = uVar1;
  return;
}


