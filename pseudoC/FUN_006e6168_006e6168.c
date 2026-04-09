// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e6168
// Entry Point: 006e6168
// Size: 368 bytes
// Signature: undefined FUN_006e6168(void)


void FUN_006e6168(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
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
  iVar2 = (**(code **)(*plVar6 + 0x68))();
  EngineManager::getInstance();
  plVar7 = (long *)EngineManager::getRenderWindow();
  iVar3 = (**(code **)(*plVar7 + 0x60))();
  iVar4 = (**(code **)(*plVar7 + 0x68))(plVar7);
  uVar5 = (**(code **)(*plVar6 + 0x68))(plVar6);
  if (uVar5 == 0) {
LAB_006e6294:
    uVar8 = 1;
  }
  else {
    local_70 = 0;
    (**(code **)(*plVar6 + 0x70))(plVar6,0,(long)&local_70 + 4,&local_70);
    if ((local_70._4_4_ != iVar3) || (uVar8 = 0, (int)local_70 != iVar4)) {
      uVar8 = 1;
      do {
        uVar9 = uVar8;
        if (uVar5 == uVar9) goto LAB_006e6294;
        local_70 = 0;
        (**(code **)(*plVar6 + 0x70))(plVar6,uVar9,(long)&local_70 + 4,&local_70);
        uVar8 = uVar9 + 1;
      } while ((local_70._4_4_ != iVar3) || ((int)local_70 != iVar4));
      uVar8 = (uint)(uVar5 <= uVar9);
    }
  }
  *(undefined4 *)(param_1 + 0x108) = 1;
  *(uint *)(param_1 + 0x100) = iVar2 + uVar8;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


