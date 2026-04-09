// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ee4358
// Size: 632 bytes
// Signature: undefined __thiscall visit(ConstantVisitor * this, AstStatLocal * param_1)


/* Luau::Compile::ConstantVisitor::visit(Luau::AstStatLocal*) */

undefined8 __thiscall
Luau::Compile::ConstantVisitor::visit(ConstantVisitor *this,AstStatLocal *param_1)

{
  AstLocal **ppAVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  AstLocal *pAVar5;
  long lVar6;
  long *plVar7;
  AstLocal **ppAVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined auVar13 [16];
  undefined local_68 [16];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar10 = *(ulong *)(param_1 + 0x28);
  uVar11 = *(ulong *)(param_1 + 0x38);
  if (uVar10 != 0) {
    if (uVar11 != 0) {
      uVar12 = 0;
      do {
        auVar13 = analyze(this,*(AstExpr **)(*(long *)(param_1 + 0x30) + uVar12 * 8));
        plVar7 = *(long **)(this + 0x10);
        pAVar5 = *(AstLocal **)(*(long *)(param_1 + 0x20) + uVar12 * 8);
        if ((plVar7[2] != 0) && ((AstLocal *)plVar7[3] != pAVar5)) {
          uVar11 = 0;
          uVar10 = (ulong)pAVar5 >> 4 ^ (ulong)pAVar5 >> 9;
          do {
            uVar10 = uVar10 & plVar7[1] - 1U;
            ppAVar8 = (AstLocal **)(*plVar7 + uVar10 * 0x18);
            if (*ppAVar8 == pAVar5) goto LAB_00ee4420;
            if (*ppAVar8 == (AstLocal *)plVar7[3]) break;
            uVar11 = uVar11 + 1;
            uVar10 = uVar11 + uVar10;
          } while (uVar11 <= plVar7[1] - 1U);
        }
        ppAVar8 = (AstLocal **)0x0;
LAB_00ee4420:
        ppAVar1 = (AstLocal **)0x0;
        if (ppAVar8 != (AstLocal **)0x0) {
          ppAVar1 = ppAVar8 + 1;
        }
        local_68 = auVar13;
        if (*(char *)(ppAVar1 + 1) == '\0') {
          *(bool *)((long)ppAVar1 + 9) = auVar13._0_4_ != 0;
          recordConstant<Luau::AstLocal*>
                    (this,*(DenseHashMap **)(this + 0x18),pAVar5,(Constant *)local_68);
        }
        uVar10 = *(ulong *)(param_1 + 0x28);
        uVar12 = uVar12 + 1;
        uVar11 = *(ulong *)(param_1 + 0x38);
      } while ((uVar12 < uVar10) && (uVar12 < uVar11));
    }
    if (uVar11 < uVar10) {
      if (((uVar11 == 0) ||
          (lVar6 = *(long *)(*(long *)(param_1 + 0x30) + uVar11 * 8 + -8), lVar6 == 0)) ||
         ((iVar2 = *(int *)(lVar6 + 8), iVar2 != AstRtti<Luau::AstExprCall>::value &&
          (iVar2 != AstRtti<Luau::AstExprVarargs>::value)))) {
        do {
          local_68._0_8_ = 1;
          plVar7 = *(long **)(this + 0x10);
          local_68._8_8_ = 0;
          pAVar5 = *(AstLocal **)(*(long *)(param_1 + 0x20) + uVar11 * 8);
          if ((plVar7[2] != 0) && ((AstLocal *)plVar7[3] != pAVar5)) {
            uVar12 = 0;
            uVar9 = (ulong)pAVar5 >> 4 ^ (ulong)pAVar5 >> 9;
            do {
              uVar9 = uVar9 & plVar7[1] - 1U;
              ppAVar8 = (AstLocal **)(*plVar7 + uVar9 * 0x18);
              if (*ppAVar8 == pAVar5) goto LAB_00ee4540;
              if (*ppAVar8 == (AstLocal *)plVar7[3]) break;
              uVar12 = uVar12 + 1;
              uVar9 = uVar12 + uVar9;
            } while (uVar12 <= plVar7[1] - 1U);
          }
          ppAVar8 = (AstLocal **)0x0;
LAB_00ee4540:
          ppAVar1 = (AstLocal **)0x0;
          if (ppAVar8 != (AstLocal **)0x0) {
            ppAVar1 = ppAVar8 + 1;
          }
          uVar4 = 1;
          if (*(char *)(ppAVar1 + 1) == '\0') {
            *(undefined *)((long)ppAVar1 + 9) = 1;
            recordConstant<Luau::AstLocal*>
                      (this,*(DenseHashMap **)(this + 0x18),pAVar5,(Constant *)local_68);
            uVar10 = *(ulong *)(param_1 + 0x28);
            uVar4 = local_68._0_8_;
          }
          local_68._0_8_ = uVar4;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar10);
      }
      goto LAB_00ee4598;
    }
  }
  if (uVar10 < uVar11) {
    do {
      analyze(this,*(AstExpr **)(*(long *)(param_1 + 0x30) + uVar10 * 8));
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(ulong *)(param_1 + 0x38));
  }
LAB_00ee4598:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


