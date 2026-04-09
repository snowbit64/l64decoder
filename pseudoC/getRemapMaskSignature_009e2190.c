// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRemapMaskSignature
// Entry Point: 009e2190
// Size: 624 bytes
// Signature: undefined __thiscall getRemapMaskSignature(ProceduralPlacementRemapMask * this, ProceduralPlacementMask * param_1, uint param_2, float * param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProceduralPlacementRemapMask::getRemapMaskSignature(ProceduralPlacementMask*, unsigned int,
   float*) */

void __thiscall
ProceduralPlacementRemapMask::getRemapMaskSignature
          (ProceduralPlacementRemapMask *this,ProceduralPlacementMask *param_1,uint param_2,
          float *param_3)

{
  long lVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  char *__src;
  bool bVar11;
  uchar *puVar12;
  size_t __n;
  ulong *in_x8;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined (*pauVar17) [16];
  float *pfVar18;
  undefined8 *puVar19;
  uchar *puVar20;
  undefined *__dest;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined auVar24 [16];
  undefined auVar25 [16];
  char *local_98;
  byte local_90 [8];
  uint local_88;
  uchar *local_80;
  ShaHash aSStack_78 [28];
  uchar auStack_5c [20];
  long local_48;
  
  uVar23 = (ulong)param_2;
  lVar1 = tpidr_el0;
  uVar22 = (ulong)param_1 & 0xffffffff;
  local_48 = *(long *)(lVar1 + 0x28);
  ShaHash::ShaHash(aSStack_78,0xa0);
                    /* try { // try from 009e21d8 to 009e21e7 has its CatchHandler @ 009e2404 */
  (**(code **)(*(long *)this + 0x78))(local_90,this);
  bVar11 = (local_90[0] & 1) != 0;
  puVar12 = (uchar *)((ulong)local_90 | 1);
  if (bVar11) {
    puVar12 = local_80;
  }
  uVar21 = (uint)(local_90[0] >> 1);
  if (bVar11) {
    uVar21 = local_88;
  }
                    /* try { // try from 009e2208 to 009e220f has its CatchHandler @ 009e2400 */
  ShaHash::add(aSStack_78,puVar12,uVar21);
                    /* try { // try from 009e2214 to 009e232b has its CatchHandler @ 009e2410 */
  puVar12 = (uchar *)operator_new__(uVar22);
  auVar10 = _DAT_004c3bd0;
  uVar21 = (uint)param_1;
  if (uVar21 != 0) {
    if (uVar21 < 8) {
      uVar13 = 0;
    }
    else {
      if (uVar21 < 0x20) {
        uVar14 = 0;
      }
      else {
        uVar13 = (ulong)param_1 & 0xffffffe0;
        puVar19 = (undefined8 *)(puVar12 + 0x10);
        puVar16 = (undefined8 *)(uVar23 + 0x40);
        uVar14 = uVar13;
        do {
          uVar14 = uVar14 - 0x20;
          auVar25 = *(undefined (*) [16])(puVar16 + -8);
          auVar4 = *(undefined (*) [16])(puVar16 + -6);
          auVar24._4_4_ = (int)auVar25._4_4_;
          auVar24._0_4_ = (int)auVar25._0_4_;
          auVar24._8_4_ = (int)auVar25._8_4_;
          auVar24._12_4_ = (int)auVar25._12_4_;
          auVar25._4_4_ = (int)auVar4._4_4_;
          auVar25._0_4_ = (int)auVar4._0_4_;
          auVar25._8_4_ = (int)auVar4._8_4_;
          auVar25._12_4_ = (int)auVar4._12_4_;
          auVar4._4_4_ = (int)(float)((ulong)puVar16[-4] >> 0x20);
          auVar4._0_4_ = (int)(float)puVar16[-4];
          auVar4._8_4_ = (int)(float)puVar16[-3];
          auVar4._12_4_ = (int)(float)((ulong)puVar16[-3] >> 0x20);
          auVar5._4_4_ = (int)(float)((ulong)puVar16[-2] >> 0x20);
          auVar5._0_4_ = (int)(float)puVar16[-2];
          auVar5._8_4_ = (int)(float)puVar16[-1];
          auVar5._12_4_ = (int)(float)((ulong)puVar16[-1] >> 0x20);
          auVar24 = a64_TBL(ZEXT816(0),auVar24,auVar25,auVar4,auVar5,auVar10);
          auVar6._4_4_ = (int)(float)((ulong)*puVar16 >> 0x20);
          auVar6._0_4_ = (int)(float)*puVar16;
          auVar6._8_4_ = (int)(float)puVar16[1];
          auVar6._12_4_ = (int)(float)((ulong)puVar16[1] >> 0x20);
          auVar7._4_4_ = (int)(float)((ulong)puVar16[2] >> 0x20);
          auVar7._0_4_ = (int)(float)puVar16[2];
          auVar7._8_4_ = (int)(float)puVar16[3];
          auVar7._12_4_ = (int)(float)((ulong)puVar16[3] >> 0x20);
          auVar8._4_4_ = (int)(float)((ulong)puVar16[4] >> 0x20);
          auVar8._0_4_ = (int)(float)puVar16[4];
          auVar8._8_4_ = (int)(float)puVar16[5];
          auVar8._12_4_ = (int)(float)((ulong)puVar16[5] >> 0x20);
          auVar9._4_4_ = (int)(float)((ulong)puVar16[6] >> 0x20);
          auVar9._0_4_ = (int)(float)puVar16[6];
          auVar9._8_4_ = (int)(float)puVar16[7];
          auVar9._12_4_ = (int)(float)((ulong)puVar16[7] >> 0x20);
          auVar25 = a64_TBL(ZEXT816(0),auVar6,auVar7,auVar8,auVar9,auVar10);
          puVar19[-1] = auVar24._8_8_;
          puVar19[-2] = auVar24._0_8_;
          puVar19[1] = auVar25._8_8_;
          *puVar19 = auVar25._0_8_;
          puVar19 = puVar19 + 4;
          puVar16 = puVar16 + 0x10;
        } while (uVar14 != 0);
        if (uVar13 == uVar22) goto LAB_009e2314;
        uVar14 = uVar13;
        if (((ulong)param_1 & 0x18) == 0) goto LAB_009e22f4;
      }
      auVar10 = _DAT_004c4870;
      uVar13 = (ulong)param_1 & 0xfffffff8;
      lVar15 = uVar14 - uVar13;
      pauVar17 = (undefined (*) [16])(uVar23 + uVar14 * 4);
      puVar19 = (undefined8 *)(puVar12 + uVar14);
      do {
        auVar25 = *pauVar17;
        auVar24 = pauVar17[1];
        lVar15 = lVar15 + 8;
        auVar2._4_4_ = (int)auVar25._4_4_;
        auVar2._0_4_ = (int)auVar25._0_4_;
        auVar2._8_4_ = (int)auVar25._8_4_;
        auVar2._12_4_ = (int)auVar25._12_4_;
        auVar3._4_4_ = (int)auVar24._4_4_;
        auVar3._0_4_ = (int)auVar24._0_4_;
        auVar3._8_4_ = (int)auVar24._8_4_;
        auVar3._12_4_ = (int)auVar24._12_4_;
        auVar24 = a64_TBL(ZEXT816(0),auVar2,auVar3,auVar10);
        *puVar19 = auVar24._0_8_;
        pauVar17 = pauVar17 + 2;
        puVar19 = puVar19 + 1;
      } while (lVar15 != 0);
      if (uVar13 == uVar22) goto LAB_009e2314;
    }
LAB_009e22f4:
    lVar15 = uVar22 - uVar13;
    pfVar18 = (float *)(uVar23 + uVar13 * 4);
    puVar20 = puVar12 + uVar13;
    do {
      lVar15 = lVar15 + -1;
      *puVar20 = (uchar)(int)*pfVar18;
      pfVar18 = pfVar18 + 1;
      puVar20 = puVar20 + 1;
    } while (lVar15 != 0);
  }
LAB_009e2314:
  ShaHash::add(aSStack_78,puVar12,uVar21);
  ShaHash::getSHA1Hash((uchar *)aSStack_78);
  local_98 = (char *)0x0;
                    /* try { // try from 009e2330 to 009e2383 has its CatchHandler @ 009e240c */
  StringUtil::base64Encode(auStack_5c,0x14,true,&local_98);
  __src = local_98;
  __n = strlen(local_98);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 009e23f4 to 009e23fb has its CatchHandler @ 009e240c */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_009e23a4;
  }
  else {
    uVar23 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar23);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar23 | 1;
  }
  memcpy(__dest,__src,__n);
LAB_009e23a4:
  __dest[__n] = 0;
  if (local_98 != (char *)0x0) {
    operator_delete__(local_98);
  }
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  ShaHash::~ShaHash(aSStack_78);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


