// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: flattenSectionReloops
// Entry Point: 00c4c574
// Size: 772 bytes
// Signature: undefined __thiscall flattenSectionReloops(IR_Section * this, IR_SectionType param_1, IR_OPCODE param_2, uint param_3)


/* IR_Section::flattenSectionReloops(IR_SectionType, IR_OPCODE, unsigned int) */

void __thiscall
IR_Section::flattenSectionReloops
          (IR_Section *this,IR_SectionType param_1,IR_OPCODE param_2,uint param_3)

{
  IR_OPCODE IVar1;
  long lVar2;
  uint uVar3;
  IR_Section *this_00;
  IR_Type *pIVar4;
  IR_SectionType extraout_w1;
  IR_SectionType IVar5;
  undefined8 uVar6;
  IR_Section *this_01;
  long lVar7;
  IR_InstructionSequence *this_02;
  uint *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined auVar12 [12];
  IR_InstructionSequence aIStack_b0 [32];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  long local_68;
  
  this_02 = aIStack_b0;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  IR_InstructionSequence::IR_InstructionSequence(aIStack_b0,*(IR_Function **)this);
  lVar7 = *(long *)(this + 0x20);
  if (*(long *)(this + 0x28) != lVar7) {
    uVar9 = 0;
    this_01 = (IR_Section *)0x0;
    do {
      puVar8 = *(uint **)(lVar7 + uVar9 * 8);
      IVar1 = *puVar8;
      if (IVar1 == param_2) break;
      if (IVar1 == 3) {
                    /* try { // try from 00c4c678 to 00c4c763 has its CatchHandler @ 00c4c88c */
        this_00 = (IR_Section *)
                  IR_InstructionSequence::getSection
                            ((IR_InstructionSequence *)this,
                             *(uint *)((long)puVar8 + ((ulong)(puVar8[1] >> 0xe) & 0x3fffc) + 8));
        auVar12 = containsEarlyReloop(this_00,false);
        IVar5 = auVar12._8_4_;
        if ((auVar12 & (undefined  [12])0x1) == (undefined  [12])0x0) {
                    /* try { // try from 00c4c77c to 00c4c79b has its CatchHandler @ 00c4c884 */
          auVar12 = IR_InstructionSequence::getSection
                              ((IR_InstructionSequence *)this,
                               *(uint *)((long)puVar8 + ((ulong)(puVar8[1] >> 0xe) & 0x3fffc) + 8));
          flattenSectionReloops(auVar12._0_8_,auVar12._8_4_,9,0);
          IR_InstructionSequence::emit(this_02,puVar8);
        }
        else {
          if (param_3 == 0) {
            lVar7 = *(long *)this;
            pIVar4 = (IR_Type *)IR_TypeSet::getScalarType(*(IR_TypeSet **)(lVar7 + 0x38),9);
            param_3 = IR_RegisterSet::allocateReg
                                ((IR_RegisterSet *)(lVar7 + 0x98),pIVar4,"$notRelooping");
            local_78[0] = 9;
            local_70 = (IR_InstructionSequence *)CONCAT71(local_70._1_7_,1);
            uVar3 = IR_Function::storeConst(*(IR_Function **)this,(IR_Const *)local_78);
            IR_InstructionSequence::emit(aIStack_b0,0x1a,param_3,uVar3 | 0x80000000);
            IVar5 = extraout_w1;
          }
          flattenSectionReloops(this_00,IVar5,9,param_3);
          IR_InstructionSequence::emit(this_02,puVar8);
          if ((this_01 != (IR_Section *)0x0) &&
             (*(long *)((IR_InstructionSequence *)this_01 + 0x28) !=
              *(long *)((IR_InstructionSequence *)this_01 + 0x20))) {
            IR_InstructionSequence::emit_0DST((IR_InstructionSequence *)this_01,9);
            local_78[0] = 0xb;
            local_70 = (IR_InstructionSequence *)this_01;
            uVar3 = IR_Function::storeConst(*(IR_Function **)this,(IR_Const *)local_78);
            IR_InstructionSequence::emit_0DST(aIStack_b0,3,uVar3 | 0x80000000);
          }
          this_01 = (IR_Section *)IR_Function::allocateSection(*(IR_Function **)this,2);
          addPredicateRegister(this_01,param_3,false);
          this_02 = (IR_InstructionSequence *)this_01;
        }
      }
      else if (IVar1 == 5) {
                    /* try { // try from 00c4c640 to 00c4c65f has its CatchHandler @ 00c4c888 */
        auVar12 = IR_InstructionSequence::getSection
                            ((IR_InstructionSequence *)this,
                             *(uint *)((long)puVar8 + ((ulong)(puVar8[1] >> 0xe) & 0x3fffc) + 8));
        flattenSectionReloops(auVar12._0_8_,auVar12._8_4_,8,0);
        IR_InstructionSequence::emit(this_02,puVar8);
      }
      else {
        if (IVar1 == 8) {
          local_70 = (IR_InstructionSequence *)((ulong)local_70 & 0xffffffffffffff00);
          local_78[0] = 9;
                    /* try { // try from 00c4c7b0 to 00c4c7cb has its CatchHandler @ 00c4c878 */
          uVar3 = IR_Function::storeConst(*(IR_Function **)this,(IR_Const *)local_78);
          IR_InstructionSequence::emit(this_02,0x1a,param_3,uVar3 | 0x80000000);
          break;
        }
                    /* try { // try from 00c4c61c to 00c4c627 has its CatchHandler @ 00c4c880 */
        IR_InstructionSequence::emit(this_02,puVar8);
      }
      lVar7 = *(long *)(this + 0x20);
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (uVar9 < (ulong)(*(long *)(this + 0x28) - lVar7 >> 3));
    if ((this_01 != (IR_Section *)0x0) &&
       (*(long *)((IR_InstructionSequence *)this_01 + 0x28) !=
        *(long *)((IR_InstructionSequence *)this_01 + 0x20))) {
                    /* try { // try from 00c4c7dc to 00c4c81b has its CatchHandler @ 00c4c87c */
      IR_InstructionSequence::emit_0DST((IR_InstructionSequence *)this_01,9);
      local_78[0] = 0xb;
      local_70 = (IR_InstructionSequence *)this_01;
      uVar3 = IR_Function::storeConst(*(IR_Function **)this,(IR_Const *)local_78);
      IR_InstructionSequence::emit_0DST(aIStack_b0,3,uVar3 | 0x80000000);
    }
  }
  IR_InstructionSequence::emit_0DST(aIStack_b0,param_2);
  uVar11 = *(undefined8 *)(this + 0x28);
  uVar10 = *(undefined8 *)(this + 0x20);
  uVar6 = *(undefined8 *)(this + 0x30);
  *(undefined8 *)(this + 0x28) = uStack_88;
  *(undefined8 *)(this + 0x20) = local_90;
  *(undefined8 *)(this + 0x30) = local_80;
  local_90 = uVar10;
  uStack_88 = uVar11;
  local_80 = uVar6;
  IR_InstructionSequence::~IR_InstructionSequence(aIStack_b0);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


