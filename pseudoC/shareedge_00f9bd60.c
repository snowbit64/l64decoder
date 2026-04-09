// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: shareedge
// Entry Point: 00f9bd60
// Size: 232 bytes
// Signature: undefined __cdecl shareedge(int3 * param_1, int3 * param_2)


/* shareedge(int3 const&, int3 const&) */

bool shareedge(int3 *param_1,int3 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)param_1;
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = *(int *)param_2;
  iVar4 = *(int *)(param_2 + 4);
  iVar5 = *(int *)(param_1 + 8);
  if ((iVar1 == iVar4) && (iVar3 == iVar2)) {
    return true;
  }
  if ((iVar3 == iVar4) && (iVar5 == iVar2)) {
    return true;
  }
  if ((iVar5 == iVar4) && (iVar1 == iVar2)) {
    return true;
  }
  iVar6 = *(int *)(param_2 + 8);
  if ((iVar1 == iVar6) && (iVar3 == iVar4)) {
    return true;
  }
  if ((iVar3 == iVar6) && (iVar5 == iVar4)) {
    return true;
  }
  if ((iVar5 == iVar6) && (iVar1 == iVar4)) {
    return true;
  }
  if ((iVar1 == iVar2) && (iVar3 == iVar6)) {
    return true;
  }
  if ((iVar3 == iVar2) && (iVar5 == iVar6)) {
    return true;
  }
  return iVar5 == iVar2 && iVar1 == iVar6;
}


