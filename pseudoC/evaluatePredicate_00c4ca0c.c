// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: evaluatePredicate
// Entry Point: 00c4ca0c
// Size: 464 bytes
// Signature: undefined __thiscall evaluatePredicate(IR_Section * this, IR_InstructionSequence * param_1)


/* IR_Section::evaluatePredicate(IR_InstructionSequence&) */

uint __thiscall IR_Section::evaluatePredicate(IR_Section *this,IR_InstructionSequence *param_1)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  IR_Type *pIVar5;
  IR_OPCODE IVar6;
  long lVar7;
  ulong uVar8;
  undefined4 local_58 [2];
  undefined local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar1 = *(uint **)(this + 0x40);
  lVar7 = *(long *)(this + 0x48) - (long)puVar1 >> 3;
  if (lVar7 == 0) {
    lVar7 = *(long *)this;
    pIVar5 = (IR_Type *)IR_TypeSet::getScalarType(*(IR_TypeSet **)(lVar7 + 0x38),9);
    uVar3 = IR_RegisterSet::allocateReg((IR_RegisterSet *)(lVar7 + 0x98),pIVar5,(char *)0x0);
    local_58[0] = 9;
    local_50 = 1;
    uVar4 = IR_Function::storeConst(*(IR_Function **)this,(IR_Const *)local_58);
    IR_InstructionSequence::emit(param_1,0x1a,uVar3,uVar4 | 0x80000000);
  }
  else if ((lVar7 == 1) && (*(char *)(puVar1 + 1) == '\0')) {
    uVar3 = *puVar1;
  }
  else {
    lVar7 = *(long *)this;
    pIVar5 = (IR_Type *)IR_TypeSet::getScalarType(*(IR_TypeSet **)(lVar7 + 0x38),9);
    uVar3 = IR_RegisterSet::allocateReg((IR_RegisterSet *)(lVar7 + 0x98),pIVar5,"$pred");
    IVar6 = 0x1a;
    if (*(char *)(*(uint **)(this + 0x40) + 1) != '\0') {
      IVar6 = 0x25;
    }
    IR_InstructionSequence::emit(param_1,IVar6,uVar3,**(uint **)(this + 0x40));
    lVar7 = *(long *)(this + 0x40);
    if (8 < (ulong)(*(long *)(this + 0x48) - lVar7)) {
      uVar8 = 1;
      do {
        if (*(char *)(lVar7 + uVar8 * 8 + 4) == '\0') {
          uVar4 = *(uint *)(lVar7 + uVar8 * 8);
        }
        else {
          lVar7 = *(long *)this;
          pIVar5 = (IR_Type *)IR_TypeSet::getScalarType(*(IR_TypeSet **)(lVar7 + 0x38),9);
          uVar4 = IR_RegisterSet::allocateReg((IR_RegisterSet *)(lVar7 + 0x98),pIVar5,(char *)0x0);
          IR_InstructionSequence::emit
                    (param_1,0x25,uVar4,*(uint *)(*(long *)(this + 0x40) + uVar8 * 8));
        }
        IR_InstructionSequence::emit(param_1,0xa1,uVar3,uVar3,uVar4);
        lVar7 = *(long *)(this + 0x40);
        uVar8 = (ulong)((int)uVar8 + 1);
      } while (uVar8 < (ulong)(*(long *)(this + 0x48) - lVar7 >> 3));
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


