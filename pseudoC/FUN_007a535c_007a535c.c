// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a535c
// Entry Point: 007a535c
// Size: 220 bytes
// Signature: undefined FUN_007a535c(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a535c(ScenegraphNode *param_1,char *param_2)

{
  undefined4 uVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_2 + 0x18) == 3) {
    bVar3 = param_2[0x10] != '\0';
  }
  else {
    bVar3 = false;
  }
  bVar4 = true;
  if (*(int *)(param_2 + 0x28) == 3) {
    bVar4 = param_2[0x20] != '\0';
  }
  local_40 = ram0x021101b4;
  lVar5 = CloneUtil::cloneScenegraphNode(param_1,bVar4,bVar3,(MeshSplitFileState *)&local_40);
  uVar1 = *(undefined4 *)(lVar5 + 0x18);
  *(undefined4 *)(param_2 + 0x108) = 1;
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  if ((*param_2 != '\0') && (plVar6 = *(long **)(param_1 + 0x20), plVar6 != (long *)0x0)) {
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0xffffffff);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


