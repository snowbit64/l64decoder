// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetNextRecommendedParametersOID
// Entry Point: 00c9ea90
// Size: 372 bytes
// Signature: undefined __thiscall GetNextRecommendedParametersOID(DL_GroupParameters_EC<CryptoPP::ECP> * this, OID * param_1)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::GetNextRecommendedParametersOID(CryptoPP::OID
   const&) */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::GetNextRecommendedParametersOID
          (DL_GroupParameters_EC<CryptoPP::ECP> *this,OID *param_1)

{
  uint *puVar1;
  long lVar2;
  uint *puVar3;
  void *__dest;
  undefined8 *in_x8;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  size_t __n;
  long lVar7;
  long local_58;
  long lStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00c9a8bc(&lStack_50,&local_58);
  lVar7 = lStack_50;
  if (local_58 - lStack_50 != 0) {
    uVar5 = (local_58 - lStack_50 >> 4) * -0x3333333333333333;
    do {
      uVar4 = uVar5 >> 1;
      lVar6 = lVar7 + uVar4 * 0x50;
      puVar1 = *(uint **)(this + 8);
      puVar3 = *(uint **)(lVar6 + 8);
      while (puVar3 != *(uint **)(lVar6 + 0x10)) {
        if (puVar1 == *(uint **)(this + 0x10)) goto LAB_00c9eb00;
        if (*puVar1 < *puVar3) goto LAB_00c9eb00;
        if (*puVar3 < *puVar1) break;
        puVar1 = puVar1 + 1;
        puVar3 = puVar3 + 1;
      }
      lVar7 = lVar7 + 0x50 + uVar4 * 0x50;
      uVar4 = uVar5 + ~uVar4;
LAB_00c9eb00:
      uVar5 = uVar4;
    } while (uVar4 != 0);
  }
  in_x8[2] = 0;
  in_x8[3] = 0;
  in_x8[1] = 0;
  *in_x8 = &PTR__OID_00fecd98;
  if ((lVar7 != local_58) && (uVar5 = *(long *)(lVar7 + 0x10) - *(long *)(lVar7 + 8), uVar5 != 0)) {
    if ((long)uVar5 < 0) {
                    /* try { // try from 00c9ebf8 to 00c9ebff has its CatchHandler @ 00c9ec04 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00c9eb90 to 00c9eb97 has its CatchHandler @ 00c9ec04 */
    __dest = operator_new(uVar5);
    in_x8[1] = __dest;
    in_x8[2] = __dest;
    in_x8[3] = (void *)((long)__dest + ((long)uVar5 >> 2) * 4);
    __n = *(long *)(lVar7 + 0x10) - (long)*(void **)(lVar7 + 8);
    if (0 < (long)__n) {
      memcpy(__dest,*(void **)(lVar7 + 8),__n);
      __dest = (void *)((long)__dest + __n);
    }
    in_x8[2] = __dest;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


