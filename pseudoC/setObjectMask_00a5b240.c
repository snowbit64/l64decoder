// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setObjectMask
// Entry Point: 00a5b240
// Size: 76 bytes
// Signature: undefined __thiscall setObjectMask(RawTransformGroup * this, uint param_1)


/* RawTransformGroup::setObjectMask(unsigned int) */

void __thiscall RawTransformGroup::setObjectMask(RawTransformGroup *this,uint param_1)

{
  if (*(uint *)(this + 0x120) == param_1) {
    if (param_1 != 0) {
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x400;
    }
    return;
  }
  *(uint *)(this + 0x120) = param_1;
  *(uint *)(this + 0x40) =
       *(uint *)(this + 0x40) & 0xfffff800 |
       *(uint *)(this + 0x40) & 0x3ff | (uint)(param_1 != 0) << 10;
                    /* WARNING: Could not recover jumptable at 0x00a5b288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))(this,0x30,0);
  return;
}


