// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: promoteFunctionArgument
// Entry Point: 00c1e028
// Size: 184 bytes
// Signature: undefined __thiscall promoteFunctionArgument(GISLParserContext * this, AST_TypedNode * param_1, SHC_Type * param_2, IR_Type * param_3)


/* GISLParserContext::promoteFunctionArgument(AST_TypedNode*, SHC_Type*, IR_Type*) */

void __thiscall
GISLParserContext::promoteFunctionArgument
          (GISLParserContext *this,AST_TypedNode *param_1,SHC_Type *param_2,IR_Type *param_3)

{
  long lVar1;
  long lVar2;
  GISLParserContext *this_00;
  ulong uVar3;
  undefined8 uVar4;
  IR_Type *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_3;
  lVar2 = (**(code **)(*(long *)param_1 + 0x28))(param_1);
  this_00 = (GISLParserContext *)
            IR_Type::canReceive(*(IR_Type **)(param_2 + 8),*(IR_Type **)(param_1 + 0x20),lVar2 != 0,
                                &local_40);
  if ((int)this_00 == -1) {
    uVar4 = 0;
  }
  else {
    uVar3 = getConstructorOp(this_00,param_2);
    uVar4 = constructBuiltIn((SHC_Type *)this,(GsTOperator)param_2,(AST_Node *)(uVar3 & 0xffffffff),
                             (GsTSourceLoc)param_1,SUB81(*(undefined8 *)(param_1 + 8),0));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


