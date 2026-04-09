// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8adc
// Entry Point: 006e8adc
// Size: 116 bytes
// Signature: undefined FUN_006e8adc(void)


void FUN_006e8adc(long param_1)

{
  long lVar1;
  HeadTrackingDevice *this;
  float fVar2;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0.0;
  EngineManager::getInstance();
  this = (HeadTrackingDevice *)EngineManager::getHeadTrackingDevice();
  if (this == (HeadTrackingDevice *)0x0) {
    fVar2 = 0.0;
  }
  else {
    HeadTrackingDevice::getSensitivity(this,&local_2c);
    fVar2 = local_2c;
  }
  *(float *)(param_1 + 0x100) = fVar2;
  *(undefined4 *)(param_1 + 0x108) = 4;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


