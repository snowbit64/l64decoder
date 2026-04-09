// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateBlock
// Entry Point: 00d05128
// Size: 316 bytes
// Signature: undefined __thiscall GenerateBlock(KDF2_RNG * this, uchar * param_1, ulong param_2)


/* CryptoPP::KDF2_RNG::GenerateBlock(unsigned char*, unsigned long) */

void __thiscall CryptoPP::KDF2_RNG::GenerateBlock(KDF2_RNG *this,uchar *param_1,ulong param_2)

{
  ulong uVar1;
  uchar *puVar2;
  uint uVar3;
  long lVar4;
  undefined **local_128;
  undefined4 uStack_11c;
  undefined auStack_118 [72];
  ulong local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined auStack_b8 [72];
  ulong local_70;
  ulong uStack_68;
  undefined *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar3 = (*(uint *)(this + 8) & 0xff00ff00) >> 8 | (*(uint *)(this + 8) & 0xff00ff) << 8;
  **(uint **)(this + 0x28) = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar1 = *(ulong *)(this + 0x20);
  puVar2 = *(uchar **)(this + 0x28);
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  IteratedHashWithStaticTransform<unsigned_int,CryptoPP::EnumToType<CryptoPP::ByteOrder,1>,64u,20u,CryptoPP::SHA1,0u,false>
  ::IteratedHashWithStaticTransform();
  local_128 = &PTR__IteratedHashWithStaticTransform_01010650;
                    /* try { // try from 00d05194 to 00d051bf has its CatchHandler @ 00d05264 */
  P1363_MGF1KDF2_Common
            ((HashTransformation *)&local_128,param_1,param_2,puVar2,uVar1,(uchar *)0x0,0,false,1);
  if (uStack_68 <= local_70) {
    local_70 = uStack_68;
  }
  uVar1 = local_70;
  if (local_60 == auStack_b8) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)(auStack_b8 + uVar1 * 4 + -4) = 0;
    }
  }
  if (uStack_c8 <= local_d0) {
    local_d0 = uStack_c8;
  }
  uVar1 = local_d0;
  if (local_c0 == auStack_118) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      (&uStack_11c)[uVar1] = 0;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


