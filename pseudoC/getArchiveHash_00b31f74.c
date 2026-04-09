// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getArchiveHash
// Entry Point: 00b31f74
// Size: 352 bytes
// Signature: undefined __thiscall getArchiveHash(CryptoFileArchive * this, uchar * param_1)


/* CryptoFileArchive::getArchiveHash(unsigned char*) */

undefined8 __thiscall CryptoFileArchive::getArchiveHash(CryptoFileArchive *this,uchar *param_1)

{
  long lVar1;
  uint uVar2;
  uchar *puVar3;
  MD5Hash aMStack_128 [16];
  undefined auStack_118 [72];
  ulong local_d0;
  ulong uStack_c8;
  undefined *local_c0;
  undefined auStack_b8 [72];
  ulong local_70;
  ulong uStack_68;
  undefined *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(**(long **)(this + 8) + 0x48))();
  puVar3 = (uchar *)operator_new__((ulong)uVar2);
  Mutex::enterCriticalSection();
  (**(code **)(**(long **)(this + 8) + 0x38))(*(long **)(this + 8),0);
  (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),puVar3,uVar2);
  Mutex::leaveCriticalSection();
  MD5Hash::MD5Hash(aMStack_128);
                    /* try { // try from 00b3200c to 00b32033 has its CatchHandler @ 00b320d4 */
  MD5Hash::add(aMStack_128,puVar3,uVar2);
  operator_delete__(puVar3);
  MD5Hash::getMD5Hash(aMStack_128,param_1);
  if (uStack_68 <= local_70) {
    local_70 = uStack_68;
  }
  if (local_60 == auStack_b8) {
    for (; local_70 != 0; local_70 = local_70 - 1) {
      *(undefined4 *)(local_60 + local_70 * 4 + -4) = 0;
    }
  }
  if (uStack_c8 <= local_d0) {
    local_d0 = uStack_c8;
  }
  if (local_c0 == auStack_118) {
    for (; local_d0 != 0; local_d0 = local_d0 - 1) {
      *(undefined4 *)(local_c0 + local_d0 * 4 + -4) = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


