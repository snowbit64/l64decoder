// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getParentObjects
// Entry Point: 009e54d0
// Size: 204 bytes
// Signature: undefined __thiscall getParentObjects(ProceduralPlacementRule * this, int param_1, int param_2)


/* ProceduralPlacementRule::getParentObjects(int, int) */

undefined8 __thiscall
ProceduralPlacementRule::getParentObjects(ProceduralPlacementRule *this,int param_1,int param_2)

{
  int iVar1;
  ProceduralPlacementRule **ppPVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ProceduralPlacementRule **ppPVar5;
  ProceduralPlacementRule **ppPVar6;
  
  ppPVar5 = (ProceduralPlacementRule **)(this + 0x98);
  ppPVar6 = (ProceduralPlacementRule **)*ppPVar5;
  ppPVar2 = ppPVar5;
  if (ppPVar6 == (ProceduralPlacementRule **)0x0) {
LAB_009e550c:
    iVar1 = 0;
  }
  else {
    do {
      if (param_1 <= *(int *)(ppPVar6 + 4)) {
        ppPVar2 = ppPVar6;
      }
      ppPVar6 = (ProceduralPlacementRule **)ppPVar6[*(int *)(ppPVar6 + 4) < param_1];
    } while (ppPVar6 != (ProceduralPlacementRule **)0x0);
    if ((ppPVar2 == ppPVar5) || (param_1 < *(int *)(ppPVar2 + 4))) goto LAB_009e550c;
    iVar1 = (int)((ulong)((long)ppPVar2[6] - (long)ppPVar2[5]) >> 3);
    if (param_2 < iVar1) {
      puVar4 = (undefined8 *)(ppPVar2[5] + (long)param_2 * 8);
      goto LAB_009e5594;
    }
  }
  ppPVar5 = (ProceduralPlacementRule **)(this + 0xb0);
  ppPVar6 = (ProceduralPlacementRule **)*ppPVar5;
  ppPVar2 = ppPVar5;
  if (ppPVar6 == (ProceduralPlacementRule **)0x0) {
    return 0;
  }
  do {
    if (param_1 <= *(int *)(ppPVar6 + 4)) {
      ppPVar2 = ppPVar6;
    }
    ppPVar6 = (ProceduralPlacementRule **)ppPVar6[*(int *)(ppPVar6 + 4) < param_1];
  } while (ppPVar6 != (ProceduralPlacementRule **)0x0);
  if (ppPVar2 == ppPVar5) {
    return 0;
  }
  if (param_1 < *(int *)(ppPVar2 + 4)) {
    return 0;
  }
  uVar3 = (long)param_2 - (long)iVar1;
  if ((int)uVar3 < 0) {
    return 0;
  }
  if ((ulong)((long)ppPVar2[6] - (long)ppPVar2[5] >> 3) <= uVar3) {
    return 0;
  }
  puVar4 = (undefined8 *)(ppPVar2[5] + uVar3 * 8);
LAB_009e5594:
  return *puVar4;
}


