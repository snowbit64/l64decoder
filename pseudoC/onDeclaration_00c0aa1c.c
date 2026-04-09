// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onDeclaration
// Entry Point: 00c0aa1c
// Size: 448 bytes
// Signature: undefined __thiscall onDeclaration(CreateIR * this, SHC_Type * param_1, AST_SymbolNode * param_2, AST_TypedNode * param_3)


/* CreateIR::onDeclaration(SHC_Type*, AST_SymbolNode*, AST_TypedNode*) */

void __thiscall
CreateIR::onDeclaration
          (CreateIR *this,SHC_Type *param_1,AST_SymbolNode *param_2,AST_TypedNode *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  GsTSymbolTableLevel *this_00;
  IR_Type *pIVar6;
  long *plVar7;
  byte *pbVar8;
  byte *pbVar9;
  IR_Type *this_01;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar5 = (undefined8 *)SHC_PoolAllocator::allocate((SHC_PoolAllocator *)(this + 0x150),0x98);
  puVar5[1] = *(undefined8 *)(param_2 + 0x50);
  puVar5[2] = 0;
  puVar5[4] = 0;
  *puVar5 = &PTR__GsTSymbol_00fee830;
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  uVar15 = *(undefined8 *)(param_1 + 8);
  uVar14 = *(undefined8 *)param_1;
  *(undefined2 *)(puVar5 + 0xb) = 0;
  puVar5[10] = uVar11;
  puVar5[9] = uVar10;
  puVar5[8] = uVar13;
  puVar5[7] = uVar12;
  puVar5[6] = uVar15;
  puVar5[5] = uVar14;
  plVar7 = *(long **)(this + 0x60);
  iVar2 = *(int *)(plVar7 + 3);
  this_00 = *(GsTSymbolTableLevel **)
             (*plVar7 + ((plVar7[1] - *plVar7) * 0x20000000 + -0x100000000 >> 0x20) * 8);
  *(int *)(plVar7 + 3) = iVar2 + 1;
  *(int *)(puVar5 + 3) = iVar2 + 1;
  GsTSymbolTableLevel::insert(this_00,(GsTSymbol *)puVar5);
  pbVar8 = *(byte **)(param_2 + 0x50);
  this_01 = *(IR_Type **)(param_1 + 8);
  pbVar9 = *(byte **)(pbVar8 + 0x10);
  if ((*pbVar8 & 1) == 0) {
    pbVar9 = pbVar8 + 1;
  }
  uVar1 = IR_Type::getNumIRRegisters();
  iVar2 = IR_RegisterSet::allocateReg
                    ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),this_01,(char *)pbVar9);
  if (1 < uVar1) {
    uVar4 = 1;
    do {
      pIVar6 = (IR_Type *)
               IR_Type::getIRRegisterType
                         (this_01,uVar4,*(IR_TypeSet **)(*(long *)(this + 0x70) + 0x38));
      IR_RegisterSet::allocateReg
                ((IR_RegisterSet *)(*(long *)(this + 0x70) + 0x98),pIVar6,(char *)0x0);
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  *(int *)(puVar5 + 0xc) = iVar2;
  puVar5[0xd] = this_01;
  *(undefined4 *)(puVar5 + 0x12) = 0;
  *(undefined *)((long)puVar5 + 0x59) = 1;
  if (param_3 != (AST_TypedNode *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0ab88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x40))(this,0x89,param_1,param_2,param_3);
    return;
  }
  iVar3 = IR_Type::getNumIRRegisters();
  if (iVar3 != 0) {
    uVar1 = 0;
    do {
      IR_InstructionSequence::emit(*(IR_InstructionSequence **)(this + 0x78),0x13,iVar2 + uVar1);
      uVar1 = uVar1 + 1;
      uVar4 = IR_Type::getNumIRRegisters();
    } while (uVar1 < uVar4);
  }
  return;
}


