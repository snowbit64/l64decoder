// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tryCompileInlinedCall
// Entry Point: 00edc8e0
// Size: 988 bytes
// Signature: undefined __thiscall tryCompileInlinedCall(Compiler * this, AstExprCall * param_1, AstExprFunction * param_2, uchar param_3, uchar param_4, bool param_5, int param_6, int param_7, int param_8)


/* Luau::Compiler::tryCompileInlinedCall(Luau::AstExprCall*, Luau::AstExprFunction*, unsigned char,
   unsigned char, bool, int, int, int) */

void __thiscall
Luau::Compiler::tryCompileInlinedCall
          (Compiler *this,AstExprCall *param_1,AstExprFunction *param_2,uchar param_3,uchar param_4,
          bool param_5,int param_6,int param_7,int param_8)

{
  AstExprFunction **ppAVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  AstExprFunction *pAVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  AstExprFunction **ppAVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  undefined8 local_70;
  long local_68;
  
  puVar16 = &local_70;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((*(long *)(this + 0x40) != 0) && (*(AstExprFunction **)(this + 0x48) != param_2)) {
    uVar12 = 0;
    uVar18 = (ulong)param_2 >> 4 ^ (ulong)param_2 >> 9;
    do {
      uVar18 = uVar18 & *(long *)(this + 0x38) - 1U;
      ppAVar19 = (AstExprFunction **)(*(long *)(this + 0x30) + uVar18 * 0x38);
      if (*ppAVar19 == param_2) goto LAB_00edc984;
      if (*ppAVar19 == *(AstExprFunction **)(this + 0x48)) break;
      uVar12 = uVar12 + 1;
      uVar18 = uVar12 + uVar18;
    } while (uVar12 <= *(long *)(this + 0x38) - 1U);
  }
  ppAVar19 = (AstExprFunction **)0x0;
LAB_00edc984:
  ppAVar1 = (AstExprFunction **)0x0;
  if (ppAVar19 != (AstExprFunction **)0x0) {
    ppAVar1 = ppAVar19 + 1;
  }
  if ((*(uint *)(this + 0x178) < 0x81) && (*(uint *)(ppAVar1 + 5) < 0x21)) {
    ppAVar19 = *(AstExprFunction ***)(this + 0x1e8);
    if ((int)((ulong)((long)*(AstExprFunction ***)(this + 0x1f0) -
                     (long)*(AstExprFunction ***)(this + 0x1e8)) >> 4) * -0x55555555 < param_8) {
      do {
        if (ppAVar19 == *(AstExprFunction ***)(this + 0x1f0)) {
          if (param_5) {
            pcVar8 = *(char **)this;
            pcVar10 = "inlining failed: can\'t convert fixed returns to multret";
            goto LAB_00edc9b4;
          }
          uVar12 = *(ulong *)(param_2 + 0x50);
          local_70 = 0;
          if (uVar12 == 0) {
            uVar18 = *(ulong *)(param_1 + 0x30);
            goto LAB_00edcb48;
          }
          uVar18 = *(ulong *)(param_1 + 0x30);
          uVar13 = uVar18;
          if (7 < uVar18) {
            uVar13 = 8;
          }
          uVar15 = uVar12;
          if (*(long *)(this + 0xe0) == 0) goto LAB_00edcb34;
          lVar2 = *(long *)(this + 0xd0);
          lVar3 = *(long *)(this + 0xd8);
          uVar15 = 0;
          uVar17 = *(ulong *)(this + 0xe8);
          goto LAB_00edcaac;
        }
        pAVar14 = *ppAVar19;
        ppAVar19 = ppAVar19 + 6;
      } while (pAVar14 != param_2);
      pcVar8 = *(char **)this;
      pcVar10 = "inlining failed: can\'t inline recursive calls";
    }
    else {
      pcVar8 = *(char **)this;
      pcVar10 = "inlining failed: too many inlined frames";
    }
  }
  else {
    pcVar8 = *(char **)this;
    pcVar10 = "inlining failed: high register pressure";
  }
LAB_00edc9b4:
  BytecodeBuilder::addDebugRemark(pcVar8,pcVar10);
  bVar5 = false;
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
  goto LAB_00edccb8;
  while( true ) {
    uVar13 = uVar13 - 1;
    uVar15 = uVar15 - 1;
    *(undefined *)puVar16 = 0;
    puVar16 = (undefined8 *)((long)puVar16 + 1);
    if (uVar15 == 0) break;
LAB_00edcb34:
    if (uVar13 == 0) break;
  }
  goto LAB_00edcb48;
LAB_00edcaac:
  do {
    if (uVar15 == uVar13) break;
    uVar20 = *(ulong *)(*(long *)(param_1 + 0x28) + uVar15 * 8);
    if (uVar17 != uVar20) {
      uVar21 = 0;
      uVar9 = uVar20 >> 4 ^ uVar20 >> 9;
      do {
        uVar9 = uVar9 & lVar3 - 1U;
        uVar11 = *(ulong *)(lVar2 + uVar9 * 0x18);
        if (uVar11 == uVar20) {
          *(bool *)((long)&local_70 + uVar15) = *(int *)(lVar2 + uVar9 * 0x18 + 8) != 0;
          goto joined_r0x00edcb1c;
        }
        if (uVar11 == uVar17) break;
        uVar21 = uVar21 + 1;
        uVar9 = uVar21 + uVar9;
      } while (uVar21 <= lVar3 - 1U);
    }
    *(undefined *)((long)&local_70 + uVar15) = 0;
joined_r0x00edcb1c:
    uVar15 = uVar15 + 1;
  } while (uVar15 != uVar12);
LAB_00edcb48:
  if (uVar18 != 0) {
    uVar12 = isExprMultRet(this,*(AstExpr **)(*(long *)(param_1 + 0x28) + uVar18 * 8 + -8));
    if ((uVar12 & 1) == 0) {
      uVar18 = *(ulong *)(param_1 + 0x30);
      uVar12 = *(ulong *)(param_2 + 0x50);
      if ((uVar18 < 8) && (uVar18 < uVar12)) {
        uVar13 = uVar12 + ~uVar18;
        if (7 - uVar18 <= uVar12 + ~uVar18) {
          uVar13 = 7 - uVar18;
        }
        memset((void *)((long)&local_70 + uVar18),1,uVar13 + 1);
      }
    }
    else {
      uVar12 = *(ulong *)(param_2 + 0x50);
    }
  }
  uVar18 = (ulong)(int)uVar12;
  if (7 < (int)uVar12) {
    uVar18 = 8;
  }
  uVar6 = Compile::computeCost((ulong)ppAVar1[4],(bool *)&local_70,uVar18);
  iVar7 = Compile::computeCost((ulong)ppAVar1[4],(bool *)0x0,0);
  iVar22 = param_7;
  if (uVar6 != 0) {
    iVar22 = 0;
    if (uVar6 != 0) {
      iVar22 = (iVar7 * 100 + 300) / (int)uVar6;
    }
    if (param_7 <= iVar22) {
      iVar22 = param_7;
    }
  }
  iVar7 = (iVar22 * param_6) / 100;
  if (iVar7 < (int)uVar6) {
    BytecodeBuilder::addDebugRemark
              (*(char **)this,(double)iVar22 / 100.0,
               "inlining failed: too expensive (cost %d, profit %.2fx)",(ulong)uVar6);
    bVar5 = (int)uVar6 <= iVar7;
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return;
    }
  }
  else {
    BytecodeBuilder::addDebugRemark
              (*(char **)this,(double)iVar22 / 100.0,
               "inlining succeeded (cost %d, profit %.2fx, depth %d)",(ulong)uVar6,
               (ulong)(uint)((int)((ulong)(*(long *)(this + 0x1f0) - *(long *)(this + 0x1e8)) >> 4)
                            * -0x55555555));
    compileInlinedCall(this,param_1,param_2,param_3,param_4);
    bVar5 = (int)uVar6 <= iVar7;
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return;
    }
  }
LAB_00edccb8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar5);
}


