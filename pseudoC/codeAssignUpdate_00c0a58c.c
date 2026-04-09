// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: codeAssignUpdate
// Entry Point: 00c0a58c
// Size: 1096 bytes
// Signature: undefined __thiscall codeAssignUpdate(CreateIR * this, IR_LValue param_1, IR_LValue param_2, bool param_3, uint param_4, IR_OPCODE param_5)


/* CreateIR::codeAssignUpdate(IR_LValue, IR_LValue, bool, unsigned int, IR_OPCODE) */

void __thiscall
CreateIR::codeAssignUpdate
          (CreateIR *this,undefined8 *param_2,undefined8 *param_3,ulong param_4,uint param_5,
          IR_OPCODE param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  IR_Type *pIVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  IR_InstructionSequence *pIVar8;
  IR_Type *pIVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  uint local_228 [2];
  IR_Type *local_220;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
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
  long local_70;
  
  puVar6 = &local_2a0;
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (*(int *)param_2[1] == 5) {
    uStack_a8 = param_2[1];
    local_b0 = *param_2;
    uStack_98 = param_2[3];
    uStack_a0 = param_2[2];
    uVar11 = param_2[6];
    pIVar8 = *(IR_InstructionSequence **)(this + 0x78);
    uStack_88 = param_2[5];
    local_90 = param_2[4];
    uVar2 = *(uint *)param_3;
    local_80 = uVar11;
    IR_InstructionSequence::beginInst(pIVar8,0xc,1,(int)uVar11 + 1);
    IR_InstructionSequence::emitOperand(pIVar8,uVar2);
    IR_InstructionSequence::emitOperand(pIVar8,(uint)local_b0);
    if ((int)uVar11 != 0) {
      uVar11 = uVar11 & 0xffffffff;
      puVar6 = &uStack_a0;
      do {
        IR_InstructionSequence::emitOperand(pIVar8,*(uint *)puVar6);
        uVar11 = uVar11 - 1;
        puVar6 = (undefined8 *)((long)puVar6 + 4);
      } while (uVar11 != 0);
    }
    IR_InstructionSequence::endInst();
    if ((param_4 & 1) == 0) {
      IR_InstructionSequence::emit
                (*(IR_InstructionSequence **)(this + 0x78),param_6,*(uint *)param_3,*(uint *)param_3
                 ,param_5);
      uStack_128 = param_2[1];
      local_130 = *param_2;
      uStack_118 = param_2[3];
      uStack_120 = param_2[2];
      uVar11 = param_2[6];
      pIVar8 = *(IR_InstructionSequence **)(this + 0x78);
      uStack_108 = param_2[5];
      local_110 = param_2[4];
      uVar2 = *(uint *)param_3;
      local_100 = uVar11;
      IR_InstructionSequence::beginInst(pIVar8,0xd,0,(int)uVar11 + 2);
      IR_InstructionSequence::emitOperand(pIVar8,uVar2);
      IR_InstructionSequence::emitOperand(pIVar8,(uint)local_130);
      if ((int)uVar11 != 0) {
        uVar11 = uVar11 & 0xffffffff;
        puVar6 = &uStack_120;
        do {
          IR_InstructionSequence::emitOperand(pIVar8,*(uint *)puVar6);
          uVar11 = uVar11 - 1;
          puVar6 = (undefined8 *)((long)puVar6 + 4);
        } while (uVar11 != 0);
      }
    }
    else {
      pIVar9 = (IR_Type *)param_3[1];
      uVar2 = IR_Type::getNumIRRegisters();
      uVar3 = IR_RegisterSet::allocateReg
                        ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar9,(char *)0x0);
      if (1 < uVar2) {
        uVar10 = 1;
        do {
          pIVar4 = (IR_Type *)
                   IR_Type::getIRRegisterType
                             (pIVar9,uVar10,*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38));
          IR_RegisterSet::allocateReg
                    ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar4,(char *)0x0);
          uVar10 = uVar10 + 1;
        } while (uVar2 != uVar10);
      }
      IR_InstructionSequence::emit
                (*(IR_InstructionSequence **)(this + 0x78),param_6,uVar3,*(uint *)param_3,param_5);
      uStack_e8 = param_2[1];
      local_f0 = *param_2;
      uStack_d8 = param_2[3];
      uStack_e0 = param_2[2];
      uVar11 = param_2[6];
      pIVar8 = *(IR_InstructionSequence **)(this + 0x78);
      uStack_c8 = param_2[5];
      local_d0 = param_2[4];
      local_c0 = uVar11;
      IR_InstructionSequence::beginInst(pIVar8,0xd,0,(int)uVar11 + 2);
      IR_InstructionSequence::emitOperand(pIVar8,uVar3);
      IR_InstructionSequence::emitOperand(pIVar8,(uint)local_f0);
      if ((int)uVar11 != 0) {
        uVar11 = uVar11 & 0xffffffff;
        puVar6 = &uStack_e0;
        do {
          IR_InstructionSequence::emitOperand(pIVar8,*(uint *)puVar6);
          uVar11 = uVar11 - 1;
          puVar6 = (undefined8 *)((long)puVar6 + 4);
        } while (uVar11 != 0);
      }
    }
    IR_InstructionSequence::endInst();
  }
  else if (*(uint *)(param_2 + 6) == 0) {
    if ((param_4 & 1) == 0) {
      IR_InstructionSequence::emit
                (*(IR_InstructionSequence **)(this + 0x78),param_6,*(uint *)param_2,*(uint *)param_2
                 ,param_5);
      IR_InstructionSequence::emit
                (*(IR_InstructionSequence **)(this + 0x78),0x1a,*(uint *)param_3,*(uint *)param_2);
    }
    else {
      IR_InstructionSequence::emit
                (*(IR_InstructionSequence **)(this + 0x78),0x1a,*(uint *)param_3,*(uint *)param_2);
      IR_InstructionSequence::emit
                (*(IR_InstructionSequence **)(this + 0x78),param_6,*(uint *)param_2,*(uint *)param_2
                 ,param_5);
    }
  }
  else {
    uStack_168 = param_3[1];
    local_170 = *param_3;
    uStack_158 = param_3[3];
    uStack_160 = param_3[2];
    uStack_148 = param_3[5];
    local_150 = param_3[4];
    uStack_1a8 = param_2[1];
    local_1b0 = *param_2;
    uStack_198 = param_2[3];
    uStack_1a0 = param_2[2];
    local_140 = param_3[6];
    local_180 = param_2[6];
    uStack_188 = param_2[5];
    local_190 = param_2[4];
    codeRegToRegExtract(this,&local_170,&local_1b0,*(undefined8 *)(this + 0x78));
    if ((param_4 & 1) == 0) {
      IR_InstructionSequence::emit
                (*(IR_InstructionSequence **)(this + 0x78),param_6,*(uint *)param_3,*(uint *)param_3
                 ,param_5);
      uStack_258 = param_2[1];
      local_260 = *param_2;
      uStack_248 = param_2[3];
      uStack_250 = param_2[2];
      puVar5 = &local_260;
      uStack_238 = param_2[5];
      local_240 = param_2[4];
      uStack_298 = param_3[1];
      local_2a0 = *param_3;
      uStack_288 = param_3[3];
      uStack_290 = param_3[2];
      local_230 = param_2[6];
      uStack_278 = param_3[5];
      local_280 = param_3[4];
      local_270 = param_3[6];
      uVar7 = *(undefined8 *)(this + 0x78);
    }
    else {
      pIVar9 = (IR_Type *)param_3[1];
      uVar2 = IR_Type::getNumIRRegisters();
      uVar3 = IR_RegisterSet::allocateReg
                        ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar9,(char *)0x0);
      if (1 < uVar2) {
        uVar10 = 1;
        do {
          pIVar4 = (IR_Type *)
                   IR_Type::getIRRegisterType
                             (pIVar9,uVar10,*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38));
          IR_RegisterSet::allocateReg
                    ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar4,(char *)0x0);
          uVar10 = uVar10 + 1;
        } while (uVar2 != uVar10);
      }
      IR_InstructionSequence::emit
                (*(IR_InstructionSequence **)(this + 0x78),param_6,uVar3,*(uint *)param_3,param_5);
      uStack_1e8 = param_2[1];
      local_1f0 = *param_2;
      uStack_1d8 = param_2[3];
      uStack_1e0 = param_2[2];
      puVar5 = &local_1f0;
      puVar6 = (undefined8 *)local_228;
      local_1f8 = 0;
      uStack_1c8 = param_2[5];
      local_1d0 = param_2[4];
      local_1c0 = param_2[6];
      uVar7 = *(undefined8 *)(this + 0x78);
      local_228[0] = uVar3;
      local_220 = pIVar9;
    }
    codeRegToRegInsert(this,puVar5,puVar6,uVar7);
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


