// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumParentObjects
// Entry Point: 009e5424
// Size: 172 bytes
// Signature: undefined __thiscall getNumParentObjects(ProceduralPlacementRule * this, int param_1)


/* ProceduralPlacementRule::getNumParentObjects(int) */

ulong __thiscall
ProceduralPlacementRule::getNumParentObjects(ProceduralPlacementRule *this,int param_1)

{
  ProceduralPlacementRule **ppPVar1;
  ulong uVar2;
  ProceduralPlacementRule **ppPVar3;
  ProceduralPlacementRule *pPVar4;
  ProceduralPlacementRule **ppPVar5;
  ProceduralPlacementRule *pPVar6;
  
  ppPVar3 = (ProceduralPlacementRule **)(this + 0x98);
  ppPVar5 = (ProceduralPlacementRule **)*ppPVar3;
  ppPVar1 = ppPVar3;
  if (ppPVar5 != (ProceduralPlacementRule **)0x0) {
    do {
      if (param_1 <= *(int *)(ppPVar5 + 4)) {
        ppPVar1 = ppPVar5;
      }
      ppPVar5 = (ProceduralPlacementRule **)ppPVar5[*(int *)(ppPVar5 + 4) < param_1];
    } while (ppPVar5 != (ProceduralPlacementRule **)0x0);
    if ((ppPVar1 != ppPVar3) && (*(int *)(ppPVar1 + 4) <= param_1)) {
      uVar2 = (ulong)((long)ppPVar1[6] - (long)ppPVar1[5]) >> 3;
      pPVar6 = *(ProceduralPlacementRule **)(this + 0xb0);
      goto joined_r0x009e54c4;
    }
  }
  uVar2 = 0;
  pPVar6 = *(ProceduralPlacementRule **)(this + 0xb0);
joined_r0x009e54c4:
  if (pPVar6 != (ProceduralPlacementRule *)0x0) {
    pPVar4 = this + 0xb0;
    do {
      if (param_1 <= *(int *)(pPVar6 + 0x20)) {
        pPVar4 = pPVar6;
      }
      pPVar6 = *(ProceduralPlacementRule **)
                (pPVar6 + (ulong)(*(int *)(pPVar6 + 0x20) < param_1) * 8);
    } while (pPVar6 != (ProceduralPlacementRule *)0x0);
    if ((pPVar4 != this + 0xb0) && (*(int *)(pPVar4 + 0x20) <= param_1)) {
      return (ulong)(uint)((int)uVar2 +
                          (int)((ulong)(*(long *)(pPVar4 + 0x30) - *(long *)(pPVar4 + 0x28)) >> 3));
    }
  }
  return uVar2 & 0xffffffff;
}


