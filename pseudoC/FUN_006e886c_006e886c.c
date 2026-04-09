// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e886c
// Entry Point: 006e886c
// Size: 148 bytes
// Signature: undefined FUN_006e886c(void)


void FUN_006e886c(long param_1)

{
  long lVar1;
  HeadTrackingDevice *this;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  local_38 = 0;
  EngineManager::getInstance();
  this = (HeadTrackingDevice *)EngineManager::getHeadTrackingDevice();
  if (this == (HeadTrackingDevice *)0x0) {
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    HeadTrackingDevice::getPosition(this,(float *)&local_38);
    uVar4 = (undefined4)local_38;
    uVar3 = local_38._4_4_;
    uVar2 = local_30;
  }
  *(undefined4 *)(param_1 + 0x100) = uVar4;
  *(undefined4 *)(param_1 + 0x110) = uVar3;
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  *(undefined4 *)(param_1 + 0x108) = 4;
  *(undefined4 *)(param_1 + 0x118) = 4;
  *(undefined4 *)(param_1 + 0x128) = 4;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


