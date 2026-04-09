// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isShadowMergedWithLight
// Entry Point: 00a556c8
// Size: 60 bytes
// Signature: undefined __thiscall isShadowMergedWithLight(LightSource * this, LightSource * param_1)


/* LightSource::isShadowMergedWithLight(LightSource const*) const */

bool __thiscall LightSource::isShadowMergedWithLight(LightSource *this,LightSource *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = **(long **)(this + 0x158);
  lVar2 = (*(long **)(this + 0x158))[1] - lVar1;
  if (lVar2 != 0) {
    uVar4 = 0;
    uVar5 = lVar2 >> 3;
    do {
      lVar2 = uVar4 * 8;
      uVar4 = (ulong)((int)uVar4 + 1);
      bVar3 = *(LightSource **)(lVar1 + lVar2) == param_1;
    } while ((!bVar3 && uVar4 <= uVar5) && (bVar3 || uVar5 != uVar4));
    return bVar3;
  }
  return false;
}


