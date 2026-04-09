// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: analyze
// Entry Point: 00ee45d0
// Size: 1344 bytes
// Signature: undefined __thiscall analyze(ConstantVisitor * this, AstExpr * param_1)


/* Luau::Compile::ConstantVisitor::analyze(Luau::AstExpr*) */

void __thiscall Luau::Compile::ConstantVisitor::analyze(ConstantVisitor *this,AstExpr *param_1)

{
  long lVar1;
  bool bVar2;
  undefined auVar3 [16];
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
  undefined auVar21 [16];
  int iVar22;
  undefined (*pauVar23) [16];
  int *piVar24;
  AstExpr *pAVar25;
  ulong extraout_x1;
  ulong uVar26;
  long lVar27;
  long *this_00;
  long lVar28;
  AstExpr **ppAVar29;
  ulong uVar30;
  ulong uVar31;
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined local_98 [16];
  undefined local_88 [16];
  AstExpr *local_78;
  undefined local_70 [24];
  long local_58;
  
  auVar21._8_8_ = local_98._8_8_;
  auVar21._0_8_ = local_98._0_8_;
  auVar20._8_8_ = local_98._8_8_;
  auVar20._0_8_ = local_98._0_8_;
  auVar19._8_8_ = local_98._8_8_;
  auVar19._0_8_ = local_98._0_8_;
  auVar18._8_8_ = local_98._8_8_;
  auVar18._0_8_ = local_98._0_8_;
  auVar17._8_8_ = local_98._8_8_;
  auVar17._0_8_ = local_98._0_8_;
  auVar16._8_8_ = local_98._8_8_;
  auVar16._0_8_ = local_98._0_8_;
  auVar14._8_8_ = local_98._8_8_;
  auVar14._0_8_ = local_98._0_8_;
  auVar13._8_8_ = local_98._8_8_;
  auVar13._0_8_ = local_98._0_8_;
  auVar12._8_8_ = local_98._8_8_;
  auVar12._0_8_ = local_98._0_8_;
  auVar11._8_8_ = local_88._8_8_;
  auVar11._0_8_ = local_88._0_8_;
  auVar10._8_8_ = local_88._8_8_;
  auVar10._0_8_ = local_88._0_8_;
  auVar9._8_8_ = local_88._8_8_;
  auVar9._0_8_ = local_88._0_8_;
  auVar8._8_8_ = local_88._8_8_;
  auVar8._0_8_ = local_88._0_8_;
  auVar7._8_8_ = local_88._8_8_;
  auVar7._0_8_ = local_88._0_8_;
  auVar6._8_8_ = local_88._8_8_;
  auVar6._0_8_ = local_88._0_8_;
  auVar4._8_8_ = local_88._8_8_;
  auVar4._0_8_ = local_88._0_8_;
  auVar3._8_8_ = local_88._8_8_;
  auVar3._0_8_ = local_88._0_8_;
  auVar34._8_8_ = local_88._8_8_;
  auVar34._0_8_ = local_88._0_8_;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar22 = *(int *)(param_1 + 8);
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  if ((param_1 != (AstExpr *)0x0) && (iVar22 == AstRtti<Luau::AstExprGroup>::value)) {
LAB_00ee4620:
    auVar32 = analyze(this,*(AstExpr **)(param_1 + 0x20));
    goto LAB_00ee48e8;
  }
  if (iVar22 == AstRtti<Luau::AstExprConstantNil>::value) {
    auVar32 = ZEXT816(1);
    goto LAB_00ee48e8;
  }
  if ((param_1 != (AstExpr *)0x0) && (iVar22 == AstRtti<Luau::AstExprConstantBool>::value)) {
    local_70._8_8_ = CONCAT71(0,param_1[0x1c]);
    auVar32._8_8_ = local_70._8_8_;
    auVar32._0_8_ = 2;
    local_88 = auVar34;
    local_98 = auVar12;
    goto LAB_00ee48e8;
  }
  if ((param_1 != (AstExpr *)0x0) && (iVar22 == AstRtti<Luau::AstExprConstantNumber>::value)) {
    auVar32._8_8_ = *(undefined8 *)(param_1 + 0x20);
    auVar32._0_8_ = 3;
    local_88 = auVar3;
    local_98 = auVar13;
    goto LAB_00ee48e8;
  }
  if ((param_1 != (AstExpr *)0x0) && (iVar22 == AstRtti<Luau::AstExprConstantString>::value)) {
    local_70._0_8_ = CONCAT44((int)*(undefined8 *)(param_1 + 0x28),4);
    auVar32._8_8_ = *(undefined8 *)(param_1 + 0x20);
    auVar32._0_8_ = local_70._0_8_;
    local_88 = auVar4;
    local_98 = auVar14;
    goto LAB_00ee48e8;
  }
  if ((param_1 != (AstExpr *)0x0) && (iVar22 == AstRtti<Luau::AstExprLocal>::value)) {
    pauVar23 = (undefined (*) [16])
               DenseHashMap<Luau::AstLocal*,Luau::Compile::Constant,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
               ::find(*(DenseHashMap<Luau::AstLocal*,Luau::Compile::Constant,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
                        **)(this + 0x18),(AstLocal **)(param_1 + 0x20));
    auVar15._8_8_ = local_98._8_8_;
    auVar15._0_8_ = local_98._0_8_;
    auVar5._8_8_ = local_88._8_8_;
    auVar5._0_8_ = local_88._0_8_;
    auVar32._8_8_ = local_70._8_8_;
    auVar32._0_8_ = local_70._0_8_;
    if (pauVar23 != (undefined (*) [16])0x0) {
      auVar32 = *pauVar23;
      local_88 = auVar5;
      local_98 = auVar15;
    }
    goto LAB_00ee48e8;
  }
  auVar32 = ZEXT816(0);
  local_88 = auVar6;
  local_98 = auVar16;
  if ((iVar22 == AstRtti<Luau::AstExprGlobal>::value) ||
     (auVar32 = ZEXT816(0), local_88 = auVar7, local_98 = auVar17,
     iVar22 == AstRtti<Luau::AstExprVarargs>::value)) goto LAB_00ee48e8;
  local_78 = param_1;
  if (iVar22 != AstRtti<Luau::AstExprCall>::value) {
    local_78 = (AstExpr *)0x0;
  }
  if (local_78 == (AstExpr *)0x0) {
    if ((param_1 == (AstExpr *)0x0) || (iVar22 != AstRtti<Luau::AstExprIndexName>::value)) {
      if ((param_1 == (AstExpr *)0x0) || (iVar22 != AstRtti<Luau::AstExprIndexExpr>::value)) {
        if ((param_1 != (AstExpr *)0x0) && (iVar22 == AstRtti<Luau::AstExprFunction>::value)) {
          (**(code **)**(undefined8 **)(param_1 + 0x98))(*(undefined8 **)(param_1 + 0x98),this);
          auVar32._8_8_ = local_70._8_8_;
          auVar32._0_8_ = local_70._0_8_;
          goto LAB_00ee48e8;
        }
        if ((iVar22 == AstRtti<Luau::AstExprTable>::value) && (param_1 != (AstExpr *)0x0)) {
          auVar32 = ZEXT816(0);
          local_88 = auVar8;
          local_98 = auVar18;
          if (*(long *)(param_1 + 0x28) != 0) {
            lVar28 = 0;
            uVar30 = 0;
            do {
              lVar27 = *(long *)(param_1 + 0x20);
              pAVar25 = *(AstExpr **)(lVar27 + lVar28 + 8);
              if (pAVar25 != (AstExpr *)0x0) {
                analyze(this,pAVar25);
              }
              analyze(this,*(AstExpr **)(lVar27 + lVar28 + 0x10));
              auVar32._8_8_ = local_70._8_8_;
              auVar32._0_8_ = local_70._0_8_;
              uVar30 = uVar30 + 1;
              lVar28 = lVar28 + 0x18;
            } while (uVar30 < *(ulong *)(param_1 + 0x28));
          }
          goto LAB_00ee48e8;
        }
        if ((param_1 != (AstExpr *)0x0) && (iVar22 == AstRtti<Luau::AstExprUnary>::value)) {
          local_88 = analyze(this,*(AstExpr **)(param_1 + 0x20));
          auVar32._8_8_ = local_70._8_8_;
          auVar32._0_8_ = local_70._0_8_;
          if (local_88._0_4_ != 0) {
            FUN_00ee4dd8(local_70,*(undefined4 *)(param_1 + 0x1c),local_88);
            auVar32._8_8_ = local_70._8_8_;
            auVar32._0_8_ = local_70._0_8_;
          }
          goto LAB_00ee48e8;
        }
        if ((param_1 != (AstExpr *)0x0) && (iVar22 == AstRtti<Luau::AstExprBinary>::value)) {
          auVar34 = analyze(this,*(AstExpr **)(param_1 + 0x20));
          local_88 = auVar34;
          local_98 = analyze(this,*(AstExpr **)(param_1 + 0x28));
          auVar32._8_8_ = local_70._8_8_;
          auVar32._0_8_ = local_70._0_8_;
          if (auVar34._0_4_ != 0) {
            FUN_00ee4e88(local_70,*(undefined4 *)(param_1 + 0x1c),local_88,local_98);
            auVar32._8_8_ = local_70._8_8_;
            auVar32._0_8_ = local_70._0_8_;
          }
          goto LAB_00ee48e8;
        }
        if ((param_1 == (AstExpr *)0x0) || (iVar22 != AstRtti<Luau::AstExprTypeAssertion>::value)) {
          if ((param_1 == (AstExpr *)0x0) || (iVar22 != AstRtti<Luau::AstExprIfElse>::value)) {
            auVar32 = ZEXT816(0);
            local_88 = auVar9;
            local_98 = auVar19;
            if (((param_1 != (AstExpr *)0x0) &&
                (auVar32 = ZEXT816(0), local_88 = auVar10, local_98 = auVar20,
                iVar22 == AstRtti<Luau::AstExprInterpString>::value)) &&
               (auVar32 = ZEXT816(0), local_88 = auVar11, local_98 = auVar21,
               *(long *)(param_1 + 0x38) != 0)) {
              lVar28 = *(long *)(param_1 + 0x38) << 3;
              ppAVar29 = *(AstExpr ***)(param_1 + 0x30);
              do {
                analyze(this,*ppAVar29);
                auVar32._8_8_ = local_70._8_8_;
                auVar32._0_8_ = local_70._0_8_;
                lVar28 = lVar28 + -8;
                ppAVar29 = ppAVar29 + 1;
              } while (lVar28 != 0);
            }
          }
          else {
            iVar22 = analyze(this,*(AstExpr **)(param_1 + 0x20));
            local_88 = analyze(this,*(AstExpr **)(param_1 + 0x30));
            local_98 = analyze(this,*(AstExpr **)(param_1 + 0x40));
            auVar32._8_8_ = local_70._8_8_;
            auVar32._0_8_ = local_70._0_8_;
            local_98._0_8_ = local_98._0_8_;
            local_98._8_8_ = local_98._8_8_;
            if (iVar22 != 0) {
              if ((iVar22 == 1) || ((iVar22 == 2 && ((extraout_x1 & 0xff) == 0)))) {
                pauVar23 = &local_98;
              }
              else {
                pauVar23 = &local_88;
              }
              auVar32 = *pauVar23;
            }
          }
          goto LAB_00ee48e8;
        }
        goto LAB_00ee4620;
      }
      analyze(this,*(AstExpr **)(param_1 + 0x20));
      pAVar25 = *(AstExpr **)(param_1 + 0x28);
    }
    else {
      pAVar25 = *(AstExpr **)(param_1 + 0x20);
    }
    analyze(this,pAVar25);
    auVar32._8_8_ = local_70._8_8_;
    auVar32._0_8_ = local_70._0_8_;
    goto LAB_00ee48e8;
  }
  analyze(this,*(AstExpr **)(local_78 + 0x20));
  if ((*(DenseHashMap<Luau::AstExprCall*,int,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstExprCall*>>
         **)(this + 0x20) ==
       (DenseHashMap<Luau::AstExprCall*,int,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstExprCall*>>
        *)0x0) ||
     (piVar24 = (int *)DenseHashMap<Luau::AstExprCall*,int,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstExprCall*>>
                       ::find(*(DenseHashMap<Luau::AstExprCall*,int,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstExprCall*>>
                                **)(this + 0x20),(AstExprCall **)&local_78), piVar24 == (int *)0x0))
  {
    auVar32._8_8_ = local_70._8_8_;
    auVar32._0_8_ = local_70._0_8_;
    if (*(long *)(local_78 + 0x30) != 0) {
      uVar30 = 0;
      do {
        analyze(this,*(AstExpr **)(*(long *)(local_78 + 0x28) + uVar30 * 8));
        auVar32._8_8_ = local_70._8_8_;
        auVar32._0_8_ = local_70._0_8_;
        uVar30 = uVar30 + 1;
      } while (uVar30 < *(ulong *)(local_78 + 0x30));
    }
    goto LAB_00ee48e8;
  }
  this_00 = (long *)(this + 0x30);
  uVar30 = *(long *)(this + 0x38) - *this_00 >> 4;
  std::__ndk1::vector<Luau::Compile::Constant,std::__ndk1::allocator<Luau::Compile::Constant>>::
  reserve((vector<Luau::Compile::Constant,std::__ndk1::allocator<Luau::Compile::Constant>> *)this_00
          ,uVar30 + *(long *)(local_78 + 0x30));
  auVar33._8_8_ = local_88._8_8_;
  auVar33._0_8_ = local_88._0_8_;
  if (*(long *)(local_78 + 0x30) == 0) {
    uVar26 = 0;
LAB_00ee48c8:
    local_88 = auVar33;
    local_70._0_16_ = foldBuiltin(*piVar24,(Constant *)(*this_00 + uVar30 * 0x10),uVar26);
    auVar33 = local_88;
  }
  else {
    uVar31 = 0;
    bVar2 = true;
    do {
      while( true ) {
        local_88 = auVar33;
        auVar33 = analyze(this,*(AstExpr **)(*(long *)(local_78 + 0x28) + uVar31 * 8));
        if (auVar33._0_4_ == 0) break;
        local_88 = auVar33;
        FUN_00ee4c9c(this_00,local_88);
        uVar31 = uVar31 + 1;
        uVar26 = *(ulong *)(local_78 + 0x30);
        auVar33 = local_88;
        if (uVar26 <= uVar31) goto LAB_00ee4800;
      }
      bVar2 = false;
      uVar31 = uVar31 + 1;
      uVar26 = *(ulong *)(local_78 + 0x30);
    } while (uVar31 < uVar26);
LAB_00ee4800:
    if (bVar2) goto LAB_00ee48c8;
  }
  local_88 = auVar33;
  std::__ndk1::vector<Luau::Compile::Constant,std::__ndk1::allocator<Luau::Compile::Constant>>::
  resize((vector<Luau::Compile::Constant,std::__ndk1::allocator<Luau::Compile::Constant>> *)this_00,
         uVar30);
  auVar32 = local_70._0_16_;
LAB_00ee48e8:
  local_70._0_16_ = auVar32;
  recordConstant<Luau::AstExpr*>(this,*(DenseHashMap **)(this + 8),param_1,(Constant *)local_70);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_70._0_8_,local_70._8_8_);
  }
  return;
}


