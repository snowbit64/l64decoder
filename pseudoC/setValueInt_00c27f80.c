// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setValueInt
// Entry Point: 00c27f80
// Size: 120 bytes
// Signature: undefined __thiscall setValueInt(AST_ConstantNode * this, uint param_1, int param_2, GsTBasicType param_3)


/* AST_ConstantNode::setValueInt(unsigned int, int, GsTBasicType) */

void __thiscall
AST_ConstantNode::setValueInt(AST_ConstantNode *this,uint param_1,int param_2,GsTBasicType param_3)

{
  GsTBasicType *pGVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *this_00;
  
  this_00 = (long *)(this + 0x48);
  lVar2 = *this_00;
  uVar3 = *(long *)(this + 0x50) - lVar2 >> 3;
  if (uVar3 <= param_1) {
    uVar4 = (ulong)(param_1 + 1);
    if (uVar3 < uVar4) {
      std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
      __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>> *)
               this_00,uVar4 - uVar3);
      lVar2 = *this_00;
    }
    else if (uVar4 < uVar3) {
      *(ulong *)(this + 0x50) = lVar2 + uVar4 * 8;
    }
  }
  pGVar1 = (GsTBasicType *)(lVar2 + (ulong)param_1 * 8);
  *pGVar1 = param_3;
  pGVar1[1] = param_2;
  return;
}


