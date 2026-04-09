// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IncorporateEntropy
// Entry Point: 00d1f8ac
// Size: 420 bytes
// Signature: undefined __thiscall IncorporateEntropy(RandomPool * this, uchar * param_1, ulong param_2)


/* CryptoPP::RandomPool::IncorporateEntropy(unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::RandomPool::IncorporateEntropy(RandomPool *this,uchar *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined **local_130;
  undefined8 uStack_128;
  undefined auStack_120 [65];
  undefined local_df;
  ulong local_d8;
  ulong uStack_d0;
  undefined *local_c8;
  uint auStack_c0 [18];
  undefined local_77;
  ulong local_70;
  ulong uStack_68;
  uint *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  Algorithm::Algorithm((Algorithm *)&local_130,true);
  local_c8 = auStack_120;
  local_df = 1;
  local_60 = auStack_c0;
  local_130 = &PTR__IteratedHashWithStaticTransform_00fe9ca8;
  uStack_d0 = 0x10;
  local_d8 = 0x3fffffffffffffff;
  uStack_68 = 0x10;
  local_70 = 0x3fffffffffffffff;
  uStack_128 = 0;
  local_77 = 1;
                    /* try { // try from 00d1f938 to 00d1f93f has its CatchHandler @ 00d1fa50 */
  SHA256::InitState(local_60);
  local_130 = &PTR__IteratedHashWithStaticTransform_01010888;
                    /* try { // try from 00d1f954 to 00d1f99f has its CatchHandler @ 00d1fae4 */
  IteratedHashBase<unsigned_int,CryptoPP::HashTransformation>::Update
            ((IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> *)&local_130,
             *(uchar **)(this + 0x80),0x20);
  IteratedHashBase<unsigned_int,CryptoPP::HashTransformation>::Update
            ((IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> *)&local_130,param_1,
             param_2);
  uVar4 = *(undefined8 *)(this + 0x80);
  uVar3 = (*(code *)local_130[9])(&local_130);
  (*(code *)local_130[0x10])(&local_130,uVar4,uVar3);
  this[0x90] = (RandomPool)0x0;
  uVar1 = local_70;
  if (uStack_68 <= local_70) {
    uVar1 = uStack_68;
  }
  if (auStack_c0 == local_60) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      local_60[uVar1 - 1] = 0;
    }
  }
  uVar1 = local_d8;
  if (uStack_d0 <= local_d8) {
    uVar1 = uStack_d0;
  }
  if (local_c8 == auStack_120) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(auStack_120 + uVar1 * 4 + -4) = 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


