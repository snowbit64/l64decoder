// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MaxRetrievable
// Entry Point: 00c7a36c
// Size: 256 bytes
// Signature: undefined MaxRetrievable(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::BufferedTransformation::MaxRetrievable() const */

void CryptoPP::BufferedTransformation::MaxRetrievable(void)

{
  int iVar1;
  long *in_x0;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = tpidr_el0;
  lVar5 = *(long *)(lVar6 + 0x28);
  lVar2 = (**(code **)(*in_x0 + 0x168))();
  if (lVar2 == 0) {
    if (((DAT_0211f5e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0211f5e8), iVar1 != 0)) {
      DAT_0211f600 = &PTR__BufferedTransformation_00ff03d8;
      DAT_0211f608 = &PTR__BitBucket_00ff0568;
      __cxa_guard_release(&DAT_0211f5e8);
    }
    (**(code **)(*in_x0 + 0x120))();
    uVar4 = 0;
    lVar6 = *(long *)(lVar6 + 0x28);
  }
  else {
    plVar3 = (long *)(**(code **)(*in_x0 + 0x168))();
    uVar4 = (**(code **)(*plVar3 + 0x98))();
    lVar6 = *(long *)(lVar6 + 0x28);
  }
  if (lVar6 == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


