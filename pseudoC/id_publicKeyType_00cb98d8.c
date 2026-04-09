// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: id_publicKeyType
// Entry Point: 00cb98d8
// Size: 172 bytes
// Signature: undefined id_publicKeyType(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ASN1::id_publicKeyType() */

void CryptoPP::ASN1::id_publicKeyType(void)

{
  long lVar1;
  ulong in_x2;
  undefined **local_78;
  void *local_70;
  void *local_68;
  undefined **local_58;
  void *local_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iso_us();
                    /* try { // try from 00cb9904 to 00cb9913 has its CatchHandler @ 00cb99a0 */
  operator+((CryptoPP *)&local_58,(OID *)0x273d,in_x2);
  local_58 = &PTR__OID_00fecd98;
  if (local_50 != (void *)0x0) {
    local_48 = local_50;
    operator_delete(local_50);
  }
                    /* try { // try from 00cb9934 to 00cb9943 has its CatchHandler @ 00cb9984 */
  operator+((CryptoPP *)&local_78,(OID *)0x2,in_x2);
  local_78 = &PTR__OID_00fecd98;
  if (local_70 != (void *)0x0) {
    local_68 = local_70;
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


