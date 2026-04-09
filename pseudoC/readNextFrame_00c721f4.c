// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readNextFrame
// Entry Point: 00c721f4
// Size: 160 bytes
// Signature: undefined readNextFrame(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TheoraVideoDecoder::readNextFrame() */

void TheoraVideoDecoder::readNextFrame(void)

{
  int iVar1;
  long **in_x0;
  void *pvVar2;
  long *plVar3;
  long *plVar4;
  
  pvVar2 = operator_new(0x10010);
  iVar1 = (**(code **)(**in_x0 + 0x28))(*in_x0,pvVar2,0x10000);
  if (-1 < iVar1) {
    *(int *)((long)pvVar2 + 0x10000) = iVar1;
    do {
      plVar4 = in_x0[0x1a];
      *(long **)((long)pvVar2 + 0x10008) = plVar4;
      plVar3 = (long *)FUN_00f275d0(plVar4,pvVar2);
    } while (plVar4 != plVar3);
    FUN_00f27700(1,in_x0 + 0x1b);
    return;
  }
  operator_delete(pvVar2);
  return;
}


