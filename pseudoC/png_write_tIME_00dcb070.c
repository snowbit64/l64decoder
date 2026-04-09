// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_tIME
// Entry Point: 00dcb070
// Size: 208 bytes
// Signature: undefined png_write_tIME(void)


void png_write_tIME(undefined8 param_1,undefined2 *param_2)

{
  long lVar1;
  undefined local_30;
  undefined local_2f;
  byte local_2e;
  byte local_2d;
  byte local_2c;
  undefined local_2b;
  byte local_2a;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((((*(byte *)(param_2 + 1) - 0xd < 0xfffffff4) ||
       (*(byte *)((long)param_2 + 3) - 0x20 < 0xffffffe1)) || (0x17 < *(byte *)(param_2 + 2))) ||
     (0x3c < *(byte *)(param_2 + 3))) {
    png_warning(param_1,"Invalid time specified for tIME chunk");
    if (*(long *)(lVar1 + 0x28) != local_28) {
LAB_00dcb13c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    local_2b = *(undefined *)((long)param_2 + 5);
    local_30 = (undefined)((ushort)*param_2 >> 8);
    local_2f = (undefined)*param_2;
    local_2e = *(byte *)(param_2 + 1);
    local_2d = *(byte *)((long)param_2 + 3);
    local_2c = *(byte *)(param_2 + 2);
    local_2a = *(byte *)(param_2 + 3);
    FUN_00dc8238(param_1,0x74494d45,&local_30,7);
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_00dcb13c;
  }
  return;
}


