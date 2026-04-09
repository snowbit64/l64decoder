// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sm2p256v1
// Entry Point: 00cb65f8
// Size: 124 bytes
// Signature: undefined sm2p256v1(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ASN1::sm2p256v1() */

void CryptoPP::ASN1::sm2p256v1(void)

{
  long lVar1;
  ulong in_x2;
  undefined **local_48;
  void *local_40;
  void *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  sm_scheme();
                    /* try { // try from 00cb6620 to 00cb662f has its CatchHandler @ 00cb6674 */
  operator+((CryptoPP *)&local_48,(OID *)0x12d,in_x2);
  local_48 = &PTR__OID_00fecd98;
  if (local_40 != (void *)0x0) {
    local_38 = local_40;
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


