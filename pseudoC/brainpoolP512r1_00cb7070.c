// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: brainpoolP512r1
// Entry Point: 00cb7070
// Size: 160 bytes
// Signature: undefined brainpoolP512r1(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ASN1::brainpoolP512r1() */

void CryptoPP::ASN1::brainpoolP512r1(void)

{
  long lVar1;
  ulong in_x2;
  undefined **local_68;
  void *local_60;
  void *local_58;
  undefined **local_48;
  void *local_40;
  void *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  teletrust_ellipticCurve();
                    /* try { // try from 00cb7098 to 00cb70a7 has its CatchHandler @ 00cb7174 */
  operator+((CryptoPP *)&local_68,(OID *)0x1,in_x2);
                    /* try { // try from 00cb70a8 to 00cb70b7 has its CatchHandler @ 00cb7110 */
  operator+((CryptoPP *)&local_48,(OID *)0xd,in_x2);
  local_68 = &PTR__OID_00fecd98;
  local_48 = local_68;
  if (local_40 != (void *)0x0) {
    local_38 = local_40;
    operator_delete(local_40);
  }
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


