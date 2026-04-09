// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findGrainIdxFromWavIdx
// Entry Point: 008a4a64
// Size: 116 bytes
// Signature: undefined __thiscall findGrainIdxFromWavIdx(GranularSynthesisRuntimeSettings * this, uint param_1)


/* GranularSynthesisRuntimeSettings::findGrainIdxFromWavIdx(unsigned int) const */

ulong __thiscall
GranularSynthesisRuntimeSettings::findGrainIdxFromWavIdx
          (GranularSynthesisRuntimeSettings *this,uint param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  
  lVar2 = *(long *)(this + 0x30);
  if (lVar2 == *(long *)(this + 0x38)) {
    return 0xffffffff;
  }
  uVar5 = 0;
  iVar6 = (int)((ulong)(*(long *)(this + 0x38) - lVar2) >> 4) + -1;
  do {
    while( true ) {
      iVar4 = (int)uVar5;
      if (iVar6 <= iVar4) {
        return uVar5;
      }
      iVar3 = iVar6 - iVar4;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      uVar1 = iVar4 + (iVar3 >> 1);
      if (*(uint *)(lVar2 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4)) <=
          param_1) break;
      iVar6 = uVar1 - 1;
    }
    uVar5 = (ulong)(uVar1 + 1);
  } while (*(uint *)(lVar2 + (long)(int)uVar1 * 0x10 + 4) < param_1);
  return (ulong)uVar1;
}


