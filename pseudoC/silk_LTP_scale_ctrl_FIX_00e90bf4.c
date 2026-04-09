// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_LTP_scale_ctrl_FIX
// Entry Point: 00e90bf4
// Size: 100 bytes
// Signature: undefined silk_LTP_scale_ctrl_FIX(void)


void silk_LTP_scale_ctrl_FIX(long param_1,long param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  if (param_3 == 0) {
    iVar3 = (int)((ulong)((long)((int)(short)((short)*(undefined4 *)(param_1 + 0x1680) +
                                             (short)*(undefined4 *)(param_1 + 0x1208)) *
                                (int)*(short *)(param_2 + 0x18c)) * 0x33) >> 0x10);
    iVar1 = 0;
    if (-1 < iVar3) {
      iVar1 = iVar3;
    }
    cVar2 = '\x02';
    if (iVar3 < 3) {
      cVar2 = (char)iVar1;
    }
  }
  else {
    cVar2 = '\0';
  }
  *(char *)(param_1 + 0x12b1) = cVar2;
  *(int *)(param_2 + 0x78) = (int)(short)(&silk_LTPScales_table_Q14)[cVar2];
  return;
}


