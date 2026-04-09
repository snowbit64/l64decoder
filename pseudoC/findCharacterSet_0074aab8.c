// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findCharacterSet
// Entry Point: 0074aab8
// Size: 116 bytes
// Signature: undefined __cdecl findCharacterSet(TransformGroup * param_1)


/* CloneUtil::findCharacterSet(TransformGroup*) */

long CloneUtil::findCharacterSet(TransformGroup *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  TransformGroup **ppTVar4;
  TransformGroup **ppTVar5;
  ulong uVar6;
  
  ppTVar5 = *(TransformGroup ***)(param_1 + 0x28);
  iVar2 = (int)((ulong)(*(long *)(param_1 + 0x30) - (long)ppTVar5) >> 3);
  if (iVar2 != 0) {
    uVar6 = (ulong)(*(long *)(param_1 + 0x30) - (long)ppTVar5) >> 3 & 0xffffffff;
    uVar3 = uVar6;
    ppTVar4 = ppTVar5;
    do {
      if (*(long *)(*ppTVar4 + 0x110) != 0) {
        return *(long *)(*ppTVar4 + 0x110) + -0x20;
      }
      ppTVar4 = ppTVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    if (iVar2 != 0) {
      do {
        lVar1 = findCharacterSet(*ppTVar5);
        if (lVar1 != 0) {
          return lVar1;
        }
        ppTVar5 = ppTVar5 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return 0;
}


