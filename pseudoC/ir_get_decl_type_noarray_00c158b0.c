// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_get_decl_type_noarray
// Entry Point: 00c158b0
// Size: 128 bytes
// Signature: undefined __thiscall ir_get_decl_type_noarray(GISLParserUtil * this, AST_TypedNode * param_1, GISLParserContext * param_2)


/* GISLParserUtil::ir_get_decl_type_noarray(AST_TypedNode*, GISLParserContext&) */

void __thiscall
GISLParserUtil::ir_get_decl_type_noarray
          (GISLParserUtil *this,AST_TypedNode *param_1,GISLParserContext *param_2)

{
  IR_TypeSet **in_x8;
  int *piVar1;
  IR_TypeSet **ppIVar2;
  IR_TypeSet *pIVar3;
  IR_TypeSet *pIVar4;
  IR_TypeSet *pIVar5;
  IR_TypeSet *pIVar6;
  
  if (this == (GISLParserUtil *)0x0) {
    ppIVar2 = *(IR_TypeSet ***)(param_1 + 0x58);
    *(undefined4 *)(in_x8 + 2) = 0;
    in_x8[4] = (IR_TypeSet *)0x0;
    in_x8[5] = (IR_TypeSet *)0x0;
    pIVar4 = *ppIVar2;
    in_x8[3] = (IR_TypeSet *)0x0;
    *in_x8 = pIVar4;
    pIVar4 = (IR_TypeSet *)IR_TypeSet::getScalarType(pIVar4,3);
    in_x8[1] = pIVar4;
  }
  else {
    piVar1 = *(int **)(this + 0x20);
    if (*piVar1 == 4) {
      pIVar4 = (IR_TypeSet *)0x0;
      piVar1 = *(int **)(piVar1 + 2);
    }
    else {
      pIVar4 = *(IR_TypeSet **)(this + 0x40);
    }
    pIVar6 = *(IR_TypeSet **)(this + 0x30);
    pIVar5 = *(IR_TypeSet **)(this + 0x28);
    *in_x8 = *(IR_TypeSet **)(this + 0x18);
    in_x8[1] = (IR_TypeSet *)piVar1;
    pIVar3 = *(IR_TypeSet **)(this + 0x38);
    in_x8[3] = pIVar6;
    in_x8[2] = pIVar5;
    in_x8[4] = pIVar3;
    in_x8[5] = pIVar4;
  }
  return;
}


