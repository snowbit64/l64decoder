// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f276a0
// Entry Point: 00f276a0
// Size: 44 bytes
// Signature: undefined FUN_00f276a0(void)


undefined4 FUN_00f276a0(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  
  if (DAT_02124b00 == '\0') {
    do {
      uVar3 = *param_2;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = param_1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return uVar3;
  }
  LOAcquire();
  uVar3 = *param_2;
  *param_2 = param_1;
  LORelease();
  return uVar3;
}


