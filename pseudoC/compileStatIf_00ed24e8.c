// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileStatIf
// Entry Point: 00ed24e8
// Size: 1828 bytes
// Signature: undefined __thiscall compileStatIf(Compiler * this, AstStatIf * param_1)


/* Luau::Compiler::compileStatIf(Luau::AstStatIf*) */

void __thiscall Luau::Compiler::compileStatIf(Compiler *this,AstStatIf *param_1)

{
  ulong *puVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  undefined **ppuVar5;
  bool bVar6;
  ulong uVar7;
  ulong *puVar8;
  void *pvVar9;
  AstExpr *pAVar10;
  AstExpr *pAVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  AstExpr *pAVar16;
  ulong uVar17;
  undefined **ppuVar18;
  undefined8 *puVar19;
  void *pvVar20;
  size_t sVar21;
  undefined *puVar22;
  undefined **local_80;
  undefined **local_78;
  undefined8 *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pAVar10 = *(AstExpr **)(param_1 + 0x20);
  if ((*(long *)(this + 0xe0) != 0) && (pAVar11 = *(AstExpr **)(this + 0xe8), pAVar11 != pAVar10)) {
    lVar12 = *(long *)(this + 0xd0);
    uVar13 = 0;
    uVar15 = (ulong)pAVar10 >> 4 ^ (ulong)pAVar10 >> 9;
    uVar14 = *(long *)(this + 0xd8) - 1;
    do {
      uVar15 = uVar15 & uVar14;
      pAVar16 = *(AstExpr **)(lVar12 + uVar15 * 0x18);
      if (pAVar16 == pAVar10) {
        iVar3 = *(int *)(lVar12 + uVar15 * 0x18 + 8);
        if ((iVar3 == 1) || ((iVar3 == 2 && (*(char *)(lVar12 + uVar15 * 0x18 + 0x10) == '\0')))) {
          if (*(AstStat **)(param_1 + 0x30) != (AstStat *)0x0) {
            compileStat(this,*(AstStat **)(param_1 + 0x30));
          }
          goto LAB_00ed2b54;
        }
        break;
      }
      uVar13 = uVar13 + 1;
      uVar15 = uVar13 + uVar15;
    } while (pAVar16 != pAVar11 && uVar13 < uVar14 || pAVar16 != pAVar11 && uVar13 == uVar14);
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    lVar12 = *(long *)(param_1 + 0x28);
    iVar3 = *(int *)(lVar12 + 8);
    if ((lVar12 != 0) && (iVar3 == AstRtti<Luau::AstStatBlock>::value)) {
      if (*(long *)(lVar12 + 0x28) != 1) goto LAB_00ed2580;
      iVar3 = *(int *)(**(long **)(lVar12 + 0x20) + 8);
    }
    if (iVar3 == AstRtti<Luau::AstStatBreak>::value) {
      uVar13 = *(ulong *)(*(long *)(this + 0x1d8) + -0x10);
      uVar15 = *(long *)(this + 400) - *(long *)(this + 0x188) >> 3;
      if (uVar15 <= uVar13) {
LAB_00ed2a50:
        local_80 = (undefined **)0x0;
        local_78 = (undefined **)0x0;
        local_70 = (undefined8 *)0x0;
                    /* try { // try from 00ed2a58 to 00ed2a6b has its CatchHandler @ 00ed2c0c */
        compileConditionValue(this,pAVar10,(uchar *)0x0,(vector *)&local_80,true);
        ppuVar5 = local_78;
        if (local_80 != local_78) {
          ppuVar18 = local_80;
          do {
            puVar2 = *(undefined4 **)(this + 0x1c0);
            puVar22 = *ppuVar18;
            if (puVar2 < *(undefined4 **)(this + 0x1c8)) {
              *puVar2 = 0;
              *(undefined **)(puVar2 + 2) = puVar22;
              *(undefined4 **)(this + 0x1c0) = puVar2 + 4;
            }
            else {
              pvVar20 = *(void **)(this + 0x1b8);
              sVar21 = (long)puVar2 - (long)pvVar20;
              uVar13 = ((long)sVar21 >> 4) + 1;
              if (uVar13 >> 0x3c != 0) {
                    /* try { // try from 00ed2bc8 to 00ed2bdb has its CatchHandler @ 00ed2c28 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              uVar15 = (long)*(undefined4 **)(this + 0x1c8) - (long)pvVar20;
              uVar14 = (long)uVar15 >> 3;
              if (uVar13 <= uVar14) {
                uVar13 = uVar14;
              }
              if (0x7fffffffffffffef < uVar15) {
                uVar13 = 0xfffffffffffffff;
              }
              if (uVar13 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00ed2af0 to 00ed2af3 has its CatchHandler @ 00ed2c1c */
              pvVar9 = operator_new(uVar13 << 4);
              puVar2 = (undefined4 *)((long)pvVar9 + ((long)sVar21 >> 4) * 0x10);
              *puVar2 = 0;
              *(undefined **)(puVar2 + 2) = puVar22;
              if (0 < (long)sVar21) {
                memcpy(pvVar9,pvVar20,sVar21);
              }
              *(void **)(this + 0x1b8) = pvVar9;
              *(undefined4 **)(this + 0x1c0) = puVar2 + 4;
              *(void **)(this + 0x1c8) = (void *)((long)pvVar9 + uVar13 * 0x10);
              if (pvVar20 != (void *)0x0) {
                operator_delete(pvVar20);
              }
            }
            ppuVar18 = ppuVar18 + 1;
          } while (ppuVar18 != ppuVar5);
        }
        goto joined_r0x00ed2b44;
      }
      if (*(long *)(this + 0x68) == 0) {
        if (cRam0000000000000002 == '\0') goto LAB_00ed2a50;
      }
      else {
        bVar6 = true;
        do {
          uVar14 = *(ulong *)(*(long *)(this + 0x188) + uVar13 * 8);
          if (uVar14 != *(ulong *)(this + 0x70)) {
            uVar17 = 0;
            uVar7 = uVar14 >> 4 ^ uVar14 >> 9;
            do {
              uVar7 = uVar7 & *(long *)(this + 0x60) - 1U;
              puVar8 = (ulong *)(*(long *)(this + 0x58) + uVar7 * 0x10);
              if (*puVar8 == uVar14) goto LAB_00ed2868;
              if (*puVar8 == *(ulong *)(this + 0x70)) break;
              uVar17 = uVar17 + 1;
              uVar7 = uVar17 + uVar7;
            } while (uVar17 <= *(long *)(this + 0x60) - 1U);
          }
          puVar8 = (ulong *)0x0;
LAB_00ed2868:
          puVar1 = (ulong *)0x0;
          if (puVar8 != (ulong *)0x0) {
            puVar1 = puVar8 + 1;
          }
          if (*(char *)((long)puVar1 + 2) != '\0') break;
          uVar13 = uVar13 + 1;
          bVar6 = uVar13 < uVar15;
        } while (uVar13 != uVar15);
        if (!bVar6) goto LAB_00ed2a50;
      }
    }
  }
  else {
    lVar12 = *(long *)(param_1 + 0x28);
  }
LAB_00ed2580:
  if (*(long *)(lVar12 + 0x28) == 1) {
    lVar12 = **(long **)(lVar12 + 0x20);
    if (*(int *)(lVar12 + 8) != AstRtti<Luau::AstStatContinue>::value) {
      lVar12 = 0;
    }
    if ((*(long *)(param_1 + 0x30) == 0) && (lVar12 != 0)) {
      uVar13 = *(ulong *)(*(long *)(this + 0x1d8) + -0x10);
      uVar15 = *(long *)(this + 400) - *(long *)(this + 0x188) >> 3;
      if (uVar15 <= uVar13) {
LAB_00ed2658:
        puVar19 = *(undefined8 **)(*(long *)(this + 0x1d8) + -8);
        if (puVar19 != (undefined8 *)0x0) {
          local_70 = (undefined8 *)0x0;
          local_80 = &PTR__AstVisitor_01014d88;
          local_78 = (undefined **)this;
          (**(code **)*puVar19)(puVar19,&local_80);
          if (local_70 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            CompileError::raise((Location *)((long)puVar19 + 0xc),
                                "Local %s used in the repeat..until condition is undefined because continue statement on line %d jumps over it"
                                ,*local_70,(ulong)(*(int *)(lVar12 + 0xc) + 1));
          }
          pAVar10 = *(AstExpr **)(param_1 + 0x20);
        }
        local_80 = (undefined **)0x0;
        local_78 = (undefined **)0x0;
        local_70 = (undefined8 *)0x0;
                    /* try { // try from 00ed269c to 00ed26af has its CatchHandler @ 00ed2c10 */
        compileConditionValue(this,pAVar10,(uchar *)0x0,(vector *)&local_80,true);
        ppuVar5 = local_78;
        if (local_80 != local_78) {
          ppuVar18 = local_80;
          do {
            puVar2 = *(undefined4 **)(this + 0x1c0);
            puVar22 = *ppuVar18;
            if (puVar2 < *(undefined4 **)(this + 0x1c8)) {
              *(undefined **)(puVar2 + 2) = puVar22;
              *puVar2 = 1;
              *(undefined4 **)(this + 0x1c0) = puVar2 + 4;
            }
            else {
              pvVar20 = *(void **)(this + 0x1b8);
              sVar21 = (long)puVar2 - (long)pvVar20;
              uVar13 = ((long)sVar21 >> 4) + 1;
              if (uVar13 >> 0x3c != 0) {
                    /* try { // try from 00ed2bb4 to 00ed2bc7 has its CatchHandler @ 00ed2c38 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              uVar15 = (long)*(undefined4 **)(this + 0x1c8) - (long)pvVar20;
              uVar14 = (long)uVar15 >> 3;
              if (uVar13 <= uVar14) {
                uVar13 = uVar14;
              }
              if (0x7fffffffffffffef < uVar15) {
                uVar13 = 0xfffffffffffffff;
              }
              if (uVar13 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00ed2738 to 00ed273b has its CatchHandler @ 00ed2c20 */
              pvVar9 = operator_new(uVar13 << 4);
              puVar2 = (undefined4 *)((long)pvVar9 + ((long)sVar21 >> 4) * 0x10);
              *(undefined **)(puVar2 + 2) = puVar22;
              *puVar2 = 1;
              if (0 < (long)sVar21) {
                memcpy(pvVar9,pvVar20,sVar21);
              }
              *(void **)(this + 0x1b8) = pvVar9;
              *(undefined4 **)(this + 0x1c0) = puVar2 + 4;
              *(void **)(this + 0x1c8) = (void *)((long)pvVar9 + uVar13 * 0x10);
              if (pvVar20 != (void *)0x0) {
                operator_delete(pvVar20);
              }
            }
            ppuVar18 = ppuVar18 + 1;
          } while (ppuVar18 != ppuVar5);
        }
        goto joined_r0x00ed2b44;
      }
      if (*(long *)(this + 0x68) == 0) {
        if (cRam0000000000000002 == '\0') goto LAB_00ed2658;
      }
      else {
        bVar6 = true;
        do {
          uVar14 = *(ulong *)(*(long *)(this + 0x188) + uVar13 * 8);
          if (uVar14 != *(ulong *)(this + 0x70)) {
            uVar17 = 0;
            uVar7 = uVar14 >> 4 ^ uVar14 >> 9;
            do {
              uVar7 = uVar7 & *(long *)(this + 0x60) - 1U;
              puVar8 = (ulong *)(*(long *)(this + 0x58) + uVar7 * 0x10);
              if (*puVar8 == uVar14) goto LAB_00ed2630;
              if (*puVar8 == *(ulong *)(this + 0x70)) break;
              uVar17 = uVar17 + 1;
              uVar7 = uVar17 + uVar7;
            } while (uVar17 <= *(long *)(this + 0x60) - 1U);
          }
          puVar8 = (ulong *)0x0;
LAB_00ed2630:
          puVar1 = (ulong *)0x0;
          if (puVar8 != (ulong *)0x0) {
            puVar1 = puVar8 + 1;
          }
          if (*(char *)((long)puVar1 + 2) != '\0') break;
          uVar13 = uVar13 + 1;
          bVar6 = uVar13 < uVar15;
        } while (uVar13 != uVar15);
        if (!bVar6) goto LAB_00ed2658;
      }
    }
  }
  local_80 = (undefined **)0x0;
  local_78 = (undefined **)0x0;
  local_70 = (undefined8 *)0x0;
                    /* try { // try from 00ed28e8 to 00ed2927 has its CatchHandler @ 00ed2c24 */
  compileConditionValue(this,pAVar10,(uchar *)0x0,(vector *)&local_80,false);
  compileStat(this,*(AstStat **)(param_1 + 0x28));
  if ((*(long *)(param_1 + 0x30) == 0) || (local_78 == local_80)) {
                    /* try { // try from 00ed297c to 00ed297f has its CatchHandler @ 00ed2c44 */
    uVar13 = BytecodeBuilder::emitLabel();
    ppuVar18 = local_78;
    for (ppuVar5 = local_80; ppuVar5 != ppuVar18; ppuVar5 = ppuVar5 + 1) {
                    /* try { // try from 00ed2998 to 00ed299f has its CatchHandler @ 00ed2c40 */
      uVar15 = BytecodeBuilder::patchJumpD(*(BytecodeBuilder **)this,(ulong)*ppuVar5,uVar13);
      if ((uVar15 & 1) == 0) {
                    /* try { // try from 00ed2b88 to 00ed2b93 has its CatchHandler @ 00ed2c44 */
                    /* WARNING: Subroutine does not return */
        CompileError::raise((Location *)(param_1 + 0xc),
                            "Exceeded jump distance limit; simplify the code to compile");
      }
    }
  }
  else {
    uVar13 = allPathsEndWithReturn(this,*(AstStat **)(param_1 + 0x28));
    if ((uVar13 & 1) == 0) {
                    /* try { // try from 00ed29b4 to 00ed29cf has its CatchHandler @ 00ed2c18 */
      uVar13 = BytecodeBuilder::emitLabel();
      BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,0x17,'\0',0);
                    /* try { // try from 00ed29d4 to 00ed29e7 has its CatchHandler @ 00ed2c14 */
      uVar15 = BytecodeBuilder::emitLabel();
      compileStat(this,*(AstStat **)(param_1 + 0x30));
                    /* try { // try from 00ed29ec to 00ed29ef has its CatchHandler @ 00ed2c3c */
      uVar14 = BytecodeBuilder::emitLabel();
      ppuVar18 = local_78;
      for (ppuVar5 = local_80; ppuVar5 != ppuVar18; ppuVar5 = ppuVar5 + 1) {
                    /* try { // try from 00ed2a08 to 00ed2a0f has its CatchHandler @ 00ed2c2c */
        uVar17 = BytecodeBuilder::patchJumpD(*(BytecodeBuilder **)this,(ulong)*ppuVar5,uVar15);
        if ((uVar17 & 1) == 0) {
                    /* try { // try from 00ed2ba8 to 00ed2bb3 has its CatchHandler @ 00ed2c3c */
                    /* WARNING: Subroutine does not return */
          CompileError::raise((Location *)(param_1 + 0xc),
                              "Exceeded jump distance limit; simplify the code to compile");
        }
      }
                    /* try { // try from 00ed2a24 to 00ed2a2f has its CatchHandler @ 00ed2c3c */
      uVar13 = BytecodeBuilder::patchJumpD(*(BytecodeBuilder **)this,uVar13,uVar14);
      if ((uVar13 & 1) == 0) {
                    /* try { // try from 00ed2be0 to 00ed2beb has its CatchHandler @ 00ed2c3c */
                    /* WARNING: Subroutine does not return */
        CompileError::raise((Location *)(param_1 + 0xc),
                            "Exceeded jump distance limit; simplify the code to compile");
      }
    }
    else {
                    /* try { // try from 00ed2934 to 00ed2947 has its CatchHandler @ 00ed2c34 */
      uVar13 = BytecodeBuilder::emitLabel();
      compileStat(this,*(AstStat **)(param_1 + 0x30));
      ppuVar18 = local_78;
      for (ppuVar5 = local_80; ppuVar5 != ppuVar18; ppuVar5 = ppuVar5 + 1) {
                    /* try { // try from 00ed295c to 00ed2963 has its CatchHandler @ 00ed2c30 */
        uVar15 = BytecodeBuilder::patchJumpD(*(BytecodeBuilder **)this,(ulong)*ppuVar5,uVar13);
        if ((uVar15 & 1) == 0) {
                    /* try { // try from 00ed2b98 to 00ed2ba3 has its CatchHandler @ 00ed2c34 */
                    /* WARNING: Subroutine does not return */
          CompileError::raise((Location *)(param_1 + 0xc),
                              "Exceeded jump distance limit; simplify the code to compile");
        }
      }
    }
  }
joined_r0x00ed2b44:
  if (local_80 != (undefined **)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
LAB_00ed2b54:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


