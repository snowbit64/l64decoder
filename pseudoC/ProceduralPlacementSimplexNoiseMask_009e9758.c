// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementSimplexNoiseMask
// Entry Point: 009e9758
// Size: 800 bytes
// Signature: undefined __thiscall ProceduralPlacementSimplexNoiseMask(ProceduralPlacementSimplexNoiseMask * this, uint param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProceduralPlacementSimplexNoiseMask::ProceduralPlacementSimplexNoiseMask(unsigned int) */

void __thiscall
ProceduralPlacementSimplexNoiseMask::ProceduralPlacementSimplexNoiseMask
          (ProceduralPlacementSimplexNoiseMask *this,uint param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined auVar5 [16];
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  float fVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  ProceduralPlacementSimplexNoiseMask PVar21;
  ProceduralPlacementSimplexNoiseMask PVar24;
  ProceduralPlacementSimplexNoiseMask PVar25;
  ProceduralPlacementSimplexNoiseMask PVar26;
  ProceduralPlacementSimplexNoiseMask PVar27;
  ProceduralPlacementSimplexNoiseMask PVar28;
  ProceduralPlacementSimplexNoiseMask PVar29;
  ProceduralPlacementSimplexNoiseMask PVar30;
  ProceduralPlacementSimplexNoiseMask PVar31;
  ProceduralPlacementSimplexNoiseMask PVar32;
  ProceduralPlacementSimplexNoiseMask PVar33;
  ProceduralPlacementSimplexNoiseMask PVar34;
  ProceduralPlacementSimplexNoiseMask PVar35;
  ProceduralPlacementSimplexNoiseMask PVar36;
  ProceduralPlacementSimplexNoiseMask PVar37;
  undefined auVar22 [16];
  undefined auVar23 [16];
  ProceduralPlacementSimplexNoiseMask PVar38;
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  ushort local_b0;
  void *local_a0;
  ushort local_98;
  void *local_88;
  byte local_80;
  undefined uStack_7f;
  undefined6 uStack_7e;
  undefined8 uStack_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_80 = 0;
  uStack_7f = 0;
  local_98 = 0;
  local_b0 = 0;
                    /* try { // try from 009e9798 to 009e97a7 has its CatchHandler @ 009e9a80 */
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(basic_string *)&local_80,(basic_string *)&local_98,
             (basic_string *)&local_b0);
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  uVar11 = (param_1 & 0xffff) << 8;
  if (0xff < (param_1 & 0xffff)) {
    uVar11 = 0;
  }
  uVar11 = (uVar11 | param_1) >> 8;
  *(undefined ***)this = &PTR__ProceduralPlacementSimplexNoiseMask_00fe2ca8;
  auVar5 = _DAT_004c3bd0;
  if (((ProceduralPlacementSimplexNoiseMask *)&UNK_0052553f < this + 200) ||
     (this + 0x2c8 < (ProceduralPlacementSimplexNoiseMask *)&DAT_00525441)) {
    bVar13 = 0xf;
    bVar14 = 0xd;
    bVar16 = 9;
    bVar17 = 7;
    bVar18 = 5;
    bVar15 = 0xb;
    bVar19 = 3;
    bVar20 = 1;
    lVar10 = 0;
    do {
      auVar45 = NEON_cmeq(ZEXT116(bVar14 & 1) << 0x40,0,8);
      auVar47 = NEON_cmeq(ZEXT116(bVar16 & 1) << 0x40,0,8);
      auVar43 = NEON_cmeq(ZEXT116(bVar18 & 1) << 0x40,0,8);
      auVar39 = NEON_cmeq(ZEXT116(bVar19 & 1) << 0x40,0,8);
      auVar22 = NEON_cmeq(ZEXT116(bVar20 & 1) << 0x40,0,8);
      auVar41 = NEON_cmeq(ZEXT116(bVar17 & 1) << 0x40,0,8);
      auVar49 = NEON_cmeq(ZEXT116(bVar15 & 1) << 0x40,0,8);
      auVar51 = NEON_cmeq(ZEXT116(bVar13 & 1) << 0x40,0,8);
      auVar23._0_8_ = CONCAT44(auVar22._8_4_,auVar22._0_4_);
      auVar23._8_4_ = auVar39._0_4_;
      auVar23._12_4_ = auVar39._8_4_;
      auVar40._0_8_ = CONCAT44(auVar43._8_4_,auVar43._0_4_);
      auVar40._8_4_ = auVar41._0_4_;
      auVar40._12_4_ = auVar41._8_4_;
      auVar42._0_8_ = CONCAT44(auVar47._8_4_,auVar47._0_4_);
      auVar42._8_4_ = auVar49._0_4_;
      auVar42._12_4_ = auVar49._8_4_;
      auVar44._0_8_ = CONCAT44(auVar45._8_4_,auVar45._0_4_);
      auVar44._8_4_ = auVar51._0_4_;
      auVar44._12_4_ = auVar51._8_4_;
      auVar46._8_8_ = auVar23._8_8_;
      auVar46._0_8_ = auVar23._0_8_;
      auVar23 = *(undefined (*) [16])(&SimplexNoiseUtil::s_perm + lVar10);
      auVar48._8_8_ = auVar40._8_8_;
      auVar48._0_8_ = auVar40._0_8_;
      lVar2 = lVar10 + 0x10;
      auVar50._8_8_ = auVar42._8_8_;
      auVar50._0_8_ = auVar42._0_8_;
      auVar52._8_8_ = auVar44._8_8_;
      auVar52._0_8_ = auVar44._0_8_;
      auVar22._4_4_ = uVar11;
      auVar22._0_4_ = uVar11;
      auVar22._8_4_ = uVar11;
      auVar22._12_4_ = uVar11;
      auVar45._4_4_ = param_1;
      auVar45._0_4_ = param_1;
      auVar45._8_4_ = param_1;
      auVar45._12_4_ = param_1;
      auVar22 = NEON_bsl(auVar46,auVar22,auVar45,1);
      auVar39._4_4_ = uVar11;
      auVar39._0_4_ = uVar11;
      auVar39._8_4_ = uVar11;
      auVar39._12_4_ = uVar11;
      auVar47._4_4_ = param_1;
      auVar47._0_4_ = param_1;
      auVar47._8_4_ = param_1;
      auVar47._12_4_ = param_1;
      auVar39 = NEON_bsl(auVar48,auVar39,auVar47,1);
      auVar41._4_4_ = uVar11;
      auVar41._0_4_ = uVar11;
      auVar41._8_4_ = uVar11;
      auVar41._12_4_ = uVar11;
      auVar49._4_4_ = param_1;
      auVar49._0_4_ = param_1;
      auVar49._8_4_ = param_1;
      auVar49._12_4_ = param_1;
      auVar41 = NEON_bsl(auVar50,auVar41,auVar49,1);
      auVar43._4_4_ = uVar11;
      auVar43._0_4_ = uVar11;
      auVar43._8_4_ = uVar11;
      auVar43._12_4_ = uVar11;
      auVar51._4_4_ = param_1;
      auVar51._0_4_ = param_1;
      auVar51._8_4_ = param_1;
      auVar51._12_4_ = param_1;
      auVar43 = NEON_bsl(auVar52,auVar43,auVar51,1);
      bVar18 = bVar18 + 0x10;
      bVar19 = bVar19 + 0x10;
      bVar20 = bVar20 + 0x10;
      auVar22 = a64_TBL(ZEXT816(0),auVar22,auVar39,auVar41,auVar43,auVar5);
      bVar17 = bVar17 + 0x10;
      bVar16 = bVar16 + 0x10;
      bVar15 = bVar15 + 0x10;
      PVar21 = (ProceduralPlacementSimplexNoiseMask)(auVar23[0] ^ auVar22[0]);
      PVar24 = (ProceduralPlacementSimplexNoiseMask)(auVar23[1] ^ auVar22[1]);
      PVar25 = (ProceduralPlacementSimplexNoiseMask)(auVar23[2] ^ auVar22[2]);
      PVar26 = (ProceduralPlacementSimplexNoiseMask)(auVar23[3] ^ auVar22[3]);
      PVar27 = (ProceduralPlacementSimplexNoiseMask)(auVar23[4] ^ auVar22[4]);
      PVar28 = (ProceduralPlacementSimplexNoiseMask)(auVar23[5] ^ auVar22[5]);
      PVar29 = (ProceduralPlacementSimplexNoiseMask)(auVar23[6] ^ auVar22[6]);
      PVar30 = (ProceduralPlacementSimplexNoiseMask)(auVar23[7] ^ auVar22[7]);
      PVar31 = (ProceduralPlacementSimplexNoiseMask)(auVar23[8] ^ auVar22[8]);
      PVar32 = (ProceduralPlacementSimplexNoiseMask)(auVar23[9] ^ auVar22[9]);
      PVar33 = (ProceduralPlacementSimplexNoiseMask)(auVar23[10] ^ auVar22[10]);
      PVar34 = (ProceduralPlacementSimplexNoiseMask)(auVar23[11] ^ auVar22[11]);
      PVar35 = (ProceduralPlacementSimplexNoiseMask)(auVar23[12] ^ auVar22[12]);
      PVar36 = (ProceduralPlacementSimplexNoiseMask)(auVar23[13] ^ auVar22[13]);
      PVar37 = (ProceduralPlacementSimplexNoiseMask)(auVar23[14] ^ auVar22[14]);
      PVar38 = (ProceduralPlacementSimplexNoiseMask)(auVar23[15] ^ auVar22[15]);
      bVar14 = bVar14 + 0x10;
      bVar13 = bVar13 + 0x10;
      this[lVar10 + 0x1d8] = PVar31;
      this[lVar10 + 0x1d9] = PVar32;
      this[lVar10 + 0x1da] = PVar33;
      this[lVar10 + 0x1db] = PVar34;
      this[lVar10 + 0x1dc] = PVar35;
      this[lVar10 + 0x1dd] = PVar36;
      this[lVar10 + 0x1de] = PVar37;
      this[lVar10 + 0x1df] = PVar38;
      this[lVar10 + 0x1c8] = PVar21;
      this[lVar10 + 0x1c9] = PVar24;
      this[lVar10 + 0x1ca] = PVar25;
      this[lVar10 + 0x1cb] = PVar26;
      this[lVar10 + 0x1cc] = PVar27;
      this[lVar10 + 0x1cd] = PVar28;
      this[lVar10 + 0x1ce] = PVar29;
      this[lVar10 + 0x1cf] = PVar30;
      this[lVar10 + 0xd8] = PVar31;
      this[lVar10 + 0xd9] = PVar32;
      this[lVar10 + 0xda] = PVar33;
      this[lVar10 + 0xdb] = PVar34;
      this[lVar10 + 0xdc] = PVar35;
      this[lVar10 + 0xdd] = PVar36;
      this[lVar10 + 0xde] = PVar37;
      this[lVar10 + 0xdf] = PVar38;
      this[lVar10 + 200] = PVar21;
      this[lVar10 + 0xc9] = PVar24;
      this[lVar10 + 0xca] = PVar25;
      this[lVar10 + 0xcb] = PVar26;
      this[lVar10 + 0xcc] = PVar27;
      this[lVar10 + 0xcd] = PVar28;
      this[lVar10 + 0xce] = PVar29;
      this[lVar10 + 0xcf] = PVar30;
      lVar10 = lVar2;
    } while (lVar2 != 0x100);
  }
  else {
    uVar9 = 0;
    do {
      uVar8 = uVar11;
      if ((uVar9 & 1) != 0) {
        uVar8 = param_1;
      }
      uVar1 = uVar9 + 1;
      PVar21 = (ProceduralPlacementSimplexNoiseMask)
               ((&SimplexNoiseUtil::s_perm)[uVar9] ^ (byte)uVar8);
      this[uVar9 + 0x1c8] = PVar21;
      this[uVar9 + 200] = PVar21;
      uVar9 = uVar1;
    } while (uVar1 != 0x100);
  }
                    /* try { // try from 009e9960 to 009e996b has its CatchHandler @ 009e9a7c */
  getSimplexNoiseMaskSignature(param_1);
  if ((*(byte *)(this + 0x70) & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  *(undefined8 *)(this + 0x78) = uStack_78;
  *(ulong *)(this + 0x70) = CONCAT62(uStack_7e,CONCAT11(uStack_7f,local_80));
  *(void **)(this + 0x80) = local_70;
  *(undefined8 *)(this + 0x50) = 0x80000000800;
                    /* try { // try from 009e9998 to 009e999f has its CatchHandler @ 009e9a78 */
  pvVar6 = operator_new__(0x1000000);
  uVar11 = 0;
  uVar8 = 0x800;
  uVar7 = 0x800;
  *(void **)(this + 0x2c8) = pvVar6;
  do {
    if (uVar7 != 0) {
      uVar8 = 0;
      do {
                    /* try { // try from 009e99e4 to 009e99ef has its CatchHandler @ 009e9ad0 */
        fVar12 = (float)SimplexNoiseUtil::getSimplexNoise2D
                                  ((float)(ulong)uVar8,(float)(ulong)uVar11,(Seed *)(this + 200));
        uVar7 = *(uint *)(this + 0x50);
        uVar3 = uVar8 + uVar11 * uVar7;
        uVar8 = uVar8 + 1;
        *(float *)(*(long *)(this + 0x2c8) + (ulong)uVar3 * 4) = (fVar12 + 1.0) * 0.5 * 255.0;
      } while (uVar8 < uVar7);
      uVar8 = *(uint *)(this + 0x54);
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < uVar8);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


