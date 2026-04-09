// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stop
// Entry Point: 00869de0
// Size: 28 bytes
// Signature: undefined __thiscall stop(ConditionalAnimationClipInfo * this, CharacterSet * param_1, int param_2)


/* ConditionalAnimationClipInfo::stop(CharacterSet&, int) */

void __thiscall
ConditionalAnimationClipInfo::stop
          (ConditionalAnimationClipInfo *this,CharacterSet *param_1,int param_2)

{
  *(uint *)(param_1 + (ulong)(uint)param_2 * 4 + 0x54) =
       *(uint *)(param_1 + (ulong)(uint)param_2 * 4 + 0x54) & 0xfffffffb;
  CharacterSet::clearClip(param_1,param_2);
  return;
}


