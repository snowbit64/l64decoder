// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00c9f444
// Size: 1084 bytes
// Signature: undefined __thiscall Initialize(DL_GroupParameters_EC<CryptoPP::EC2N> * this, OID * param_1)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::Initialize(CryptoPP::OID const&) */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::Initialize
          (DL_GroupParameters_EC<CryptoPP::EC2N> *this,OID *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 uVar11;
  ulong uVar12;
  UnknownOID *this_00;
  uint *puVar13;
  uint *puVar14;
  ulong uVar15;
  long lVar16;
  uint *puVar17;
  long lVar18;
  long *plVar19;
  char *pcVar20;
  long local_1c8;
  long lStack_1c0;
  undefined **local_1b8 [2];
  ulong local_1a8;
  ulong uStack_1a0;
  void *local_198;
  undefined **local_188;
  undefined **ppuStack_180;
  long *local_170;
  undefined **local_120;
  PolynomialMod2 aPStack_118 [8];
  ulong local_110;
  ulong uStack_108;
  void *local_100;
  PolynomialMod2 aPStack_f8 [8];
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  undefined local_d8;
  undefined **local_d0;
  undefined **ppuStack_c8;
  long *local_b8;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  FUN_00ca0270(&lStack_1c0,&local_1c8);
  puVar1 = *(uint **)(param_1 + 8);
  puVar2 = *(uint **)(param_1 + 0x10);
  lVar18 = lStack_1c0;
  if ((local_1c8 - lStack_1c0 != 0) && (puVar1 != puVar2)) {
    uVar12 = (local_1c8 - lStack_1c0 >> 3) * 0x2e8ba2e8ba2e8ba3;
    do {
      uVar15 = uVar12 >> 1;
      lVar16 = lVar18 + uVar15 * 0x58;
      puVar17 = *(uint **)(lVar16 + 8);
      puVar3 = puVar1;
      while (puVar14 = puVar3 + 1, puVar17 != *(uint **)(lVar16 + 0x10)) {
        if (*puVar17 < *puVar3) break;
        if ((*puVar3 < *puVar17) || (puVar17 = puVar17 + 1, puVar3 = puVar14, puVar14 == puVar2))
        goto LAB_00c9f4cc;
      }
      lVar18 = lVar18 + 0x58 + uVar15 * 0x58;
      uVar15 = uVar12 + ~uVar15;
LAB_00c9f4cc:
      uVar12 = uVar15;
    } while (uVar15 != 0);
  }
  if (lVar18 != local_1c8) {
    puVar17 = *(uint **)(lVar18 + 8);
    puVar3 = *(uint **)(lVar18 + 0x10);
    if ((long)puVar3 - (long)puVar17 == (long)puVar2 - (long)puVar1) {
      puVar14 = puVar1;
      if (puVar17 != puVar3) {
        do {
          puVar13 = puVar17 + 1;
          uVar4 = *puVar17;
          uVar5 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar17 = puVar13;
        } while (uVar4 == uVar5 && puVar13 != puVar3);
        if (uVar4 != uVar5) goto LAB_00c9f854;
      }
      if (this + 0x168 != (DL_GroupParameters_EC<CryptoPP::EC2N> *)param_1) {
        std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
        assign<unsigned_int*>
                  ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(this + 0x170),
                   puVar1,puVar2);
      }
      plVar7 = (long *)EcRecommendedParameters<CryptoPP::EC2N>::NewEC();
      plVar8 = (long *)plVar7[2];
      plVar19 = *(long **)(this + 0x28);
      if (plVar8 != (long *)0x0) {
                    /* try { // try from 00c9f5a4 to 00c9f5a7 has its CatchHandler @ 00c9f95c */
        plVar8 = (long *)(**(code **)(*plVar8 + 0xc0))();
      }
      *(long **)(this + 0x28) = plVar8;
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 8))(plVar19);
      }
                    /* try { // try from 00c9f5c8 to 00c9f5ef has its CatchHandler @ 00c9f95c */
      PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x30),(PolynomialMod2 *)(plVar7 + 3));
      PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x50),(PolynomialMod2 *)(plVar7 + 7));
      PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x78),(PolynomialMod2 *)(plVar7 + 0xc));
      PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x98),(PolynomialMod2 *)(plVar7 + 0x10));
      this[0xb8] = *(DL_GroupParameters_EC<CryptoPP::EC2N> *)(plVar7 + 0x14);
      pcVar20 = *(char **)(lVar18 + 0x30);
                    /* try { // try from 00c9f5fc to 00c9f603 has its CatchHandler @ 00c9f910 */
      puVar9 = (undefined8 *)operator_new(0x68);
                    /* try { // try from 00c9f608 to 00c9f61f has its CatchHandler @ 00c9f914 */
      piVar10 = (int *)HexDecoder::GetDefaultDecodingLookupArray();
      BaseN_Decoder::BaseN_Decoder((BaseN_Decoder *)puVar9,piVar10,4,(BufferedTransformation *)0x0);
      *puVar9 = &PTR__BaseN_Decoder_0100c418;
      puVar9[1] = &PTR__HexDecoder_0100c5c8;
                    /* try { // try from 00c9f634 to 00c9f647 has its CatchHandler @ 00c9f910 */
      StringSource::StringSource
                ((StringSource *)&local_d0,pcVar20,true,(BufferedTransformation *)puVar9);
      local_120 = &PTR__EC2NPoint_010026a8;
                    /* try { // try from 00c9f660 to 00c9f667 has its CatchHandler @ 00c9f8b0 */
      PolynomialMod2::PolynomialMod2(aPStack_118);
                    /* try { // try from 00c9f66c to 00c9f66f has its CatchHandler @ 00c9f8a0 */
      PolynomialMod2::PolynomialMod2(aPStack_f8);
      local_d8 = 1;
                    /* try { // try from 00c9f678 to 00c9f6af has its CatchHandler @ 00c9f924 */
      uVar11 = BufferedTransformation::MaxRetrievable();
      (**(code **)(*(long *)(this + 0x18) + 0x80))(this + 0x18,&local_120,&local_d0,uVar11);
      (**(code **)(*(long *)this + 0x70))(this,&local_120);
      pcVar20 = *(char **)(lVar18 + 0x38);
                    /* try { // try from 00c9f6b4 to 00c9f6bb has its CatchHandler @ 00c9f8fc */
      puVar9 = (undefined8 *)operator_new(0x68);
                    /* try { // try from 00c9f6c0 to 00c9f6d7 has its CatchHandler @ 00c9f900 */
      piVar10 = (int *)HexDecoder::GetDefaultDecodingLookupArray();
      BaseN_Decoder::BaseN_Decoder((BaseN_Decoder *)puVar9,piVar10,4,(BufferedTransformation *)0x0);
      *puVar9 = &PTR__BaseN_Decoder_0100c418;
      puVar9[1] = &PTR__HexDecoder_0100c5c8;
                    /* try { // try from 00c9f6e4 to 00c9f6f7 has its CatchHandler @ 00c9f8fc */
      StringSource::StringSource
                ((StringSource *)&local_188,pcVar20,true,(BufferedTransformation *)puVar9);
                    /* try { // try from 00c9f6f8 to 00c9f713 has its CatchHandler @ 00c9f8cc */
      uVar12 = BufferedTransformation::MaxRetrievable();
      Integer::Decode((Integer *)(this + 0x188),(BufferedTransformation *)&local_188,uVar12,0);
                    /* try { // try from 00c9f718 to 00c9f71f has its CatchHandler @ 00c9f89c */
      Integer::Integer((Integer *)local_1b8,(ulong)*(uint *)(lVar18 + 0x40));
                    /* try { // try from 00c9f724 to 00c9f72b has its CatchHandler @ 00c9f88c */
      Integer::operator=((Integer *)(this + 0x1b8),(Integer *)local_1b8);
      if (uStack_1a0 <= local_1a8) {
        local_1a8 = uStack_1a0;
      }
      local_1b8[0] = &PTR__Integer_0100c890;
      for (; local_1a8 != 0; local_1a8 = local_1a8 - 1) {
        *(undefined4 *)((long)local_198 + local_1a8 * 4 + -4) = 0;
      }
                    /* try { // try from 00c9f764 to 00c9f767 has its CatchHandler @ 00c9f888 */
      UnalignedDeallocate(local_198);
      local_188 = &PTR__Filter_01005f60;
      ppuStack_180 = &PTR__Filter_01006108;
      if (local_170 != (long *)0x0) {
        (**(code **)(*local_170 + 8))();
      }
      local_120 = &PTR__EC2NPoint_010026a8;
      if (uStack_e8 <= local_f0) {
        local_f0 = uStack_e8;
      }
      for (; local_f0 != 0; local_f0 = local_f0 - 1) {
        *(undefined4 *)((long)local_e0 + local_f0 * 4 + -4) = 0;
      }
                    /* try { // try from 00c9f7c0 to 00c9f7c3 has its CatchHandler @ 00c9f884 */
      UnalignedDeallocate(local_e0);
      if (uStack_108 <= local_110) {
        local_110 = uStack_108;
      }
      for (; local_110 != 0; local_110 = local_110 - 1) {
        *(undefined4 *)((long)local_100 + local_110 * 4 + -4) = 0;
      }
                    /* try { // try from 00c9f7ec to 00c9f7ef has its CatchHandler @ 00c9f880 */
      UnalignedDeallocate(local_100);
      local_d0 = &PTR__Filter_01005f60;
      ppuStack_c8 = &PTR__Filter_01006108;
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 8))();
      }
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
      if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
LAB_00c9f854:
  this_00 = (UnknownOID *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c9f860 to 00c9f863 has its CatchHandler @ 00c9f8b8 */
  UnknownOID::UnknownOID(this_00);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,&UnknownOID::typeinfo,Exception::~Exception);
}


