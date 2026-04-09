// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078ab64
// Entry Point: 0078ab64
// Size: 340 bytes
// Signature: undefined FUN_0078ab64(void)


void FUN_0078ab64(char **param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined4 local_44;
  undefined2 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  EngineManager::getInstance();
  plVar4 = (long *)EngineManager::getRenderWindow();
  local_80 = 0;
  uStack_74 = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  uStack_88 = 0x100000001;
  local_90 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 3;
  uStack_7c = 3;
  uStack_78 = 1;
  local_70 = (**(code **)(*plVar4 + 0x38))(plVar4,3);
  if (local_70 == 0) goto LAB_0078ac90;
  pvVar5 = operator_new__((ulong)local_70);
  local_68 = pvVar5;
  uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
  local_90 = CONCAT44(local_90._4_4_,uVar2);
  uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4);
  local_90 = CONCAT44(uVar2,(undefined4)local_90);
  RenderDeviceManager::getInstance();
  iVar3 = RenderDeviceManager::getCurrentRenderDeviceType();
  if (iVar3 == 0) {
LAB_0078ac34:
    uVar7 = 0;
  }
  else {
    RenderDeviceManager::getInstance();
    iVar3 = RenderDeviceManager::getCurrentRenderDeviceType();
    if (iVar3 == 4) goto LAB_0078ac34;
    RenderDeviceManager::getInstance();
    iVar3 = RenderDeviceManager::getCurrentRenderDeviceType();
    uVar7 = (uint)(iVar3 != 5);
  }
  local_50 = CONCAT44(uVar7,(undefined4)local_50);
  RenderDeviceManager::getInstance();
  uVar6 = RenderDeviceManager::getCurrentRenderDevice();
  (**(code **)(*plVar4 + 0x30))(plVar4,pvVar5,uVar6,3);
  ImageSaveUtil::saveImage(*param_1,(ImageDesc *)&local_90,false);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
LAB_0078ac90:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


