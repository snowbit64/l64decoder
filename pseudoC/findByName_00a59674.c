// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findByName
// Entry Point: 00a59674
// Size: 124 bytes
// Signature: undefined __cdecl findByName(Node * param_1, char * param_2)


/* NodeUtil::findByName(Node*, char const*) */

Node * NodeUtil::findByName(Node *param_1,char *param_2)

{
  int iVar1;
  Node *pNVar2;
  Node **ppNVar3;
  ulong uVar4;
  
  if ((param_2 == (char *)0x0) || (iVar1 = strcmp(param_2,*(char **)(param_1 + 8)), iVar1 != 0)) {
    ppNVar3 = *(Node ***)(param_1 + 0x28);
    if ((int)((ulong)(*(long *)(param_1 + 0x30) - (long)ppNVar3) >> 3) != 0) {
      uVar4 = (ulong)(*(long *)(param_1 + 0x30) - (long)ppNVar3) >> 3 & 0xffffffff;
      do {
        pNVar2 = (Node *)findByName(*ppNVar3,param_2);
        if (pNVar2 != (Node *)0x0) {
          return pNVar2;
        }
        ppNVar3 = ppNVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    param_1 = (Node *)0x0;
  }
  return param_1;
}


