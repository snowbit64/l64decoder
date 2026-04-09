// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doInlining
// Entry Point: 00c45af8
// Size: 1624 bytes
// Signature: undefined __thiscall doInlining(IR_Section * this, IR_TypeSet * param_1, set * param_2)


/* IR_Section::doInlining(IR_TypeSet*, std::__ndk1::set<IR_Function*,
   std::__ndk1::less<IR_Function*>, std::__ndk1::allocator<IR_Function*> >&) */

int __thiscall IR_Section::doInlining(IR_Section *this,IR_TypeSet *param_1,set *param_2)

{
  long **pplVar1;
  uint uVar2;
  IR_Function IVar3;
  long lVar4;
  bool bVar5;
  byte *pbVar6;
  long *plVar7;
  IR_Section *pIVar8;
  IR_Section *pIVar9;
  long *plVar10;
  uint uVar11;
  IR_OPCODE IVar12;
  int *piVar13;
  ulong uVar14;
  byte bVar15;
  byte *pbVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long **pplVar20;
  long lVar21;
  long lVar22;
  long **pplVar23;
  uint *puVar24;
  int iVar25;
  IR_Section *pIVar26;
  long lVar27;
  long **pplVar28;
  long **pplVar29;
  uint local_a4;
  IR_InstructionSequence aIStack_a0 [32];
  long local_80;
  long lStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  IR_InstructionSequence::IR_InstructionSequence(aIStack_a0,*(IR_Function **)this);
  lVar21 = *(long *)(this + 0x28);
  if (lVar21 == *(long *)(this + 0x20)) {
    iVar25 = 0;
    lVar22 = lVar21;
  }
  else {
    uVar17 = 0;
    iVar25 = 0;
    pplVar1 = (long **)(param_2 + 8);
    local_a4 = 0;
    lVar21 = *(long *)(this + 0x20);
    do {
      puVar24 = *(uint **)(lVar21 + uVar17 * 8);
      if ((*puVar24 & 0xfffffffe) == 0x14) {
        piVar13 = (int *)(*(long *)(*(long *)this + 0x80) +
                         ((ulong)*(uint *)((long)puVar24 +
                                          ((ulong)(puVar24[1] >> 0xe) & 0x3fffc) + 8) & 0x7fffffff)
                         * 0x18);
        if (*piVar13 != 10) goto LAB_00c45b68;
                    /* try { // try from 00c45be8 to 00c45c03 has its CatchHandler @ 00c46174 */
        pbVar6 = (byte *)(**(code **)(**(long **)(piVar13 + 2) + 0x10))();
        pbVar16 = *(byte **)(pbVar6 + 0x10);
        if ((*pbVar6 & 1) == 0) {
          pbVar16 = pbVar6 + 1;
        }
        plVar7 = (long *)IR_TypeSet::getFunction(param_1,(char *)pbVar16);
        if (plVar7 == (long *)0x0) {
          if (*(short *)((long)puVar24 + 6) != 0) goto LAB_00c45b68;
                    /* try { // try from 00c45de4 to 00c45df3 has its CatchHandler @ 00c46174 */
          IR_InstructionSequence::emitWithNewOpcode(aIStack_a0,0x15,puVar24);
        }
        else {
          IVar3 = *(IR_Function *)(plVar7 + 8);
          uVar14 = plVar7[9];
          bVar15 = (byte)IVar3 & 1;
          uVar18 = (ulong)((byte)IVar3 >> 1);
          uVar17 = uVar18;
          if (((byte)IVar3 & 1) != 0) {
            uVar17 = uVar14;
          }
          if (uVar17 == 0) {
                    /* try { // try from 00c45efc to 00c45f07 has its CatchHandler @ 00c46174 */
            IR_Function::prepare((IR_Function *)plVar7,false);
                    /* try { // try from 00c45f0c to 00c45f13 has its CatchHandler @ 00c46158 */
            pIVar9 = (IR_Section *)
                     IR_Function::ingestFunction(*(IR_Function **)this,(IR_Function *)plVar7);
            plVar7 = *(long **)(pIVar9 + 0x20);
            lVar21 = *(long *)(pIVar9 + 0x28);
            lVar22 = *plVar7;
            lVar27 = *(long *)(lVar21 + -8);
            uVar11 = *(uint *)(lVar22 + 4);
            if (0xffff < uVar11) {
              uVar17 = 0;
              do {
                uVar2 = *(uint *)(lVar22 + 8 + uVar17 * 4);
                if (-1 < (int)uVar2) {
                    /* try { // try from 00c45f68 to 00c45f73 has its CatchHandler @ 00c46168 */
                  IR_InstructionSequence::emit
                            (aIStack_a0,0x1a,uVar2,
                             puVar24[(int)uVar17 + (uint)*(ushort *)((long)puVar24 + 6) + 3]);
                  uVar11 = *(uint *)(lVar22 + 4);
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar11 >> 0x10);
              plVar7 = *(long **)(pIVar9 + 0x20);
              lVar21 = *(long *)(pIVar9 + 0x28);
            }
            if ((lVar21 - (long)plVar7 >> 3) - 3U < 0xfffffffffffffffe) {
              uVar17 = 1;
              do {
                    /* try { // try from 00c4600c to 00c46013 has its CatchHandler @ 00c46178 */
                IR_InstructionSequence::emit(aIStack_a0,(uint *)plVar7[uVar17]);
                plVar7 = *(long **)(pIVar9 + 0x20);
                uVar17 = (ulong)((int)uVar17 + 1);
              } while (uVar17 < (*(long *)(pIVar9 + 0x28) - (long)plVar7 >> 3) - 1U);
            }
            uVar11 = *(uint *)(lVar27 + 4);
            if ((uVar11 & 0xffff) != 0) {
              lVar21 = 2;
              do {
                if (-1 < (int)puVar24[lVar21]) {
                    /* try { // try from 00c46074 to 00c4607f has its CatchHandler @ 00c46170 */
                  IR_InstructionSequence::emit
                            (aIStack_a0,0x1a,puVar24[lVar21],
                             *(uint *)(lVar27 + (ulong)((int)lVar21 + (uVar11 >> 0x10)) * 4));
                  uVar11 = *(uint *)(lVar27 + 4);
                }
                uVar17 = lVar21 - 1;
                lVar21 = lVar21 + 1;
              } while (uVar17 < (uVar11 & 0xffff));
            }
                    /* try { // try from 00c4608c to 00c46093 has its CatchHandler @ 00c46154 */
            IR_Function::unallocateSection(*(IR_Function **)this,pIVar9);
            iVar25 = 1;
          }
          else {
            pplVar28 = (long **)*pplVar1;
            pplVar20 = pplVar1;
            pplVar29 = pplVar1;
            while (pplVar28 != (long **)0x0) {
              while (pplVar23 = pplVar28, pplVar29 = pplVar23, plVar7 < pplVar23[4]) {
                pplVar20 = pplVar23;
                pplVar28 = (long **)*pplVar23;
                if ((long **)*pplVar23 == (long **)0x0) {
                  if (*pplVar23 != (long *)0x0) goto LAB_00c460a8;
                  goto LAB_00c45f88;
                }
              }
              if (plVar7 <= pplVar23[4]) break;
              pplVar20 = pplVar23 + 1;
              pplVar28 = (long **)*pplVar20;
            }
            pplVar23 = pplVar20;
            if (*pplVar23 == (long *)0x0) {
LAB_00c45f88:
                    /* try { // try from 00c45f88 to 00c45f93 has its CatchHandler @ 00c46174 */
              plVar10 = (long *)operator_new(0x28);
              plVar10[4] = (long)plVar7;
              *plVar10 = 0;
              plVar10[1] = 0;
              plVar10[2] = (long)pplVar29;
              *pplVar23 = plVar10;
              if (**(long **)param_2 != 0) {
                *(long *)param_2 = **(long **)param_2;
                plVar10 = *pplVar23;
              }
              std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                        (*(__tree_node_base **)(param_2 + 8),(__tree_node_base *)plVar10);
              *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
              uVar14 = plVar7[9];
              bVar15 = (byte)*(IR_Function *)(plVar7 + 8) & 1;
              uVar18 = (ulong)((byte)*(IR_Function *)(plVar7 + 8) >> 1);
            }
LAB_00c460a8:
            if (bVar15 != 0) {
              uVar18 = uVar14;
            }
            IVar12 = 0x14;
            if (*(IR_Function *)(plVar7 + 0xc) == (IR_Function)0x0 || uVar18 == 0) {
              IVar12 = 0x15;
            }
                    /* try { // try from 00c460c4 to 00c460cf has its CatchHandler @ 00c46174 */
            IR_InstructionSequence::emitWithNewOpcode(aIStack_a0,IVar12,puVar24);
          }
        }
      }
      else {
                    /* try { // try from 00c45c88 to 00c45c8f has its CatchHandler @ 00c46164 */
        if ((*puVar24 == 4) &&
           (pIVar9 = (IR_Section *)
                     IR_InstructionSequence::getSection
                               ((IR_InstructionSequence *)this,
                                *(uint *)((long)puVar24 +
                                         ((ulong)(puVar24[1] >> 0xe) & 0x3fffc) + 0xc)),
           0 < *(int *)(pIVar9 + 0x9c))) {
                    /* try { // try from 00c45ca4 to 00c45cab has its CatchHandler @ 00c46160 */
          pIVar8 = (IR_Section *)IR_Function::ingestSection(*(IR_Function **)this,pIVar9);
          lVar21 = **(long **)(pIVar8 + 0x20);
          uVar11 = *(uint *)(lVar21 + 4);
          if (0xffff < uVar11) {
            uVar17 = 0;
            do {
              uVar2 = *(uint *)(lVar21 + 8 + uVar17 * 4);
              if (-1 < (int)uVar2) {
                    /* try { // try from 00c45e30 to 00c45e3b has its CatchHandler @ 00c4617c */
                IR_InstructionSequence::emit
                          (aIStack_a0,0x1a,uVar2,
                           puVar24[(int)uVar17 + (uint)*(ushort *)((long)puVar24 + 6) + 4]);
                uVar11 = *(uint *)(lVar21 + 4);
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar11 >> 0x10);
          }
          if (1 < *(int *)(pIVar9 + 0x9c)) {
            iVar25 = 0;
            pIVar26 = pIVar8;
            do {
              lVar21 = *(long *)(pIVar26 + 0x20);
              lVar22 = *(long *)(pIVar26 + 0x28);
              if ((lVar22 - lVar21 >> 3) - 3U < 0xfffffffffffffffe) {
                uVar17 = 1;
                do {
                    /* try { // try from 00c45cf4 to 00c45cfb has its CatchHandler @ 00c46194 */
                  IR_InstructionSequence::emit(aIStack_a0,*(uint **)(lVar21 + uVar17 * 8));
                  lVar21 = *(long *)(pIVar26 + 0x20);
                  lVar22 = *(long *)(pIVar26 + 0x28);
                  uVar17 = (ulong)((int)uVar17 + 1);
                } while (uVar17 < (lVar22 - lVar21 >> 3) - 1U);
              }
              lVar22 = *(long *)(lVar22 + -8);
                    /* try { // try from 00c45d20 to 00c45d27 has its CatchHandler @ 00c46188 */
              pIVar8 = (IR_Section *)IR_Function::ingestSection(*(IR_Function **)this,pIVar9);
              lVar21 = **(long **)(pIVar8 + 0x20);
              if (0xffff < *(uint *)(lVar21 + 4)) {
                uVar17 = 0;
                do {
                  uVar11 = *(uint *)(lVar21 + 8 + uVar17 * 4);
                  if (-1 < (int)uVar11) {
                    uVar2 = *(uint *)(lVar22 + 4);
                    if (uVar17 < (uVar2 & 0xffff) - 1) {
                      IR_InstructionSequence::emit
                                (aIStack_a0,0x1a,uVar11,
                                 *(uint *)(lVar22 + (ulong)((int)uVar17 + (uVar2 >> 0x10) + 3) * 4))
                      ;
                    }
                    else {
                    /* try { // try from 00c45d84 to 00c45dd7 has its CatchHandler @ 00c46190 */
                      IR_InstructionSequence::emit
                                (aIStack_a0,0x1a,uVar11,
                                 puVar24[(int)uVar17 + (uint)*(ushort *)((long)puVar24 + 6) + 4]);
                    }
                  }
                  uVar17 = uVar17 + 1;
                } while (uVar17 < *(ushort *)(lVar21 + 6));
              }
                    /* try { // try from 00c45d44 to 00c45d4b has its CatchHandler @ 00c46184 */
              IR_Function::unallocateSection(*(IR_Function **)this,pIVar26);
              iVar25 = iVar25 + 1;
              pIVar26 = pIVar8;
            } while (iVar25 < *(int *)(pIVar9 + 0x9c) + -1);
          }
          lVar21 = *(long *)(pIVar8 + 0x20);
          lVar22 = *(long *)(pIVar8 + 0x28);
          if ((lVar22 - lVar21 >> 3) - 3U < 0xfffffffffffffffe) {
            uVar17 = 1;
            do {
                    /* try { // try from 00c45e64 to 00c45e6b has its CatchHandler @ 00c4618c */
              IR_InstructionSequence::emit(aIStack_a0,*(uint **)(lVar21 + uVar17 * 8));
              lVar21 = *(long *)(pIVar8 + 0x20);
              lVar22 = *(long *)(pIVar8 + 0x28);
              uVar17 = (ulong)((int)uVar17 + 1);
            } while (uVar17 < (lVar22 - lVar21 >> 3) - 1U);
          }
          lVar21 = *(long *)(lVar22 + -8);
          uVar11 = *(uint *)(lVar21 + 4);
          if ((uVar11 & 0xfffe) != 0) {
            uVar17 = 2;
            do {
              if (-1 < (int)puVar24[uVar17]) {
                    /* try { // try from 00c45ed0 to 00c45edb has its CatchHandler @ 00c46180 */
                IR_InstructionSequence::emit
                          (aIStack_a0,0x1a,puVar24[uVar17],
                           *(uint *)(lVar21 + (ulong)((int)uVar17 + (uVar11 >> 0x10) + 1) * 4));
                uVar11 = *(uint *)(lVar21 + 4);
              }
              bVar5 = uVar17 < (uVar11 & 0xffff);
              uVar17 = uVar17 + 1;
            } while (bVar5);
          }
                    /* try { // try from 00c45ee8 to 00c45eef has its CatchHandler @ 00c4615c */
          IR_Function::unallocateSection(*(IR_Function **)this,pIVar8);
          iVar25 = 1;
          goto LAB_00c45b74;
        }
LAB_00c45b68:
                    /* try { // try from 00c45b68 to 00c45b73 has its CatchHandler @ 00c4616c */
        IR_InstructionSequence::emit(aIStack_a0,puVar24);
      }
LAB_00c45b74:
      lVar21 = *(long *)(this + 0x20);
      local_a4 = local_a4 + 1;
      uVar17 = (ulong)local_a4;
      lVar22 = *(long *)(this + 0x28);
    } while (uVar17 < (ulong)(*(long *)(this + 0x28) - lVar21 >> 3));
  }
  uVar19 = *(undefined8 *)(this + 0x30);
  *(long *)(this + 0x28) = lStack_78;
  *(long *)(this + 0x20) = local_80;
  *(undefined8 *)(this + 0x30) = local_70;
  local_80 = lVar21;
  lStack_78 = lVar22;
  local_70 = uVar19;
  if (iVar25 != 0) {
                    /* try { // try from 00c460fc to 00c4610b has its CatchHandler @ 00c46150 */
    checkHssaCorrectness((char *)this);
  }
  IR_InstructionSequence::~IR_InstructionSequence(aIStack_a0);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return iVar25;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


