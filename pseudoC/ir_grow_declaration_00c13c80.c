// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_grow_declaration
// Entry Point: 00c13c80
// Size: 152 bytes
// Signature: undefined __cdecl ir_grow_declaration(AST_TypedNode * param_1, AST_SymbolNode * param_2, AST_TypedNode * param_3, GISLParserContext * param_4)


/* GISLParserUtil::ir_grow_declaration(AST_TypedNode*, AST_SymbolNode*, AST_TypedNode*,
   GISLParserContext&) */

void GISLParserUtil::ir_grow_declaration
               (AST_TypedNode *param_1,AST_SymbolNode *param_2,AST_TypedNode *param_3,
               GISLParserContext *param_4)

{
  AST_Node *pAVar1;
  long lVar2;
  
  if (param_1 != (AST_TypedNode *)0x0) {
    pAVar1 = (AST_Node *)
             ir_add_declaration((GISLParserUtil *)param_2,(AST_SymbolNode *)param_3,
                                *(AST_TypedNode **)(param_2 + 8),
                                (GsTSourceLoc)*(undefined8 *)(param_2 + 0x10),param_4);
    lVar2 = (**(code **)(*(long *)param_1 + 0x50))(param_1);
    if (lVar2 != 0) {
      param_1 = (AST_TypedNode *)
                ir_make_aggregate((GISLParserUtil *)param_1,*(AST_Node **)(param_1 + 8),
                                  (GsTSourceLoc)*(undefined8 *)(param_1 + 0x10),param_4);
      *(undefined4 *)((GISLParserUtil *)param_1 + 0x48) = 1;
    }
    lVar2 = ir_grow_aggregate((GISLParserUtil *)param_1,pAVar1,*(AST_Node **)(pAVar1 + 8),
                              (GsTSourceLoc)*(undefined8 *)(pAVar1 + 0x10),1,param_4);
    *(undefined4 *)(lVar2 + 0x48) = 1;
  }
  return;
}


