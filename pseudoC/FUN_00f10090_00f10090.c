// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f10090
// Entry Point: 00f10090
// Size: 168 bytes
// Signature: undefined FUN_00f10090(void)


void FUN_00f10090(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if ((param_2 - 1U < 0x200) && (-1 < (char)(&DAT_021248e8)[param_2])) {
    lVar1 = FUN_00f10138(param_1,(&DAT_021248e8)[param_2]);
  }
  else {
    lVar1 = (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 0x18),0,0,param_2);
  }
  if ((param_2 != 0) && (lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00f0a90c(param_1,4);
  }
  lVar1 = lVar3 + (param_3 & 0xff) * 8;
  lVar2 = *(long *)(lVar1 + 0x270);
  *(long *)(lVar3 + 0x48) = *(long *)(lVar3 + 0x48) + param_2;
  *(long *)(lVar1 + 0x270) = lVar2 + param_2;
  return;
}


