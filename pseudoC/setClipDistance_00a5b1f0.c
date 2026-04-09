// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setClipDistance
// Entry Point: 00a5b1f0
// Size: 40 bytes
// Signature: undefined __thiscall setClipDistance(RawTransformGroup * this, float param_1)


/* RawTransformGroup::setClipDistance(float) */

void __thiscall RawTransformGroup::setClipDistance(RawTransformGroup *this,float param_1)

{
  if (*(float *)(this + 0x118) != param_1) {
    *(float *)(this + 0x118) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00a5b210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x28))(this,8,0);
    return;
  }
  return;
}


