// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNodeFromId
// Entry Point: 009db360
// Size: 76 bytes
// Signature: undefined __thiscall getNodeFromId(ProceduralPlacementProjectObjectsMask * this, uint param_1, TransformGroup * param_2)


/* ProceduralPlacementProjectObjectsMask::getNodeFromId(unsigned int, TransformGroup*) */

TransformGroup * __thiscall
ProceduralPlacementProjectObjectsMask::getNodeFromId
          (ProceduralPlacementProjectObjectsMask *this,uint param_1,TransformGroup *param_2)

{
  TransformGroup **ppTVar1;
  TransformGroup *pTVar2;
  int iVar3;
  ulong uVar4;
  TransformGroup **ppTVar5;
  
  ppTVar1 = *(TransformGroup ***)(param_2 + 0x28);
  iVar3 = (int)((ulong)(*(long *)(param_2 + 0x30) - (long)ppTVar1) >> 3);
  if (iVar3 != 0) {
    uVar4 = (ulong)(*(long *)(param_2 + 0x30) - (long)ppTVar1) >> 3 & 0xffffffff;
    ppTVar5 = ppTVar1;
    do {
      if (*(uint *)(*ppTVar5 + 0x18) == param_1) {
        return *ppTVar5;
      }
      ppTVar5 = ppTVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    if (iVar3 != 0) {
      pTVar2 = (TransformGroup *)getNodeFromId(this,param_1,*ppTVar1);
      return pTVar2;
    }
  }
  return (TransformGroup *)0x0;
}


