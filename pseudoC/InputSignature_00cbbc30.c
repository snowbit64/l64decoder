// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InputSignature
// Entry Point: 00cbbc30
// Size: 340 bytes
// Signature: undefined __cdecl InputSignature(PK_MessageAccumulator * param_1, uchar * param_2, ulong param_3)


/* CryptoPP::DL_VerifierBase<CryptoPP::ECPPoint>::InputSignature(CryptoPP::PK_MessageAccumulator&,
   unsigned char const*, unsigned long) const */

void CryptoPP::DL_VerifierBase<CryptoPP::ECPPoint>::InputSignature
               (PK_MessageAccumulator *param_1,uchar *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong __n;
  void *__dest;
  ulong uVar4;
  long lVar5;
  
  plVar1 = (long *)(**(code **)(*(long *)param_1 + 0x98))();
  plVar2 = (long *)(**(code **)(*(long *)(param_1 + 0x10) + 0x18))();
  uVar3 = (**(code **)(*plVar2 + 0x10))();
  __n = (**(code **)(*plVar1 + 0x28))(plVar1,uVar3);
  uVar4 = *(ulong *)(param_2 + 0x78);
  __dest = *(void **)(param_2 + 0x80);
  if (uVar4 != __n) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined *)((long)__dest + (uVar4 - 1)) = 0;
    }
    UnalignedDeallocate(__dest);
    if (__n == 0) {
      *(ulong *)(param_2 + 0x78) = 0;
      *(undefined8 *)(param_2 + 0x80) = 0;
      goto LAB_00cbbcfc;
    }
    __dest = (void *)UnalignedAllocate(__n);
  }
  *(ulong *)(param_2 + 0x78) = __n;
  *(void **)(param_2 + 0x80) = __dest;
  *(undefined8 *)(param_2 + 0x70) = 0xffffffffffffffff;
  if ((param_3 != 0) && (__dest != (void *)0x0)) {
    memcpy(__dest,(void *)param_3,__n);
  }
LAB_00cbbcfc:
  lVar5 = *plVar1;
  *(undefined8 *)(param_2 + 0x70) = 0xffffffffffffffff;
  uVar4 = (**(code **)(lVar5 + 0x30))(plVar1,uVar3);
  Integer::Decode((Integer *)(param_2 + 0xb8),(uchar *)(param_3 + __n),uVar4,0);
  plVar1 = (long *)(**(code **)(*(long *)param_1 + 0xa0))(param_1);
  uVar3 = (**(code **)(*(long *)param_2 + 0xa0))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00cbbd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))
            (plVar1,uVar3,*(undefined8 *)(param_2 + 0x80),*(undefined8 *)(param_2 + 0x78));
  return;
}


