// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_commentheader_out
// Entry Point: 00e09288
// Size: 184 bytes
// Signature: undefined vorbis_commentheader_out(void)


undefined8 vorbis_commentheader_out(undefined8 param_1,void **param_2)

{
  long lVar1;
  size_t sVar2;
  void *pvVar3;
  undefined auStack_60 [16];
  void *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  oggpack_writeinit(auStack_60);
  FUN_00e09340(auStack_60,param_1);
  sVar2 = oggpack_bytes(auStack_60);
  pvVar3 = malloc(sVar2);
  *param_2 = pvVar3;
  sVar2 = oggpack_bytes(auStack_60);
  memcpy(pvVar3,local_50,sVar2);
  pvVar3 = (void *)oggpack_bytes(auStack_60);
  param_2[1] = pvVar3;
  param_2[2] = (void *)0x0;
  param_2[3] = (void *)0x0;
  param_2[4] = (void *)0x0;
  param_2[5] = (void *)0x1;
  oggpack_writeclear(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


