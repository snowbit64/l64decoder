// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00c3f384
// Size: 796 bytes
// Signature: undefined __thiscall clone(IR_Section * this, IR_Function * param_1, vector * param_2)


/* IR_Section::clone(IR_Function*, std::__ndk1::vector<int, std::__ndk1::allocator<int> >&) const */

IR_InstructionSequence * __thiscall
IR_Section::clone(IR_Section *this,IR_Function *param_1,vector *param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  IR_InstructionSequence *this_00;
  uint *puVar6;
  IR_Section *this_01;
  IR_Type *pIVar7;
  char *pcVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  uint *puVar17;
  int local_78 [2];
  IR_Section *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this_00 = (IR_InstructionSequence *)
            IR_Function::allocateSection(param_1,*(IR_SectionType *)(this + 0x38));
  lVar14 = *(long *)(this + 0x20);
  if (*(long *)(this + 0x28) != lVar14) {
    uVar13 = 0;
    do {
      puVar15 = *(uint **)(lVar14 + uVar13 * 8);
      puVar6 = (uint *)IR_InstructionSequence::copyInst(puVar15);
      uVar2 = puVar15[1];
      if ((uVar2 & 0xffff) != 0) {
        lVar14 = 2;
        uVar5 = uVar2;
        while( true ) {
          uVar5 = puVar15[lVar14 + (ulong)(uVar5 >> 0x10)];
          uVar16 = (ulong)uVar5;
          if ((int)uVar5 < 0) {
            piVar9 = (int *)(*(long *)(*(long *)this + 0x80) + (uVar16 & 0x7fffffff) * 0x18);
            if (*piVar9 == 0xb) {
              this_01 = *(IR_Section **)
                         (*(long *)(*(long *)this + 0x80) + (uVar16 & 0x7fffffff) * 0x18 + 8);
              if (this_01 != (IR_Section *)0x0) {
                this_01 = (IR_Section *)clone(this_01,param_1,param_2);
              }
              local_78[0] = 0xb;
              local_70 = this_01;
              uVar4 = IR_Function::storeConst(param_1,(IR_Const *)local_78);
            }
            else {
              uVar4 = IR_Function::storeConst(param_1,(IR_TConst *)piVar9);
            }
            uVar4 = uVar4 | 0x80000000;
          }
          else {
            lVar10 = *(long *)param_2;
            uVar11 = *(long *)(param_2 + 8) - lVar10 >> 2;
            if (uVar11 <= uVar16) {
              uVar12 = uVar16 + 1;
              local_78[0] = -1;
              if (uVar11 < uVar12) {
                std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append
                          ((vector<int,std::__ndk1::allocator<int>> *)param_2,uVar12 - uVar11,
                           local_78);
                lVar10 = *(long *)param_2;
              }
              else if (uVar12 < uVar11) {
                *(ulong *)(param_2 + 8) = lVar10 + uVar12 * 4;
              }
            }
            uVar4 = *(uint *)(lVar10 + uVar16 * 4);
            if (uVar4 == 0xffffffff) {
              pIVar7 = (IR_Type *)
                       IR_RegisterSet::getRegisterType
                                 ((IR_RegisterSet *)(*(long *)this + 0x98),uVar5);
              pcVar8 = (char *)IR_RegisterSet::getRegisterName
                                         ((IR_RegisterSet *)(*(long *)this + 0x98),uVar5);
              uVar4 = IR_RegisterSet::allocateReg((IR_RegisterSet *)(param_1 + 0x98),pIVar7,pcVar8);
              *(uint *)(*(long *)param_2 + uVar16 * 4) = uVar4;
            }
          }
          puVar6[lVar14 + (ulong)*(ushort *)((long)puVar6 + 6)] = uVar4;
          if ((int)lVar14 - (uVar2 & 0xffff) == 1) break;
          uVar5 = puVar15[1];
          lVar14 = lVar14 + 1;
        }
      }
      if (0xffff < uVar2) {
        uVar2 = uVar2 >> 0x10;
        puVar15 = puVar15 + 2;
        if (uVar2 < 2) {
          uVar2 = 1;
        }
        uVar16 = (ulong)uVar2;
        puVar17 = puVar6 + 2;
        do {
          uVar2 = *puVar15;
          uVar11 = (ulong)uVar2;
          if ((int)uVar2 < 0) {
            uVar5 = IR_Function::storeConst
                              (param_1,(IR_TConst *)
                                       (*(long *)(*(long *)this + 0x80) +
                                       (uVar11 & 0x7fffffff) * 0x18));
            uVar5 = uVar5 | 0x80000000;
          }
          else {
            lVar14 = *(long *)param_2;
            uVar12 = *(long *)(param_2 + 8) - lVar14 >> 2;
            if (uVar12 <= uVar11) {
              uVar1 = uVar11 + 1;
              local_78[0] = -1;
              if (uVar12 < uVar1) {
                std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append
                          ((vector<int,std::__ndk1::allocator<int>> *)param_2,uVar1 - uVar12,
                           local_78);
                lVar14 = *(long *)param_2;
              }
              else if (uVar1 < uVar12) {
                *(ulong *)(param_2 + 8) = lVar14 + uVar1 * 4;
              }
            }
            uVar5 = *(uint *)(lVar14 + uVar11 * 4);
            if (uVar5 == 0xffffffff) {
              pIVar7 = (IR_Type *)
                       IR_RegisterSet::getRegisterType
                                 ((IR_RegisterSet *)(*(long *)this + 0x98),uVar2);
              pcVar8 = (char *)IR_RegisterSet::getRegisterName
                                         ((IR_RegisterSet *)(*(long *)this + 0x98),uVar2);
              uVar5 = IR_RegisterSet::allocateReg((IR_RegisterSet *)(param_1 + 0x98),pIVar7,pcVar8);
              *(uint *)(*(long *)param_2 + uVar11 * 4) = uVar5;
            }
          }
          puVar15 = puVar15 + 1;
          uVar16 = uVar16 - 1;
          *puVar17 = uVar5;
          puVar17 = puVar17 + 1;
        } while (uVar16 != 0);
      }
      IR_InstructionSequence::push_back(this_00,puVar6);
      lVar14 = *(long *)(this + 0x20);
      uVar13 = (ulong)((int)uVar13 + 1);
    } while (uVar13 < (ulong)(*(long *)(this + 0x28) - lVar14 >> 3));
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


