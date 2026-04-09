// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: id_dsa
// Entry Point: 00cec234
// Size: 208 bytes
// Signature: undefined id_dsa(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ASN1::id_dsa() */

void CryptoPP::ASN1::id_dsa(void)

{
  long lVar1;
  ulong in_x2;
  undefined **local_98;
  void *local_90;
  void *local_88;
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
                    /* try { // try from 00cec260 to 00cec26f has its CatchHandler @ 00cec344 */
  operator+((CryptoPP *)&local_58,(OID *)0x2738,in_x2);
  local_58 = &PTR__OID_00fecd98;
  if (local_50 != (void *)0x0) {
    local_48 = local_50;
    operator_delete(local_50);
  }
                    /* try { // try from 00cec290 to 00cec29f has its CatchHandler @ 00cec328 */
  operator+((CryptoPP *)&local_98,(OID *)0x4,in_x2);
                    /* try { // try from 00cec2a0 to 00cec2af has its CatchHandler @ 00cec304 */
  operator+((CryptoPP *)&local_78,(OID *)0x1,in_x2);
  local_98 = &PTR__OID_00fecd98;
  local_78 = local_98;
  if (local_70 != (void *)0x0) {
    local_68 = local_70;
    operator_delete(local_70);
  }
  if (local_90 != (void *)0x0) {
    local_88 = local_90;
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


