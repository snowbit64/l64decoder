// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00792150
// Entry Point: 00792150
// Size: 280 bytes
// Signature: undefined FUN_00792150(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00792150(char **param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 local_48;
  undefined4 local_40;
  bool abStack_3c [4];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(int *)(param_1 + 3) == 0) ||
     ((*(int *)(param_1 + 3) == 3 && (*(char *)(param_1 + 2) != '\0')))) {
    bVar5 = true;
    iVar1 = *(int *)(param_1 + 5);
  }
  else {
    bVar5 = false;
    iVar1 = *(int *)(param_1 + 5);
  }
  if ((iVar1 == 0) || ((iVar1 == 3 && (*(char *)(param_1 + 4) != '\0')))) {
    bVar6 = true;
    iVar1 = *(int *)(param_1 + 7);
  }
  else {
    bVar6 = false;
    iVar1 = *(int *)(param_1 + 7);
  }
  if ((iVar1 == 0) || ((iVar1 == 3 && (*(char *)(param_1 + 6) != '\0')))) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x21) = 1;
  local_48 = ram0x021101b4;
  lVar4 = I3DLoadUtil::loadI3DFile
                    (*param_1,bVar5,bVar6,(MeshSplitFileState *)&local_48,bVar7,abStack_3c,false,
                     (FailedReason *)&local_40);
  if (lVar4 != 0) {
    uVar2 = *(undefined4 *)(lVar4 + 0x18);
    *(undefined4 *)(param_1 + 0x21) = 1;
    *(undefined4 *)(param_1 + 0x20) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x23) = 1;
  *(undefined4 *)(param_1 + 0x22) = local_40;
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


