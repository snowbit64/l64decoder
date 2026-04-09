// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NewEC
// Entry Point: 00ca1420
// Size: 1744 bytes
// Signature: undefined NewEC(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::EcRecommendedParameters<CryptoPP::EC2N>::NewEC() const */

EC2N * CryptoPP::EcRecommendedParameters<CryptoPP::EC2N>::NewEC(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long in_x0;
  undefined8 *puVar6;
  int *piVar7;
  EC2N *this;
  ulong uVar8;
  ulong in_x5;
  char *pcVar9;
  PolynomialMod2 aPStack_228 [8];
  ulong local_220;
  ulong local_218;
  void *local_210;
  undefined **local_208 [3];
  undefined **local_1f0;
  ulong local_1d0;
  ulong uStack_1c8;
  void *local_1c0;
  ulong local_1b0;
  ulong uStack_1a8;
  void *local_1a0;
  ulong local_190;
  ulong uStack_188;
  void *local_180;
  uint local_174;
  uint uStack_170;
  uint local_16c;
  ulong local_160;
  ulong uStack_158;
  void *local_150;
  PolynomialMod2 aPStack_148 [8];
  ulong local_140;
  ulong local_138;
  void *local_130;
  undefined **local_128;
  undefined **ppuStack_120;
  long *local_110;
  undefined **local_c0;
  undefined **ppuStack_b8;
  long *local_a8;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pcVar9 = *(char **)(in_x0 + 0x20);
  puVar6 = (undefined8 *)operator_new(0x68);
                    /* try { // try from 00ca145c to 00ca1473 has its CatchHandler @ 00ca1c90 */
  piVar7 = (int *)HexDecoder::GetDefaultDecodingLookupArray();
  BaseN_Decoder::BaseN_Decoder((BaseN_Decoder *)puVar6,piVar7,4,(BufferedTransformation *)0x0);
  *puVar6 = &PTR__BaseN_Decoder_0100c418;
  puVar6[1] = &PTR__HexDecoder_0100c5c8;
  StringSource::StringSource((StringSource *)&local_c0,pcVar9,true,(BufferedTransformation *)puVar6)
  ;
  pcVar9 = *(char **)(in_x0 + 0x28);
                    /* try { // try from 00ca14a0 to 00ca14a7 has its CatchHandler @ 00ca1c4c */
  puVar6 = (undefined8 *)operator_new(0x68);
                    /* try { // try from 00ca14ac to 00ca14c3 has its CatchHandler @ 00ca1c54 */
  piVar7 = (int *)HexDecoder::GetDefaultDecodingLookupArray();
  BaseN_Decoder::BaseN_Decoder((BaseN_Decoder *)puVar6,piVar7,4,(BufferedTransformation *)0x0);
  *puVar6 = &PTR__BaseN_Decoder_0100c418;
  puVar6[1] = &PTR__HexDecoder_0100c5c8;
                    /* try { // try from 00ca14d0 to 00ca14e3 has its CatchHandler @ 00ca1c4c */
  StringSource::StringSource
            ((StringSource *)&local_128,pcVar9,true,(BufferedTransformation *)puVar6);
  uVar4 = *(uint *)(in_x0 + 0x44);
  if (uVar4 == 0) {
    uVar4 = *(uint *)(in_x0 + 0x4c);
    uVar1 = *(uint *)(in_x0 + 0x50);
    uVar2 = *(uint *)(in_x0 + 0x54);
    if (((uVar4 == 0xe9) && (uVar1 == 0x4a)) && (uVar2 == 0)) {
                    /* try { // try from 00ca16f0 to 00ca16f7 has its CatchHandler @ 00ca1c44 */
      this = (EC2N *)operator_new(0xa8);
                    /* try { // try from 00ca16fc to 00ca170f has its CatchHandler @ 00ca1b8c */
      GF2NT233::GF2NT233((GF2NT233 *)local_208,0xe9,0x4a,0);
                    /* try { // try from 00ca1710 to 00ca1717 has its CatchHandler @ 00ca1b7c */
      uVar8 = BufferedTransformation::MaxRetrievable();
      local_138 = 0;
      local_130 = (void *)0x0;
      local_140 = 0x3fffffffffffffff;
                    /* try { // try from 00ca1728 to 00ca1733 has its CatchHandler @ 00ca1b6c */
      PolynomialMod2::Decode(aPStack_148,(BufferedTransformation *)&local_c0,uVar8);
                    /* try { // try from 00ca1734 to 00ca173b has its CatchHandler @ 00ca1b5c */
      uVar8 = BufferedTransformation::MaxRetrievable();
      local_218 = 0;
      local_210 = (void *)0x0;
      local_220 = 0x3fffffffffffffff;
                    /* try { // try from 00ca174c to 00ca1757 has its CatchHandler @ 00ca1b4c */
      PolynomialMod2::Decode(aPStack_228,(BufferedTransformation *)&local_128,uVar8);
                    /* try { // try from 00ca1758 to 00ca176b has its CatchHandler @ 00ca1b3c */
      EC2N::EC2N(this,(GF2NP *)local_208,aPStack_148,aPStack_228);
      uVar8 = local_220;
      if (local_218 <= local_220) {
        uVar8 = local_218;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_210 + uVar8 * 4 + -4) = 0;
      }
                    /* try { // try from 00ca1794 to 00ca1797 has its CatchHandler @ 00ca1b38 */
      UnalignedDeallocate(local_210);
      uVar8 = local_140;
      if (local_138 <= local_140) {
        uVar8 = local_138;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_130 + uVar8 * 4 + -4) = 0;
      }
                    /* try { // try from 00ca17c0 to 00ca17c3 has its CatchHandler @ 00ca1b34 */
      UnalignedDeallocate(local_130);
      if (uStack_158 <= local_160) {
        local_160 = uStack_158;
      }
      local_208[0] = &PTR__GF2NT_01009488;
      for (; local_160 != 0; local_160 = local_160 - 1) {
        *(undefined4 *)((long)local_150 + local_160 * 4 + -4) = 0;
      }
                    /* try { // try from 00ca17fc to 00ca17ff has its CatchHandler @ 00ca1b30 */
      UnalignedDeallocate(local_150);
      if (uStack_188 <= local_190) {
        local_190 = uStack_188;
      }
      local_208[0] = &PTR__QuotientRing_00ff3308;
      for (; local_190 != 0; local_190 = local_190 - 1) {
        *(undefined4 *)((long)local_180 + local_190 * 4 + -4) = 0;
      }
                    /* try { // try from 00ca1838 to 00ca183b has its CatchHandler @ 00ca1b2c */
      UnalignedDeallocate(local_180);
      if (uStack_1a8 <= local_1b0) {
        local_1b0 = uStack_1a8;
      }
      local_1f0 = &PTR__EuclideanDomainOf_00ff3220;
      for (; local_1b0 != 0; local_1b0 = local_1b0 - 1) {
        *(undefined4 *)((long)local_1a0 + local_1b0 * 4 + -4) = 0;
      }
                    /* try { // try from 00ca1874 to 00ca1877 has its CatchHandler @ 00ca1b28 */
      UnalignedDeallocate(local_1a0);
      if (uStack_1c8 <= local_1d0) {
        local_1d0 = uStack_1c8;
      }
      local_1f0 = &PTR__AbstractEuclideanDomain_00ff9230;
      for (; local_1d0 != 0; local_1d0 = local_1d0 - 1) {
        *(undefined4 *)((long)local_1c0 + local_1d0 * 4 + -4) = 0;
      }
                    /* try { // try from 00ca18b0 to 00ca18b3 has its CatchHandler @ 00ca1b24 */
      UnalignedDeallocate(local_1c0);
    }
    else {
                    /* try { // try from 00ca18b8 to 00ca18bf has its CatchHandler @ 00ca1c44 */
      this = (EC2N *)operator_new(0xa8);
                    /* try { // try from 00ca18c4 to 00ca18d7 has its CatchHandler @ 00ca1b1c */
      GF2NT::GF2NT((GF2NT *)local_208,uVar4,uVar1,uVar2);
                    /* try { // try from 00ca18d8 to 00ca18df has its CatchHandler @ 00ca1b18 */
      uVar8 = BufferedTransformation::MaxRetrievable();
      local_138 = 0;
      local_130 = (void *)0x0;
      local_140 = 0x3fffffffffffffff;
                    /* try { // try from 00ca18f0 to 00ca18fb has its CatchHandler @ 00ca1b14 */
      PolynomialMod2::Decode(aPStack_148,(BufferedTransformation *)&local_c0,uVar8);
                    /* try { // try from 00ca18fc to 00ca1903 has its CatchHandler @ 00ca1b10 */
      uVar8 = BufferedTransformation::MaxRetrievable();
      local_218 = 0;
      local_210 = (void *)0x0;
      local_220 = 0x3fffffffffffffff;
                    /* try { // try from 00ca1914 to 00ca191f has its CatchHandler @ 00ca1b0c */
      PolynomialMod2::Decode(aPStack_228,(BufferedTransformation *)&local_128,uVar8);
                    /* try { // try from 00ca1920 to 00ca1933 has its CatchHandler @ 00ca1b08 */
      EC2N::EC2N(this,(GF2NP *)local_208,aPStack_148,aPStack_228);
      uVar8 = local_220;
      if (local_218 <= local_220) {
        uVar8 = local_218;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_210 + uVar8 * 4 + -4) = 0;
      }
                    /* try { // try from 00ca195c to 00ca195f has its CatchHandler @ 00ca1b04 */
      UnalignedDeallocate(local_210);
      uVar8 = local_140;
      if (local_138 <= local_140) {
        uVar8 = local_138;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_130 + uVar8 * 4 + -4) = 0;
      }
                    /* try { // try from 00ca1988 to 00ca198b has its CatchHandler @ 00ca1b00 */
      UnalignedDeallocate(local_130);
      if (uStack_158 <= local_160) {
        local_160 = uStack_158;
      }
      local_208[0] = &PTR__GF2NT_01009488;
      for (; local_160 != 0; local_160 = local_160 - 1) {
        *(undefined4 *)((long)local_150 + local_160 * 4 + -4) = 0;
      }
                    /* try { // try from 00ca19c4 to 00ca19c7 has its CatchHandler @ 00ca1afc */
      UnalignedDeallocate(local_150);
      if (uStack_188 <= local_190) {
        local_190 = uStack_188;
      }
      local_208[0] = &PTR__QuotientRing_00ff3308;
      for (; local_190 != 0; local_190 = local_190 - 1) {
        *(undefined4 *)((long)local_180 + local_190 * 4 + -4) = 0;
      }
                    /* try { // try from 00ca1a00 to 00ca1a03 has its CatchHandler @ 00ca1af8 */
      UnalignedDeallocate(local_180);
      if (uStack_1a8 <= local_1b0) {
        local_1b0 = uStack_1a8;
      }
      local_1f0 = &PTR__EuclideanDomainOf_00ff3220;
      for (; local_1b0 != 0; local_1b0 = local_1b0 - 1) {
        *(undefined4 *)((long)local_1a0 + local_1b0 * 4 + -4) = 0;
      }
                    /* try { // try from 00ca1a3c to 00ca1a3f has its CatchHandler @ 00ca1af4 */
      UnalignedDeallocate(local_1a0);
      if (uStack_1c8 <= local_1d0) {
        local_1d0 = uStack_1c8;
      }
      local_1f0 = &PTR__AbstractEuclideanDomain_00ff9230;
      for (; local_1d0 != 0; local_1d0 = local_1d0 - 1) {
        *(undefined4 *)((long)local_1c0 + local_1d0 * 4 + -4) = 0;
      }
                    /* try { // try from 00ca1a78 to 00ca1a7b has its CatchHandler @ 00ca1af0 */
      UnalignedDeallocate(local_1c0);
    }
  }
  else {
                    /* try { // try from 00ca14ec to 00ca14f3 has its CatchHandler @ 00ca1c44 */
    this = (EC2N *)operator_new(0xa8);
    uVar1 = *(uint *)(in_x0 + 0x48);
    uVar3 = *(uint *)(in_x0 + 0x4c);
    uVar2 = *(uint *)(in_x0 + 0x50);
                    /* try { // try from 00ca1500 to 00ca1517 has its CatchHandler @ 00ca1c3c */
    PolynomialMod2::Pentanomial
              ((PolynomialMod2 *)(ulong)uVar4,(ulong)uVar1,(ulong)uVar3,(ulong)uVar2,
               (ulong)*(uint *)(in_x0 + 0x54),in_x5);
                    /* try { // try from 00ca1518 to 00ca1523 has its CatchHandler @ 00ca1c2c */
    GF2NP::GF2NP((GF2NP *)local_208,aPStack_148);
    if (local_138 <= local_140) {
      local_140 = local_138;
    }
    for (; local_140 != 0; local_140 = local_140 - 1) {
      *(undefined4 *)((long)local_130 + local_140 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca154c to 00ca154f has its CatchHandler @ 00ca1c28 */
    UnalignedDeallocate(local_130);
    local_208[0] = &PTR__QuotientRing_01009690;
    local_174 = uVar1;
    uStack_170 = uVar3;
    local_16c = uVar2;
                    /* try { // try from 00ca1568 to 00ca156f has its CatchHandler @ 00ca1be8 */
    uVar8 = BufferedTransformation::MaxRetrievable();
    local_138 = 0;
    local_130 = (void *)0x0;
    local_140 = 0x3fffffffffffffff;
                    /* try { // try from 00ca1580 to 00ca158b has its CatchHandler @ 00ca1bd8 */
    PolynomialMod2::Decode(aPStack_148,(BufferedTransformation *)&local_c0,uVar8);
                    /* try { // try from 00ca158c to 00ca1593 has its CatchHandler @ 00ca1bc8 */
    uVar8 = BufferedTransformation::MaxRetrievable();
    local_218 = 0;
    local_210 = (void *)0x0;
    local_220 = 0x3fffffffffffffff;
                    /* try { // try from 00ca15a4 to 00ca15af has its CatchHandler @ 00ca1bb8 */
    PolynomialMod2::Decode(aPStack_228,(BufferedTransformation *)&local_128,uVar8);
                    /* try { // try from 00ca15b0 to 00ca15c3 has its CatchHandler @ 00ca1ba8 */
    EC2N::EC2N(this,(GF2NP *)local_208,aPStack_148,aPStack_228);
    uVar8 = local_220;
    if (local_218 <= local_220) {
      uVar8 = local_218;
    }
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)((long)local_210 + uVar8 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca15ec to 00ca15ef has its CatchHandler @ 00ca1ba4 */
    UnalignedDeallocate(local_210);
    uVar8 = local_140;
    if (local_138 <= local_140) {
      uVar8 = local_138;
    }
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)((long)local_130 + uVar8 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca1618 to 00ca161b has its CatchHandler @ 00ca1ba0 */
    UnalignedDeallocate(local_130);
    if (uStack_188 <= local_190) {
      local_190 = uStack_188;
    }
    local_208[0] = &PTR__QuotientRing_00ff3308;
    for (; local_190 != 0; local_190 = local_190 - 1) {
      *(undefined4 *)((long)local_180 + local_190 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca1654 to 00ca1657 has its CatchHandler @ 00ca1b9c */
    UnalignedDeallocate(local_180);
    if (uStack_1a8 <= local_1b0) {
      local_1b0 = uStack_1a8;
    }
    local_1f0 = &PTR__EuclideanDomainOf_00ff3220;
    for (; local_1b0 != 0; local_1b0 = local_1b0 - 1) {
      *(undefined4 *)((long)local_1a0 + local_1b0 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca1690 to 00ca1693 has its CatchHandler @ 00ca1b98 */
    UnalignedDeallocate(local_1a0);
    if (uStack_1c8 <= local_1d0) {
      local_1d0 = uStack_1c8;
    }
    local_1f0 = &PTR__AbstractEuclideanDomain_00ff9230;
    for (; local_1d0 != 0; local_1d0 = local_1d0 - 1) {
      *(undefined4 *)((long)local_1c0 + local_1d0 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca16cc to 00ca16cf has its CatchHandler @ 00ca1b94 */
    UnalignedDeallocate(local_1c0);
  }
  local_128 = &PTR__Filter_01005f60;
  ppuStack_120 = &PTR__Filter_01006108;
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 8))();
  }
  local_c0 = &PTR__Filter_01005f60;
  ppuStack_b8 = &PTR__Filter_01006108;
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 8))();
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}


