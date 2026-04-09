// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e62d8
// Entry Point: 006e62d8
// Size: 212 bytes
// Signature: undefined FUN_006e62d8(void)


void FUN_006e62d8(int *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  int local_40;
  int iStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  RenderDeviceManager::getInstance();
  plVar4 = (long *)RenderDeviceManager::getCurrentRenderDevice();
  iVar3 = *param_1;
  iVar2 = (**(code **)(*plVar4 + 0x68))();
  if (iVar3 == iVar2) {
    EngineManager::getInstance();
    plVar4 = (long *)EngineManager::getRenderWindow();
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    local_40 = (**(code **)(*plVar4 + 0x68))(plVar4);
    iStack_3c = iVar3;
  }
  else {
    (**(code **)(*plVar4 + 0x70))(plVar4,iVar3,&iStack_3c,&local_40);
  }
  param_1[0x40] = iStack_3c;
  param_1[0x44] = local_40;
  param_1[0x42] = 1;
  param_1[0x46] = 1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


