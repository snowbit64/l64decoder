// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetAlgorithmID
// Entry Point: 00cb26fc
// Size: 124 bytes
// Signature: undefined GetAlgorithmID(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_KeyImpl<CryptoPP::X509PublicKey, CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,
   CryptoPP::OID>::GetAlgorithmID() const */

void CryptoPP::
     DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,CryptoPP::OID>
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
                    /* try { // try from 00cb2724 to 00cb2733 has its CatchHandler @ 00cb2778 */
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


