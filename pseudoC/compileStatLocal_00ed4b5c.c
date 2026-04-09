// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileStatLocal
// Entry Point: 00ed4b5c
// Size: 884 bytes
// Signature: undefined __thiscall compileStatLocal(Compiler * this, AstStatLocal * param_1)


/* Luau::Compiler::compileStatLocal(Luau::AstStatLocal*) */

void __thiscall Luau::Compiler::compileStatLocal(Compiler *this,AstStatLocal *param_1)

{
  uint uVar1;
  ulong *puVar2;
  AstLocal **ppAVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uchar uVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  AstLocal *pAVar12;
  AstLocal **ppAVar13;
  int iVar14;
  AstLocal *pAVar15;
  ulong uVar16;
  ulong uVar17;
  AstLocal **ppAVar18;
  ulong uVar19;
  
  iVar14 = *(int *)(this + 8);
  bVar4 = false;
  if (0 < iVar14) {
    bVar4 = *(int *)(this + 0xc) + -2 < 0;
  }
  if (bVar4 == (0 < iVar14 && SBORROW4(*(int *)(this + 0xc),2))) {
    uVar9 = *(ulong *)(param_1 + 0x28);
  }
  else {
    uVar9 = *(ulong *)(param_1 + 0x28);
    if (*(ulong *)(param_1 + 0x38) <= uVar9) {
      if ((uVar9 == 0) || (*(long *)(this + 0xb8) == 0)) {
        if (uVar9 == 0) {
          return;
        }
      }
      else {
        puVar10 = *(ulong **)(param_1 + 0x20);
        uVar17 = *(ulong *)(this + 0xc0);
        puVar2 = puVar10 + uVar9;
        uVar16 = *(long *)(this + 0xb0) - 1;
        while (uVar6 = *puVar10, uVar6 != uVar17) {
          uVar7 = 0;
          uVar19 = uVar6 >> 4 ^ uVar6 >> 9;
          while( true ) {
            uVar19 = uVar19 & uVar16;
            uVar5 = *(ulong *)(*(long *)(this + 0xa8) + uVar19 * 0x18);
            if (uVar5 == uVar6) break;
            uVar7 = uVar7 + 1;
            uVar19 = uVar7 + uVar19;
            if ((uVar5 == uVar17 || uVar16 <= uVar7) && (uVar5 == uVar17 || uVar7 != uVar16))
            goto LAB_00ed4c24;
          }
          if (*(char *)(*(long *)(this + 0xa8) + uVar19 * 0x18 + 0x11) == '\0') break;
          puVar10 = puVar10 + 1;
          if (puVar10 == puVar2) {
            return;
          }
        }
      }
    }
  }
LAB_00ed4c24:
  if ((0 < iVar14) && (uVar9 == 1)) {
    if (*(long *)(param_1 + 0x38) == 1) {
      lVar11 = **(long **)(param_1 + 0x30);
      iVar14 = *(int *)(lVar11 + 8);
      if ((lVar11 == 0) || (iVar14 != AstRtti<Luau::AstExprLocal>::value)) {
        uVar9 = 1;
        do {
          if ((iVar14 != AstRtti<Luau::AstExprGroup>::value) &&
             (iVar14 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00ed4e28;
          lVar11 = *(long *)(lVar11 + 0x20);
          iVar14 = *(int *)(lVar11 + 8);
        } while ((lVar11 == 0) || (iVar14 != AstRtti<Luau::AstExprLocal>::value));
      }
      if (*(long *)(this + 0xb8) == 0) {
        ppAVar18 = (AstLocal **)0x0;
        bVar4 = true;
        ppAVar13 = (AstLocal **)0x0;
      }
      else {
        pAVar12 = **(AstLocal ***)(param_1 + 0x20);
        pAVar15 = *(AstLocal **)(this + 0xc0);
        if (pAVar12 == pAVar15) {
          ppAVar13 = (AstLocal **)0x0;
          bVar4 = true;
          pAVar12 = *(AstLocal **)(lVar11 + 0x20);
        }
        else {
          uVar9 = 0;
          uVar17 = (ulong)pAVar12 >> 4 ^ (ulong)pAVar12 >> 9;
          do {
            uVar17 = uVar17 & *(long *)(this + 0xb0) - 1U;
            ppAVar18 = (AstLocal **)(*(long *)(this + 0xa8) + uVar17 * 0x18);
            if (*ppAVar18 == pAVar12) goto LAB_00ed4d08;
            if (*ppAVar18 == pAVar15) break;
            uVar9 = uVar9 + 1;
            uVar17 = uVar9 + uVar17;
          } while (uVar9 <= *(long *)(this + 0xb0) - 1U);
          ppAVar18 = (AstLocal **)0x0;
LAB_00ed4d08:
          bVar4 = ppAVar18 == (AstLocal **)0x0;
          ppAVar13 = (AstLocal **)0x0;
          if (!bVar4) {
            ppAVar13 = ppAVar18 + 1;
          }
          pAVar12 = *(AstLocal **)(lVar11 + 0x20);
        }
        if (pAVar12 != pAVar15) {
          uVar9 = 0;
          uVar17 = (ulong)pAVar12 >> 4 ^ (ulong)pAVar12 >> 9;
          do {
            uVar17 = uVar17 & *(long *)(this + 0xb0) - 1U;
            ppAVar18 = (AstLocal **)(*(long *)(this + 0xa8) + uVar17 * 0x18);
            if (*ppAVar18 == pAVar12) goto LAB_00ed4d90;
            if (*ppAVar18 == pAVar15) break;
            uVar9 = uVar9 + 1;
            uVar17 = uVar9 + uVar17;
          } while (uVar9 <= *(long *)(this + 0xb0) - 1U);
        }
        ppAVar18 = (AstLocal **)0x0;
      }
LAB_00ed4d90:
      ppAVar3 = (AstLocal **)0x0;
      if (ppAVar18 != (AstLocal **)0x0) {
        ppAVar3 = ppAVar18 + 1;
      }
      if (*(long *)(this + 0x68) != 0) {
        uVar17 = *(ulong *)(lVar11 + 0x20);
        if (uVar17 != *(ulong *)(this + 0x70)) {
          uVar16 = 0;
          uVar6 = uVar17 >> 4 ^ uVar17 >> 9;
          uVar9 = 1;
          do {
            uVar6 = uVar6 & *(long *)(this + 0x60) - 1U;
            uVar7 = *(ulong *)(*(long *)(this + 0x58) + uVar6 * 0x10);
            if (uVar7 == uVar17) {
              lVar11 = *(long *)(this + 0x58) + uVar6 * 0x10;
              if (((*(char *)(lVar11 + 9) != '\0') && ((bVar4 || (*(char *)(ppAVar13 + 1) == '\0')))
                  ) && ((ppAVar18 == (AstLocal **)0x0 || (*(char *)(ppAVar3 + 1) == '\0')))) {
                pushLocal(this,**(AstLocal ***)(param_1 + 0x20),*(uchar *)(lVar11 + 8));
                return;
              }
              goto LAB_00ed4e24;
            }
            if (uVar7 == *(ulong *)(this + 0x70)) break;
            uVar16 = uVar16 + 1;
            uVar6 = uVar16 + uVar6;
          } while (uVar16 <= *(long *)(this + 0x60) - 1U);
          goto LAB_00ed4e28;
        }
      }
    }
LAB_00ed4e24:
    uVar9 = 1;
  }
LAB_00ed4e28:
  iVar14 = *(int *)(this + 0x178);
  uVar1 = iVar14 + (int)uVar9;
  if (uVar1 < 0x100) {
    *(uint *)(this + 0x178) = uVar1;
    if (uVar1 <= *(uint *)(this + 0x17c)) {
      uVar1 = *(uint *)(this + 0x17c);
    }
    *(uint *)(this + 0x17c) = uVar1;
    uVar8 = (uchar)iVar14;
    compileExprListTemp(this,(AstArray *)(param_1 + 0x30),uVar8,(uchar)uVar9,true);
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar9 = 0;
      do {
        pushLocal(this,*(AstLocal **)(*(long *)(param_1 + 0x20) + uVar9 * 8),(char)uVar9 + uVar8);
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(ulong *)(param_1 + 0x28));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  CompileError::raise((Location *)(param_1 + 0xc),
                      "Out of registers when trying to allocate %d registers: exceeded limit %d",
                      uVar9 & 0xffffffff,0xff);
}


