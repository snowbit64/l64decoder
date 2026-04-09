// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementIndexSimplexNoiseMask
// Entry Point: 009cce24
// Size: 884 bytes
// Signature: undefined __thiscall ProceduralPlacementIndexSimplexNoiseMask(ProceduralPlacementIndexSimplexNoiseMask * this, uint param_1, uint param_2)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProceduralPlacementIndexSimplexNoiseMask::ProceduralPlacementIndexSimplexNoiseMask(unsigned int,
   unsigned int) */

void __thiscall
ProceduralPlacementIndexSimplexNoiseMask::ProceduralPlacementIndexSimplexNoiseMask
          (ProceduralPlacementIndexSimplexNoiseMask *this,uint param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined auVar6 [16];
  void *pvVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  float fVar14;
  byte bVar15;
  float fVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  ProceduralPlacementIndexSimplexNoiseMask PVar24;
  ProceduralPlacementIndexSimplexNoiseMask PVar27;
  ProceduralPlacementIndexSimplexNoiseMask PVar28;
  ProceduralPlacementIndexSimplexNoiseMask PVar29;
  ProceduralPlacementIndexSimplexNoiseMask PVar30;
  ProceduralPlacementIndexSimplexNoiseMask PVar31;
  ProceduralPlacementIndexSimplexNoiseMask PVar32;
  ProceduralPlacementIndexSimplexNoiseMask PVar33;
  ProceduralPlacementIndexSimplexNoiseMask PVar34;
  ProceduralPlacementIndexSimplexNoiseMask PVar35;
  ProceduralPlacementIndexSimplexNoiseMask PVar36;
  ProceduralPlacementIndexSimplexNoiseMask PVar37;
  ProceduralPlacementIndexSimplexNoiseMask PVar38;
  ProceduralPlacementIndexSimplexNoiseMask PVar39;
  ProceduralPlacementIndexSimplexNoiseMask PVar40;
  undefined auVar25 [16];
  undefined auVar26 [16];
  ProceduralPlacementIndexSimplexNoiseMask PVar41;
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
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
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
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_80 = 0;
  uStack_7f = 0;
  local_98 = 0;
  local_b0 = 0;
                    /* try { // try from 009cce68 to 009cce77 has its CatchHandler @ 009cd19c */
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
  uVar13 = (param_2 & 0xffff) << 8;
  if (0xff < (param_2 & 0xffff)) {
    uVar13 = 0;
  }
  uVar13 = (uVar13 | param_2) >> 8;
  *(undefined ***)this = &PTR__ProceduralPlacementIndexSimplexNoiseMask_00fe2228;
  auVar6 = _DAT_004c3bd0;
  if (((ProceduralPlacementIndexSimplexNoiseMask *)&UNK_0052553f < this + 0xcc) ||
     (this + 0x2cc < (ProceduralPlacementIndexSimplexNoiseMask *)&DAT_00525441)) {
    bVar15 = 0xf;
    bVar17 = 0xd;
    bVar19 = 9;
    bVar20 = 7;
    bVar21 = 5;
    bVar18 = 0xb;
    bVar22 = 3;
    bVar23 = 1;
    lVar12 = 0;
    do {
      auVar48 = NEON_cmeq(ZEXT116(bVar17 & 1) << 0x40,0,8);
      auVar50 = NEON_cmeq(ZEXT116(bVar19 & 1) << 0x40,0,8);
      auVar46 = NEON_cmeq(ZEXT116(bVar21 & 1) << 0x40,0,8);
      auVar42 = NEON_cmeq(ZEXT116(bVar22 & 1) << 0x40,0,8);
      auVar25 = NEON_cmeq(ZEXT116(bVar23 & 1) << 0x40,0,8);
      auVar44 = NEON_cmeq(ZEXT116(bVar20 & 1) << 0x40,0,8);
      auVar52 = NEON_cmeq(ZEXT116(bVar18 & 1) << 0x40,0,8);
      auVar54 = NEON_cmeq(ZEXT116(bVar15 & 1) << 0x40,0,8);
      auVar26._0_8_ = CONCAT44(auVar25._8_4_,auVar25._0_4_);
      auVar26._8_4_ = auVar42._0_4_;
      auVar26._12_4_ = auVar42._8_4_;
      auVar43._0_8_ = CONCAT44(auVar46._8_4_,auVar46._0_4_);
      auVar43._8_4_ = auVar44._0_4_;
      auVar43._12_4_ = auVar44._8_4_;
      auVar45._0_8_ = CONCAT44(auVar50._8_4_,auVar50._0_4_);
      auVar45._8_4_ = auVar52._0_4_;
      auVar45._12_4_ = auVar52._8_4_;
      auVar47._0_8_ = CONCAT44(auVar48._8_4_,auVar48._0_4_);
      auVar47._8_4_ = auVar54._0_4_;
      auVar47._12_4_ = auVar54._8_4_;
      auVar49._8_8_ = auVar26._8_8_;
      auVar49._0_8_ = auVar26._0_8_;
      auVar26 = *(undefined (*) [16])(&SimplexNoiseUtil::s_perm + lVar12);
      auVar51._8_8_ = auVar43._8_8_;
      auVar51._0_8_ = auVar43._0_8_;
      lVar2 = lVar12 + 0x10;
      auVar53._8_8_ = auVar45._8_8_;
      auVar53._0_8_ = auVar45._0_8_;
      auVar55._8_8_ = auVar47._8_8_;
      auVar55._0_8_ = auVar47._0_8_;
      auVar25._4_4_ = uVar13;
      auVar25._0_4_ = uVar13;
      auVar25._8_4_ = uVar13;
      auVar25._12_4_ = uVar13;
      auVar48._4_4_ = param_2;
      auVar48._0_4_ = param_2;
      auVar48._8_4_ = param_2;
      auVar48._12_4_ = param_2;
      auVar25 = NEON_bsl(auVar49,auVar25,auVar48,1);
      auVar42._4_4_ = uVar13;
      auVar42._0_4_ = uVar13;
      auVar42._8_4_ = uVar13;
      auVar42._12_4_ = uVar13;
      auVar50._4_4_ = param_2;
      auVar50._0_4_ = param_2;
      auVar50._8_4_ = param_2;
      auVar50._12_4_ = param_2;
      auVar42 = NEON_bsl(auVar51,auVar42,auVar50,1);
      auVar44._4_4_ = uVar13;
      auVar44._0_4_ = uVar13;
      auVar44._8_4_ = uVar13;
      auVar44._12_4_ = uVar13;
      auVar52._4_4_ = param_2;
      auVar52._0_4_ = param_2;
      auVar52._8_4_ = param_2;
      auVar52._12_4_ = param_2;
      auVar44 = NEON_bsl(auVar53,auVar44,auVar52,1);
      auVar46._4_4_ = uVar13;
      auVar46._0_4_ = uVar13;
      auVar46._8_4_ = uVar13;
      auVar46._12_4_ = uVar13;
      auVar54._4_4_ = param_2;
      auVar54._0_4_ = param_2;
      auVar54._8_4_ = param_2;
      auVar54._12_4_ = param_2;
      auVar46 = NEON_bsl(auVar55,auVar46,auVar54,1);
      bVar21 = bVar21 + 0x10;
      bVar22 = bVar22 + 0x10;
      bVar23 = bVar23 + 0x10;
      auVar25 = a64_TBL(ZEXT816(0),auVar25,auVar42,auVar44,auVar46,auVar6);
      bVar20 = bVar20 + 0x10;
      bVar19 = bVar19 + 0x10;
      bVar18 = bVar18 + 0x10;
      PVar24 = (ProceduralPlacementIndexSimplexNoiseMask)(auVar26[0] ^ auVar25[0]);
      PVar27 = (ProceduralPlacementIndexSimplexNoiseMask)(auVar26[1] ^ auVar25[1]);
      PVar28 = (ProceduralPlacementIndexSimplexNoiseMask)(auVar26[2] ^ auVar25[2]);
      PVar29 = (ProceduralPlacementIndexSimplexNoiseMask)(auVar26[3] ^ auVar25[3]);
      PVar30 = (ProceduralPlacementIndexSimplexNoiseMask)(auVar26[4] ^ auVar25[4]);
      PVar31 = (ProceduralPlacementIndexSimplexNoiseMask)(auVar26[5] ^ auVar25[5]);
      PVar32 = (ProceduralPlacementIndexSimplexNoiseMask)(auVar26[6] ^ auVar25[6]);
      PVar33 = (ProceduralPlacementIndexSimplexNoiseMask)(auVar26[7] ^ auVar25[7]);
      PVar34 = (ProceduralPlacementIndexSimplexNoiseMask)(auVar26[8] ^ auVar25[8]);
      PVar35 = (ProceduralPlacementIndexSimplexNoiseMask)(auVar26[9] ^ auVar25[9]);
      PVar36 = (ProceduralPlacementIndexSimplexNoiseMask)(auVar26[10] ^ auVar25[10]);
      PVar37 = (ProceduralPlacementIndexSimplexNoiseMask)(auVar26[11] ^ auVar25[11]);
      PVar38 = (ProceduralPlacementIndexSimplexNoiseMask)(auVar26[12] ^ auVar25[12]);
      PVar39 = (ProceduralPlacementIndexSimplexNoiseMask)(auVar26[13] ^ auVar25[13]);
      PVar40 = (ProceduralPlacementIndexSimplexNoiseMask)(auVar26[14] ^ auVar25[14]);
      PVar41 = (ProceduralPlacementIndexSimplexNoiseMask)(auVar26[15] ^ auVar25[15]);
      bVar17 = bVar17 + 0x10;
      bVar15 = bVar15 + 0x10;
      this[lVar12 + 0x1dc] = PVar34;
      this[lVar12 + 0x1dd] = PVar35;
      this[lVar12 + 0x1de] = PVar36;
      this[lVar12 + 0x1df] = PVar37;
      this[lVar12 + 0x1e0] = PVar38;
      this[lVar12 + 0x1e1] = PVar39;
      this[lVar12 + 0x1e2] = PVar40;
      this[lVar12 + 0x1e3] = PVar41;
      this[lVar12 + 0x1cc] = PVar24;
      this[lVar12 + 0x1cd] = PVar27;
      this[lVar12 + 0x1ce] = PVar28;
      this[lVar12 + 0x1cf] = PVar29;
      this[lVar12 + 0x1d0] = PVar30;
      this[lVar12 + 0x1d1] = PVar31;
      this[lVar12 + 0x1d2] = PVar32;
      this[lVar12 + 0x1d3] = PVar33;
      this[lVar12 + 0xdc] = PVar34;
      this[lVar12 + 0xdd] = PVar35;
      this[lVar12 + 0xde] = PVar36;
      this[lVar12 + 0xdf] = PVar37;
      this[lVar12 + 0xe0] = PVar38;
      this[lVar12 + 0xe1] = PVar39;
      this[lVar12 + 0xe2] = PVar40;
      this[lVar12 + 0xe3] = PVar41;
      this[lVar12 + 0xcc] = PVar24;
      this[lVar12 + 0xcd] = PVar27;
      this[lVar12 + 0xce] = PVar28;
      this[lVar12 + 0xcf] = PVar29;
      this[lVar12 + 0xd0] = PVar30;
      this[lVar12 + 0xd1] = PVar31;
      this[lVar12 + 0xd2] = PVar32;
      this[lVar12 + 0xd3] = PVar33;
      lVar12 = lVar2;
    } while (lVar2 != 0x100);
  }
  else {
    uVar11 = 0;
    do {
      uVar10 = uVar13;
      if ((uVar11 & 1) != 0) {
        uVar10 = param_2;
      }
      uVar1 = uVar11 + 1;
      PVar24 = (ProceduralPlacementIndexSimplexNoiseMask)
               ((&SimplexNoiseUtil::s_perm)[uVar11] ^ (byte)uVar10);
      this[uVar11 + 0x1cc] = PVar24;
      this[uVar11 + 0xcc] = PVar24;
      uVar11 = uVar1;
    } while (uVar1 != 0x100);
  }
                    /* try { // try from 009cd030 to 009cd03f has its CatchHandler @ 009cd198 */
  getIndexSimplexNoiseMaskSignature(param_1,param_2);
  if ((*(byte *)(this + 0x70) & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  iVar4 = param_1 - 1;
  if (param_1 == 0 || iVar4 == 0) {
    iVar4 = 1;
  }
  *(undefined8 *)(this + 0x78) = uStack_78;
  *(ulong *)(this + 0x70) = CONCAT62(uStack_7e,CONCAT11(uStack_7f,local_80));
  *(void **)(this + 0x80) = local_70;
  *(int *)(this + 200) = iVar4;
  *(undefined8 *)(this + 0x50) = 0x80000000800;
                    /* try { // try from 009cd078 to 009cd0af has its CatchHandler @ 009cd1ec */
  pvVar7 = operator_new__(0x1000000);
  puVar9 = (undefined8 *)((long)pvVar7 + 0x10);
  lVar12 = 0x400000;
  *(void **)(this + 0x58) = pvVar7;
  do {
    puVar9[-1] = 0x437f0000437f0000;
    puVar9[-2] = 0x437f0000437f0000;
    puVar9[1] = 0x437f0000437f0000;
    *puVar9 = 0x437f0000437f0000;
    puVar9 = puVar9 + 4;
    lVar12 = lVar12 + -8;
  } while (lVar12 != 0);
  pvVar7 = operator_new__(0x1000000);
  uVar13 = 0;
  uVar10 = 0x800;
  uVar8 = 0x800;
  *(void **)(this + 0x2d0) = pvVar7;
  do {
    if (uVar8 != 0) {
      uVar10 = 0;
      do {
                    /* try { // try from 009cd0f0 to 009cd0fb has its CatchHandler @ 009cd1f0 */
        fVar14 = (float)SimplexNoiseUtil::getSimplexNoise2D
                                  ((float)(ulong)uVar10,(float)(ulong)uVar13,(Seed *)(this + 0xcc));
        uVar8 = *(uint *)(this + 0x50);
        fVar16 = (float)NEON_ucvtf(*(undefined4 *)(this + 200));
        uVar3 = uVar10 + uVar13 * uVar8;
        uVar10 = uVar10 + 1;
        fVar16 = (fVar14 + 1.0) * 0.5 * fVar16;
        fVar14 = -0.5;
        if (0.0 <= fVar16) {
          fVar14 = 0.5;
        }
        *(int *)(*(long *)(this + 0x2d0) + (ulong)uVar3 * 4) = (int)(fVar16 + fVar14);
      } while (uVar10 < uVar8);
      uVar10 = *(uint *)(this + 0x54);
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 < uVar10);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


