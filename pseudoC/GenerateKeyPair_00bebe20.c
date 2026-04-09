// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateKeyPair
// Entry Point: 00bebe20
// Size: 380 bytes
// Signature: undefined __thiscall GenerateKeyPair(KeyMaker * this, SecureRandomGenerator * param_1, uchar * param_2, uint param_3, uchar * param_4, uint param_5)


/* KeyMaker::GenerateKeyPair(SecureRandomGenerator*, unsigned char*, unsigned int, unsigned char*,
   unsigned int) */

void __thiscall
KeyMaker::GenerateKeyPair
          (KeyMaker *this,SecureRandomGenerator *param_1,uchar *param_2,uint param_3,uchar *param_4,
          uint param_5)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  uchar *puVar6;
  undefined8 uVar7;
  long *this_00;
  ulong uVar8;
  undefined **local_68;
  SecureRandomGenerator *pSStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 != (SecureRandomGenerator *)0x0) {
    this_00 = (long *)(this + 8);
    plVar5 = (long *)(**(code **)(*this_00 + 0x88))(this_00);
    iVar3 = (**(code **)(*plVar5 + 0xc0))(plVar5,1);
    if (iVar3 - 1U == param_3) {
      plVar5 = (long *)(**(code **)(*this_00 + 0x88))(this_00);
      (**(code **)(*plVar5 + 0xa0))();
      uVar4 = CryptoPP::Integer::ByteCount();
      if (uVar4 == param_5) {
        CryptoPP::Algorithm::Algorithm((Algorithm *)&local_68,true);
        local_68 = &PTR__Clonable_00fecd08;
        pSStack_60 = param_1;
        plVar5 = (long *)(**(code **)(*this_00 + 0x88))(this_00);
        uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5,1);
        uVar8 = (ulong)uVar4;
        if (uVar4 == 0) {
          puVar6 = (uchar *)0x0;
        }
        else {
          puVar6 = (uchar *)CryptoPP::UnalignedAllocate(uVar8);
        }
                    /* try { // try from 00bebf4c to 00bebf5f has its CatchHandler @ 00bebfa0 */
        CryptoPP::SimpleKeyAgreementDomain::GenerateKeyPair
                  ((SimpleKeyAgreementDomain *)this_00,(RandomNumberGenerator *)&local_68,param_4,
                   puVar6);
        memcpy(param_2,puVar6 + 1,(ulong)param_3);
        if (uVar4 != 0) {
          do {
            uVar1 = uVar8 - 1;
            puVar6[uVar8 - 1] = '\0';
            uVar8 = uVar1;
          } while (uVar1 != 0);
        }
                    /* try { // try from 00bebf88 to 00bebf8f has its CatchHandler @ 00bebf9c */
        CryptoPP::UnalignedDeallocate(puVar6);
        uVar7 = 1;
        goto LAB_00bebf18;
      }
    }
  }
  uVar7 = 0;
LAB_00bebf18:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


