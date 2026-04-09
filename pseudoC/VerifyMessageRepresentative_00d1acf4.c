// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VerifyMessageRepresentative
// Entry Point: 00d1acf4
// Size: 308 bytes
// Signature: undefined __cdecl VerifyMessageRepresentative(HashTransformation * param_1, pair param_2, bool param_3, uchar * param_4, ulong param_5)


/* CryptoPP::PK_RecoverableSignatureMessageEncodingMethod::VerifyMessageRepresentative(CryptoPP::HashTransformation&,
   std::__ndk1::pair<unsigned char const*, unsigned int>, bool, unsigned char*, unsigned long) const
    */

byte CryptoPP::PK_RecoverableSignatureMessageEncodingMethod::VerifyMessageRepresentative
               (HashTransformation *param_1,pair param_2,bool param_3,uchar *param_4,ulong param_5)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  void *pvVar4;
  long *plVar5;
  long extraout_x1;
  long lVar6;
  
  plVar5 = (long *)(ulong)param_2;
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  (**(code **)(*plVar5 + 0x48))(plVar5);
  uVar3 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if (uVar3 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = (void *)UnalignedAllocate(uVar3);
  }
                    /* try { // try from 00d1ad9c to 00d1adbf has its CatchHandler @ 00d1ae2c */
  bVar2 = (**(code **)(*(long *)param_1 + 0x48))(param_1,plVar5,param_3,param_4,(uint)param_5 & 1);
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined *)((long)pvVar4 + (uVar3 - 1)) = 0;
  }
                    /* try { // try from 00d1ade0 to 00d1ade7 has its CatchHandler @ 00d1ae28 */
  UnalignedDeallocate(pvVar4);
  if (*(long *)(lVar1 + 0x28) == lVar6) {
    return bVar2 & extraout_x1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


