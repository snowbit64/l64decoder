// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMinClipDistance
// Entry Point: 00a5b218
// Size: 40 bytes
// Signature: undefined __thiscall setMinClipDistance(RawTransformGroup * this, float param_1)


/* RawTransformGroup::setMinClipDistance(float) */

void __thiscall RawTransformGroup::setMinClipDistance(RawTransformGroup *this,float param_1)

{
  if (*(float *)(this + 0x11c) != param_1) {
    *(float *)(this + 0x11c) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00a5b238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x28))(this,8,0);
    return;
  }
  return;
}


