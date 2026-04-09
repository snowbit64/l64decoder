// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateChallenge
// Entry Point: 00beaf04
// Size: 556 bytes
// Signature: undefined __thiscall GenerateChallenge(KeyAgreementInitiator * this, SecureRandomGenerator * param_1, uchar * param_2, uint param_3)


/* KeyAgreementInitiator::GenerateChallenge(SecureRandomGenerator*, unsigned char*, unsigned int) */

bool __thiscall
KeyAgreementInitiator::GenerateChallenge
          (KeyAgreementInitiator *this,SecureRandomGenerator *param_1,uchar *param_2,uint param_3)

{
  size_t sVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  void *__dest;
  uchar *__dest_00;
  long *this_00;
  ulong uVar8;
  uchar *__src;
  void *__src_00;
  undefined **local_78;
  SecureRandomGenerator *pSStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this_00 = (long *)(this + 8);
  plVar7 = (long *)(**(code **)(*this_00 + 0x88))(this_00);
  iVar5 = (**(code **)(*plVar7 + 0xc0))(plVar7,1);
  if (param_3 + 1 == iVar5) {
    CryptoPP::Algorithm::Algorithm((Algorithm *)&local_78,true);
    local_78 = &PTR__Clonable_00fecd08;
    pSStack_70 = param_1;
    plVar7 = (long *)(**(code **)(*(long *)(this + 8) + 0x88))(this_00);
    (**(code **)(*plVar7 + 0xa0))();
    uVar6 = CryptoPP::Integer::ByteCount();
    uVar2 = *(ulong *)(this + 0x1b8);
    __src_00 = *(void **)(this + 0x1c0);
    uVar8 = (ulong)uVar6;
    if (uVar2 != uVar8) {
      if (uVar6 == 0) {
        __dest = (void *)0x0;
      }
      else {
        __dest = (void *)CryptoPP::UnalignedAllocate(uVar8);
        if ((__src_00 != (void *)0x0) && (__dest != (void *)0x0)) {
          sVar1 = uVar8;
          if (uVar2 <= uVar8) {
            sVar1 = uVar2;
          }
          memcpy(__dest,__src_00,sVar1);
        }
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined *)((long)__src_00 + (uVar2 - 1)) = 0;
      }
      CryptoPP::UnalignedDeallocate(__src_00);
      __src_00 = __dest;
    }
    *(ulong *)(this + 0x1b8) = uVar8;
    *(void **)(this + 0x1c0) = __src_00;
    *(undefined8 *)(this + 0x1b0) = 0xffffffffffffffff;
    plVar7 = (long *)(**(code **)(*(long *)(this + 8) + 0x88))(this_00);
    uVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7,1);
    uVar2 = *(ulong *)(this + 0x1d8);
    __src = *(uchar **)(this + 0x1e0);
    uVar8 = (ulong)uVar6;
    if (uVar2 != uVar8) {
      if (uVar6 == 0) {
        __dest_00 = (uchar *)0x0;
      }
      else {
        __dest_00 = (uchar *)CryptoPP::UnalignedAllocate(uVar8);
        if ((__src != (uchar *)0x0) && (__dest_00 != (uchar *)0x0)) {
          sVar1 = uVar8;
          if (uVar2 <= uVar8) {
            sVar1 = uVar2;
          }
          memcpy(__dest_00,__src,sVar1);
        }
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        __src[uVar2 - 1] = '\0';
      }
      CryptoPP::UnalignedDeallocate(__src);
      __src = __dest_00;
    }
    *(ulong *)(this + 0x1d8) = uVar8;
    *(uchar **)(this + 0x1e0) = __src;
    *(undefined8 *)(this + 0x1d0) = 0xffffffffffffffff;
    CryptoPP::SimpleKeyAgreementDomain::GenerateKeyPair
              ((SimpleKeyAgreementDomain *)this_00,(RandomNumberGenerator *)&local_78,
               *(uchar **)(this + 0x1c0),__src);
    bVar4 = **(char **)(this + 0x1e0) == '\x04';
    if (bVar4) {
      memcpy(param_2,*(char **)(this + 0x1e0) + 1,(ulong)param_3);
    }
  }
  else {
    bVar4 = false;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


