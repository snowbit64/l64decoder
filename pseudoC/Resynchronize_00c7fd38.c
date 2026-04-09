// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Resynchronize
// Entry Point: 00c7fd38
// Size: 224 bytes
// Signature: undefined __thiscall Resynchronize(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::OFB_ModePolicy>> * this, uchar * param_1, int param_2)


/* CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::OFB_ModePolicy> >::Resynchronize(unsigned char const*, int) */

void __thiscall
CryptoPP::
AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::OFB_ModePolicy>>
::Resynchronize(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::OFB_ModePolicy>>
                *this,uchar *param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  plVar4 = (long *)(**(code **)(*(long *)this + 0xe0))();
  lVar7 = *plVar4;
  *(undefined8 *)(this + 0x68) = 0;
  iVar2 = (**(code **)(lVar7 + 0x18))();
  iVar3 = (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar1 = *(ulong *)(this + 0x58);
  pvVar5 = *(void **)(this + 0x60);
  uVar8 = (ulong)(uint)(iVar3 * iVar2);
  if (uVar1 != uVar8) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined *)((long)pvVar5 + (uVar1 - 1)) = 0;
    }
    UnalignedDeallocate(pvVar5);
    if (iVar3 * iVar2 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)UnalignedAllocate(uVar8);
    }
  }
  *(ulong *)(this + 0x58) = uVar8;
  *(void **)(this + 0x60) = pvVar5;
  *(undefined8 *)(this + 0x50) = 0xffffffffffffffff;
  uVar6 = SimpleKeyingInterface::ThrowIfInvalidIVLength((SimpleKeyingInterface *)this,param_2);
                    /* WARNING: Could not recover jumptable at 0x00c7fe14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x50))(plVar4,pvVar5,param_1,uVar6);
  return;
}


