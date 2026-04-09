// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onSettingsChanged
// Entry Point: 00a07674
// Size: 300 bytes
// Signature: undefined onSettingsChanged(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RenderController::onSettingsChanged() */

void RenderController::onSettingsChanged(void)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long **in_x0;
  long *plVar4;
  long lVar5;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  undefined local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  plVar4 = in_x0[4];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if (in_x0[5] != (long *)0x0) {
    (**(code **)(*in_x0[5] + 8))();
  }
  plVar4 = in_x0[6];
  if ((plVar4 != (long *)0x0) && (plVar4 != in_x0[4])) {
    (**(code **)(*plVar4 + 8))();
  }
  in_x0[4] = (long *)0x0;
  in_x0[5] = (long *)0x0;
  in_x0[6] = (long *)0x0;
  if (in_x0[7] != (long *)0x0) {
    (**(code **)(*in_x0[7] + 8))();
  }
  lVar5 = EngineManager::getInstance();
  cVar2 = *(char *)(lVar5 + 0x200);
  iVar1 = *(int *)(lVar5 + 0x204);
  lVar5 = EngineManager::getInstance();
  if (*(long *)(lVar5 + 0xb8) == 0) {
    local_4c = 0;
  }
  else {
    local_4c = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x1bc8);
  }
  local_48 = 0;
  local_40 = 0;
  local_50 = 0;
  if (cVar2 == '\0') {
    local_60 = 1;
  }
  else if (iVar1 == 0) {
    local_60 = 2;
  }
  else {
    local_60 = 3;
    local_50 = iVar1;
  }
  local_58 = 0;
  local_5c = 0;
  plVar4 = (long *)(**(code **)(**in_x0 + 0xf8))(*in_x0,&local_60);
  in_x0[7] = plVar4;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


