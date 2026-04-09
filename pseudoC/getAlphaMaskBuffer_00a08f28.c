// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAlphaMaskBuffer
// Entry Point: 00a08f28
// Size: 996 bytes
// Signature: undefined __thiscall getAlphaMaskBuffer(RenderController * this, uint param_1, AlphaMaskPixelConfig param_2)


/* RenderController::getAlphaMaskBuffer(unsigned int, RenderController::AlphaMaskPixelConfig) */

void __thiscall
RenderController::getAlphaMaskBuffer
          (RenderController *this,uint param_1,AlphaMaskPixelConfig param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long *plVar21;
  undefined4 uVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  undefined4 *local_c0;
  undefined2 local_b8;
  undefined8 local_b4;
  uint local_ac;
  undefined4 uStack_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  char *local_70;
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  memset(&DAT_02111ddc,0,0xc60);
  lVar13 = 0;
  do {
    uVar5 = 1 << (ulong)((uint)lVar13 & 0x1f);
    uVar16 = uVar5;
    if (uVar5 < 3) {
      uVar16 = 2;
    }
    uVar25 = (ulong)uVar16;
    (&DAT_02111ddc)[lVar13 * 0x84] = 0;
    uVar22 = (undefined4)(0xffffffffL >> ((ulong)(0x20 - uVar5) & 0x3f));
    if (lVar13 == 0) {
      (&DAT_02111ddc)[uVar5] = uVar22;
      DAT_02111e60 = 0;
LAB_00a08f94:
      (&DAT_02111e60)[(ulong)uVar5 + lVar13 * 0x84] = uVar22;
      (&DAT_02111ee4)[lVar13 * 0x84] = 0;
LAB_00a08fa8:
      (&DAT_02111ee4)[(ulong)uVar5 + lVar13 * 0x84] = uVar22;
      (&DAT_02111f68)[lVar13 * 0x84] = 0;
    }
    else {
      uVar16 = 0;
      uVar17 = uVar5 - 1;
      uVar23 = 1;
      do {
        do {
          iVar12 = rand();
          uVar6 = 1 << (ulong)(uVar17 & iVar12 >> 8 & 0x1f);
        } while ((uVar6 & uVar16) != 0);
        uVar16 = uVar6 | uVar16;
        (&DAT_02111ddc)[lVar13 * 0x84 + uVar23] = uVar16;
        uVar23 = uVar23 + 1;
      } while (uVar23 != uVar25);
      (&DAT_02111ddc)[lVar13 * 0x84 + (ulong)uVar5] = uVar22;
      (&DAT_02111e60)[lVar13 * 0x84] = 0;
      if (lVar13 == 0) goto LAB_00a08f94;
      uVar16 = 0;
      uVar23 = 1;
      do {
        do {
          iVar12 = rand();
          uVar6 = 1 << (ulong)(uVar17 & iVar12 >> 8 & 0x1f);
        } while ((uVar6 & uVar16) != 0);
        uVar16 = uVar6 | uVar16;
        uVar3 = uVar23 + 1;
        (&DAT_02111e60)[uVar23 + lVar13 * 0x84] = uVar16;
        uVar23 = uVar3;
      } while (uVar3 != uVar25);
      (&DAT_02111e60)[(ulong)uVar5 + lVar13 * 0x84] = uVar22;
      (&DAT_02111ee4)[lVar13 * 0x84] = 0;
      if (lVar13 == 0) goto LAB_00a08fa8;
      uVar16 = 0;
      uVar23 = 1;
      do {
        do {
          iVar12 = rand();
          uVar6 = 1 << (ulong)(uVar17 & iVar12 >> 8 & 0x1f);
        } while ((uVar6 & uVar16) != 0);
        uVar16 = uVar6 | uVar16;
        uVar3 = uVar23 + 1;
        (&DAT_02111ee4)[uVar23 + lVar13 * 0x84] = uVar16;
        uVar23 = uVar3;
      } while (uVar3 != uVar25);
      (&DAT_02111ee4)[(ulong)uVar5 + lVar13 * 0x84] = uVar22;
      (&DAT_02111f68)[lVar13 * 0x84] = 0;
      if (lVar13 != 0) {
        uVar16 = 0;
        uVar23 = 1;
        do {
          do {
            iVar12 = rand();
            uVar6 = 1 << (ulong)(uVar17 & iVar12 >> 8 & 0x1f);
          } while ((uVar6 & uVar16) != 0);
          uVar16 = uVar6 | uVar16;
          uVar3 = uVar23 + 1;
          (&DAT_02111f68)[uVar23 + lVar13 * 0x84] = uVar16;
          uVar23 = uVar3;
        } while (uVar3 != uVar25);
      }
    }
    lVar2 = lVar13 + 1;
    (&DAT_02111f68)[(ulong)uVar5 + lVar13 * 0x84] = uVar22;
    lVar13 = lVar2;
    if (lVar2 == 6) {
      if (param_1 < 2) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        do {
          uVar16 = uVar16 + 1;
          bVar1 = 3 < param_1;
          param_1 = param_1 >> 1;
        } while (bVar1);
      }
      uVar5 = 5 - uVar16;
      if (uVar16 + param_2 < 6) {
        uVar5 = param_2;
      }
      plVar24 = (long *)(this + (ulong)uVar5 * 8 + (ulong)uVar16 * 0x18 + 0x60);
      lVar13 = *plVar24;
      if (lVar13 == 0) {
        iVar12 = 1 << (ulong)(uVar16 & 0x1f);
        uVar7 = 1 << (ulong)(uVar5 + uVar16 & 0x1f);
        uVar6 = 0x20U >> (ulong)(uVar5 & 0x1f) & 0x1f;
        puVar14 = (undefined4 *)operator_new__((ulong)(uVar7 + 3) << 2);
        uVar17 = 0;
        *puVar14 = (int)(0xffffffffL >> ((ulong)(0x20 - iVar12) & 0x3f));
        puVar14[1] = uVar6 | uVar7 << 0x10 | iVar12 << 8;
        do {
          uVar8 = uVar17 >> (ulong)(uVar5 & 0x1f);
          uVar19 = 0;
          uVar18 = 0;
          uVar20 = 1;
          do {
            uVar10 = uVar20 - 1;
            uVar9 = uVar20 >> (ulong)(uVar5 & 0x1f);
            uVar20 = uVar20 + 1;
            uVar4 = uVar19 & 0x1f;
            uVar19 = uVar19 + uVar6;
            uVar18 = (&DAT_02111ddc)
                     [(ulong)uVar16 * 0x84 +
                      (ulong)uVar10 * 0x21 +
                      (ulong)(*(int *)(&DAT_0051d4a0 +
                                      (ulong)uVar10 * 4 +
                                      (ulong)(uVar17 - (uVar8 << (ulong)(uVar5 & 0x1f))) * 0x10) +
                             uVar8)] << (ulong)uVar4 | uVar18;
          } while (uVar9 == 0);
          uVar20 = uVar17 + 2;
          uVar17 = uVar17 + 1;
          puVar14[uVar20] = uVar18;
        } while (uVar17 <= uVar7);
        local_b8 = 0;
        local_9c = 0;
        local_b4 = 0xffffffffffffffff;
        local_a4 = 0x100000001;
        local_90 = 0;
        uStack_7c = 0x3f80000000000000;
        local_84 = 0;
        uStack_a8 = 1;
        local_74 = 0;
        local_8c = 0x100000001;
        local_98 = 0x2900000004;
        local_70 = "RenderController alpha mask buffer";
        plVar21 = *(long **)this;
        local_c0 = puVar14;
        local_ac = uVar7 + 3;
        uVar15 = (**(code **)(*plVar21 + 0x138))(plVar21);
        lVar13 = (**(code **)(*plVar21 + 0x100))(plVar21,uVar15,&local_c0);
        *plVar24 = lVar13;
        operator_delete__(puVar14);
        lVar13 = *plVar24;
      }
      if (*(long *)(lVar11 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(lVar13);
      }
      return;
    }
  } while( true );
}


