// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00effba0
// Size: 988 bytes
// Signature: undefined __thiscall visit(CostVisitor * this, AstStatFor * param_1)


/* Luau::Compile::CostVisitor::visit(Luau::AstStatFor*) */

undefined8 __thiscall Luau::Compile::CostVisitor::visit(CostVisitor *this,AstStatFor *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  AstExpr *pAVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  ulong *puVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  lVar2 = model(this,*(AstExpr **)(param_1 + 0x28));
  pAVar4 = *(AstExpr **)(param_1 + 0x30);
  *(undefined8 *)(this + 0x40) = 0;
  puVar12 = (ulong *)(this + 0x38);
  uVar7 = lVar2 + *puVar12 & 0x8080808080808080;
  *puVar12 = uVar7 - (uVar7 >> 7) | lVar2 + *puVar12 & 0x7f7f7f7f7f7f7f7f;
  lVar2 = model(this,pAVar4);
  *(undefined8 *)(this + 0x40) = 0;
  pAVar4 = *(AstExpr **)(param_1 + 0x38);
  uVar7 = lVar2 + *puVar12 & 0x8080808080808080;
  uVar7 = uVar7 - (uVar7 >> 7) | lVar2 + *puVar12 & 0x7f7f7f7f7f7f7f7f;
  *puVar12 = uVar7;
  if (pAVar4 != (AstExpr *)0x0) {
    lVar2 = model(this,pAVar4);
    uVar7 = lVar2 + *(long *)(this + 0x38) & 0x8080808080808080;
    uVar7 = uVar7 - (uVar7 >> 7) | lVar2 + *(long *)(this + 0x38) & 0x7f7f7f7f7f7f7f7fU;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if ((lVar2 == 0) || (*(int *)(lVar2 + 8) != AstRtti<Luau::AstExprConstantNumber>::value)) {
    if (((lVar2 != 0) &&
        (((*(int *)(lVar2 + 8) == AstRtti<Luau::AstExprUnary>::value &&
          (*(int *)(lVar2 + 0x1c) == 1)) &&
         (lVar2 = *(long *)(lVar2 + 0x20),
         *(int *)(lVar2 + 8) == AstRtti<Luau::AstExprConstantNumber>::value)))) && (lVar2 != 0)) {
      dVar13 = -*(double *)(lVar2 + 0x20);
      lVar2 = *(long *)(param_1 + 0x30);
      iVar5 = *(int *)(lVar2 + 8);
      if (lVar2 != 0) goto LAB_00effc6c;
      goto LAB_00effcf8;
    }
LAB_00effea8:
    puVar3 = *(undefined8 **)(param_1 + 0x40);
  }
  else {
    dVar13 = *(double *)(lVar2 + 0x20);
    lVar2 = *(long *)(param_1 + 0x30);
    iVar5 = *(int *)(lVar2 + 8);
    if (lVar2 == 0) {
LAB_00effcf8:
      if (((lVar2 == 0) || (iVar5 != AstRtti<Luau::AstExprUnary>::value)) ||
         ((*(int *)(lVar2 + 0x1c) != 1 ||
          ((lVar2 = *(long *)(lVar2 + 0x20),
           *(int *)(lVar2 + 8) != AstRtti<Luau::AstExprConstantNumber>::value || (lVar2 == 0))))))
      goto LAB_00effea8;
      dVar14 = -*(double *)(lVar2 + 0x20);
      lVar2 = *(long *)(param_1 + 0x38);
      if (lVar2 == 0) goto LAB_00effd40;
LAB_00effc80:
      if (*(int *)(lVar2 + 8) == AstRtti<Luau::AstExprConstantNumber>::value) {
        dVar15 = *(double *)(lVar2 + 0x20);
      }
      else {
        if ((((*(int *)(lVar2 + 8) != AstRtti<Luau::AstExprUnary>::value) ||
             (*(int *)(lVar2 + 0x1c) != 1)) ||
            (lVar2 = *(long *)(lVar2 + 0x20),
            *(int *)(lVar2 + 8) != AstRtti<Luau::AstExprConstantNumber>::value)) || (lVar2 == 0))
        goto LAB_00effea8;
        dVar15 = -*(double *)(lVar2 + 0x20);
      }
    }
    else {
LAB_00effc6c:
      if (iVar5 != AstRtti<Luau::AstExprConstantNumber>::value) goto LAB_00effcf8;
      dVar14 = *(double *)(lVar2 + 0x20);
      lVar2 = *(long *)(param_1 + 0x38);
      if (lVar2 != 0) goto LAB_00effc80;
LAB_00effd40:
      dVar15 = 1.0;
    }
    iVar5 = -0x80000000;
    if (((-32767.0 <= dVar13) && (iVar5 = -0x80000000, dVar13 <= 32767.0)) &&
       (iVar5 = (int)dVar13, dVar13 != (double)iVar5)) {
      iVar5 = -0x80000000;
    }
    iVar6 = -0x80000000;
    if (((-32767.0 <= dVar14) && (dVar14 <= 32767.0)) &&
       (iVar6 = (int)dVar14, dVar14 != (double)iVar6)) {
      iVar6 = -0x80000000;
    }
    if ((dVar15 < -32767.0) ||
       ((iVar10 = -0x80000000, dVar15 <= 32767.0 && (iVar10 = (int)dVar15, dVar15 != (double)iVar10)
        ))) {
      iVar10 = -0x80000000;
    }
    if ((((iVar5 == -0x80000000) || (iVar6 == -0x80000000)) || (iVar10 == -0x80000000)) ||
       (iVar10 == 0)) goto LAB_00effea8;
    if (((iVar10 < 0) && (iVar5 < iVar6)) || ((0 < iVar10 && (iVar6 < iVar5)))) {
      puVar3 = *(undefined8 **)(param_1 + 0x40);
      uVar11 = 0;
      goto LAB_00effeb0;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x40);
    iVar1 = 0;
    if (iVar10 != 0) {
      iVar1 = (iVar6 - iVar5) / iVar10;
    }
    if (iVar1 != -2 && iVar1 + 2 < 0 == SCARRY4(iVar1,2)) {
      uVar11 = iVar1 + 1;
      goto LAB_00effeb0;
    }
  }
  uVar11 = 3;
LAB_00effeb0:
  *puVar12 = 0;
  *(undefined8 *)(this + 0x40) = 0;
  (**(code **)*puVar3)(puVar3,this);
  if (0x7e < uVar11) {
    uVar11 = 0x7f;
  }
  uVar8 = *(long *)(this + 0x38) + 1U & 0x8080808080808080;
  uVar8 = uVar8 - (uVar8 >> 7) | *(long *)(this + 0x38) + 1U & 0x7f7f7f7f7f7f7f7f;
  uVar9 = (uVar8 & 0x7f007f007f007f) * (ulong)uVar11;
  lVar2 = (uVar8 >> 8 & 0x7f007f007f007f) * (ulong)uVar11;
  uVar8 = uVar9 + 0x7f807f807f807f80 >> 8 & 0x80008000800080 |
          lVar2 + 0x7f807f807f807f80U & 0x8000800080008000;
  uVar7 = (lVar2 * 0x100 & 0x7f007f007f007f00U | uVar9 & 0x7f007f007f007f | uVar8 - (uVar8 >> 7)) +
          uVar7;
  uVar8 = uVar7 & 0x8080808080808080;
  *(ulong *)(this + 0x38) = uVar8 - (uVar8 >> 7) | uVar7 & 0x7f7f7f7f7f7f7f7f;
  *(undefined8 *)(this + 0x40) = 0;
  return 0;
}


