// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Rekey
// Entry Point: 00beb668
// Size: 472 bytes
// Signature: undefined __thiscall Rekey(KeyAgreementResponder * this, SecureRandomGenerator * param_1)


/* KeyAgreementResponder::Rekey(SecureRandomGenerator*) */

void __thiscall
KeyAgreementResponder::Rekey(KeyAgreementResponder *this,SecureRandomGenerator *param_1)

{
  size_t sVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  void *__dest;
  uchar *__dest_00;
  long *this_00;
  ulong uVar6;
  uchar *__src;
  void *__src_00;
  undefined **local_68;
  SecureRandomGenerator *pSStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  CryptoPP::Algorithm::Algorithm((Algorithm *)&local_68,true);
  this_00 = (long *)(this + 8);
  local_68 = &PTR__Clonable_00fecd08;
  pSStack_60 = param_1;
  plVar5 = (long *)(**(code **)(*this_00 + 0x88))(this_00);
  (**(code **)(*plVar5 + 0xa0))();
  uVar4 = CryptoPP::Integer::ByteCount();
  uVar2 = *(ulong *)(this + 0x1d8);
  __src_00 = *(void **)(this + 0x1e0);
  uVar6 = (ulong)uVar4;
  if (uVar2 != uVar6) {
    if (uVar4 == 0) {
      __dest = (void *)0x0;
    }
    else {
      __dest = (void *)CryptoPP::UnalignedAllocate(uVar6);
      if ((__src_00 != (void *)0x0) && (__dest != (void *)0x0)) {
        sVar1 = uVar6;
        if (uVar2 <= uVar6) {
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
  *(ulong *)(this + 0x1d8) = uVar6;
  *(void **)(this + 0x1e0) = __src_00;
  *(undefined8 *)(this + 0x1d0) = 0xffffffffffffffff;
  plVar5 = (long *)(**(code **)(*(long *)(this + 8) + 0x88))(this_00);
  uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5,1);
  uVar2 = *(ulong *)(this + 0x1f8);
  __src = *(uchar **)(this + 0x200);
  uVar6 = (ulong)uVar4;
  if (uVar2 != uVar6) {
    if (uVar4 == 0) {
      __dest_00 = (uchar *)0x0;
    }
    else {
      __dest_00 = (uchar *)CryptoPP::UnalignedAllocate(uVar6);
      if ((__src != (uchar *)0x0) && (__dest_00 != (uchar *)0x0)) {
        sVar1 = uVar6;
        if (uVar2 <= uVar6) {
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
  *(ulong *)(this + 0x1f8) = uVar6;
  *(uchar **)(this + 0x200) = __src;
  *(undefined8 *)(this + 0x1f0) = 0xffffffffffffffff;
  CryptoPP::SimpleKeyAgreementDomain::GenerateKeyPair
            ((SimpleKeyAgreementDomain *)this_00,(RandomNumberGenerator *)&local_68,
             *(uchar **)(this + 0x1e0),__src);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(**(char **)(this + 0x200) == '\x04');
  }
  return;
}


