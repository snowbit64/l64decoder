// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ModularArithmetic
// Entry Point: 00d01850
// Size: 1460 bytes
// Signature: undefined __thiscall ModularArithmetic(ModularArithmetic * this, BufferedTransformation * param_1)


/* CryptoPP::ModularArithmetic::ModularArithmetic(CryptoPP::BufferedTransformation&) */

void __thiscall
CryptoPP::ModularArithmetic::ModularArithmetic
          (ModularArithmetic *this,BufferedTransformation *param_1)

{
  ulong uVar1;
  long lVar2;
  int *piVar3;
  bool bVar4;
  undefined8 *puVar5;
  void *__dest;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  void *__src;
  int *local_e8;
  long local_e0;
  undefined **local_d0;
  int *local_c8;
  int *local_c0;
  undefined8 uStack_b8;
  CryptoPP local_b0;
  undefined7 uStack_af;
  undefined uStack_a8;
  undefined7 uStack_a7;
  undefined uStack_a0;
  undefined uStack_9f;
  undefined6 uStack_9e;
  undefined **local_90;
  undefined **ppuStack_88;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *(undefined ***)(this + 8) = &PTR__AbstractGroup_010009d8;
  *(ModularArithmetic **)(this + 0x10) = this;
  *(undefined ***)this = &PTR__ModularArithmetic_0100c910;
  DataMemoryBarrier(2,3);
  if ((DAT_02120808 & 1) == 0) {
    DAT_02120978 = Baseline_MultiplyTop2;
    DAT_02120980 = Baseline_MultiplyTop4;
    DAT_021208a0 = Baseline_Multiply2;
    DAT_021208a8 = Baseline_Multiply4;
    DAT_021208b0 = Baseline_Multiply8;
    DAT_02120930 = Baseline_MultiplyBottom2;
    DAT_02120938 = Baseline_MultiplyBottom4;
    DAT_02120940 = Baseline_MultiplyBottom8;
    DAT_021208e8 = Baseline_Square2;
    DAT_021208f0 = Baseline_Square4;
    DAT_021208f8 = Baseline_Square8;
    DAT_02120988 = Baseline_MultiplyTop8;
    DAT_021208c0 = Baseline_Multiply16;
    DAT_02120950 = Baseline_MultiplyBottom16;
    DAT_02120908 = Baseline_Square16;
    DAT_02120998 = Baseline_MultiplyTop16;
    DAT_02120808 = 1;
    DataMemoryBarrier(2,3);
  }
  *(undefined8 *)(this + 0x30) = 2;
  *(undefined8 *)(this + 0x28) = 0x3fffffffffffffff;
  *(undefined ***)(this + 0x18) = &PTR__Integer_0100c890;
  puVar5 = (undefined8 *)UnalignedAllocate(8);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined8 **)(this + 0x38) = puVar5;
  *puVar5 = 0;
  DataMemoryBarrier(2,3);
  if ((DAT_02120808 & 1) == 0) {
    DAT_02120978 = Baseline_MultiplyTop2;
    DAT_02120980 = Baseline_MultiplyTop4;
    DAT_021208a0 = Baseline_Multiply2;
    DAT_021208a8 = Baseline_Multiply4;
    DAT_021208b0 = Baseline_Multiply8;
    DAT_02120930 = Baseline_MultiplyBottom2;
    DAT_02120938 = Baseline_MultiplyBottom4;
    DAT_02120940 = Baseline_MultiplyBottom8;
    DAT_021208e8 = Baseline_Square2;
    DAT_021208f0 = Baseline_Square4;
    DAT_021208f8 = Baseline_Square8;
    DAT_02120988 = Baseline_MultiplyTop8;
    DAT_021208c0 = Baseline_Multiply16;
    DAT_02120950 = Baseline_MultiplyBottom16;
    DAT_02120908 = Baseline_Square16;
    DAT_02120998 = Baseline_MultiplyTop16;
    DAT_02120808 = 1;
    DataMemoryBarrier(2,3);
  }
  *(undefined ***)(this + 0x48) = &PTR__Integer_0100c890;
  *(undefined8 *)(this + 0x60) = 2;
  *(undefined8 *)(this + 0x58) = 0x3fffffffffffffff;
                    /* try { // try from 00d01a88 to 00d01a8f has its CatchHandler @ 00d01e74 */
  puVar5 = (undefined8 *)UnalignedAllocate(8);
  *(undefined8 **)(this + 0x68) = puVar5;
  *(undefined4 *)(this + 0x70) = 0;
  *puVar5 = 0;
  DataMemoryBarrier(2,3);
  if ((DAT_02120808 & 1) == 0) {
    DAT_02120978 = Baseline_MultiplyTop2;
    DAT_02120980 = Baseline_MultiplyTop4;
    DAT_021208a0 = Baseline_Multiply2;
    DAT_021208a8 = Baseline_Multiply4;
    DAT_021208b0 = Baseline_Multiply8;
    DAT_02120930 = Baseline_MultiplyBottom2;
    DAT_02120938 = Baseline_MultiplyBottom4;
    DAT_02120940 = Baseline_MultiplyBottom8;
    DAT_021208e8 = Baseline_Square2;
    DAT_021208f0 = Baseline_Square4;
    DAT_021208f8 = Baseline_Square8;
    DAT_02120988 = Baseline_MultiplyTop8;
    DAT_021208c0 = Baseline_Multiply16;
    DAT_02120950 = Baseline_MultiplyBottom16;
    DAT_02120908 = Baseline_Square16;
    DAT_02120998 = Baseline_MultiplyTop16;
    DAT_02120808 = 1;
    DataMemoryBarrier(2,3);
  }
  *(undefined ***)(this + 0x78) = &PTR__Integer_0100c890;
  *(undefined8 *)(this + 0x90) = 2;
  *(undefined8 *)(this + 0x88) = 0x3fffffffffffffff;
                    /* try { // try from 00d01b7c to 00d01b83 has its CatchHandler @ 00d01e6c */
  puVar5 = (undefined8 *)UnalignedAllocate(8);
  *(undefined8 **)(this + 0x98) = puVar5;
  *(undefined4 *)(this + 0xa0) = 0;
  *puVar5 = 0;
                    /* try { // try from 00d01b90 to 00d01b9f has its CatchHandler @ 00d01e64 */
  uVar6 = 0x30;
  BERGeneralDecoder::BERGeneralDecoder((BERGeneralDecoder *)&local_90,param_1,'0');
  local_c0 = (int *)0x0;
  uStack_b8 = 0;
  local_90 = &PTR__BERGeneralDecoder_01000a70;
  ppuStack_88 = &PTR__BERSequenceDecoder_01000c08;
  local_d0 = &PTR__OID_00fecd98;
  local_c8 = (int *)0x0;
                    /* try { // try from 00d01bc8 to 00d01bd3 has its CatchHandler @ 00d01e54 */
  OID::BERDecode((OID *)&local_d0,(BufferedTransformation *)&local_90);
                    /* try { // try from 00d01bd4 to 00d01bdb has its CatchHandler @ 00d01e50 */
  ASN1::id_fieldType();
                    /* try { // try from 00d01bdc to 00d01beb has its CatchHandler @ 00d01e2c */
  operator+(&local_b0,(OID *)0x1,uVar6);
  local_b0 = (CryptoPP)0x98;
  uStack_af = 0xfecd;
  if ((void *)CONCAT71(uStack_a7,uStack_a8) != (void *)0x0) {
    uStack_9f = (undefined)uStack_a7;
    uStack_9e = (undefined6)((uint7)uStack_a7 >> 8);
    operator_delete((void *)CONCAT71(uStack_a7,uStack_a8));
  }
  if ((long)local_c0 - (long)local_c8 == local_e0 - (long)local_e8) {
    piVar8 = local_e8;
    piVar3 = local_c8;
    if (local_c8 == local_c0) {
      bVar4 = false;
    }
    else {
      do {
        piVar7 = piVar3 + 1;
        bVar4 = *piVar3 != *piVar8;
        if (bVar4) break;
        piVar8 = piVar8 + 1;
        piVar3 = piVar7;
      } while (piVar7 != local_c0);
    }
  }
  else {
    bVar4 = true;
  }
  if (local_e8 != (int *)0x0) {
    operator_delete(local_e8);
  }
  if (bVar4) {
    puVar5 = (undefined8 *)__cxa_allocate_exception(0x28);
    uStack_9f = 0;
    local_b0 = (CryptoPP)0x20;
    uStack_a7 = 0x6f727265206564;
    uStack_a0 = 0x72;
    uStack_af = 0x63656420524542;
    uStack_a8 = 0x6f;
    *(undefined4 *)(puVar5 + 1) = 1;
    *puVar5 = &PTR__Exception_00fe0298;
                    /* try { // try from 00d01db0 to 00d01db7 has its CatchHandler @ 00d01e04 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar5 + 2));
    *puVar5 = &PTR__Exception_00fe9ee0;
    if (((byte)local_b0 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_9e,CONCAT11(uStack_9f,uStack_a0)));
    }
    *puVar5 = &PTR__Exception_01002700;
                    /* try { // try from 00d01de8 to 00d01dff has its CatchHandler @ 00d01e7c */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar5,&BERDecodeErr::typeinfo,Exception::~Exception);
  }
                    /* try { // try from 00d01c70 to 00d01caf has its CatchHandler @ 00d01e7c */
  Integer::BERDecode((Integer *)(this + 0x18),(BufferedTransformation *)&local_90);
  BERGeneralDecoder::MessageEnd();
  uVar6 = *(ulong *)(this + 0x60);
  __src = *(void **)(this + 0x68);
  uVar9 = *(ulong *)(this + 0x30);
  if (uVar6 != uVar9) {
    AllocatorBase<unsigned_int>::CheckSize(uVar9);
    if (uVar9 == 0) {
      __dest = (void *)0x0;
    }
    else {
      __dest = (void *)UnalignedAllocate(uVar9 << 2);
      if ((__src != (void *)0x0) && (__dest != (void *)0x0)) {
        uVar1 = uVar9;
        if (uVar6 <= uVar9) {
          uVar1 = uVar6;
        }
        memcpy(__dest,__src,uVar1 << 2);
      }
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)((long)__src + uVar6 * 4 + -4) = 0;
    }
                    /* try { // try from 00d01d0c to 00d01d13 has its CatchHandler @ 00d01e7c */
    UnalignedDeallocate(__src);
    __src = __dest;
  }
  local_d0 = &PTR__OID_00fecd98;
  *(ulong *)(this + 0x60) = uVar9;
  *(void **)(this + 0x68) = __src;
  *(undefined8 *)(this + 0x58) = 0x3fffffffffffffff;
  if (local_c8 != (int *)0x0) {
    local_c0 = local_c8;
    operator_delete(local_c8);
  }
  BERGeneralDecoder::~BERGeneralDecoder((BERGeneralDecoder *)&local_90);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


