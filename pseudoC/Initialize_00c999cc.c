// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00c999cc
// Size: 1000 bytes
// Signature: undefined __thiscall Initialize(DL_GroupParameters_EC<CryptoPP::ECP> * this, OID * param_1)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::Initialize(CryptoPP::OID const&) */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::Initialize
          (DL_GroupParameters_EC<CryptoPP::ECP> *this,OID *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  ulong uVar11;
  UnknownOID *this_00;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  char *pcVar18;
  long *plVar19;
  long local_1e8;
  long lStack_1e0;
  undefined **local_1d8 [2];
  ulong local_1c8;
  ulong uStack_1c0;
  void *local_1b8;
  undefined **local_1a8;
  undefined **ppuStack_1a0;
  long *local_190;
  undefined **local_140;
  undefined **local_138 [2];
  ulong local_128;
  ulong uStack_120;
  void *local_118;
  undefined **local_108 [2];
  ulong local_f8;
  ulong uStack_f0;
  void *local_e8;
  undefined local_d8;
  undefined **local_d0;
  undefined **ppuStack_c8;
  long *local_b8;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  FUN_00c9a8bc(&lStack_1e0,&local_1e8);
  puVar1 = *(uint **)(param_1 + 8);
  puVar2 = *(uint **)(param_1 + 0x10);
  lVar17 = lStack_1e0;
  if ((local_1e8 - lStack_1e0 != 0) && (puVar1 != puVar2)) {
    uVar11 = (local_1e8 - lStack_1e0 >> 4) * -0x3333333333333333;
    do {
      uVar14 = uVar11 >> 1;
      lVar15 = lVar17 + uVar14 * 0x50;
      puVar16 = *(uint **)(lVar15 + 8);
      puVar3 = puVar1;
      while (puVar13 = puVar3 + 1, puVar16 != *(uint **)(lVar15 + 0x10)) {
        if (*puVar16 < *puVar3) break;
        if ((*puVar3 < *puVar16) || (puVar16 = puVar16 + 1, puVar3 = puVar13, puVar13 == puVar2))
        goto LAB_00c99a4c;
      }
      lVar17 = lVar17 + 0x50 + uVar14 * 0x50;
      uVar14 = uVar11 + ~uVar14;
LAB_00c99a4c:
      uVar11 = uVar14;
    } while (uVar14 != 0);
  }
  if (lVar17 != local_1e8) {
    puVar16 = *(uint **)(lVar17 + 8);
    puVar3 = *(uint **)(lVar17 + 0x10);
    if ((long)puVar3 - (long)puVar16 == (long)puVar2 - (long)puVar1) {
      puVar13 = puVar1;
      if (puVar16 != puVar3) {
        do {
          puVar12 = puVar16 + 1;
          uVar4 = *puVar16;
          uVar5 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar16 = puVar12;
        } while (uVar4 == uVar5 && puVar12 != puVar3);
        if (uVar4 != uVar5) goto LAB_00c99d88;
      }
      if (this + 0xf0 != (DL_GroupParameters_EC<CryptoPP::ECP> *)param_1) {
        std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
        assign<unsigned_int*>
                  ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(this + 0xf8),puVar1
                   ,puVar2);
      }
      plVar7 = (long *)EcRecommendedParameters<CryptoPP::ECP>::NewEC();
                    /* try { // try from 00c99b14 to 00c99b1b has its CatchHandler @ 00c99dec */
      EcPrecomputation<CryptoPP::ECP>::SetCurve
                ((EcPrecomputation<CryptoPP::ECP> *)(this + 0x10),(ECP *)plVar7);
      pcVar18 = *(char **)(lVar17 + 0x38);
                    /* try { // try from 00c99b20 to 00c99b27 has its CatchHandler @ 00c99e50 */
      puVar8 = (undefined8 *)operator_new(0x68);
                    /* try { // try from 00c99b2c to 00c99b43 has its CatchHandler @ 00c99e5c */
      piVar9 = (int *)HexDecoder::GetDefaultDecodingLookupArray();
      BaseN_Decoder::BaseN_Decoder((BaseN_Decoder *)puVar8,piVar9,4,(BufferedTransformation *)0x0);
      *puVar8 = &PTR__BaseN_Decoder_0100c418;
      puVar8[1] = &PTR__HexDecoder_0100c5c8;
                    /* try { // try from 00c99b58 to 00c99b6b has its CatchHandler @ 00c99e50 */
      StringSource::StringSource
                ((StringSource *)&local_d0,pcVar18,true,(BufferedTransformation *)puVar8);
      local_140 = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00c99b84 to 00c99b8b has its CatchHandler @ 00c99de4 */
      Integer::Integer((Integer *)local_138);
                    /* try { // try from 00c99b90 to 00c99b93 has its CatchHandler @ 00c99dd4 */
      Integer::Integer((Integer *)local_108);
      plVar19 = *(long **)(this + 0x20);
      local_d8 = 1;
                    /* try { // try from 00c99ba0 to 00c99bd7 has its CatchHandler @ 00c99e70 */
      uVar10 = BufferedTransformation::MaxRetrievable();
      (**(code **)(*plVar19 + 0x80))(plVar19,&local_140,&local_d0,uVar10);
      (**(code **)(*(long *)this + 0x70))(this,&local_140);
      pcVar18 = *(char **)(lVar17 + 0x40);
                    /* try { // try from 00c99bdc to 00c99be3 has its CatchHandler @ 00c99e3c */
      puVar8 = (undefined8 *)operator_new(0x68);
                    /* try { // try from 00c99be8 to 00c99bff has its CatchHandler @ 00c99e40 */
      piVar9 = (int *)HexDecoder::GetDefaultDecodingLookupArray();
      BaseN_Decoder::BaseN_Decoder((BaseN_Decoder *)puVar8,piVar9,4,(BufferedTransformation *)0x0);
      *puVar8 = &PTR__BaseN_Decoder_0100c418;
      puVar8[1] = &PTR__HexDecoder_0100c5c8;
                    /* try { // try from 00c99c0c to 00c99c1f has its CatchHandler @ 00c99e3c */
      StringSource::StringSource
                ((StringSource *)&local_1a8,pcVar18,true,(BufferedTransformation *)puVar8);
                    /* try { // try from 00c99c20 to 00c99c3b has its CatchHandler @ 00c99e0c */
      uVar11 = BufferedTransformation::MaxRetrievable();
      Integer::Decode((Integer *)(this + 0x110),(BufferedTransformation *)&local_1a8,uVar11,0);
                    /* try { // try from 00c99c40 to 00c99c47 has its CatchHandler @ 00c99dd0 */
      Integer::Integer((Integer *)local_1d8,(ulong)*(uint *)(lVar17 + 0x48));
                    /* try { // try from 00c99c4c to 00c99c53 has its CatchHandler @ 00c99dc0 */
      Integer::operator=((Integer *)(this + 0x140),(Integer *)local_1d8);
      if (uStack_1c0 <= local_1c8) {
        local_1c8 = uStack_1c0;
      }
      local_1d8[0] = &PTR__Integer_0100c890;
      for (; local_1c8 != 0; local_1c8 = local_1c8 - 1) {
        *(undefined4 *)((long)local_1b8 + local_1c8 * 4 + -4) = 0;
      }
                    /* try { // try from 00c99c8c to 00c99c8f has its CatchHandler @ 00c99dbc */
      UnalignedDeallocate(local_1b8);
      local_1a8 = &PTR__Filter_01005f60;
      ppuStack_1a0 = &PTR__Filter_01006108;
      if (local_190 != (long *)0x0) {
        (**(code **)(*local_190 + 8))();
      }
      local_140 = &PTR__ECPPoint_00fe9fd8;
      local_108[0] = &PTR__Integer_0100c890;
      if (uStack_f0 <= local_f8) {
        local_f8 = uStack_f0;
      }
      for (; local_f8 != 0; local_f8 = local_f8 - 1) {
        *(undefined4 *)((long)local_e8 + local_f8 * 4 + -4) = 0;
      }
                    /* try { // try from 00c99cf0 to 00c99cf3 has its CatchHandler @ 00c99db8 */
      UnalignedDeallocate(local_e8);
      local_138[0] = &PTR__Integer_0100c890;
      if (uStack_120 <= local_128) {
        local_128 = uStack_120;
      }
      for (; local_128 != 0; local_128 = local_128 - 1) {
        *(undefined4 *)((long)local_118 + local_128 * 4 + -4) = 0;
      }
                    /* try { // try from 00c99d24 to 00c99d27 has its CatchHandler @ 00c99db4 */
      UnalignedDeallocate(local_118);
      local_d0 = &PTR__Filter_01005f60;
      ppuStack_c8 = &PTR__Filter_01006108;
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 8))();
      }
      (**(code **)(*plVar7 + 8))(plVar7);
      if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
LAB_00c99d88:
  this_00 = (UnknownOID *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c99d94 to 00c99d97 has its CatchHandler @ 00c99df8 */
  UnknownOID::UnknownOID(this_00);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,&UnknownOID::typeinfo,Exception::~Exception);
}


