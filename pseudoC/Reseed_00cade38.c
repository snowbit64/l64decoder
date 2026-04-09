// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Reseed
// Entry Point: 00cade38
// Size: 696 bytes
// Signature: undefined __thiscall Reseed(AutoSeededX917RNG<CryptoPP::Rijndael> * this, bool param_1, uchar * param_2, ulong param_3)


/* CryptoPP::AutoSeededX917RNG<CryptoPP::Rijndael>::Reseed(bool, unsigned char const*, unsigned
   long) */

void __thiscall
CryptoPP::AutoSeededX917RNG<CryptoPP::Rijndael>::Reseed
          (AutoSeededX917RNG<CryptoPP::Rijndael> *this,bool param_1,uchar *param_2,ulong param_3)

{
  uint *puVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined **local_148;
  undefined8 uStack_140;
  undefined auStack_138 [65];
  undefined local_f7;
  ulong local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  uint auStack_d8 [18];
  undefined local_8f;
  ulong local_88;
  ulong uStack_80;
  uint *local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  puVar4 = (ulong *)UnalignedAllocate(0x20);
  if (param_3 == 0) {
    do {
                    /* try { // try from 00cadff4 to 00cae003 has its CatchHandler @ 00cae0f8 */
      OS_GenerateRandomBlock(param_1,(uchar *)puVar4,0x20);
    } while ((puVar4[2] ^ *puVar4 | puVar4[3] ^ puVar4[1]) == 0);
  }
  else {
    uVar5 = (ulong)(uint)-(int)auStack_d8 & 8;
    puVar1 = (uint *)((long)auStack_d8 + uVar5);
    do {
                    /* try { // try from 00cadf0c to 00cadf1b has its CatchHandler @ 00cae17c */
      OS_GenerateRandomBlock(param_1,(uchar *)puVar4,0x20);
                    /* try { // try from 00cadf1c to 00cadf27 has its CatchHandler @ 00cae178 */
      Algorithm::Algorithm((Algorithm *)&local_148,true);
      uStack_140 = 0;
      local_f7 = 1;
      uStack_e8 = 0x10;
      local_f0 = 0x3fffffffffffffff;
      uStack_80 = 0x10;
      local_88 = 0x3fffffffffffffff;
      local_8f = 1;
      local_148 = &PTR__IteratedHashWithStaticTransform_00fe9ca8;
      local_e0 = auStack_138;
      local_78 = puVar1;
                    /* try { // try from 00cadf4c to 00cadf53 has its CatchHandler @ 00cae100 */
      SHA256::InitState(puVar1);
                    /* try { // try from 00cadf58 to 00cadf77 has its CatchHandler @ 00cae184 */
      local_148 = &PTR__IteratedHashWithStaticTransform_01010888;
      IteratedHashBase<unsigned_int,CryptoPP::HashTransformation>::Update
                ((IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> *)&local_148,
                 (uchar *)puVar4,0x20);
      IteratedHashBase<unsigned_int,CryptoPP::HashTransformation>::Update
                ((IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> *)&local_148,param_2,
                 param_3);
                    /* try { // try from 00cadf78 to 00cadf87 has its CatchHandler @ 00cae0fc */
      IteratedHashBase<unsigned_int,CryptoPP::HashTransformation>::TruncatedFinal
                ((IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> *)&local_148,
                 (uchar *)puVar4,0x20);
      uVar2 = local_88;
      if (uStack_80 <= local_88) {
        uVar2 = uStack_80;
      }
      if (puVar1 == local_78) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined4 *)((long)auStack_d8 + uVar2 * 4 + uVar5 + -4) = 0;
        }
      }
      uVar2 = local_f0;
      if (uStack_e8 <= local_f0) {
        uVar2 = uStack_e8;
      }
      if (local_e0 == auStack_138) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined4 *)(auStack_138 + uVar2 * 4 + -4) = 0;
        }
      }
    } while ((puVar4[2] ^ *puVar4 | puVar4[3] ^ puVar4[1]) == 0);
  }
                    /* try { // try from 00cae01c to 00cae033 has its CatchHandler @ 00cae0f4 */
  Reseed(this,(uchar *)(puVar4 + 2),0x10,(uchar *)puVar4,(uchar *)0x0);
  *(undefined *)((long)puVar4 + 0x1f) = 0;
  *(undefined *)((long)puVar4 + 0x1e) = 0;
  *(undefined *)((long)puVar4 + 0x1d) = 0;
  *(undefined *)((long)puVar4 + 0x1c) = 0;
  *(undefined *)((long)puVar4 + 0x1b) = 0;
  *(undefined *)((long)puVar4 + 0x1a) = 0;
  *(undefined *)((long)puVar4 + 0x19) = 0;
  *(undefined *)(puVar4 + 3) = 0;
  *(undefined *)((long)puVar4 + 0x17) = 0;
  *(undefined *)((long)puVar4 + 0x16) = 0;
  *(undefined *)((long)puVar4 + 0x15) = 0;
  *(undefined *)((long)puVar4 + 0x14) = 0;
  *(undefined *)((long)puVar4 + 0x13) = 0;
  *(undefined *)((long)puVar4 + 0x12) = 0;
  *(undefined *)((long)puVar4 + 0x11) = 0;
  *(undefined *)(puVar4 + 2) = 0;
  *(undefined *)((long)puVar4 + 0xf) = 0;
  *(undefined *)((long)puVar4 + 0xe) = 0;
  *(undefined *)((long)puVar4 + 0xd) = 0;
  *(undefined *)((long)puVar4 + 0xc) = 0;
  *(undefined *)((long)puVar4 + 0xb) = 0;
  *(undefined *)((long)puVar4 + 10) = 0;
  *(undefined *)((long)puVar4 + 9) = 0;
  *(undefined *)(puVar4 + 1) = 0;
  *(undefined *)((long)puVar4 + 7) = 0;
  *(undefined *)((long)puVar4 + 6) = 0;
  *(undefined *)((long)puVar4 + 5) = 0;
  *(undefined *)((long)puVar4 + 4) = 0;
  *(undefined *)((long)puVar4 + 3) = 0;
  *(undefined *)((long)puVar4 + 2) = 0;
  *(undefined *)((long)puVar4 + 1) = 0;
  *(undefined *)puVar4 = 0;
                    /* try { // try from 00cae0b4 to 00cae0bb has its CatchHandler @ 00cae0f0 */
  UnalignedDeallocate(puVar4);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


