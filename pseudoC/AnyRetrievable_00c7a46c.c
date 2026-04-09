// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AnyRetrievable
// Entry Point: 00c7a46c
// Size: 164 bytes
// Signature: undefined AnyRetrievable(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::BufferedTransformation::AnyRetrievable() const */

ulong CryptoPP::BufferedTransformation::AnyRetrievable(void)

{
  long lVar1;
  long *in_x0;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(*in_x0 + 0x168))();
  if (lVar2 == 0) {
    lVar2 = (**(code **)(*in_x0 + 0xb8))();
    uVar4 = (ulong)(lVar2 != 0);
    if (*(long *)(lVar1 + 0x28) != lVar5) goto LAB_00c7a50c;
  }
  else {
    plVar3 = (long *)(**(code **)(*in_x0 + 0x168))();
    uVar4 = (**(code **)(*plVar3 + 0xa0))();
    if (*(long *)(lVar1 + 0x28) != lVar5) {
LAB_00c7a50c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    uVar4 = (ulong)((uint)uVar4 & 1);
  }
  return uVar4;
}


