// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: countLeaves
// Entry Point: 00f437c8
// Size: 76 bytes
// Signature: undefined __cdecl countLeaves(btDbvtNode * param_1)


/* btDbvt::countLeaves(btDbvtNode const*) */

int btDbvt::countLeaves(btDbvtNode *param_1)

{
  btDbvtNode **ppbVar1;
  int iVar2;
  btDbvtNode *pbVar3;
  int iVar4;
  
  if (*(btDbvtNode **)(param_1 + 0x30) == (btDbvtNode *)0x0) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
    pbVar3 = *(btDbvtNode **)(param_1 + 0x30);
    do {
      iVar2 = countLeaves(*(btDbvtNode **)(param_1 + 0x28));
      ppbVar1 = (btDbvtNode **)(pbVar3 + 0x30);
      iVar4 = iVar2 + iVar4;
      param_1 = pbVar3;
      pbVar3 = *ppbVar1;
    } while (*ppbVar1 != (btDbvtNode *)0x0);
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}


