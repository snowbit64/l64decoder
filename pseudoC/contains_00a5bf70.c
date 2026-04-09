// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: contains
// Entry Point: 00a5bf70
// Size: 116 bytes
// Signature: undefined __cdecl contains(ScenegraphNode * param_1, ScenegraphNode * param_2)


/* ScenegraphUtil::contains(ScenegraphNode*, ScenegraphNode*) */

uint ScenegraphUtil::contains(ScenegraphNode *param_1,ScenegraphNode *param_2)

{
  uint uVar1;
  ulong uVar2;
  ScenegraphNode **ppSVar3;
  
  if (param_1 == param_2) {
    uVar1 = 1;
  }
  else {
    uVar2 = *(long *)(param_1 + 0x30) - (long)*(ScenegraphNode ***)(param_1 + 0x28);
    if ((int)(uVar2 >> 3) == 0) {
      uVar1 = 0;
    }
    else {
      uVar2 = uVar2 >> 3 & 0xffffffff;
      ppSVar3 = *(ScenegraphNode ***)(param_1 + 0x28);
      do {
        uVar2 = uVar2 - 1;
        uVar1 = contains(*ppSVar3,param_2);
        if ((uVar1 & 1) != 0) break;
        ppSVar3 = ppSVar3 + 1;
      } while (uVar2 != 0);
    }
  }
  return uVar1 & 1;
}


