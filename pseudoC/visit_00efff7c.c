// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00efff7c
// Size: 280 bytes
// Signature: undefined __thiscall visit(CostVisitor * this, AstStatForIn * param_1)


/* Luau::Compile::CostVisitor::visit(Luau::AstStatForIn*) */

undefined8 __thiscall Luau::Compile::CostVisitor::visit(CostVisitor *this,AstStatForIn *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar3 = *(ulong *)(this + 0x38);
  }
  else {
    uVar6 = 0;
    do {
      lVar1 = model(this,*(AstExpr **)(*(long *)(param_1 + 0x30) + uVar6 * 8));
      uVar6 = uVar6 + 1;
      uVar4 = *(ulong *)(param_1 + 0x38);
      uVar3 = lVar1 + *(long *)(this + 0x38) & 0x8080808080808080;
      uVar3 = uVar3 - (uVar3 >> 7) | lVar1 + *(long *)(this + 0x38) & 0x7f7f7f7f7f7f7f7fU;
      *(ulong *)(this + 0x38) = uVar3;
      *(undefined8 *)(this + 0x40) = 0;
    } while (uVar6 < uVar4);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x40);
  *(ulong *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  (**(code **)*puVar2)(puVar2,this);
  uVar6 = *(long *)(this + 0x38) + 1U & 0x8080808080808080;
  uVar4 = uVar6 - (uVar6 >> 7) | *(long *)(this + 0x38) + 1U & 0x7f7f7f7f7f7f7f7f;
  uVar6 = (uVar4 & 0x7f007f007f007f) * 3;
  uVar4 = (uVar4 >> 8 & 0x7f007f007f007f) * 3;
  uVar5 = uVar6 + 0x7f807f807f807f80 >> 8 & 0x80008000800080 |
          uVar4 + 0x7f807f807f807f80 & 0x8000800080008000;
  uVar3 = ((uVar4 & 0x7f007f007f007f) << 8 | uVar6 & 0x7f007f007f007f | uVar5 - (uVar5 >> 7)) +
          uVar3;
  uVar6 = uVar3 & 0x8080808080808080;
  *(ulong *)(this + 0x38) = uVar6 - (uVar6 >> 7) | uVar3 & 0x7f7f7f7f7f7f7f7f;
  *(undefined8 *)(this + 0x40) = 0;
  return 0;
}


