// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VerifyMessageRepresentative
// Entry Point: 00d1abc0
// Size: 284 bytes
// Signature: undefined __cdecl VerifyMessageRepresentative(HashTransformation * param_1, pair param_2, bool param_3, uchar * param_4, ulong param_5)


/* CryptoPP::PK_DeterministicSignatureMessageEncodingMethod::VerifyMessageRepresentative(CryptoPP::HashTransformation&,
   std::__ndk1::pair<unsigned char const*, unsigned int>, bool, unsigned char*, unsigned long) const
    */

uint CryptoPP::PK_DeterministicSignatureMessageEncodingMethod::VerifyMessageRepresentative
               (HashTransformation *param_1,pair param_2,bool param_3,uchar *param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  uchar *in_x5;
  long in_x6;
  long lVar5;
  ulong uVar6;
  uchar *puVar7;
  
  lVar2 = tpidr_el0;
  uVar1 = in_x6 + 7;
  lVar5 = *(long *)(lVar2 + 0x28);
  uVar6 = uVar1 >> 3;
  if (uVar1 < 8) {
    puVar7 = (uchar *)0x0;
  }
  else {
    puVar7 = (uchar *)UnalignedAllocate(uVar6);
  }
                    /* try { // try from 00d1ac38 to 00d1ac7b has its CatchHandler @ 00d1ace0 */
  uVar4 = NullRNG();
  (**(code **)(*(long *)param_1 + 0x38))
            (param_1,uVar4,0,0,param_2,param_3,param_4,(uint)param_5 & 1,puVar7);
  uVar3 = VerifyBufsEqual(in_x5,puVar7,uVar6);
  if (7 < uVar1) {
    do {
      uVar1 = uVar6 - 1;
      puVar7[uVar6 - 1] = '\0';
      uVar6 = uVar1;
    } while (uVar1 != 0);
  }
                    /* try { // try from 00d1ac9c to 00d1aca3 has its CatchHandler @ 00d1acdc */
  UnalignedDeallocate(puVar7);
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3 & 1;
}


