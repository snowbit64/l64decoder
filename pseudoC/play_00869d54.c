// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: play
// Entry Point: 00869d54
// Size: 140 bytes
// Signature: undefined __thiscall play(ConditionalAnimationClipInfo * this, CharacterSet * param_1, int param_2, float param_3)


/* ConditionalAnimationClipInfo::play(CharacterSet&, int, float) */

void __thiscall
ConditionalAnimationClipInfo::play
          (ConditionalAnimationClipInfo *this,CharacterSet *param_1,int param_2,float param_3)

{
  float fVar1;
  
  if (-1 < (int)*(uint *)(this + 0x20)) {
    CharacterSet::assignClip(param_1,param_2,*(uint *)(this + 0x20));
    *(uint *)(param_1 + (ulong)(uint)param_2 * 4 + 0x54) =
         *(uint *)(param_1 + (ulong)(uint)param_2 * 4 + 0x54) & 0xfffffffb |
         (uint)(byte)this[0x24] << 2;
    fVar1 = *(float *)(this + 0x1c);
    if (param_3 != 0.0) {
      fVar1 = param_3;
    }
    CharacterSet::setTime(param_1,param_2,fVar1);
    return;
  }
  return;
}


