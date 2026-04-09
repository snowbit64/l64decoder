// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tryRemoveLight
// Entry Point: 00a5644c
// Size: 128 bytes
// Signature: undefined __thiscall tryRemoveLight(MergedShadowGroup * this, LightSource * param_1)


/* LightSource::MergedShadowGroup::tryRemoveLight(LightSource*) */

bool __thiscall
LightSource::MergedShadowGroup::tryRemoveLight(MergedShadowGroup *this,LightSource *param_1)

{
  LightSource **ppLVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  ppLVar1 = *(LightSource ***)this;
  iVar5 = (int)(*(long *)(this + 8) - (long)ppLVar1 >> 3);
  if (iVar5 == 0) {
    return false;
  }
  if (*ppLVar1 == param_1) {
    uVar6 = 0;
    bVar3 = true;
  }
  else {
    uVar4 = (ulong)(*(long *)(this + 8) - (long)ppLVar1) >> 3 & 0xffffffff;
    uVar6 = 0;
    do {
      if (uVar4 - 1 == uVar6) {
        return false;
      }
      lVar2 = uVar6 + 1;
      uVar6 = uVar6 + 1;
    } while (ppLVar1[lVar2] != param_1);
    bVar3 = uVar6 < uVar4;
  }
  ppLVar1[uVar6] = ppLVar1[iVar5 - 1];
  *(long *)(this + 8) = *(long *)(this + 8) + -8;
  return bVar3;
}


