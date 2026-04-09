// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_add_declaration
// Entry Point: 00c13ab4
// Size: 176 bytes
// Signature: undefined __thiscall ir_add_declaration(GISLParserUtil * this, GsTSymbol * param_1, AST_TypedNode * param_2, GsTSourceLoc param_3, GISLParserContext * param_4)


/* GISLParserUtil::ir_add_declaration(GsTSymbol*, AST_TypedNode*, GsTSourceLoc, GISLParserContext&)
    */

void __thiscall
GISLParserUtil::ir_add_declaration
          (GISLParserUtil *this,GsTSymbol *param_1,AST_TypedNode *param_2,GsTSourceLoc param_3,
          GISLParserContext *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *this_00;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(this + 8);
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar3 = *(undefined4 *)(this + 0x18);
  this_00 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_4 + 0x58),0x60);
  *this_00 = &PTR___cxa_pure_virtual_00fed450;
  this_00[1] = 0;
  this_00[2] = 0;
  uVar5 = *(undefined8 *)(this + 0x40);
  uVar4 = *(undefined8 *)(this + 0x38);
  uVar7 = *(undefined8 *)(this + 0x30);
  uVar6 = *(undefined8 *)(this + 0x28);
  uVar9 = *(undefined8 *)(this + 0x50);
  uVar8 = *(undefined8 *)(this + 0x48);
  *(undefined4 *)(this_00 + 9) = uVar3;
  this_00[10] = uVar1;
  this_00[0xb] = uVar2;
  *this_00 = &PTR_traverse_00fed5f8;
  this_00[1] = param_2;
  this_00[2] = (ulong)param_3;
  this_00[8] = uVar9;
  this_00[7] = uVar8;
  this_00[4] = uVar7;
  this_00[3] = uVar6;
  this_00[6] = uVar5;
  this_00[5] = uVar4;
  ir_add_declaration((GISLParserUtil *)this_00,(AST_SymbolNode *)param_1,param_2,param_3,param_4);
  return;
}


