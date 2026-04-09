// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: replaceSCONDandSLOOP
// Entry Point: 00c4cbdc
// Size: 556 bytes
// Signature: undefined replaceSCONDandSLOOP(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Section::replaceSCONDandSLOOP() */

void IR_Section::replaceSCONDandSLOOP(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  IR_Function **in_x0;
  IR_Section *this;
  IR_Section *this_00;
  uint *puVar5;
  int *piVar6;
  IR_Function *pIVar7;
  IR_Function *pIVar8;
  ulong uVar9;
  IR_Function *pIVar10;
  uint uVar11;
  IR_InstructionSequence aIStack_a0 [32];
  IR_Function *local_80;
  IR_Function *pIStack_78;
  IR_Function *local_70;
  undefined4 local_68 [2];
  IR_Section *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  IR_InstructionSequence::IR_InstructionSequence(aIStack_a0,*in_x0);
  pIVar7 = in_x0[5];
  pIVar8 = pIVar7;
  if (pIVar7 != in_x0[4]) {
    uVar9 = 0;
    uVar11 = 0;
    pIVar7 = in_x0[4];
    do {
      puVar5 = *(uint **)(pIVar7 + uVar9 * 8);
      uVar3 = *puVar5;
      if (uVar3 == 3) {
LAB_00c4cc70:
                    /* try { // try from 00c4cc84 to 00c4cc8b has its CatchHandler @ 00c4ce14 */
        this = (IR_Section *)
               IR_InstructionSequence::getSection
                         ((IR_InstructionSequence *)in_x0,
                          *(uint *)((long)puVar5 + ((ulong)(puVar5[1] >> 0xe) & 0x3fffc) + 8));
        if (uVar3 == 3) {
          piVar6 = *(int **)(in_x0[4] + (ulong)(uVar11 + 1) * 8);
          if (*piVar6 != 3) goto LAB_00c4cce8;
                    /* try { // try from 00c4ccc4 to 00c4cccb has its CatchHandler @ 00c4ce08 */
          this_00 = (IR_Section *)
                    IR_InstructionSequence::getSection
                              ((IR_InstructionSequence *)in_x0,
                               *(uint *)((long)piVar6 +
                                        ((ulong)((uint)piVar6[1] >> 0xe) & 0x3fffc) + 8));
          uVar9 = hasNegativePredicateSet(this_00,this);
          uVar2 = uVar11 + 1;
          if ((uVar9 & 1) == 0) {
            this_00 = (IR_Section *)0x0;
            uVar2 = uVar11;
          }
        }
        else {
LAB_00c4cce8:
          this_00 = (IR_Section *)0x0;
          uVar2 = uVar11;
        }
                    /* try { // try from 00c4ccec to 00c4cd47 has its CatchHandler @ 00c4ce18 */
        uVar11 = uVar2;
        uVar2 = evaluatePredicate(this,aIStack_a0);
        local_60 = this;
        if (uVar3 == 3) {
          local_68[0] = 0xb;
          uVar3 = IR_Function::storeConst(*in_x0,(IR_Const *)local_68);
          local_68[0] = 0xb;
          local_60 = this_00;
          uVar4 = IR_Function::storeConst(*in_x0,(IR_Const *)local_68);
          IR_InstructionSequence::emit_0DST
                    (aIStack_a0,2,uVar2,uVar3 | 0x80000000,uVar4 | 0x80000000);
        }
        else {
          local_68[0] = 0xb;
                    /* try { // try from 00c4cd74 to 00c4cda3 has its CatchHandler @ 00c4ce18 */
          uVar3 = IR_Function::storeConst(*in_x0,(IR_Const *)local_68);
          IR_InstructionSequence::emit_0DST(aIStack_a0,4,uVar2,uVar3 | 0x80000000);
        }
        replaceSCONDandSLOOP();
        if (this_00 != (IR_Section *)0x0) {
          replaceSCONDandSLOOP();
        }
      }
      else if (uVar3 == 8) {
                    /* try { // try from 00c4cd4c to 00c4cd67 has its CatchHandler @ 00c4ce10 */
        uVar3 = evaluatePredicate((IR_Section *)in_x0,aIStack_a0);
        IR_InstructionSequence::emit_0DST(aIStack_a0,7,uVar3);
      }
      else {
        if (uVar3 == 5) goto LAB_00c4cc70;
                    /* try { // try from 00c4cc30 to 00c4cc37 has its CatchHandler @ 00c4ce0c */
        IR_InstructionSequence::emit(aIStack_a0,puVar5);
      }
      pIVar7 = in_x0[4];
      uVar11 = uVar11 + 1;
      uVar9 = (ulong)uVar11;
      pIVar8 = in_x0[5];
    } while (uVar9 < (ulong)((long)in_x0[5] - (long)pIVar7 >> 3));
  }
  pIVar10 = in_x0[6];
  in_x0[5] = pIStack_78;
  in_x0[4] = local_80;
  in_x0[6] = local_70;
  in_x0[9] = in_x0[8];
  local_80 = pIVar7;
  pIStack_78 = pIVar8;
  local_70 = pIVar10;
  IR_InstructionSequence::~IR_InstructionSequence(aIStack_a0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


