// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InputRecoverableMessage
// Entry Point: 00cb4780
// Size: 228 bytes
// Signature: undefined __thiscall InputRecoverableMessage(DL_SignerBase<CryptoPP::Integer> * this, PK_MessageAccumulator * param_1, uchar * param_2, ulong param_3)


/* CryptoPP::DL_SignerBase<CryptoPP::Integer>::InputRecoverableMessage(CryptoPP::PK_MessageAccumulator&,
   unsigned char const*, unsigned long) const */

void __thiscall
CryptoPP::DL_SignerBase<CryptoPP::Integer>::InputRecoverableMessage
          (DL_SignerBase<CryptoPP::Integer> *this,PK_MessageAccumulator *param_1,uchar *param_2,
          ulong param_3)

{
  ulong uVar1;
  void *__dest;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  __dest = *(void **)(param_1 + 0x20);
  if (uVar1 != param_3) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined *)((long)__dest + (uVar1 - 1)) = 0;
    }
    UnalignedDeallocate(__dest);
    if (param_3 == 0) {
      *(ulong *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      goto LAB_00cb4804;
    }
    __dest = (void *)UnalignedAllocate(param_3);
  }
  *(ulong *)(param_1 + 0x18) = param_3;
  *(void **)(param_1 + 0x20) = __dest;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  if ((param_2 != (uchar *)0x0) && (__dest != (void *)0x0)) {
    memcpy(__dest,param_2,param_3);
  }
LAB_00cb4804:
  lVar4 = *(long *)this;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  plVar2 = (long *)(**(code **)(lVar4 + 0x90))(this);
  uVar3 = (**(code **)(*(long *)param_1 + 0xa0))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00cb4860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))
            (plVar2,uVar3,param_2,param_3,*(undefined8 *)(param_1 + 0x60),
             *(undefined8 *)(param_1 + 0x58),param_1 + 0x68);
  return;
}


