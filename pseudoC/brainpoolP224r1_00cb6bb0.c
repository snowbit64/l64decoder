// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: brainpoolP224r1
// Entry Point: 00cb6bb0
// Size: 160 bytes
// Signature: undefined brainpoolP224r1(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ASN1::brainpoolP224r1() */

void CryptoPP::ASN1::brainpoolP224r1(void)

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
                    /* try { // try from 00cb6bd8 to 00cb6be7 has its CatchHandler @ 00cb6cb4 */
  operator+((CryptoPP *)&local_68,(OID *)0x1,in_x2);
                    /* try { // try from 00cb6be8 to 00cb6bf7 has its CatchHandler @ 00cb6c50 */
  operator+((CryptoPP *)&local_48,(OID *)0x5,in_x2);
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


