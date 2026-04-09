// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setValueBool
// Entry Point: 00c280f4
// Size: 128 bytes
// Signature: undefined __thiscall setValueBool(AST_ConstantNode * this, uint param_1, bool param_2)


/* AST_ConstantNode::setValueBool(unsigned int, bool) */

void __thiscall AST_ConstantNode::setValueBool(AST_ConstantNode *this,uint param_1,bool param_2)

{
  undefined4 *puVar1;
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
  puVar1 = (undefined4 *)(lVar2 + (ulong)param_1 * 8);
  *(bool *)(puVar1 + 1) = param_2;
  *puVar1 = 9;
  return;
}


