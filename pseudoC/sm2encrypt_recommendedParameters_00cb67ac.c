// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sm2encrypt_recommendedParameters
// Entry Point: 00cb67ac
// Size: 124 bytes
// Signature: undefined sm2encrypt_recommendedParameters(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ASN1::sm2encrypt_recommendedParameters() */

void CryptoPP::ASN1::sm2encrypt_recommendedParameters(void)

{
  long lVar1;
  ulong in_x2;
  undefined **local_48;
  void *local_40;
  void *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  sm2encrypt();
                    /* try { // try from 00cb67d4 to 00cb67e3 has its CatchHandler @ 00cb6828 */
  operator+((CryptoPP *)&local_48,(OID *)0x1,in_x2);
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


