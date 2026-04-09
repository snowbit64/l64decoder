// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetAlgorithmID
// Entry Point: 00ca3848
// Size: 124 bytes
// Signature: undefined GetAlgorithmID(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::GetAlgorithmID() const */

void CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::GetAlgorithmID(void)

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
                    /* try { // try from 00ca3870 to 00ca387f has its CatchHandler @ 00ca38c4 */
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


