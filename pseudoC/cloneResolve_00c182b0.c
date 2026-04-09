// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cloneResolve
// Entry Point: 00c182b0
// Size: 256 bytes
// Signature: undefined __thiscall cloneResolve(AST_SymbolNode * this, SHC_PoolAllocator * param_1, GISLParserContext * param_2, IR_Type * param_3)


/* AST_SymbolNode::cloneResolve(SHC_PoolAllocator&, GISLParserContext*, IR_Type*) */

undefined8 * __thiscall
AST_SymbolNode::cloneResolve
          (AST_SymbolNode *this,SHC_PoolAllocator *param_1,GISLParserContext *param_2,
          IR_Type *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar2 = (undefined8 *)SHC_PoolAllocator::allocate(param_1,0x60);
  pbVar5 = *(byte **)(this + 0x50);
  uVar1 = *(undefined4 *)(this + 0x48);
  if (pbVar5 == (byte *)0x0) {
    uVar3 = 0;
    pbVar5 = *(byte **)(this + 0x58);
  }
  else {
    pbVar6 = *(byte **)(pbVar5 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      pbVar6 = pbVar5 + 1;
    }
    uVar3 = SHC_String::New((char *)pbVar6,param_1);
    pbVar5 = *(byte **)(this + 0x58);
  }
  if (pbVar5 == (byte *)0x0) {
    uVar4 = 0;
  }
  else {
    pbVar6 = *(byte **)(pbVar5 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      pbVar6 = pbVar5 + 1;
    }
    uVar4 = SHC_String::New((char *)pbVar6,param_1);
  }
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR___cxa_pure_virtual_00fed450;
  uVar8 = *(undefined8 *)(this + 0x20);
  uVar7 = *(undefined8 *)(this + 0x18);
  uVar10 = *(undefined8 *)(this + 0x40);
  uVar9 = *(undefined8 *)(this + 0x38);
  uVar12 = *(undefined8 *)(this + 0x30);
  uVar11 = *(undefined8 *)(this + 0x28);
  puVar2[10] = uVar3;
  puVar2[0xb] = uVar4;
  *puVar2 = &PTR_traverse_00fed5f8;
  *(undefined4 *)(puVar2 + 9) = uVar1;
  puVar2[8] = uVar10;
  puVar2[7] = uVar9;
  puVar2[6] = uVar12;
  puVar2[5] = uVar11;
  puVar2[4] = uVar8;
  puVar2[3] = uVar7;
  SHC_Type::resolveType((SHC_Type *)(puVar2 + 3),(SHC_Type *)(this + 0x18),param_1,param_3);
  return puVar2;
}


