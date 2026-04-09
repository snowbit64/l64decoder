// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f275d0
// Entry Point: 00f275d0
// Size: 52 bytes
// Signature: undefined FUN_00f275d0(void)


long FUN_00f275d0(long param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_02124b00 != '\0') {
    lVar3 = *param_3;
    if (lVar3 == param_1) {
      *param_3 = param_2;
    }
    return lVar3;
  }
  do {
    lVar3 = *param_3;
    if (lVar3 != param_1) {
      return lVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return lVar3;
}


