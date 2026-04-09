// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSimdRegisterCount
// Entry Point: 00c50adc
// Size: 128 bytes
// Signature: undefined getSimdRegisterCount(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Struct::getSimdRegisterCount() const */

int IR_Struct::getSimdRegisterCount(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(in_x0 + 0x38) - *(long *)(in_x0 + 0x30);
  if (lVar1 == 0) {
    iVar3 = 0;
  }
  else {
    uVar4 = 0;
    iVar3 = 0;
    uVar5 = (lVar1 >> 3) * 0x6db6db6db6db6db7;
    do {
      iVar2 = IR_Type::getSimdRegisterCount();
      uVar4 = (ulong)((int)uVar4 + 1);
      iVar3 = iVar2 + iVar3;
    } while (uVar4 <= uVar5 && uVar5 - uVar4 != 0);
  }
  return iVar3;
}


