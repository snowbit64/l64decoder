// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e63ac
// Entry Point: 006e63ac
// Size: 292 bytes
// Signature: undefined FUN_006e63ac(void)


void FUN_006e63ac(long param_1)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  RenderDeviceManager::getInstance();
  plVar6 = (long *)RenderDeviceManager::getCurrentRenderDevice();
  uVar3 = (**(code **)(*plVar6 + 0x68))();
  EngineManager::getInstance();
  plVar7 = (long *)EngineManager::getRenderWindow();
  iVar4 = (**(code **)(*plVar7 + 0x60))();
  iVar5 = (**(code **)(*plVar7 + 0x68))(plVar7);
  if (uVar3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar9 = 1;
    do {
      local_70 = 0;
      (**(code **)(*plVar6 + 0x70))(plVar6,uVar9 - 1,(long)&local_70 + 4,&local_70);
      uVar8 = uVar9 - 1;
      if (iVar4 == local_70._4_4_ && iVar5 == (int)local_70) break;
      bVar2 = uVar9 < uVar3;
      uVar9 = uVar9 + 1;
      uVar8 = uVar3;
    } while (bVar2);
  }
  *(uint *)(param_1 + 0x100) = uVar8;
  *(undefined4 *)(param_1 + 0x108) = 1;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


