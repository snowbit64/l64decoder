// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: codeAssignUpdate
// Entry Point: 00c0a180
// Size: 1036 bytes
// Signature: undefined __thiscall codeAssignUpdate(CreateIR * this, IR_LValue param_1, IR_LValue param_2, IR_OPCODE param_3)


/* CreateIR::codeAssignUpdate(IR_LValue, IR_LValue, IR_OPCODE) */

void __thiscall
CreateIR::codeAssignUpdate(CreateIR *this,undefined8 *param_2,undefined8 *param_3,IR_OPCODE param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  IR_Type *pIVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  IR_InstructionSequence *pIVar9;
  ulong uVar10;
  int iVar11;
  int *this_00;
  IR_Type *pIVar12;
  uint uVar13;
  uint local_298;
  int *local_290;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  uint local_1e8 [2];
  int *local_1e0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  this_00 = (int *)param_2[1];
  if (*this_00 == 5) {
    if (param_4 == 0x1a) {
      uStack_a8 = param_2[1];
      local_b0 = *param_2;
      uStack_98 = param_2[3];
      uStack_a0 = param_2[2];
      uVar10 = param_2[6];
      pIVar9 = *(IR_InstructionSequence **)(this + 0x78);
      uStack_88 = param_2[5];
      local_90 = param_2[4];
      uVar2 = *(uint *)param_3;
      local_80 = uVar10;
      IR_InstructionSequence::beginInst(pIVar9,0xd,0,(int)uVar10 + 2);
      IR_InstructionSequence::emitOperand(pIVar9,uVar2);
      IR_InstructionSequence::emitOperand(pIVar9,(uint)local_b0);
      if ((int)uVar10 != 0) {
        uVar10 = uVar10 & 0xffffffff;
        puVar6 = &uStack_a0;
        do {
          IR_InstructionSequence::emitOperand(pIVar9,*(uint *)puVar6);
          uVar10 = uVar10 - 1;
          puVar6 = (undefined8 *)((long)puVar6 + 4);
        } while (uVar10 != 0);
      }
    }
    else {
      pIVar12 = (IR_Type *)param_3[1];
      uVar2 = IR_Type::getNumIRRegisters();
      uVar3 = IR_RegisterSet::allocateReg
                        ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar12,(char *)0x0);
      if (1 < uVar2) {
        uVar13 = 1;
        do {
          pIVar5 = (IR_Type *)
                   IR_Type::getIRRegisterType
                             (pIVar12,uVar13,*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38));
          IR_RegisterSet::allocateReg
                    ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar5,(char *)0x0);
          uVar13 = uVar13 + 1;
        } while (uVar2 != uVar13);
      }
      uStack_e8 = param_2[1];
      local_f0 = *param_2;
      uStack_d8 = param_2[3];
      uStack_e0 = param_2[2];
      uVar10 = param_2[6];
      pIVar9 = *(IR_InstructionSequence **)(this + 0x78);
      uStack_c8 = param_2[5];
      local_d0 = param_2[4];
      local_c0 = uVar10;
      IR_InstructionSequence::beginInst(pIVar9,0xc,1,(int)uVar10 + 1);
      IR_InstructionSequence::emitOperand(pIVar9,uVar3);
      IR_InstructionSequence::emitOperand(pIVar9,(uint)local_f0);
      if ((int)uVar10 != 0) {
        uVar10 = uVar10 & 0xffffffff;
        puVar6 = &uStack_e0;
        do {
          IR_InstructionSequence::emitOperand(pIVar9,*(uint *)puVar6);
          uVar10 = uVar10 - 1;
          puVar6 = (undefined8 *)((long)puVar6 + 4);
        } while (uVar10 != 0);
      }
      IR_InstructionSequence::endInst();
      IR_InstructionSequence::emit
                (*(IR_InstructionSequence **)(this + 0x78),param_4,uVar3,uVar3,*(uint *)param_3);
      uStack_128 = param_2[1];
      local_130 = *param_2;
      uStack_118 = param_2[3];
      uStack_120 = param_2[2];
      uVar10 = param_2[6];
      pIVar9 = *(IR_InstructionSequence **)(this + 0x78);
      uStack_108 = param_2[5];
      local_110 = param_2[4];
      local_100 = uVar10;
      IR_InstructionSequence::beginInst(pIVar9,0xd,0,(int)uVar10 + 2);
      IR_InstructionSequence::emitOperand(pIVar9,uVar3);
      IR_InstructionSequence::emitOperand(pIVar9,(uint)local_130);
      if ((int)uVar10 != 0) {
        uVar10 = uVar10 & 0xffffffff;
        puVar6 = &uStack_120;
        do {
          IR_InstructionSequence::emitOperand(pIVar9,*(uint *)puVar6);
          uVar10 = uVar10 - 1;
          puVar6 = (undefined8 *)((long)puVar6 + 4);
        } while (uVar10 != 0);
      }
    }
    IR_InstructionSequence::endInst();
  }
  else if (*(uint *)(param_2 + 6) == 0) {
    if (param_4 == 0x1a) {
      iVar4 = IR_Type::getNumIRRegisters();
      if (iVar4 != 0) {
        iVar11 = 0;
        do {
          IR_InstructionSequence::emit
                    (*(IR_InstructionSequence **)(this + 0x78),0x1a,iVar11 + *(uint *)param_2,
                     iVar11 + *(uint *)param_3);
          iVar11 = iVar11 + 1;
        } while (iVar4 != iVar11);
      }
    }
    else {
      IR_InstructionSequence::emit
                (*(IR_InstructionSequence **)(this + 0x78),param_4,*(uint *)param_2,*(uint *)param_2
                 ,*(uint *)param_3);
    }
  }
  else {
    if (param_4 == 0x1a) {
      uStack_168 = param_2[1];
      local_170 = *param_2;
      uStack_158 = param_2[3];
      uStack_160 = param_2[2];
      puVar6 = &local_170;
      puVar7 = &local_1b0;
      uStack_148 = param_2[5];
      local_150 = param_2[4];
      uStack_1a8 = param_3[1];
      local_1b0 = *param_3;
      uStack_198 = param_3[3];
      uStack_1a0 = param_3[2];
      local_140 = param_2[6];
      uStack_188 = param_3[5];
      local_190 = param_3[4];
      local_180 = param_3[6];
      uVar8 = *(undefined8 *)(this + 0x78);
    }
    else {
      uVar2 = IR_Type::getNumIRRegisters();
      uVar3 = IR_RegisterSet::allocateReg
                        ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),(IR_Type *)this_00,
                         (char *)0x0);
      if (1 < uVar2) {
        uVar13 = 1;
        do {
          pIVar12 = (IR_Type *)
                    IR_Type::getIRRegisterType
                              ((IR_Type *)this_00,uVar13,
                               *(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38));
          IR_RegisterSet::allocateReg
                    ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar12,(char *)0x0);
          uVar13 = uVar13 + 1;
        } while (uVar2 != uVar13);
      }
      uStack_218 = param_2[1];
      local_220 = *param_2;
      uStack_208 = param_2[3];
      local_210 = param_2[2];
      local_1b8 = 0;
      uStack_1f8 = param_2[5];
      uStack_200 = param_2[4];
      local_1f0 = param_2[6];
      local_1e8[0] = uVar3;
      local_1e0 = this_00;
      codeRegToRegExtract(this,local_1e8,&local_220,*(undefined8 *)(this + 0x78));
      IR_InstructionSequence::emit
                (*(IR_InstructionSequence **)(this + 0x78),param_4,uVar3,uVar3,*(uint *)param_3);
      uStack_258 = param_2[1];
      local_260 = *param_2;
      uStack_248 = param_2[3];
      uStack_250 = param_2[2];
      puVar6 = &local_260;
      puVar7 = (undefined8 *)&local_298;
      local_268 = 0;
      uStack_238 = param_2[5];
      local_240 = param_2[4];
      local_230 = param_2[6];
      uVar8 = *(undefined8 *)(this + 0x78);
      local_298 = uVar3;
      local_290 = this_00;
    }
    codeRegToRegInsert(this,puVar6,puVar7,uVar8);
  }
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


