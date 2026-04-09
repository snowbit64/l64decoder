// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileConditionValue
// Entry Point: 00ed6f04
// Size: 1696 bytes
// Signature: undefined __thiscall compileConditionValue(Compiler * this, AstExpr * param_1, uchar * param_2, vector * param_3, bool param_4)


/* Luau::Compiler::compileConditionValue(Luau::AstExpr*, unsigned char const*,
   std::__ndk1::vector<unsigned long, std::__ndk1::allocator<unsigned long> >&, bool) */

void __thiscall
Luau::Compiler::compileConditionValue
          (Compiler *this,AstExpr *param_1,uchar *param_2,vector *param_3,bool param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 uVar8;
  void *pvVar9;
  void *pvVar10;
  int iVar11;
  LuauOpcode LVar12;
  AstExprBinary *pAVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  AstExprBinary *pAVar18;
  ulong uVar19;
  ulong uVar20;
  void *pvVar21;
  long lVar22;
  uint uVar23;
  size_t sVar24;
  ulong *local_80;
  ulong *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
LAB_00ed6f60:
  do {
    if ((*(long *)(this + 0xe0) != 0) &&
       (pAVar13 = *(AstExprBinary **)(this + 0xe8), pAVar13 != (AstExprBinary *)param_1)) {
      lVar22 = *(long *)(this + 0xd0);
      uVar14 = 0;
      uVar16 = *(long *)(this + 0xd8) - 1;
      uVar15 = (ulong)param_1 >> 4 ^ (ulong)param_1 >> 9;
      do {
        uVar15 = uVar15 & uVar16;
        pAVar18 = *(AstExprBinary **)(lVar22 + uVar15 * 0x18);
        if (pAVar18 == (AstExprBinary *)param_1) {
          iVar11 = *(int *)(lVar22 + uVar15 * 0x18 + 8);
          if (iVar11 != 0) {
            if (iVar11 == 1) {
joined_r0x00ed7404:
              if ((param_4 & 1U) != 0) goto LAB_00ed750c;
            }
            else {
              if (iVar11 == 2) {
                param_4 = (bool)(param_4 ^ *(char *)(lVar22 + uVar15 * 0x18 + 0x10) != '\0');
                goto joined_r0x00ed7404;
              }
              if ((param_4 & 1U) == 0) goto LAB_00ed750c;
            }
            if (param_2 != (byte *)0x0) {
              compileExpr(this,param_1,*param_2,true);
            }
            uVar8 = BytecodeBuilder::emitLabel();
            puVar2 = *(undefined8 **)(param_3 + 8);
            if (puVar2 < *(undefined8 **)(param_3 + 0x10)) {
              *puVar2 = uVar8;
              *(undefined8 **)(param_3 + 8) = puVar2 + 1;
            }
            else {
              pvVar21 = *(void **)param_3;
              sVar24 = (long)puVar2 - (long)pvVar21;
              uVar14 = ((long)sVar24 >> 3) + 1;
              if (uVar14 >> 0x3d != 0) goto LAB_00ed7560;
              uVar15 = (long)*(undefined8 **)(param_3 + 0x10) - (long)pvVar21;
              uVar16 = (long)uVar15 >> 2;
              if (uVar14 <= uVar16) {
                uVar14 = uVar16;
              }
              if (0x7ffffffffffffff7 < uVar15) {
                uVar14 = 0x1fffffffffffffff;
              }
              if (uVar14 == 0) {
                pvVar10 = (void *)0x0;
              }
              else {
                if (uVar14 >> 0x3d != 0) goto LAB_00ed7570;
                pvVar10 = operator_new(uVar14 << 3);
              }
              puVar2 = (undefined8 *)((long)pvVar10 + ((long)sVar24 >> 3) * 8);
              *puVar2 = uVar8;
              if (0 < (long)sVar24) {
                memcpy(pvVar10,pvVar21,sVar24);
              }
              *(void **)param_3 = pvVar10;
              *(undefined8 **)(param_3 + 8) = puVar2 + 1;
              *(void **)(param_3 + 0x10) = (void *)((long)pvVar10 + uVar14 * 8);
              if (pvVar21 != (void *)0x0) {
                operator_delete(pvVar21);
              }
            }
            BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,0x17,'\0',0);
            goto LAB_00ed750c;
          }
          break;
        }
        uVar14 = uVar14 + 1;
        uVar15 = uVar14 + uVar15;
      } while (pAVar18 != pAVar13 && uVar14 < uVar16 || pAVar18 != pAVar13 && uVar14 == uVar16);
    }
    iVar11 = *(int *)((AstExprBinary *)param_1 + 8);
    if ((param_1 != (AstExpr *)0x0) && (iVar11 == AstRtti<Luau::AstExprBinary>::value)) {
      iVar3 = *(int *)((AstExprBinary *)param_1 + 0x1c);
      if (iVar3 - 0xdU < 2) {
        if ((bool)(param_4 & 1U) != (iVar3 != 0xd)) {
          local_80 = (ulong *)0x0;
          local_78 = (ulong *)0x0;
          local_70 = 0;
                    /* try { // try from 00ed71a8 to 00ed71d3 has its CatchHandler @ 00ed75a4 */
          compileConditionValue
                    (this,*(AstExpr **)((AstExprBinary *)param_1 + 0x20),(uchar *)0x0,
                     (vector *)&local_80,(bool)(~param_4 & 1));
          compileConditionValue
                    (this,*(AstExpr **)((AstExprBinary *)param_1 + 0x28),param_2,param_3,
                     (bool)(param_4 & 1));
                    /* try { // try from 00ed71d8 to 00ed71db has its CatchHandler @ 00ed75c0 */
          uVar14 = BytecodeBuilder::emitLabel();
          puVar7 = local_78;
          for (puVar1 = local_80; puVar1 != puVar7; puVar1 = puVar1 + 1) {
                    /* try { // try from 00ed71f4 to 00ed71fb has its CatchHandler @ 00ed75bc */
            uVar15 = BytecodeBuilder::patchJumpD(*(BytecodeBuilder **)this,*puVar1,uVar14);
            if ((uVar15 & 1) == 0) {
                    /* try { // try from 00ed7554 to 00ed755f has its CatchHandler @ 00ed75c0 */
                    /* WARNING: Subroutine does not return */
              CompileError::raise((Location *)((AstExprBinary *)param_1 + 0xc),
                                  "Exceeded jump distance limit; simplify the code to compile");
            }
          }
          if (local_80 != (ulong *)0x0) {
            local_78 = local_80;
            operator_delete(local_80);
          }
          goto LAB_00ed750c;
        }
        compileConditionValue
                  (this,*(AstExpr **)((AstExprBinary *)param_1 + 0x20),param_2,param_3,
                   (bool)(param_4 & 1U));
        param_1 = *(AstExpr **)((AstExprBinary *)param_1 + 0x28);
        goto LAB_00ed6f60;
      }
      if (iVar3 - 7U < 6) {
        if (param_2 != (byte *)0x0) {
          BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,3,*param_2,param_4 & 1,'\0');
        }
        uVar8 = compileCompareJump(this,(AstExprBinary *)param_1,(bool)(~param_4 & 1));
        puVar2 = *(undefined8 **)(param_3 + 8);
        if (puVar2 == *(undefined8 **)(param_3 + 0x10)) {
          pvVar21 = *(void **)param_3;
          uVar15 = (long)puVar2 - (long)pvVar21;
          lVar22 = (long)uVar15 >> 3;
          uVar14 = lVar22 + 1;
          if (uVar14 >> 0x3d != 0) {
LAB_00ed7560:
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar14 <= (ulong)((long)uVar15 >> 2)) {
            uVar14 = (long)uVar15 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar15) {
            uVar14 = 0x1fffffffffffffff;
          }
          if (uVar14 == 0) {
            pvVar9 = (void *)0x0;
            puVar2 = (undefined8 *)(lVar22 * 8);
            pvVar10 = (void *)0x0;
            *puVar2 = uVar8;
          }
          else {
            if (uVar14 >> 0x3d != 0) {
LAB_00ed7570:
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            pvVar9 = operator_new(uVar14 << 3);
            puVar2 = (undefined8 *)((long)pvVar9 + lVar22 * 8);
            pvVar10 = (void *)((long)pvVar9 + uVar14 * 8);
            *puVar2 = uVar8;
          }
          if (0 < (long)uVar15) {
            memcpy(pvVar9,pvVar21,uVar15);
          }
          *(void **)param_3 = pvVar9;
          *(undefined8 **)(param_3 + 8) = puVar2 + 1;
          *(void **)(param_3 + 0x10) = pvVar10;
          if (pvVar21 != (void *)0x0) {
            operator_delete(pvVar21);
          }
        }
        else {
          *puVar2 = uVar8;
          *(undefined8 **)(param_3 + 8) = puVar2 + 1;
        }
        goto LAB_00ed750c;
      }
    }
    pAVar13 = (AstExprBinary *)param_1;
    if (iVar11 != AstRtti<Luau::AstExprUnary>::value) {
      pAVar13 = (AstExprBinary *)0x0;
    }
    if (((param_2 == (byte *)0x0) && (pAVar13 != (AstExprBinary *)0x0)) &&
       (*(int *)(pAVar13 + 0x1c) == 0)) {
      param_1 = *(AstExpr **)(pAVar13 + 0x20);
      param_2 = (byte *)0x0;
      param_4 = (bool)(param_4 ^ 1);
    }
    else {
      if ((param_1 == (AstExpr *)0x0) || (iVar11 != AstRtti<Luau::AstExprGroup>::value)) break;
      param_1 = *(AstExpr **)((AstExprBinary *)param_1 + 0x20);
    }
  } while( true );
  uVar4 = *(uint *)(this + 0x178);
  pAVar13 = (AstExprBinary *)param_1;
  if (param_2 == (byte *)0x0) {
    while (iVar11 != AstRtti<Luau::AstExprLocal>::value) {
      do {
        if ((iVar11 != AstRtti<Luau::AstExprGroup>::value) &&
           (iVar11 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00ed72c4;
        pAVar13 = *(AstExprBinary **)(pAVar13 + 0x20);
        iVar11 = *(int *)(pAVar13 + 8);
      } while (pAVar13 == (AstExprBinary *)0x0);
    }
    if (*(long *)(this + 0x68) != 0) {
      uVar14 = *(ulong *)(pAVar13 + 0x20);
      uVar15 = *(ulong *)(this + 0x70);
      if (uVar14 != uVar15) {
        uVar16 = 0;
        uVar19 = uVar14 >> 4 ^ uVar14 >> 9;
        uVar17 = *(long *)(this + 0x60) - 1;
        do {
          uVar19 = uVar19 & uVar17;
          uVar20 = *(ulong *)(*(long *)(this + 0x58) + uVar19 * 0x10);
          if (uVar20 == uVar14) {
            lVar22 = *(long *)(this + 0x58) + uVar19 * 0x10;
            if (*(char *)(lVar22 + 9) != '\0') {
              uVar23 = (uint)*(byte *)(lVar22 + 8);
              goto LAB_00ed72fc;
            }
            break;
          }
          uVar16 = uVar16 + 1;
          uVar19 = uVar16 + uVar19;
        } while (uVar20 != uVar15 && uVar16 < uVar17 || uVar20 != uVar15 && uVar16 == uVar17);
      }
    }
LAB_00ed72c4:
    uVar23 = uVar4 + 1;
    if (0xff < uVar23) {
                    /* try { // try from 00ed7580 to 00ed7593 has its CatchHandler @ 00ed75ac */
                    /* WARNING: Subroutine does not return */
      CompileError::raise((Location *)((AstExprBinary *)param_1 + 0xc),
                          "Out of registers when trying to allocate %d registers: exceeded limit %d"
                          ,1,0xff);
    }
    *(uint *)(this + 0x178) = uVar23;
    if (uVar23 <= *(uint *)(this + 0x17c)) {
      uVar23 = *(uint *)(this + 0x17c);
    }
    *(uint *)(this + 0x17c) = uVar23;
                    /* try { // try from 00ed72e4 to 00ed72f7 has its CatchHandler @ 00ed75ac */
    compileExpr(this,param_1,(uchar)uVar4,true);
    uVar23 = uVar4;
  }
  else {
    bVar5 = *param_2;
                    /* try { // try from 00ed70c8 to 00ed70db has its CatchHandler @ 00ed75ac */
    compileExpr(this,param_1,bVar5,true);
    uVar23 = (uint)bVar5;
  }
LAB_00ed72fc:
                    /* try { // try from 00ed7304 to 00ed737b has its CatchHandler @ 00ed75a8 */
  uVar8 = BytecodeBuilder::emitLabel();
  puVar2 = *(undefined8 **)(param_3 + 8);
  if (puVar2 < *(undefined8 **)(param_3 + 0x10)) {
    *puVar2 = uVar8;
    *(undefined8 **)(param_3 + 8) = puVar2 + 1;
  }
  else {
    pvVar21 = *(void **)param_3;
    sVar24 = (long)puVar2 - (long)pvVar21;
    lVar22 = (long)sVar24 >> 3;
    uVar14 = lVar22 + 1;
    if (uVar14 >> 0x3d != 0) {
                    /* try { // try from 00ed7568 to 00ed756f has its CatchHandler @ 00ed75a8 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar15 = (long)*(undefined8 **)(param_3 + 0x10) - (long)pvVar21;
    uVar16 = (long)uVar15 >> 2;
    if (uVar14 <= uVar16) {
      uVar14 = uVar16;
    }
    if (0x7ffffffffffffff7 < uVar15) {
      uVar14 = 0x1fffffffffffffff;
    }
    if (uVar14 == 0) {
      pvVar9 = (void *)0x0;
      puVar2 = (undefined8 *)(lVar22 * 8);
      pvVar10 = (void *)0x0;
      *puVar2 = uVar8;
    }
    else {
      if (uVar14 >> 0x3d != 0) {
                    /* try { // try from 00ed7594 to 00ed759f has its CatchHandler @ 00ed75a8 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar9 = operator_new(uVar14 << 3);
      puVar2 = (undefined8 *)((long)pvVar9 + lVar22 * 8);
      pvVar10 = (void *)((long)pvVar9 + uVar14 * 8);
      *puVar2 = uVar8;
    }
    if (0 < (long)sVar24) {
      memcpy(pvVar9,pvVar21,sVar24);
    }
    *(void **)param_3 = pvVar9;
    *(undefined8 **)(param_3 + 8) = puVar2 + 1;
    *(void **)(param_3 + 0x10) = pvVar10;
    if (pvVar21 != (void *)0x0) {
      operator_delete(pvVar21);
    }
  }
  LVar12 = 0x19;
  if ((param_4 & 1U) == 0) {
    LVar12 = 0x1a;
  }
                    /* try { // try from 00ed73d4 to 00ed73df has its CatchHandler @ 00ed75ac */
  BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,LVar12,(uchar)uVar23,0);
  *(uint *)(this + 0x178) = uVar4;
LAB_00ed750c:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


