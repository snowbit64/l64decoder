// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: iso_us
// Entry Point: 00be9c20
// Size: 192 bytes
// Signature: undefined iso_us(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ASN1::iso_us() */

void CryptoPP::ASN1::iso_us(void)

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
                    /* try { // try from 00be9c6c to 00be9c7b has its CatchHandler @ 00be9cfc */
  puStack_40 = local_48;
  operator+((CryptoPP *)&local_58,(OID *)0x2,in_x2);
  local_58 = &PTR__OID_00fecd98;
  if (local_50 != (undefined4 *)0x0) {
    local_48 = local_50;
    operator_delete(local_50);
  }
                    /* try { // try from 00be9c90 to 00be9c9f has its CatchHandler @ 00be9ce0 */
  operator+((CryptoPP *)&local_78,(OID *)0x348,in_x2);
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


