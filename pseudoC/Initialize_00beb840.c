// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00beb840
// Size: 528 bytes
// Signature: undefined __thiscall Initialize(KeyAgreementResponder * this, SecureRandomGenerator * param_1, uchar * param_2, int param_3, uchar * param_4, int param_5)


/* KeyAgreementResponder::Initialize(SecureRandomGenerator*, unsigned char const*, int, unsigned
   char const*, int) */

undefined8 __thiscall
KeyAgreementResponder::Initialize
          (KeyAgreementResponder *this,SecureRandomGenerator *param_1,uchar *param_2,int param_3,
          uchar *param_4,int param_5)

{
  size_t __n;
  ulong uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined *__dest;
  void *__dest_00;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined *__src;
  
  plVar8 = (long *)(this + 8);
  plVar4 = (long *)(**(code **)(*plVar8 + 0x88))(plVar8);
  iVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4,1);
  if (iVar2 + -1 != param_3) {
    return 0;
  }
  plVar4 = (long *)(**(code **)(*plVar8 + 0x88))(plVar8);
  (**(code **)(*plVar4 + 0xa0))();
  iVar2 = CryptoPP::Integer::ByteCount();
  if (iVar2 != param_5) {
    return 0;
  }
  plVar4 = (long *)(**(code **)(*(long *)(this + 8) + 0x88))(plVar8);
  uVar3 = (**(code **)(*plVar4 + 0xc0))(plVar4,1);
  uVar1 = *(ulong *)(this + 0x1b8);
  __src = *(undefined **)(this + 0x1c0);
  uVar9 = (ulong)uVar3;
  if (uVar1 != uVar9) {
    if (uVar3 == 0) {
      __dest = (undefined *)0x0;
    }
    else {
      __dest = (undefined *)CryptoPP::UnalignedAllocate(uVar9);
      if ((__src != (undefined *)0x0) && (__dest != (undefined *)0x0)) {
        __n = uVar9;
        if (uVar1 <= uVar9) {
          __n = uVar1;
        }
        memcpy(__dest,__src,__n);
      }
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      __src[uVar1 - 1] = 0;
    }
    CryptoPP::UnalignedDeallocate(__src);
    __src = __dest;
  }
  *(ulong *)(this + 0x1b8) = uVar9;
  *(undefined **)(this + 0x1c0) = __src;
  lVar7 = *(long *)(this + 8);
  *(undefined8 *)(this + 0x1b0) = 0xffffffffffffffff;
  *__src = 4;
  lVar6 = *(long *)(this + 0x1c0);
  plVar4 = (long *)(**(code **)(lVar7 + 0x88))(plVar8);
  iVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4,1);
  memcpy((void *)(lVar6 + 1),param_2,(ulong)(iVar2 - 1));
  uVar1 = *(ulong *)(this + 0x198);
  __dest_00 = *(void **)(this + 0x1a0);
  uVar9 = (ulong)param_5;
  if (uVar1 != uVar9) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined *)((long)__dest_00 + (uVar1 - 1)) = 0;
    }
    CryptoPP::UnalignedDeallocate(__dest_00);
    if (param_5 == 0) {
      *(undefined8 *)(this + 0x198) = 0;
      *(undefined8 *)(this + 0x1a0) = 0;
      goto LAB_00beba24;
    }
    __dest_00 = (void *)CryptoPP::UnalignedAllocate(uVar9);
  }
  *(ulong *)(this + 0x198) = uVar9;
  *(void **)(this + 0x1a0) = __dest_00;
  *(undefined8 *)(this + 400) = 0xffffffffffffffff;
  if ((param_4 != (uchar *)0x0) && (__dest_00 != (void *)0x0)) {
    memcpy(__dest_00,param_4,uVar9);
  }
LAB_00beba24:
  *(undefined8 *)(this + 400) = 0xffffffffffffffff;
  uVar5 = Rekey(this,param_1);
  return uVar5;
}


