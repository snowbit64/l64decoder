// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDistance
// Entry Point: 00a5883c
// Size: 240 bytes
// Signature: undefined __thiscall setDistance(LODTransformGroup * this, uint param_1, float param_2)


/* LODTransformGroup::setDistance(unsigned int, float) */

void __thiscall LODTransformGroup::setDistance(LODTransformGroup *this,uint param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  if (param_1 == 0) goto LAB_00a58900;
  *(float *)(this + (ulong)param_1 * 4 + 0x154) = param_2;
  if (param_2 == 0.0) {
    if (param_1 + 1 < 4) {
      memset(this + (ulong)(param_1 + 1) * 4 + 0x154,0,(ulong)(2 - param_1) * 4 + 4);
    }
    goto LAB_00a58900;
  }
  fVar2 = *(float *)(this + 0x158);
  if (fVar2 == 0.0) {
    if (param_1 < 2) goto LAB_00a58900;
    *(float *)(this + 0x158) = param_2;
    fVar2 = param_2;
  }
  fVar1 = *(float *)(this + 0x15c);
  if (fVar1 == 0.0) {
    if (param_1 < 3) goto LAB_00a58900;
LAB_00a588e0:
    *(float *)(this + 0x15c) = fVar2;
    fVar1 = fVar2;
  }
  else if (fVar1 < fVar2) goto LAB_00a588e0;
  if (*(float *)(this + 0x160) == 0.0) {
    if (param_1 < 4) goto LAB_00a58900;
  }
  else if (fVar1 <= *(float *)(this + 0x160)) goto LAB_00a58900;
  *(float *)(this + 0x160) = fVar1;
LAB_00a58900:
                    /* WARNING: Could not recover jumptable at 0x00a5891c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))(this,4,0);
  return;
}


