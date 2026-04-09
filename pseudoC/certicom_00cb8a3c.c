// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: certicom
// Entry Point: 00cb8a3c
// Size: 192 bytes
// Signature: undefined certicom(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ASN1::certicom() */

void CryptoPP::ASN1::certicom(void)

{
  long lVar1;
  ulong in_x2;
  undefined **local_78;
  void *local_70;
  void *local_68;
  undefined **local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined4 *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_58 = &PTR__OID_00fecd98;
  local_50 = (undefined4 *)operator_new(4);
  local_48 = local_50 + 1;
  *local_50 = 1;
                    /* try { // try from 00cb8a88 to 00cb8a97 has its CatchHandler @ 00cb8b18 */
  puStack_40 = local_48;
  operator+((CryptoPP *)&local_58,(OID *)0x3,in_x2);
  local_58 = &PTR__OID_00fecd98;
  if (local_50 != (undefined4 *)0x0) {
    local_48 = local_50;
    operator_delete(local_50);
  }
                    /* try { // try from 00cb8aac to 00cb8abb has its CatchHandler @ 00cb8afc */
  operator+((CryptoPP *)&local_78,(OID *)0x84,in_x2);
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


