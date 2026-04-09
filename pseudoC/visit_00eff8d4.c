// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00eff8d4
// Size: 204 bytes
// Signature: undefined __thiscall visit(CostVisitor * this, AstStatWhile * param_1)


/* Luau::Compile::CostVisitor::visit(Luau::AstStatWhile*) */

undefined8 __thiscall Luau::Compile::CostVisitor::visit(CostVisitor *this,AstStatWhile *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar1 = model(this,*(AstExpr **)(param_1 + 0x20));
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  lVar6 = *(long *)(this + 0x38);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  (**(code **)*puVar2)(puVar2,this);
  uVar4 = *(long *)(this + 0x38) + lVar1 & 0x8080808080808080;
  uVar3 = uVar4 - (uVar4 >> 7) | *(long *)(this + 0x38) + lVar1 & 0x7f7f7f7f7f7f7f7fU;
  uVar4 = (uVar3 & 0x7f007f007f007f) * 3;
  uVar3 = (uVar3 >> 8 & 0x7f007f007f007f) * 3;
  uVar5 = uVar4 + 0x7f807f807f807f80 >> 8 & 0x80008000800080 |
          uVar3 + 0x7f807f807f807f80 & 0x8000800080008000;
  uVar4 = ((uVar3 & 0x7f007f007f007f) << 8 | uVar4 & 0x7f007f007f007f | uVar5 - (uVar5 >> 7)) +
          lVar6;
  uVar3 = uVar4 & 0x8080808080808080;
  *(ulong *)(this + 0x38) = uVar3 - (uVar3 >> 7) | uVar4 & 0x7f7f7f7f7f7f7f7f;
  *(undefined8 *)(this + 0x40) = 0;
  return 0;
}


