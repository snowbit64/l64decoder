// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00792b54
// Entry Point: 00792b54
// Size: 304 bytes
// Signature: undefined FUN_00792b54(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00792b54(char **param_1)

{
  int iVar1;
  long lVar2;
  I3DManager *this;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 local_60;
  FailedReason local_54;
  TransformGroup *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((*(int *)(param_1 + 3) == 0) ||
     ((*(int *)(param_1 + 3) == 3 && (*(char *)(param_1 + 2) != '\0')))) {
    bVar4 = true;
    iVar1 = *(int *)(param_1 + 5);
  }
  else {
    bVar4 = false;
    iVar1 = *(int *)(param_1 + 5);
  }
  if ((iVar1 == 0) || ((iVar1 == 3 && (*(char *)(param_1 + 4) != '\0')))) {
    bVar5 = true;
    iVar1 = *(int *)(param_1 + 7);
  }
  else {
    bVar5 = false;
    iVar1 = *(int *)(param_1 + 7);
  }
  if ((iVar1 == 0) || ((iVar1 == 3 && (*(char *)(param_1 + 6) != '\0')))) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  local_60 = ram0x021101b4;
  this = (I3DManager *)I3DManager::getInstance();
  uVar3 = I3DManager::loadSharedI3D
                    (this,*param_1,bVar4,bVar5,(MeshSplitFileState *)&local_60,bVar6,&local_50,
                     &local_54);
  if (local_50 != (TransformGroup *)0x0) {
    local_50 = (TransformGroup *)(ulong)*(uint *)(local_50 + 0x18);
  }
  *(int *)(param_1 + 0x20) = (int)local_50;
  *(undefined4 *)(param_1 + 0x22) = uVar3;
  *(undefined4 *)(param_1 + 0x21) = 1;
  *(undefined4 *)(param_1 + 0x23) = 1;
  *(FailedReason *)(param_1 + 0x24) = local_54;
  *(undefined4 *)(param_1 + 0x25) = 1;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


