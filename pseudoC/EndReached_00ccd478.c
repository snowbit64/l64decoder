// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EndReached
// Entry Point: 00ccd478
// Size: 140 bytes
// Signature: undefined EndReached(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::BERGeneralDecoder::EndReached() const */

void CryptoPP::BERGeneralDecoder::EndReached(void)

{
  long lVar1;
  bool bVar2;
  long in_x0;
  long lVar3;
  ushort local_2c [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(char *)(in_x0 + 0x31) == '\0') {
    lVar3 = BufferedTransformation::PeekWord16
                      (*(BufferedTransformation **)(in_x0 + 0x20),local_2c,1);
    bVar2 = lVar3 == 2 && local_2c[0] == 0;
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_00ccd500;
  }
  else {
    bVar2 = *(long *)(in_x0 + 0x28) == 0;
    if (*(long *)(lVar1 + 0x28) != local_28) {
LAB_00ccd500:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar2);
    }
  }
  return;
}


