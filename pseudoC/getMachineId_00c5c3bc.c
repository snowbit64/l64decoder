// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMachineId
// Entry Point: 00c5c3bc
// Size: 172 bytes
// Signature: undefined getMachineId(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EnvUtil::getMachineId() */

undefined4 EnvUtil::getMachineId(void)

{
  long lVar1;
  int __fd;
  uchar local_48 [4];
  undefined local_44;
  undefined local_40;
  undefined local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  uStack_30 = 0;
  gethostname((char *)&local_38,0x10);
  __fd = __open_2("/var/lib/dbus/machine-id",0);
  if (__fd != -1) {
    ::read(__fd,&local_38,0x10);
    close(__fd);
  }
  MD5Hash::getMD5Hash((uchar *)&local_38,0x10,local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return CONCAT13(local_3c,CONCAT12(local_40,CONCAT11(local_44,local_48[0])));
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


