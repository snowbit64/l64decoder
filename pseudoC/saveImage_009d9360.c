// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveImage
// Entry Point: 009d9360
// Size: 652 bytes
// Signature: undefined __thiscall saveImage(ProceduralPlacementMask * this, basic_string * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProceduralPlacementMask::saveImage(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
ProceduralPlacementMask::saveImage(ProceduralPlacementMask *this,basic_string *param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  ProceduralPlacementManager *this_00;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  float *pfVar18;
  undefined8 *puVar19;
  undefined (*pauVar20) [16];
  undefined *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ulong uVar24;
  undefined auVar25 [16];
  undefined auVar26 [16];
  byte local_c8;
  char *local_b8;
  uint local_b0;
  int iStack_ac;
  undefined uStack_a8;
  undefined7 uStack_a7;
  undefined4 uStack_a0;
  undefined uStack_9c;
  undefined uStack_9b;
  undefined2 uStack_9a;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int local_90;
  void *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  undefined4 local_64;
  undefined2 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar24 = *(ulong *)(this + 0x58);
  if (uVar24 == 0) {
    (**(code **)(*(long *)this + 0x18))(this);
    this_00 = (ProceduralPlacementManager *)ProceduralPlacementManager::getInstance();
    uStack_9b = 0;
    uStack_9c = 0x2e;
    uStack_a7 = 0x20657661732074;
    uStack_a0 = 0x6b73616d;
    local_b0 = 0x756f4328;
    iStack_ac = 0x6e20646c;
    uStack_a8 = 0x6f;
                    /* try { // try from 009d94e0 to 009d94e7 has its CatchHandler @ 009d95ec */
    ProceduralPlacementManager::logPerformance(this_00,&local_b0);
    if ((local_b0 & 1) == 0) goto LAB_009d94f8;
    local_b8 = (char *)CONCAT26(uStack_9a,CONCAT15(uStack_9b,CONCAT14(uStack_9c,uStack_a0)));
  }
  else {
    uVar2 = *(uint *)(this + 0x50);
    iVar3 = *(int *)(this + 0x54);
    uVar4 = uVar2 * iVar3;
    uVar23 = (ulong)uVar4;
    local_88 = operator_new__(uVar23);
    auVar14 = _DAT_004c3bd0;
    if (uVar4 != 0) {
      if ((uVar4 < 8) ||
         ((local_88 < (void *)(uVar24 + uVar23 * 4) && (uVar24 < (long)local_88 + uVar23)))) {
        uVar15 = 0;
      }
      else {
        if (uVar4 < 0x20) {
          uVar17 = 0;
        }
        else {
          uVar15 = uVar23 & 0xffffffe0;
          puVar22 = (undefined8 *)((long)local_88 + 0x10);
          puVar19 = (undefined8 *)(uVar24 + 0x40);
          uVar17 = uVar15;
          do {
            uVar17 = uVar17 - 0x20;
            auVar26 = *(undefined (*) [16])(puVar19 + -8);
            auVar8 = *(undefined (*) [16])(puVar19 + -6);
            auVar25._4_4_ = (int)auVar26._4_4_;
            auVar25._0_4_ = (int)auVar26._0_4_;
            auVar25._8_4_ = (int)auVar26._8_4_;
            auVar25._12_4_ = (int)auVar26._12_4_;
            auVar26._4_4_ = (int)auVar8._4_4_;
            auVar26._0_4_ = (int)auVar8._0_4_;
            auVar26._8_4_ = (int)auVar8._8_4_;
            auVar26._12_4_ = (int)auVar8._12_4_;
            auVar8._4_4_ = (int)(float)((ulong)puVar19[-4] >> 0x20);
            auVar8._0_4_ = (int)(float)puVar19[-4];
            auVar8._8_4_ = (int)(float)puVar19[-3];
            auVar8._12_4_ = (int)(float)((ulong)puVar19[-3] >> 0x20);
            auVar9._4_4_ = (int)(float)((ulong)puVar19[-2] >> 0x20);
            auVar9._0_4_ = (int)(float)puVar19[-2];
            auVar9._8_4_ = (int)(float)puVar19[-1];
            auVar9._12_4_ = (int)(float)((ulong)puVar19[-1] >> 0x20);
            auVar25 = a64_TBL(ZEXT816(0),auVar25,auVar26,auVar8,auVar9,auVar14);
            auVar10._4_4_ = (int)(float)((ulong)*puVar19 >> 0x20);
            auVar10._0_4_ = (int)(float)*puVar19;
            auVar10._8_4_ = (int)(float)puVar19[1];
            auVar10._12_4_ = (int)(float)((ulong)puVar19[1] >> 0x20);
            auVar11._4_4_ = (int)(float)((ulong)puVar19[2] >> 0x20);
            auVar11._0_4_ = (int)(float)puVar19[2];
            auVar11._8_4_ = (int)(float)puVar19[3];
            auVar11._12_4_ = (int)(float)((ulong)puVar19[3] >> 0x20);
            auVar12._4_4_ = (int)(float)((ulong)puVar19[4] >> 0x20);
            auVar12._0_4_ = (int)(float)puVar19[4];
            auVar12._8_4_ = (int)(float)puVar19[5];
            auVar12._12_4_ = (int)(float)((ulong)puVar19[5] >> 0x20);
            auVar13._4_4_ = (int)(float)((ulong)puVar19[6] >> 0x20);
            auVar13._0_4_ = (int)(float)puVar19[6];
            auVar13._8_4_ = (int)(float)puVar19[7];
            auVar13._12_4_ = (int)(float)((ulong)puVar19[7] >> 0x20);
            auVar26 = a64_TBL(ZEXT816(0),auVar10,auVar11,auVar12,auVar13,auVar14);
            puVar22[-1] = auVar25._8_8_;
            puVar22[-2] = auVar25._0_8_;
            puVar22[1] = auVar26._8_8_;
            *puVar22 = auVar26._0_8_;
            puVar22 = puVar22 + 4;
            puVar19 = puVar19 + 0x10;
          } while (uVar17 != 0);
          if (uVar15 == uVar23) goto LAB_009d93f0;
          uVar17 = uVar15;
          if ((uVar4 & 0x18) == 0) goto LAB_009d93d0;
        }
        auVar14 = _DAT_004c4870;
        uVar15 = uVar23 & 0xfffffff8;
        lVar16 = uVar17 - uVar15;
        pauVar20 = (undefined (*) [16])(uVar24 + uVar17 * 4);
        puVar22 = (undefined8 *)((long)local_88 + uVar17);
        do {
          auVar26 = *pauVar20;
          auVar25 = pauVar20[1];
          lVar16 = lVar16 + 8;
          auVar6._4_4_ = (int)auVar26._4_4_;
          auVar6._0_4_ = (int)auVar26._0_4_;
          auVar6._8_4_ = (int)auVar26._8_4_;
          auVar6._12_4_ = (int)auVar26._12_4_;
          auVar7._4_4_ = (int)auVar25._4_4_;
          auVar7._0_4_ = (int)auVar25._0_4_;
          auVar7._8_4_ = (int)auVar25._8_4_;
          auVar7._12_4_ = (int)auVar25._12_4_;
          auVar25 = a64_TBL(ZEXT816(0),auVar6,auVar7,auVar14);
          *puVar22 = auVar25._0_8_;
          pauVar20 = pauVar20 + 2;
          puVar22 = puVar22 + 1;
        } while (lVar16 != 0);
        if (uVar15 == uVar23) goto LAB_009d93f0;
      }
LAB_009d93d0:
      lVar16 = uVar23 - uVar15;
      pfVar18 = (float *)(uVar24 + uVar15 * 4);
      puVar21 = (undefined *)((long)local_88 + uVar15);
      do {
        lVar16 = lVar16 + -1;
        *puVar21 = (char)(int)*pfVar18;
        pfVar18 = pfVar18 + 1;
        puVar21 = puVar21 + 1;
      } while (lVar16 != 0);
    }
LAB_009d93f0:
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 1;
    local_90 = uVar4 * 4;
    uStack_a0 = 0;
    uStack_94 = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    uStack_9c = 1;
    uStack_9b = 0;
    uStack_9a = 0;
    uStack_98 = 1;
    uStack_a8 = 8;
    uStack_a7 = 0x1000000;
    local_b0 = uVar2;
    iStack_ac = iVar3;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_c8);
    uVar24 = (ulong)(*(byte *)param_1 >> 1);
    if ((*(byte *)param_1 & 1) != 0) {
      uVar24 = *(ulong *)(param_1 + 2);
    }
    if (uVar24 != 0) {
                    /* try { // try from 009d9454 to 009d947f has its CatchHandler @ 009d9600 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                &local_c8,param_1);
    }
    pcVar1 = (char *)((ulong)&local_c8 | 1);
    if ((local_c8 & 1) != 0) {
      pcVar1 = local_b8;
    }
    ImageSaveUtil::saveImage(pcVar1,(ImageDesc *)&local_b0,true);
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
    }
    local_88 = (void *)0x0;
    local_90 = 0;
    if ((local_c8 & 1) == 0) goto LAB_009d94f8;
  }
  operator_delete(local_b8);
LAB_009d94f8:
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


