// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_grow_declaration
// Entry Point: 00c13b64
// Size: 284 bytes
// Signature: undefined __cdecl ir_grow_declaration(AST_TypedNode * param_1, GsTSymbol * param_2, AST_TypedNode * param_3, GISLParserContext * param_4)


/* GISLParserUtil::ir_grow_declaration(AST_TypedNode*, GsTSymbol*, AST_TypedNode*,
   GISLParserContext&) */

long GISLParserUtil::ir_grow_declaration
               (AST_TypedNode *param_1,GsTSymbol *param_2,AST_TypedNode *param_3,
               GISLParserContext *param_4)

{
  AST_TypedNode *pAVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *this;
  AST_Node *pAVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  pAVar1 = *(AST_TypedNode **)(param_2 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  this = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_4 + 0x58),0x60);
  *this = &PTR___cxa_pure_virtual_00fed450;
  this[1] = 0;
  this[2] = 0;
  uVar9 = *(undefined8 *)(param_2 + 0x40);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  uVar11 = *(undefined8 *)(param_2 + 0x30);
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  uVar13 = *(undefined8 *)(param_2 + 0x50);
  uVar12 = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(this + 9) = uVar5;
  this[10] = uVar2;
  this[0xb] = uVar4;
  *this = &PTR_traverse_00fed5f8;
  this[1] = pAVar1;
  this[8] = uVar13;
  this[7] = uVar12;
  this[4] = uVar11;
  this[3] = uVar10;
  this[6] = uVar9;
  this[5] = uVar8;
  this[2] = uVar3;
  if (param_1 == (AST_TypedNode *)0x0) {
    lVar7 = 0;
  }
  else {
    pAVar6 = (AST_Node *)
             ir_add_declaration((GISLParserUtil *)this,(AST_SymbolNode *)param_3,pAVar1,
                                (GsTSourceLoc)uVar3,param_4);
    lVar7 = (**(code **)(*(long *)param_1 + 0x50))(param_1);
    if (lVar7 != 0) {
      param_1 = (AST_TypedNode *)
                ir_make_aggregate((GISLParserUtil *)param_1,*(AST_Node **)(param_1 + 8),
                                  (GsTSourceLoc)*(undefined8 *)(param_1 + 0x10),param_4);
      *(undefined4 *)((GISLParserUtil *)param_1 + 0x48) = 1;
    }
    lVar7 = ir_grow_aggregate((GISLParserUtil *)param_1,pAVar6,*(AST_Node **)(pAVar6 + 8),
                              (GsTSourceLoc)*(undefined8 *)(pAVar6 + 0x10),1,param_4);
    *(undefined4 *)(lVar7 + 0x48) = 1;
  }
  return lVar7;
}


