// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: containsLight
// Entry Point: 00a55704
// Size: 64 bytes
// Signature: undefined __thiscall containsLight(MergedShadowGroup * this, LightSource * param_1)


/* LightSource::MergedShadowGroup::containsLight(LightSource const*) const */

bool __thiscall
LightSource::MergedShadowGroup::containsLight(MergedShadowGroup *this,LightSource *param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = *(long *)(this + 8) - *(long *)this;
  if (lVar1 != 0) {
    uVar6 = lVar1 >> 3;
    uVar5 = 0;
    uVar7 = 1;
    do {
      bVar4 = *(LightSource **)(*(long *)this + uVar5 * 8) == param_1;
      bVar3 = uVar7 <= uVar6;
      bVar2 = uVar6 != uVar7;
      uVar5 = uVar7;
      uVar7 = (ulong)((int)uVar7 + 1);
    } while ((!bVar4 && bVar3) && (bVar4 || bVar2));
    return bVar4;
  }
  return false;
}


