// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renumberRegs
// Entry Point: 00c461a8
// Size: 1028 bytes
// Signature: undefined __thiscall renumberRegs(IR_Section * this, IR_RegisterSet * param_1, IR_RegisterSet * param_2)


/* IR_Section::renumberRegs(IR_RegisterSet const&, IR_RegisterSet&) */

void __thiscall
IR_Section::renumberRegs(IR_Section *this,IR_RegisterSet *param_1,IR_RegisterSet *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *__s;
  long lVar6;
  long lVar7;
  IR_Type *pIVar8;
  char *pcVar9;
  IR_Section *pIVar10;
  IR_Section *this_00;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  IR_Function *pIVar14;
  int *piVar15;
  uint *puVar16;
  int iVar17;
  long lVar18;
  uint local_64;
  
  if (*(uint *)param_1 == 0) {
    __s = (void *)0x0;
  }
  else {
    uVar13 = (ulong)*(uint *)param_1 << 2;
    __s = operator_new(uVar13);
    memset(__s,0xff,uVar13);
  }
  lVar18 = *(long *)(this + 0x20);
  if (*(long *)(this + 0x28) != lVar18) {
    uVar13 = 0;
    local_64 = 0;
    do {
      piVar15 = *(int **)(lVar18 + uVar13 * 8);
      iVar1 = *piVar15;
      uVar2 = piVar15[1];
      uVar13 = (ulong)uVar2;
      uVar11 = uVar13 & 0xffff;
      if ((int)uVar11 != 0) {
        lVar18 = 0;
        do {
          iVar12 = (int)(uVar13 >> 0x10);
          iVar17 = (int)lVar18;
          uVar5 = iVar17 + iVar12 + 2;
          uVar3 = piVar15[uVar5];
          if (-1 < (int)uVar3) {
            iVar4 = *(int *)((long)__s + (ulong)uVar3 * 4);
            if (iVar4 == -1) {
              if (iVar1 == 4) {
                    /* try { // try from 00c462b4 to 00c4630f has its CatchHandler @ 00c465d8 */
                pIVar10 = (IR_Section *)
                          IR_InstructionSequence::getSection
                                    ((IR_InstructionSequence *)this,piVar15[iVar12 + 3]);
                uVar13 = doesReadRegInitialValue(pIVar10,uVar3);
                if ((uVar13 & 1) == 0) {
                  pIVar14 = *(IR_Function **)this;
                    /* try { // try from 00c46348 to 00c4635b has its CatchHandler @ 00c465d8 */
                  pIVar8 = (IR_Type *)
                           IR_RegisterSet::getRegisterType((IR_RegisterSet *)(pIVar14 + 0x98),uVar3)
                  ;
                  uVar5 = IR_Function::uninitializedConst(pIVar14,pIVar8);
                  goto LAB_00c4635c;
                }
                pIVar8 = (IR_Type *)IR_RegisterSet::getRegisterType(param_1,uVar3);
                pcVar9 = (char *)IR_RegisterSet::getRegisterName(param_1,uVar3);
                uVar5 = IR_RegisterSet::allocateReg(param_2,pIVar8,pcVar9);
                *(uint *)((long)__s + (ulong)uVar3 * 4) = uVar5;
                IR_InstructionSequence::emitInsert
                          ((IR_InstructionSequence *)this,local_64,0x13,uVar5);
                local_64 = local_64 + 1;
              }
              else {
                pIVar14 = *(IR_Function **)this;
                    /* try { // try from 00c46328 to 00c4633b has its CatchHandler @ 00c465d0 */
                pIVar8 = (IR_Type *)
                         IR_RegisterSet::getRegisterType((IR_RegisterSet *)(pIVar14 + 0x98),uVar3);
                uVar5 = IR_Function::uninitializedConst(pIVar14,pIVar8);
LAB_00c4635c:
                uVar5 = uVar5 | 0x80000000;
              }
              piVar15[iVar17 + (uint)*(ushort *)((long)piVar15 + 6) + 2] = uVar5;
              if ((iVar1 == 2) && ((int)uVar5 < 0)) {
                    /* try { // try from 00c46390 to 00c46397 has its CatchHandler @ 00c465c8 */
                lVar6 = IR_InstructionSequence::getSection
                                  ((IR_InstructionSequence *)this,
                                   *(uint *)((long)piVar15 +
                                            ((ulong)((uint)piVar15[1] >> 0xe) & 0x3fffc) + 0xc));
                    /* try { // try from 00c463b0 to 00c463b7 has its CatchHandler @ 00c465c0 */
                lVar7 = IR_InstructionSequence::getSection
                                  ((IR_InstructionSequence *)this,
                                   *(uint *)((long)piVar15 +
                                            ((ulong)((uint)piVar15[1] >> 0xe) & 0x3fffc) + 0x10));
                if (lVar6 != 0) {
                  *(uint *)(**(long **)(lVar6 + 0x20) + (ulong)(iVar17 - 1) * 4) = uVar5;
                }
                if (lVar7 != 0) {
                  *(uint *)(**(long **)(lVar7 + 0x20) + (ulong)(iVar17 - 1) * 4) = uVar5;
                }
              }
              else if ((int)uVar5 < 0 && iVar1 == 4) {
                    /* try { // try from 00c4640c to 00c46413 has its CatchHandler @ 00c465b8 */
                lVar6 = IR_InstructionSequence::getSection
                                  ((IR_InstructionSequence *)this,
                                   *(uint *)((long)piVar15 +
                                            ((ulong)((uint)piVar15[1] >> 0xe) & 0x3fffc) + 0xc));
                *(uint *)(**(long **)(lVar6 + 0x20) + lVar18 * 4) = uVar5;
              }
            }
            else {
              piVar15[uVar5] = iVar4;
            }
          }
          if (uVar11 - 1 == lVar18) break;
          uVar13 = (ulong)(uint)piVar15[1];
          lVar18 = lVar18 + 1;
        } while( true );
      }
      if (0xffff < uVar2) {
        uVar2 = uVar2 >> 0x10;
        puVar16 = (uint *)(piVar15 + 2);
        if (uVar2 < 2) {
          uVar2 = 1;
        }
        uVar13 = (ulong)uVar2;
        do {
          uVar2 = *puVar16;
          if (-1 < (int)uVar2) {
                    /* try { // try from 00c46458 to 00c46483 has its CatchHandler @ 00c465e0 */
            pIVar8 = (IR_Type *)IR_RegisterSet::getRegisterType(param_1,uVar2);
            pcVar9 = (char *)IR_RegisterSet::getRegisterName(param_1,uVar2);
            uVar5 = IR_RegisterSet::allocateReg(param_2,pIVar8,pcVar9);
            *(uint *)((long)__s + (ulong)uVar2 * 4) = uVar5;
            *puVar16 = uVar5;
          }
          puVar16 = puVar16 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      lVar18 = *(long *)(this + 0x20);
      local_64 = local_64 + 1;
      uVar13 = (ulong)local_64;
    } while (uVar13 < (ulong)(*(long *)(this + 0x28) - lVar18 >> 3));
    if (*(long *)(this + 0x28) != lVar18) {
      uVar13 = 0;
      do {
        piVar15 = *(int **)(lVar18 + uVar13 * 8);
        if (*piVar15 == 4) {
                    /* try { // try from 00c4654c to 00c4655f has its CatchHandler @ 00c465b0 */
          pIVar10 = (IR_Section *)
                    IR_InstructionSequence::getSection
                              ((IR_InstructionSequence *)this,
                               *(uint *)((long)piVar15 +
                                        ((ulong)((uint)piVar15[1] >> 0xe) & 0x3fffc) + 0xc));
          renumberRegs(pIVar10,param_1,param_2);
        }
        else if (*piVar15 == 2) {
                    /* try { // try from 00c464e0 to 00c464e7 has its CatchHandler @ 00c465ac */
          pIVar10 = (IR_Section *)
                    IR_InstructionSequence::getSection
                              ((IR_InstructionSequence *)this,
                               *(uint *)((long)piVar15 +
                                        ((ulong)((uint)piVar15[1] >> 0xe) & 0x3fffc) + 0xc));
                    /* try { // try from 00c46500 to 00c46533 has its CatchHandler @ 00c465b4 */
          this_00 = (IR_Section *)
                    IR_InstructionSequence::getSection
                              ((IR_InstructionSequence *)this,
                               *(uint *)((long)piVar15 +
                                        ((ulong)((uint)piVar15[1] >> 0xe) & 0x3fffc) + 0x10));
          if (pIVar10 != (IR_Section *)0x0) {
            renumberRegs(pIVar10,param_1,param_2);
          }
          if (this_00 != (IR_Section *)0x0) {
            renumberRegs(this_00,param_1,param_2);
          }
        }
        lVar18 = *(long *)(this + 0x20);
        uVar13 = (ulong)((int)uVar13 + 1);
      } while (uVar13 < (ulong)(*(long *)(this + 0x28) - lVar18 >> 3));
    }
  }
  if (__s == (void *)0x0) {
    return;
  }
  operator_delete(__s);
  return;
}


