// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: foldLOOP
// Entry Point: 00c4522c
// Size: 1864 bytes
// Signature: undefined __cdecl foldLOOP(uint param_1, vector * param_2, bool param_3, bool param_4, bool param_5)


/* IR_Section::foldLOOP(unsigned int, std::__ndk1::vector<IR_GenValue,
   std::__ndk1::allocator<IR_GenValue> >&, bool, bool, bool) */

void IR_Section::foldLOOP(uint param_1,vector *param_2,bool param_3,bool param_4,bool param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  bool bVar7;
  uint uVar8;
  IR_Function **this;
  undefined8 *puVar9;
  vector *pvVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  int iVar14;
  int *piVar15;
  void **ppvVar16;
  undefined8 *****pppppuVar17;
  uint *puVar18;
  undefined8 *****pppppuVar19;
  undefined8 *puVar20;
  undefined8 *****pppppuVar21;
  undefined4 uVar22;
  long lVar23;
  int iVar24;
  ulong uVar25;
  uint uVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  long local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  void *local_d0;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  __tree_node **local_a8;
  __tree_node *local_a0;
  undefined8 local_98;
  undefined8 *****local_90;
  undefined8 *****pppppuStack_88;
  long local_80;
  long local_70;
  
  plVar13 = (long *)(ulong)param_3;
  this = (IR_Function **)(ulong)param_1;
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  lVar23 = *(long *)(this[4] + ((ulong)param_2 & 0xffffffff) * 8);
  uVar3 = *(uint *)(lVar23 + 4);
  uVar2 = uVar3 >> 0x10;
  uVar8 = *(uint *)(lVar23 + (ulong)uVar2 * 4 + 8);
  if ((int)uVar8 < 0) {
    piVar15 = (int *)(*(long *)(*this + 0x80) + ((ulong)uVar8 & 0x7fffffff) * 0x18);
  }
  else {
    piVar15 = (int *)(*plVar13 + (ulong)uVar8 * 0x20);
  }
  iVar24 = *piVar15;
  cVar4 = *(char *)(piVar15 + 2);
  if (iVar24 == 0 || cVar4 != '\0') {
    local_a8 = &local_a0;
    pppppuStack_88 = (undefined8 *****)0x0;
    local_80 = 0;
    local_98 = 0;
    local_a0 = (__tree_node *)0x0;
    iVar14 = *(int *)(((ulong)(*(uint *)(lVar23 + 4) >> 0xe) & 0x3fffc) + lVar23 + 8);
    local_90 = &pppppuStack_88;
    if (-1 < iVar14) {
                    /* try { // try from 00c45310 to 00c45317 has its CatchHandler @ 00c4598c */
      local_90 = (undefined8 *****)operator_new(0x20);
      *(int *)((long)local_90 + 0x1c) = iVar14;
      *local_90 = (undefined8 ****)0x0;
      local_90[1] = (undefined8 ****)0x0;
      local_90[2] = &pppppuStack_88;
      pppppuStack_88 = local_90;
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)local_90,(__tree_node_base *)local_90);
      local_80 = local_80 + 1;
                    /* try { // try from 00c45340 to 00c4534f has its CatchHandler @ 00c459f0 */
      getTrueAndFalseRegs((IR_Section *)this,(set *)&local_90,(set *)&local_a8,(int)param_2 - 1);
    }
    local_c0 = (undefined8 *)0x0;
    local_b8 = (undefined8 *)0x0;
    local_b0 = (undefined8 *)0x0;
    uVar26 = (uint)((ulong)uVar3 & 0xffff);
    uVar8 = uVar26 - 2;
    if (uVar8 == 0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
                    /* try { // try from 00c45374 to 00c45377 has its CatchHandler @ 00c459e8 */
      puVar9 = (undefined8 *)operator_new((ulong)uVar8 << 5);
      local_b8 = puVar9 + (ulong)uVar8 * 4;
      puVar12 = puVar9;
      do {
        *(int *)puVar12 = 0;
        puVar12[2] = 0;
        *(int *)(puVar12 + 3) = -1;
        puVar12 = puVar12 + 4;
      } while (puVar12 != local_b8);
      local_c0 = puVar9;
      local_b0 = local_b8;
      if (2 < uVar26) {
        uVar25 = 2;
        do {
          uVar8 = *(uint *)(lVar23 + (ulong)((int)uVar25 + (uint)*(ushort *)(lVar23 + 6) + 2) * 4);
          if ((int)uVar8 < 0) {
LAB_00c453e4:
            ppvVar16 = (void **)(*(long *)(*this + 0x80) + (ulong)(uVar8 & 0x7fffffff) * 0x18);
            uStack_d8 = ppvVar16[1];
            local_e0 = *ppvVar16;
            local_d0 = ppvVar16[2];
            iVar14 = -1;
          }
          else {
            pppppuVar19 = &pppppuStack_88;
            pppppuVar21 = pppppuStack_88;
            if (pppppuStack_88 != (undefined8 *****)0x0) {
              do {
                bVar7 = *(uint *)((long)pppppuVar21 + 0x1c) < uVar8;
                if (!bVar7) {
                  pppppuVar19 = pppppuVar21;
                }
                pppppuVar21 = (undefined8 *****)pppppuVar21[bVar7];
              } while (pppppuVar21 != (undefined8 *****)0x0);
              pppppuVar17 = pppppuStack_88;
              pppppuVar21 = &pppppuStack_88;
              if (((undefined8 ******)pppppuVar19 == &pppppuStack_88) ||
                 (uVar8 < *(uint *)((long)pppppuVar19 + 0x1c))) {
                do {
                  bVar7 = *(uint *)((long)pppppuVar17 + 0x1c) < uVar8;
                  if (!bVar7) {
                    pppppuVar21 = pppppuVar17;
                  }
                  pppppuVar19 = pppppuVar17 + bVar7;
                  pppppuVar17 = (undefined8 *****)*pppppuVar19;
                } while ((undefined8 *****)*pppppuVar19 != (undefined8 *****)0x0);
                if (((undefined8 ******)pppppuVar21 == &pppppuStack_88) ||
                   (uVar8 < *(uint *)((long)pppppuVar21 + 0x1c))) goto LAB_00c454b8;
                uStack_d8 = (void *)((ulong)uStack_d8._1_7_ << 8);
                local_e0 = (void *)CONCAT44(local_e0._4_4_,9);
                uVar8 = IR_Function::storeConst(*this,(IR_Const *)&local_e0);
              }
              else {
                local_e0 = (void *)CONCAT44(local_e0._4_4_,9);
                uStack_d8 = (void *)CONCAT71(uStack_d8._1_7_,1);
                    /* try { // try from 00c453d8 to 00c454ef has its CatchHandler @ 00c45a00 */
                uVar8 = IR_Function::storeConst(*this,(IR_Const *)&local_e0);
              }
              goto LAB_00c453e4;
            }
LAB_00c454b8:
            ppvVar16 = (void **)(*plVar13 + (ulong)uVar8 * 0x20);
            uStack_d8 = ppvVar16[1];
            local_e0 = *ppvVar16;
            local_d0 = ppvVar16[2];
            iVar14 = *(int *)(ppvVar16 + 3);
          }
          uVar11 = uVar25 + 1;
          puVar9[uVar25 * 4 + -7] = uStack_d8;
          puVar9[uVar25 * 4 + -8] = local_e0;
          puVar9[uVar25 * 4 + -6] = local_d0;
          *(int *)(puVar9 + uVar25 * 4 + -5) = iVar14;
          uVar25 = uVar11;
        } while (uVar11 != ((ulong)uVar3 & 0xffff));
      }
    }
                    /* try { // try from 00c455c0 to 00c455c7 has its CatchHandler @ 00c459f8 */
    pvVar10 = (vector *)
              IR_InstructionSequence::getSection
                        ((IR_InstructionSequence *)this,
                         *(uint *)(((ulong)(*(uint *)(lVar23 + 4) >> 0xe) & 0x3fffc) + lVar23 + 0xc)
                        );
    if (((param_5) && (*(int *)(pvVar10 + 0x9c) == -1)) &&
       (*(undefined4 *)(pvVar10 + 0x9c) = 0, iVar24 != 0)) {
                    /* try { // try from 00c4583c to 00c45847 has its CatchHandler @ 00c45974 */
      std::__ndk1::vector<IR_GenValue,std::__ndk1::allocator<IR_GenValue>>::vector
                ((vector<IR_GenValue,std::__ndk1::allocator<IR_GenValue>> *)&local_e0,
                 (vector *)plVar13);
      local_f8 = (undefined8 *)0x0;
      local_f0 = 0;
      local_e8 = (undefined8 *)0x0;
      uVar25 = (long)local_b8 - (long)puVar9;
      if (uVar25 == 0) {
        puVar12 = (undefined8 *)0x0;
      }
      else {
        if ((long)uVar25 < 0) {
                    /* try { // try from 00c45968 to 00c4596f has its CatchHandler @ 00c45978 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
                    /* try { // try from 00c45860 to 00c45867 has its CatchHandler @ 00c45978 */
        puVar12 = (undefined8 *)operator_new(uVar25);
        local_e8 = puVar12 + ((long)uVar25 >> 5) * 4;
        local_f8 = puVar12;
        memcpy(puVar12,puVar9,uVar25);
        local_f0 = (long)puVar12 + uVar25;
      }
      if (*(int *)(pvVar10 + 0x9c) != 0x10) {
        iVar24 = 1;
        uVar8 = uVar2;
        if (uVar2 < 2) {
          uVar8 = 1;
        }
        do {
          if (iVar24 == 0) break;
          if (cVar4 == '\0') goto LAB_00c458a8;
          local_110 = (undefined8 *)0x0;
          local_108 = (undefined8 *)0x0;
          local_100 = 0;
                    /* try { // try from 00c458fc to 00c4591b has its CatchHandler @ 00c459b0 */
          executeConstantFolding
                    (pvVar10,(vector *)&local_e0,(vector *)&local_f8,SUB81(&local_110,0),false);
          *(int *)(pvVar10 + 0x9c) = *(int *)(pvVar10 + 0x9c) + 1;
          iVar24 = *(int *)local_110;
          cVar4 = *(char *)(local_110 + 1);
          uVar25 = (ulong)uVar8;
          puVar20 = puVar12;
          puVar1 = local_110;
          if (0xffff < uVar3) {
            do {
              uVar28 = *(undefined8 *)((long)puVar1 + 0x2c);
              uVar25 = uVar25 - 1;
              uVar30 = puVar1[5];
              uVar29 = puVar1[4];
              *(undefined8 *)((long)puVar20 + 0x14) = *(undefined8 *)((long)puVar1 + 0x34);
              *(undefined8 *)((long)puVar20 + 0xc) = uVar28;
              puVar20[1] = uVar30;
              *puVar20 = uVar29;
              puVar20 = puVar20 + 4;
              puVar1 = puVar1 + 4;
            } while (uVar25 != 0);
          }
          local_108 = local_110;
          operator_delete(local_110);
        } while (*(int *)(pvVar10 + 0x9c) != 0x10);
      }
      *(undefined4 *)(pvVar10 + 0x9c) = 0;
LAB_00c458a8:
      if (puVar12 != (undefined8 *)0x0) {
        operator_delete(puVar12);
      }
      if (local_e0 != (void *)0x0) {
        uStack_d8 = local_e0;
        operator_delete(local_e0);
      }
    }
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    uVar25 = (ulong)uVar2;
    do {
      local_e0 = (void *)0x0;
      uStack_d8 = (void *)0x0;
      local_d0 = (void *)0x0;
                    /* try { // try from 00c45600 to 00c4561f has its CatchHandler @ 00c45a08 */
      executeConstantFolding(pvVar10,(vector *)plVar13,(vector *)&local_c0,SUB81(&local_e0,0),false)
      ;
      if (uVar3 < 0x10000) {
        bVar7 = false;
      }
      else {
        lVar27 = 0;
        bVar7 = false;
        do {
          pvVar6 = local_e0;
          if (*(int *)((long)local_e0 + lVar27 + 0x20) == 0) {
            if ((*(int *)((long)puVar9 + lVar27) != 0) ||
               (*(int *)((long)local_e0 + lVar27 + 0x38) != *(int *)((long)puVar9 + lVar27 + 0x18)))
            goto LAB_00c456d0;
          }
          else {
            if (*(int *)((long)puVar9 + lVar27) != 0) {
              uVar11 = IR_Const::operator==
                                 ((IR_Const *)((long)local_e0 + lVar27 + 0x20),
                                  (IR_Const *)((long)puVar9 + lVar27));
              if (((uVar11 & 1) != 0) &&
                 (*(long *)((long)pvVar6 + lVar27 + 0x30) ==
                  *(long *)((IR_Const *)((long)puVar9 + lVar27) + 0x10))) goto LAB_00c45660;
            }
LAB_00c456d0:
            piVar15 = (int *)((long)puVar9 + lVar27);
            if ((*piVar15 != 0) || (piVar15[6] != -1)) {
              bVar7 = true;
              *piVar15 = 0;
              *(undefined8 *)(piVar15 + 4) = 0;
              piVar15[6] = -1;
            }
          }
LAB_00c45660:
          lVar27 = lVar27 + 0x20;
        } while (uVar25 * 0x20 - lVar27 != 0);
      }
      if (local_e0 != (void *)0x0) {
        uStack_d8 = local_e0;
        operator_delete(local_e0);
      }
      puVar12 = local_c0;
    } while (bVar7);
    if (0xffff < uVar3) {
      puVar18 = (uint *)(lVar23 + 8);
      puVar9 = local_c0;
      do {
        uVar2 = *puVar18;
        if (-1 < (int)uVar2) {
          uVar29 = puVar9[1];
          uVar28 = *puVar9;
          puVar1 = (undefined8 *)(*plVar13 + (ulong)uVar2 * 0x20);
          if (*(uint *)(puVar9 + 3) != 0xffffffff || *(int *)puVar9 != 0) {
            uVar2 = *(uint *)(puVar9 + 3);
          }
          puVar1[2] = puVar9[2];
          puVar1[1] = uVar29;
          *puVar1 = uVar28;
          *(uint *)(puVar1 + 3) = uVar2;
        }
        puVar9 = puVar9 + 4;
        puVar18 = puVar18 + 1;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    if (param_4) {
      if ((long)local_b8 - (long)local_c0 != 0) {
        uVar25 = 0;
        do {
          puVar9 = local_c0 + uVar25 * 4;
          uVar25 = (ulong)((int)uVar25 + 1);
          iVar24 = *(int *)(puVar9 + 3);
          if (iVar24 != -1 && *(int *)puVar9 == 0) {
            iVar24 = -1;
          }
          *(int *)(puVar9 + 3) = iVar24;
        } while (uVar25 < (ulong)((long)local_b8 - (long)local_c0 >> 5));
      }
      local_e0 = (void *)0x0;
      uStack_d8 = (void *)0x0;
      local_d0 = (void *)0x0;
                    /* try { // try from 00c45748 to 00c45767 has its CatchHandler @ 00c45994 */
      executeConstantFolding(pvVar10,(vector *)plVar13,(vector *)&local_c0,SUB81(&local_e0,0),true);
      if (local_e0 != (void *)0x0) {
        uStack_d8 = local_e0;
        operator_delete(local_e0);
      }
    }
    if (puVar12 != (undefined8 *)0x0) {
      operator_delete(puVar12);
    }
    std::__ndk1::
    __tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>::
    destroy((__tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
             *)&local_a8,local_a0);
    std::__ndk1::
    __tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>::
    destroy((__tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
             *)&local_90,(__tree_node *)pppppuStack_88);
  }
  else if (0xffff < uVar3) {
    uVar25 = 0;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    do {
      uVar3 = *(uint *)(lVar23 + 8 + uVar25 * 4);
      if (-1 < (int)uVar3) {
        uVar8 = *(uint *)(lVar23 + (ulong)((int)uVar25 + (uint)*(ushort *)(lVar23 + 6) + 4) * 4);
        if ((int)uVar8 < 0) {
          puVar9 = (undefined8 *)(*(long *)(*this + 0x80) + ((ulong)uVar8 & 0x7fffffff) * 0x18);
          uVar22 = 0xffffffff;
          pppppuStack_88 = (undefined8 *****)puVar9[1];
          local_90 = (undefined8 *****)*puVar9;
          local_80 = puVar9[2];
          lVar27 = *plVar13;
        }
        else {
          lVar27 = *plVar13;
          puVar9 = (undefined8 *)(lVar27 + (ulong)uVar8 * 0x20);
          pppppuStack_88 = (undefined8 *****)puVar9[1];
          local_90 = (undefined8 *****)*puVar9;
          local_80 = puVar9[2];
          uVar22 = *(undefined4 *)(puVar9 + 3);
        }
        puVar9 = (undefined8 *)(lVar27 + (ulong)uVar3 * 0x20);
        puVar9[1] = pppppuStack_88;
        *puVar9 = local_90;
        *(undefined4 *)(puVar9 + 3) = uVar22;
        puVar9[2] = local_80;
      }
      uVar25 = uVar25 + 1;
    } while (uVar2 != uVar25);
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


