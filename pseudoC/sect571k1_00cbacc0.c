// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sect571k1
// Entry Point: 00cbacc0
// Size: 172 bytes
// Signature: undefined sect571k1(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ASN1::sect571k1() */

void CryptoPP::ASN1::sect571k1(void)

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
  certicom();
                    /* try { // try from 00cbacec to 00cbacfb has its CatchHandler @ 00cbad88 */
  operator+((CryptoPP *)&local_58,(OID *)0x0,in_x2);
  local_58 = &PTR__OID_00fecd98;
  if (local_50 != (void *)0x0) {
    local_48 = local_50;
    operator_delete(local_50);
  }
                    /* try { // try from 00cbad1c to 00cbad2b has its CatchHandler @ 00cbad6c */
  operator+((CryptoPP *)&local_78,(OID *)0x26,in_x2);
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


