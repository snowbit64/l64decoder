// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a8b50
// Entry Point: 007a8b50
// Size: 132 bytes
// Signature: undefined FUN_007a8b50(void)


void FUN_007a8b50(ScenegraphNode *param_1,int **param_2)

{
  bool bVar1;
  
  bVar1 = (bool)((byte)param_1[0x40] >> 7);
  switch(*(undefined4 *)(param_2 + 1)) {
  case 1:
  case 2:
    bVar1 = *(int *)param_2 == 0;
    break;
  case 3:
    bVar1 = *(char *)param_2 == '\0';
    break;
  case 4:
    bVar1 = *(float *)param_2 == 0.0;
    break;
  case 5:
    bVar1 = (double)*param_2 == 0.0;
    break;
  default:
    goto switchD_007a8b80_caseD_6;
  case 0xd:
    param_2 = (int **)*param_2;
    if (param_2 == (int **)0x0) {
      ScenegraphNode::setLockedGroup(param_1,false);
      return;
    }
  case 7:
  case 8:
    bVar1 = *param_2 == (int *)0x0;
  }
  bVar1 = !bVar1;
switchD_007a8b80_caseD_6:
  ScenegraphNode::setLockedGroup(param_1,bVar1);
  return;
}


