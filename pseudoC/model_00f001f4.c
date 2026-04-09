// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: model
// Entry Point: 00f001f4
// Size: 1288 bytes
// Signature: undefined __thiscall model(CostVisitor * this, AstExpr * param_1)


/* Luau::Compile::CostVisitor::model(Luau::AstExpr*) */

undefined8 __thiscall Luau::Compile::CostVisitor::model(CostVisitor *this,AstExpr *param_1)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  bool bVar21;
  ulong *puVar22;
  long lVar23;
  long lVar24;
  AstExpr *pAVar25;
  CostVisitor *pCVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  AstExpr **ppAVar31;
  undefined auVar32 [16];
  undefined local_80 [16];
  undefined local_70 [16];
  AstExpr *local_60;
  long local_58;
  
  auVar20._8_8_ = local_70._8_8_;
  auVar20._0_8_ = local_70._0_8_;
  auVar19._8_8_ = local_70._8_8_;
  auVar19._0_8_ = local_70._0_8_;
  auVar18._8_8_ = local_70._8_8_;
  auVar18._0_8_ = local_70._0_8_;
  auVar17._8_8_ = local_70._8_8_;
  auVar17._0_8_ = local_70._0_8_;
  auVar16._8_8_ = local_70._8_8_;
  auVar16._0_8_ = local_70._0_8_;
  auVar15._8_8_ = local_70._8_8_;
  auVar15._0_8_ = local_70._0_8_;
  auVar14._8_8_ = local_70._8_8_;
  auVar14._0_8_ = local_70._0_8_;
  auVar13._8_8_ = local_70._8_8_;
  auVar13._0_8_ = local_70._0_8_;
  auVar12._8_8_ = local_80._8_8_;
  auVar12._0_8_ = local_80._0_8_;
  auVar11._8_8_ = local_80._8_8_;
  auVar11._0_8_ = local_80._0_8_;
  auVar10._8_8_ = local_80._8_8_;
  auVar10._0_8_ = local_80._0_8_;
  auVar9._8_8_ = local_80._8_8_;
  auVar9._0_8_ = local_80._0_8_;
  auVar8._8_8_ = local_80._8_8_;
  auVar8._0_8_ = local_80._0_8_;
  auVar7._8_8_ = local_80._8_8_;
  auVar7._0_8_ = local_80._0_8_;
  auVar6._8_8_ = local_80._8_8_;
  auVar6._0_8_ = local_80._0_8_;
  auVar5._8_8_ = local_80._8_8_;
  auVar5._0_8_ = local_80._0_8_;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  iVar2 = *(int *)(param_1 + 8);
  if ((param_1 != (AstExpr *)0x0) && (iVar2 == AstRtti<Luau::AstExprGroup>::value)) {
LAB_00f00240:
    auVar32 = model(this,*(AstExpr **)(param_1 + 0x20));
    puVar22 = auVar32._0_8_;
    goto LAB_00f00250;
  }
  puVar22 = (ulong *)this;
  auVar32 = ZEXT816(0xffffffffffffffff) << 0x40;
  if ((iVar2 == AstRtti<Luau::AstExprConstantNil>::value) ||
     (((auVar32 = ZEXT816(0xffffffffffffffff) << 0x40, local_80 = auVar5, local_70 = auVar13,
       iVar2 == AstRtti<Luau::AstExprConstantBool>::value ||
       (auVar32 = ZEXT816(0xffffffffffffffff) << 0x40, local_80 = auVar6, local_70 = auVar14,
       iVar2 == AstRtti<Luau::AstExprConstantNumber>::value)) ||
      (auVar32 = ZEXT816(0xffffffffffffffff) << 0x40, local_80 = auVar7, local_70 = auVar15,
      iVar2 == AstRtti<Luau::AstExprConstantString>::value)))) goto LAB_00f00250;
  if ((param_1 == (AstExpr *)0x0) || (iVar2 != AstRtti<Luau::AstExprLocal>::value)) {
    if (iVar2 == AstRtti<Luau::AstExprGlobal>::value) {
      auVar32 = ZEXT816(1);
      local_80 = auVar8;
      local_70 = auVar16;
      goto LAB_00f00250;
    }
    if (iVar2 == AstRtti<Luau::AstExprVarargs>::value) {
LAB_00f00340:
      auVar32 = ZEXT816(3);
      local_80 = auVar9;
      local_70 = auVar17;
      goto LAB_00f00250;
    }
    local_60 = param_1;
    if (iVar2 != AstRtti<Luau::AstExprCall>::value) {
      local_60 = (AstExpr *)0x0;
    }
    if (local_60 == (AstExpr *)0x0) {
      if ((param_1 == (AstExpr *)0x0) || (iVar2 != AstRtti<Luau::AstExprIndexName>::value)) {
        if ((param_1 == (AstExpr *)0x0) || (iVar2 != AstRtti<Luau::AstExprIndexExpr>::value)) {
          if ((param_1 == (AstExpr *)0x0) || (iVar2 != AstRtti<Luau::AstExprFunction>::value)) {
            if ((iVar2 != AstRtti<Luau::AstExprTable>::value) || (param_1 == (AstExpr *)0x0)) {
              if ((param_1 == (AstExpr *)0x0) || (iVar2 != AstRtti<Luau::AstExprUnary>::value)) {
                if ((param_1 == (AstExpr *)0x0) || (iVar2 != AstRtti<Luau::AstExprBinary>::value)) {
                  if ((param_1 != (AstExpr *)0x0) &&
                     (iVar2 == AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00f00240;
                  if ((param_1 == (AstExpr *)0x0) || (iVar2 != AstRtti<Luau::AstExprIfElse>::value))
                  {
                    auVar32 = ZEXT816(0);
                    if (param_1 == (AstExpr *)0x0) {
                      auVar32 = ZEXT816(0);
                      local_80 = auVar12;
                      local_70 = auVar20;
                      goto LAB_00f00250;
                    }
                    local_80 = auVar11;
                    local_70 = auVar19;
                    if (iVar2 != AstRtti<Luau::AstExprInterpString>::value) goto LAB_00f00250;
                    if (*(long *)(param_1 + 0x38) != 0) {
                      lVar23 = *(long *)(param_1 + 0x38) << 3;
                      uVar28 = 3;
                      ppAVar31 = *(AstExpr ***)(param_1 + 0x30);
                      do {
                        puVar22 = (ulong *)model(this,*ppAVar31);
                        uVar30 = (ulong)(CostVisitor *)((long)puVar22 + uVar28) & 0x8080808080808080
                        ;
                        lVar23 = lVar23 + -8;
                        uVar28 = uVar30 - (uVar30 >> 7) |
                                 (ulong)(CostVisitor *)((long)puVar22 + uVar28) & 0x7f7f7f7f7f7f7f7f
                        ;
                        auVar32._8_8_ = 0;
                        auVar32._0_8_ = uVar28;
                        ppAVar31 = ppAVar31 + 1;
                      } while (lVar23 != 0);
                      goto LAB_00f00250;
                    }
                    goto LAB_00f00340;
                  }
                  lVar23 = model(this,*(AstExpr **)(param_1 + 0x20));
                  lVar27 = model(this,*(AstExpr **)(param_1 + 0x30));
                  uVar28 = lVar27 + lVar23 & 0x8080808080808080;
                  puVar22 = (ulong *)model(this,*(AstExpr **)(param_1 + 0x40));
                  pCVar26 = (CostVisitor *)
                            ((uVar28 - (uVar28 >> 7) | lVar27 + lVar23 & 0x7f7f7f7f7f7f7f7fU) +
                            (long)puVar22);
                  uVar28 = (ulong)pCVar26 & 0x8080808080808080;
                  pCVar26 = (CostVisitor *)
                            ((uVar28 - (uVar28 >> 7) | (ulong)pCVar26 & 0x7f7f7f7f7f7f7f7f) + 2);
                  goto LAB_00f00498;
                }
                local_70 = model(this,*(AstExpr **)(param_1 + 0x20));
                local_80 = model(this,*(AstExpr **)(param_1 + 0x28));
              }
              else {
                local_70 = model(this,*(AstExpr **)(param_1 + 0x20));
                local_80 = ZEXT816(0xffffffffffffffff) << 0x40;
              }
              auVar32 = Cost::fold((Cost *)local_70,(Cost *)local_80);
              puVar22 = auVar32._0_8_;
              goto LAB_00f00250;
            }
            if (*(long *)(param_1 + 0x28) != 0) {
              lVar23 = 0;
              uVar28 = 0;
              uVar30 = 10;
              do {
                lVar27 = *(long *)(param_1 + 0x20);
                pAVar25 = *(AstExpr **)(lVar27 + lVar23 + 8);
                if (pAVar25 != (AstExpr *)0x0) {
                  lVar24 = model(this,pAVar25);
                  uVar29 = lVar24 + uVar30 & 0x8080808080808080;
                  uVar30 = uVar29 - (uVar29 >> 7) | lVar24 + uVar30 & 0x7f7f7f7f7f7f7f7f;
                }
                puVar22 = (ulong *)model(this,*(AstExpr **)(lVar27 + lVar23 + 0x10));
                uVar29 = (ulong)(CostVisitor *)((long)puVar22 + uVar30) & 0x8080808080808080;
                uVar28 = uVar28 + 1;
                lVar23 = lVar23 + 0x18;
                uVar30 = (uVar29 - (uVar29 >> 7) |
                         (ulong)(CostVisitor *)((long)puVar22 + uVar30) & 0x7f7f7f7f7f7f7f7f) + 1;
                uVar29 = uVar30 & 0x8080808080808080;
                uVar30 = uVar29 - (uVar29 >> 7) | uVar30 & 0x7f7f7f7f7f7f7f7f;
                auVar32._8_8_ = 0;
                auVar32._0_8_ = uVar30;
              } while (uVar28 < *(ulong *)(param_1 + 0x28));
              goto LAB_00f00250;
            }
          }
          auVar32 = ZEXT816(10);
          local_80 = auVar10;
          local_70 = auVar18;
          goto LAB_00f00250;
        }
        lVar23 = model(this,*(AstExpr **)(param_1 + 0x20));
        puVar22 = (ulong *)model(this,*(AstExpr **)(param_1 + 0x28));
        uVar28 = (ulong)(CostVisitor *)((long)puVar22 + lVar23) & 0x8080808080808080;
        pCVar26 = (CostVisitor *)
                  ((uVar28 - (uVar28 >> 7) |
                   (ulong)(CostVisitor *)((long)puVar22 + lVar23) & 0x7f7f7f7f7f7f7f7f) + 1);
      }
      else {
        puVar22 = (ulong *)model(this,*(AstExpr **)(param_1 + 0x20));
        pCVar26 = (CostVisitor *)((long)puVar22 + 1);
      }
LAB_00f00498:
      auVar32._8_8_ = 0;
      auVar32._0_8_ =
           ((ulong)pCVar26 & 0x8080808080808080) - (((ulong)pCVar26 & 0x8080808080808080) >> 7) |
           (ulong)pCVar26 & 0x7f7f7f7f7f7f7f7f;
      goto LAB_00f00250;
    }
    puVar22 = (ulong *)DenseHashMap<Luau::AstExprCall*,int,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstExprCall*>>
                       ::find(*(DenseHashMap<Luau::AstExprCall*,int,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstExprCall*>>
                                **)(this + 8),(AstExprCall **)&local_60);
    if (puVar22 == (ulong *)0x0) {
      puVar22 = (ulong *)model(this,*(AstExpr **)(local_60 + 0x20));
      uVar28 = (ulong)(CostVisitor *)((long)puVar22 + 3U) & 0x8080808080808080;
      bVar21 = false;
      uVar30 = uVar28 - (uVar28 >> 7) |
               (ulong)(CostVisitor *)((long)puVar22 + 3U) & 0x7f7f7f7f7f7f7f7f;
      uVar28 = *(ulong *)(local_60 + 0x30);
    }
    else {
      uVar28 = *(ulong *)(local_60 + 0x30);
      uVar30 = 2;
      bVar21 = uVar28 < 3;
    }
    if (uVar28 != 0) {
      uVar28 = 0;
      do {
        puVar22 = (ulong *)model(this,*(AstExpr **)(*(long *)(local_60 + 0x28) + uVar28 * 8));
        uVar28 = uVar28 + 1;
        puVar1 = puVar22;
        if (!(bool)(puVar22 != (ulong *)0x0 | bVar21)) {
          puVar1 = (ulong *)0x1;
        }
        uVar29 = (ulong)(CostVisitor *)((long)puVar1 + uVar30) & 0x8080808080808080;
        uVar30 = uVar29 - (uVar29 >> 7) |
                 (ulong)(CostVisitor *)((long)puVar1 + uVar30) & 0x7f7f7f7f7f7f7f7f;
      } while (uVar28 < *(ulong *)(local_60 + 0x30));
    }
  }
  else {
    puVar22 = (ulong *)DenseHashMap<Luau::AstLocal*,unsigned_long,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
                       ::find((DenseHashMap<Luau::AstLocal*,unsigned_long,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
                               *)(this + 0x10),(AstLocal **)(param_1 + 0x20));
    uVar30 = 0;
    if (puVar22 != (ulong *)0x0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *puVar22;
      auVar32 = auVar4 << 0x40;
      goto LAB_00f00250;
    }
  }
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar30;
LAB_00f00250:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar22,auVar32._8_8_);
  }
  return auVar32._0_8_;
}


