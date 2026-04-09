// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveImage
// Entry Point: 009cbb00
// Size: 616 bytes
// Signature: undefined __thiscall saveImage(ProceduralPlacementIndexMask * this, basic_string * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProceduralPlacementIndexMask::saveImage(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
ProceduralPlacementIndexMask::saveImage(ProceduralPlacementIndexMask *this,basic_string *param_1)

{
  undefined (*pauVar1) [16];
  char *pcVar2;
  uint uVar3;
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  long lVar6;
  ulong uVar7;
  undefined auVar8 [16];
  ProceduralPlacementManager *this_00;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined (*pauVar14) [16];
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined auVar18 [16];
  undefined auVar19 [16];
  byte local_c8;
  char *local_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
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
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  uVar17 = *(ulong *)(this + 200);
  if (uVar17 == 0) {
    this_00 = (ProceduralPlacementManager *)ProceduralPlacementManager::getInstance();
    puVar9 = (undefined8 *)operator_new(0x20);
    local_a0 = SUB84(puVar9,0);
    uStack_9c = (undefined4)((ulong)puVar9 >> 0x20);
    *(undefined *)((long)puVar9 + 0x1a) = 0;
    auVar8 = s_Could_not_save_index_mask__0050b602._10_16_;
    uStack_a8 = SUB168(_DAT_004c4610,8);
    local_b0 = SUB168(_DAT_004c4610,0);
    puVar9[1] = 0x6920657661732074;
    *puVar9 = 0x6f6e20646c756f43;
    *(long *)((long)puVar9 + 0x12) = auVar8._8_8_;
    *(long *)((long)puVar9 + 10) = auVar8._0_8_;
                    /* try { // try from 009cbc7c to 009cbc87 has its CatchHandler @ 009cbd68 */
    ProceduralPlacementManager::logPerformance(this_00,(basic_string *)&local_b0);
    if ((local_b0 & 1) == 0) goto LAB_009cbc98;
    local_b8 = (char *)CONCAT44(uStack_9c,local_a0);
  }
  else {
    uVar7 = *(ulong *)(this + 0x50);
    uVar3 = *(int *)(this + 0x50) * *(int *)(this + 0x54);
    uVar16 = (ulong)uVar3;
    local_88 = operator_new__(uVar16);
    auVar8 = _DAT_004c3bd0;
    if (uVar3 != 0) {
      if ((uVar3 < 8) ||
         ((local_88 < (void *)(uVar17 + uVar16 * 4) && (uVar17 < (long)local_88 + uVar16)))) {
        uVar10 = 0;
      }
      else {
        if (uVar3 < 0x20) {
          uVar12 = 0;
        }
        else {
          uVar10 = uVar16 & 0xffffffe0;
          pauVar14 = (undefined (*) [16])(uVar17 + 0x40);
          puVar9 = (undefined8 *)((long)local_88 + 0x10);
          uVar12 = uVar10;
          do {
            uVar12 = uVar12 - 0x20;
            auVar19 = *pauVar14;
            pauVar4 = pauVar14 + 1;
            auVar18 = a64_TBL(ZEXT816(0),pauVar14[-4],pauVar14[-3],pauVar14[-2],pauVar14[-1],auVar8)
            ;
            pauVar1 = pauVar14 + 2;
            pauVar5 = pauVar14 + 3;
            pauVar14 = pauVar14 + 8;
            auVar19 = a64_TBL(ZEXT816(0),auVar19,*pauVar4,*pauVar1,*pauVar5,auVar8);
            puVar9[-1] = auVar18._8_8_;
            puVar9[-2] = auVar18._0_8_;
            puVar9[1] = auVar19._8_8_;
            *puVar9 = auVar19._0_8_;
            puVar9 = puVar9 + 4;
          } while (uVar12 != 0);
          if (uVar10 == uVar16) goto LAB_009cbb8c;
          uVar12 = uVar10;
          if ((uVar3 & 0x18) == 0) goto LAB_009cbb70;
        }
        auVar8 = _DAT_004c4870;
        uVar10 = uVar16 & 0xfffffff8;
        lVar11 = uVar12 - uVar10;
        pauVar14 = (undefined (*) [16])(uVar17 + uVar12 * 4);
        puVar9 = (undefined8 *)((long)local_88 + uVar12);
        do {
          lVar11 = lVar11 + 8;
          auVar19 = a64_TBL(ZEXT816(0),*pauVar14,pauVar14[1],auVar8);
          *puVar9 = auVar19._0_8_;
          pauVar14 = pauVar14 + 2;
          puVar9 = puVar9 + 1;
        } while (lVar11 != 0);
        if (uVar10 == uVar16) goto LAB_009cbb8c;
      }
LAB_009cbb70:
      lVar11 = uVar16 - uVar10;
      puVar13 = (undefined4 *)(uVar17 + uVar10 * 4);
      puVar15 = (undefined *)((long)local_88 + uVar10);
      do {
        lVar11 = lVar11 + -1;
        *puVar15 = (char)*puVar13;
        puVar13 = puVar13 + 1;
        puVar15 = puVar15 + 1;
      } while (lVar11 != 0);
    }
LAB_009cbb8c:
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 1;
    local_90 = uVar3 * 4;
    local_a0 = 0;
    uStack_94 = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    uStack_9c = 1;
    uStack_98 = 1;
    uStack_a8 = 0x100000008;
    local_b0 = uVar7;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_c8);
    uVar17 = (ulong)(*(byte *)param_1 >> 1);
    if ((*(byte *)param_1 & 1) != 0) {
      uVar17 = *(ulong *)(param_1 + 2);
    }
    if (uVar17 != 0) {
                    /* try { // try from 009cbbf0 to 009cbc1b has its CatchHandler @ 009cbd7c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                &local_c8,param_1);
    }
    pcVar2 = (char *)((ulong)&local_c8 | 1);
    if ((local_c8 & 1) != 0) {
      pcVar2 = local_b8;
    }
    ImageSaveUtil::saveImage(pcVar2,(ImageDesc *)&local_b0,true);
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
    }
    local_88 = (void *)0x0;
    local_90 = 0;
    if ((local_c8 & 1) == 0) goto LAB_009cbc98;
  }
  operator_delete(local_b8);
LAB_009cbc98:
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


