// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: teletrust_ellipticCurve
// Entry Point: 00cb870c
// Size: 284 bytes
// Signature: undefined teletrust_ellipticCurve(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ASN1::teletrust_ellipticCurve() */

void CryptoPP::ASN1::teletrust_ellipticCurve(void)

{
  long lVar1;
  ulong in_x2;
  undefined **local_d8;
  void *local_d0;
  void *local_c8;
  undefined **local_b8;
  void *local_b0;
  void *local_a8;
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
  teletrust();
                    /* try { // try from 00cb8738 to 00cb8747 has its CatchHandler @ 00cb890c */
  operator+((CryptoPP *)&local_58,(OID *)0x3,in_x2);
  local_58 = &PTR__OID_00fecd98;
  if (local_50 != (void *)0x0) {
    local_48 = local_50;
    operator_delete(local_50);
  }
                    /* try { // try from 00cb8768 to 00cb8777 has its CatchHandler @ 00cb88f0 */
  operator+((CryptoPP *)&local_d8,(OID *)0x3,in_x2);
                    /* try { // try from 00cb8778 to 00cb8787 has its CatchHandler @ 00cb88c0 */
  operator+((CryptoPP *)&local_b8,(OID *)0x2,in_x2);
                    /* try { // try from 00cb8788 to 00cb8797 has its CatchHandler @ 00cb8890 */
  operator+((CryptoPP *)&local_98,(OID *)0x8,in_x2);
                    /* try { // try from 00cb8798 to 00cb87a7 has its CatchHandler @ 00cb8828 */
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
  local_b8 = &PTR__OID_00fecd98;
  if (local_b0 != (void *)0x0) {
    local_a8 = local_b0;
    operator_delete(local_b0);
  }
  local_d8 = &PTR__OID_00fecd98;
  if (local_d0 != (void *)0x0) {
    local_c8 = local_d0;
    operator_delete(local_d0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


