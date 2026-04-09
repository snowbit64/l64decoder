// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_stream_packetin
// Entry Point: 00e24254
// Size: 88 bytes
// Signature: undefined ogg_stream_packetin(void)


void ogg_stream_packetin(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *param_2;
  uStack_30 = param_2[1];
  ogg_stream_iovecin(param_1,&local_38,1,param_2[3],param_2[4]);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


