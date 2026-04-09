// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onDirectIndex
// Entry Point: 00c0b7e8
// Size: 120 bytes
// Signature: undefined __thiscall onDirectIndex(CreateIR * this, AST_TypedNode * param_1, uint param_2)


/* CreateIR::onDirectIndex(AST_TypedNode*, unsigned int) */

void __thiscall CreateIR::onDirectIndex(CreateIR *this,AST_TypedNode *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 local_48 [2];
  uint local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48[0] = 6;
  local_40 = param_2;
  uVar2 = IR_Function::storeConst(*(IR_Function **)(this + 0x70),(IR_Const *)local_48);
  onIndex(this,param_1,uVar2 | 0x80000000);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


