// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseProductIdString
// Entry Point: 00afd480
// Size: 92 bytes
// Signature: undefined __thiscall parseProductIdString(GiantsNotificationManager * this, char * param_1)


/* GiantsNotificationManager::parseProductIdString(char const*) */

void __thiscall
GiantsNotificationManager::parseProductIdString(GiantsNotificationManager *this,char *param_1)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0;
  sscanf(param_1,"%x",&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_2c);
}


