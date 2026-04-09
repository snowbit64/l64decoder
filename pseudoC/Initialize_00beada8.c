// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00beada8
// Size: 348 bytes
// Signature: undefined __thiscall Initialize(KeyAgreementInitiator * this, uchar * param_1, uint param_2)


/* KeyAgreementInitiator::Initialize(unsigned char const*, unsigned int) */

undefined4 __thiscall
KeyAgreementInitiator::Initialize(KeyAgreementInitiator *this,uchar *param_1,uint param_2)

{
  size_t __n;
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined *__dest;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined *__src;
  
  uVar3 = KeyAgreementCommon::Initialize();
  if ((uVar3 & 1) != 0) {
    plVar6 = (long *)(this + 8);
    plVar4 = (long *)(**(code **)(*plVar6 + 0x88))(plVar6);
    iVar1 = (**(code **)(*plVar4 + 0xc0))(plVar4,1);
    if (iVar1 - 1U == param_2) {
      plVar4 = (long *)(**(code **)(*(long *)(this + 8) + 0x88))(plVar6);
      uVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4,1);
      uVar3 = *(ulong *)(this + 0x198);
      __src = *(undefined **)(this + 0x1a0);
      uVar7 = (ulong)uVar2;
      if (uVar3 != uVar7) {
        if (uVar2 == 0) {
          __dest = (undefined *)0x0;
        }
        else {
          __dest = (undefined *)CryptoPP::UnalignedAllocate(uVar7);
          if ((__src != (undefined *)0x0) && (__dest != (undefined *)0x0)) {
            __n = uVar7;
            if (uVar3 <= uVar7) {
              __n = uVar3;
            }
            memcpy(__dest,__src,__n);
          }
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          __src[uVar3 - 1] = 0;
        }
        CryptoPP::UnalignedDeallocate(__src);
        __src = __dest;
      }
      *(ulong *)(this + 0x198) = uVar7;
      *(undefined **)(this + 0x1a0) = __src;
      *(undefined8 *)(this + 400) = 0xffffffffffffffff;
      *__src = 4;
      lVar5 = *(long *)(this + 0x1a0);
      plVar4 = (long *)(**(code **)(*(long *)(this + 8) + 0x88))(plVar6);
      iVar1 = (**(code **)(*plVar4 + 0xc0))(plVar4,1);
      memcpy((void *)(lVar5 + 1),param_1,(ulong)(iVar1 - 1));
      return 1;
    }
  }
  return 0;
}


