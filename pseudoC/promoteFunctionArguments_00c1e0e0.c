// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: promoteFunctionArguments
// Entry Point: 00c1e0e0
// Size: 612 bytes
// Signature: undefined __thiscall promoteFunctionArguments(GISLParserContext * this, AST_Node * param_1, GsTFunction * param_2, uint * param_3, IR_Type * param_4)


/* GISLParserContext::promoteFunctionArguments(AST_Node*, GsTFunction const*, unsigned int&,
   IR_Type*) */

long * __thiscall
GISLParserContext::promoteFunctionArguments
          (GISLParserContext *this,AST_Node *param_1,GsTFunction *param_2,uint *param_3,
          IR_Type *param_4)

{
  long lVar1;
  long lVar2;
  long *this_00;
  ulong uVar3;
  GISLParserContext *pGVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  SHC_Type *pSVar8;
  long lVar9;
  long **pplVar10;
  IR_Type *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x48) != 0)) {
    this_00 = (long *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
    if ((this_00 != (long *)0x0) &&
       (uVar3 = IR_Type::noConversionNeededTo
                          ((IR_Type *)this_00[4],
                           *(IR_Type **)(*(long *)(*(long *)(param_2 + 0x20) + 0x10) + 8)),
       (uVar3 & 1) == 0)) {
      pSVar8 = *(SHC_Type **)(*(long *)(param_2 + 0x20) + 0x10);
      local_70 = param_4;
      lVar2 = (**(code **)(*this_00 + 0x28))(this_00);
      pGVar4 = (GISLParserContext *)
               IR_Type::canReceive(*(IR_Type **)(pSVar8 + 8),(IR_Type *)this_00[4],lVar2 != 0,
                                   &local_70);
      if ((int)pGVar4 == -1) {
        this_00 = (long *)0x0;
      }
      else {
        uVar3 = getConstructorOp(pGVar4,pSVar8);
        this_00 = (long *)constructBuiltIn((SHC_Type *)this,(GsTOperator)pSVar8,
                                           (AST_Node *)(uVar3 & 0xffffffff),(GsTSourceLoc)this_00,
                                           SUB81(this_00[1],0));
      }
    }
    uVar7 = 0;
LAB_00c1e2f4:
    *param_3 = uVar7;
  }
  else {
    pplVar10 = *(long ***)(lVar2 + 0x50);
    if (pplVar10 == *(long ***)(lVar2 + 0x58)) {
      this_00 = (long *)0x0;
    }
    else {
      uVar7 = 0;
      this_00 = (long *)0x0;
      lVar9 = 0x10;
      do {
        plVar5 = (long *)(**(code **)(**pplVar10 + 0x18))();
        if (plVar5 == (long *)0x0) {
LAB_00c1e2e0:
          this_00 = (long *)0x0;
          goto LAB_00c1e2f4;
        }
        uVar3 = IR_Type::noConversionNeededTo
                          ((IR_Type *)plVar5[4],
                           *(IR_Type **)(*(long *)(*(long *)(param_2 + 0x20) + lVar9) + 8));
        if ((uVar3 & 1) == 0) {
          pSVar8 = *(SHC_Type **)(*(long *)(param_2 + 0x20) + lVar9);
          local_70 = param_4;
          lVar6 = (**(code **)(*plVar5 + 0x28))(plVar5);
          pGVar4 = (GISLParserContext *)
                   IR_Type::canReceive(*(IR_Type **)(pSVar8 + 8),(IR_Type *)plVar5[4],lVar6 != 0,
                                       &local_70);
          if ((int)pGVar4 == -1) {
            this_00 = (long *)0x0;
            goto LAB_00c1e2f4;
          }
          uVar3 = getConstructorOp(pGVar4,pSVar8);
          plVar5 = (long *)constructBuiltIn((SHC_Type *)this,(GsTOperator)pSVar8,
                                            (AST_Node *)(uVar3 & 0xffffffff),(GsTSourceLoc)plVar5,
                                            SUB81(plVar5[1],0));
          if (plVar5 == (long *)0x0) goto LAB_00c1e2e0;
        }
        this_00 = (long *)GISLParserUtil::ir_grow_aggregate
                                    ((GISLParserUtil *)this_00,(AST_Node *)plVar5,
                                     *(AST_Node **)(param_1 + 8),
                                     (GsTSourceLoc)*(undefined8 *)(param_1 + 0x10),0,this);
        pplVar10 = pplVar10 + 1;
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 0x18;
      } while (pplVar10 != *(long ***)(lVar2 + 0x58));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


