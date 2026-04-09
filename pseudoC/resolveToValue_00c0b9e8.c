// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resolveToValue
// Entry Point: 00c0b9e8
// Size: 592 bytes
// Signature: undefined __cdecl resolveToValue(IR_LValue param_1, IR_Type * param_2)


/* CreateIR::resolveToValue(IR_LValue, IR_Type*) */

void CreateIR::resolveToValue
               (undefined8 *param_1,CreateIR *param_2,undefined8 *param_3,int *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  IR_Type *pIVar4;
  undefined8 uVar5;
  IR_InstructionSequence *this;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint local_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(int *)param_3[1] == 5) {
    if ((*(int *)(param_3 + 6) != 0) || (2 < *param_4 - 4U)) {
      uVar2 = IR_Type::getNumIRRegisters();
      uVar3 = IR_RegisterSet::allocateReg
                        ((IR_RegisterSet *)(*(long *)(param_2 + 0x70) + 0x98),(IR_Type *)param_4,
                         (char *)0x0);
      if (1 < uVar2) {
        uVar8 = 1;
        do {
          pIVar4 = (IR_Type *)
                   IR_Type::getIRRegisterType
                             ((IR_Type *)param_4,uVar8,
                              *(IR_TypeSet **)(*(long *)(param_2 + 0x70) + 0x38));
          IR_RegisterSet::allocateReg
                    ((IR_RegisterSet *)(*(long *)(param_2 + 0x70) + 0x98),pIVar4,(char *)0x0);
          uVar8 = uVar8 + 1;
        } while (uVar2 != uVar8);
      }
      uVar5 = *param_3;
      uStack_108 = param_3[3];
      uStack_110 = param_3[2];
      uVar6 = param_3[6];
      uStack_f8 = param_3[5];
      local_100 = param_3[4];
      this = *(IR_InstructionSequence **)(param_2 + 0x78);
      local_f0 = uVar6;
      IR_InstructionSequence::beginInst(this,0xc,1,(int)uVar6 + 1);
      IR_InstructionSequence::emitOperand(this,uVar3);
      local_120 = (uint)uVar5;
      IR_InstructionSequence::emitOperand(this,local_120);
      if ((int)uVar6 != 0) {
        uVar6 = uVar6 & 0xffffffff;
        puVar7 = &uStack_110;
        do {
          IR_InstructionSequence::emitOperand(this,*(uint *)puVar7);
          uVar6 = uVar6 - 1;
          puVar7 = (undefined8 *)((long)puVar7 + 4);
        } while (uVar6 != 0);
      }
      IR_InstructionSequence::endInst();
      *(uint *)param_1 = uVar3;
      param_1[1] = param_4;
      *(uint *)(param_1 + 6) = 0;
      goto LAB_00c0bc04;
    }
  }
  else if (*(int *)(param_3 + 6) != 0) {
    uVar2 = IR_Type::getNumIRRegisters();
    uVar3 = IR_RegisterSet::allocateReg
                      ((IR_RegisterSet *)(*(long *)(param_2 + 0x70) + 0x98),(IR_Type *)param_4,
                       (char *)0x0);
    param_1[1] = param_4;
    *(uint *)param_1 = uVar3;
    *(uint *)(param_1 + 6) = 0;
    if (1 < uVar2) {
      uVar3 = 1;
      do {
        pIVar4 = (IR_Type *)
                 IR_Type::getIRRegisterType
                           ((IR_Type *)param_4,uVar3,
                            *(IR_TypeSet **)(*(long *)(param_2 + 0x70) + 0x38));
        IR_RegisterSet::allocateReg
                  ((IR_RegisterSet *)(*(long *)(param_2 + 0x70) + 0x98),pIVar4,(char *)0x0);
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
    uStack_98 = param_1[1];
    local_a0 = *param_1;
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    uStack_78 = param_1[5];
    local_80 = param_1[4];
    uStack_d8 = param_3[1];
    local_e0 = *param_3;
    uStack_c8 = param_3[3];
    uStack_d0 = param_3[2];
    local_70 = param_1[6];
    uStack_b8 = param_3[5];
    local_c0 = param_3[4];
    local_b0 = param_3[6];
    codeRegToRegExtract(param_2,&local_a0,&local_e0,*(undefined8 *)(param_2 + 0x78));
    goto LAB_00c0bc04;
  }
  uVar5 = *param_3;
  uVar10 = param_3[3];
  uVar9 = param_3[2];
  uVar12 = param_3[5];
  uVar11 = param_3[4];
  param_1[1] = param_3[1];
  *param_1 = uVar5;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  uVar5 = param_3[6];
  param_1[5] = uVar12;
  param_1[4] = uVar11;
  param_1[6] = uVar5;
LAB_00c0bc04:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


