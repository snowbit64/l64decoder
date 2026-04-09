// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVoicePause
// Entry Point: 00e3fb34
// Size: 56 bytes
// Signature: undefined __thiscall setVoicePause(Soloud * this, uint param_1, int param_2)


/* SoLoud::Soloud::setVoicePause(unsigned int, int) */

void __thiscall SoLoud::Soloud::setVoicePause(Soloud *this,uint param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(this + (ulong)param_1 * 8 + 0xa0);
  this[0x224f0] = (Soloud)0x1;
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x120) = 0;
    *(uint *)(lVar1 + 0x14) =
         *(uint *)(lVar1 + 0x14) & 0xfffffffc |
         *(uint *)(lVar1 + 0x14) & 1 | (uint)(param_2 != 0) << 1;
  }
  return;
}


