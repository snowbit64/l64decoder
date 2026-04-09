// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compatibleWith
// Entry Point: 00c161a8
// Size: 104 bytes
// Signature: undefined __thiscall compatibleWith(AST_ConstantNode * this, GsTBasicType param_1)


/* AST_ConstantNode::compatibleWith(GsTBasicType) */

uint __thiscall AST_ConstantNode::compatibleWith(AST_ConstantNode *this,GsTBasicType param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *(long *)(this + 0x48);
  lVar3 = *(long *)(this + 0x50) - lVar2;
  if (lVar3 == 0) {
    uVar4 = 1;
  }
  else {
    uVar5 = 0;
    uVar6 = 1;
    do {
      uVar4 = Value::compatibleWith((Value *)(lVar2 + uVar5 * 8),param_1);
      if ((uVar4 & 1) == 0) break;
      bVar1 = uVar6 < (ulong)(lVar3 >> 3);
      uVar5 = uVar6;
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (bVar1);
  }
  return uVar4 & 1;
}


