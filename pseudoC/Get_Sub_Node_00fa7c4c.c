// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Get_Sub_Node
// Entry Point: 00fa7c4c
// Size: 120 bytes
// Signature: undefined __thiscall Get_Sub_Node(CProfileNode * this, char * param_1)


/* CProfileNode::Get_Sub_Node(char const*) */

char ** __thiscall CProfileNode::Get_Sub_Node(CProfileNode *this,char *param_1)

{
  char *pcVar1;
  char **ppcVar2;
  
  ppcVar2 = *(char ***)(this + 0x28);
  while( true ) {
    if (ppcVar2 == (char **)0x0) {
      ppcVar2 = (char **)operator_new(0x40);
      ppcVar2[1] = (char *)0x0;
      ppcVar2[2] = (char *)0x0;
      *ppcVar2 = param_1;
      *(undefined4 *)(ppcVar2 + 3) = 0;
      ppcVar2[4] = (char *)this;
      ppcVar2[5] = (char *)0x0;
      ppcVar2[6] = (char *)0x0;
      ppcVar2[7] = (char *)0x0;
      Reset();
      pcVar1 = *(char **)(this + 0x28);
      *(char ***)(this + 0x28) = ppcVar2;
      ppcVar2[6] = pcVar1;
      return ppcVar2;
    }
    if (*ppcVar2 == param_1) break;
    ppcVar2 = (char **)ppcVar2[6];
  }
  return ppcVar2;
}


