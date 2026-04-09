// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createIDxcUtils
// Entry Point: 00ac5220
// Size: 120 bytes
// Signature: undefined createIDxcUtils(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DxcManager::createIDxcUtils() const */

void DxcManager::createIDxcUtils(void)

{
  long lVar1;
  long in_x0;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  if (*(code **)(in_x0 + 8) != (code *)0x0) {
    uStack_38 = 0x7fd6b70bf265a4ad;
    local_40 = 0x492a20194605c4cb;
    (**(code **)(in_x0 + 8))(&DAT_00523778,&local_40,&local_30);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_30);
  }
  return;
}


