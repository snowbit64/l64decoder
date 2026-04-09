// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetAlgorithmID
// Entry Point: 00cb2434
// Size: 124 bytes
// Signature: undefined GetAlgorithmID(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_KeyImpl<CryptoPP::X509PublicKey, CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,
   CryptoPP::OID>::GetAlgorithmID() const */

void CryptoPP::
     DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,CryptoPP::OID>
     ::GetAlgorithmID(void)

{
  long lVar1;
  ulong in_x2;
  undefined **local_48;
  void *local_40;
  void *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  ASN1::id_publicKeyType();
                    /* try { // try from 00cb245c to 00cb246b has its CatchHandler @ 00cb24b0 */
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


