// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeConstantFolding
// Entry Point: 00c44544
// Size: 3268 bytes
// Signature: undefined __cdecl executeConstantFolding(vector * param_1, vector * param_2, vector * param_3, bool param_4, bool param_5)


/* IR_Section::executeConstantFolding(std::__ndk1::vector<IR_GenValue,
   std::__ndk1::allocator<IR_GenValue> >&, std::__ndk1::vector<IR_GenValue,
   std::__ndk1::allocator<IR_GenValue> > const&, std::__ndk1::vector<IR_GenValue,
   std::__ndk1::allocator<IR_GenValue> >&, bool, bool) */

void IR_Section::executeConstantFolding
               (vector *param_1,vector *param_2,vector *param_3,bool param_4,bool param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  void *__dest;
  undefined8 uVar14;
  int *piVar15;
  ulong uVar16;
  void **ppvVar17;
  long lVar18;
  long **pplVar19;
  long *plVar20;
  long lVar21;
  uint *puVar22;
  long **pplVar23;
  long ***ppplVar24;
  byte *pbVar25;
  uint uVar26;
  vector *pvVar27;
  vector *pvVar28;
  undefined4 uVar29;
  vector *pvVar30;
  ulong uVar31;
  ulong uVar32;
  long **pplVar33;
  ulong uVar34;
  int *piVar35;
  undefined8 *puVar36;
  uint uVar37;
  void *__src;
  size_t __n;
  undefined8 uVar38;
  undefined4 local_bc;
  uint local_b0 [2];
  undefined8 uStack_a8;
  long **local_a0;
  uint uStack_98;
  uint uStack_94;
  undefined8 local_90;
  uint local_88;
  long local_78;
  
  ppvVar17 = (void **)(ulong)param_4;
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  lVar13 = *(long *)(param_1 + 0x28);
  lVar21 = *(long *)param_1;
  lVar18 = lVar13;
  if (lVar13 != *(long *)(param_1 + 0x20)) {
    pvVar30 = (vector *)0x0;
    lVar13 = *(long *)(param_1 + 0x20);
    do {
      puVar36 = *(undefined8 **)(lVar13 + (long)pvVar30 * 8);
      bVar8 = SUB81(param_2,0);
      uVar11 = (uint)pvVar30;
      if (*(int *)puVar36 < 0x1a) {
        uVar37 = *(uint *)((long)puVar36 + 4);
        uVar12 = uVar37 >> 0x10;
        switch(*(int *)puVar36) {
        case 2:
          foldCOND((uint)param_1,pvVar30,bVar8,param_5);
          break;
        default:
          if (0xffff < uVar37) {
            if (uVar12 < 2) {
              uVar12 = 1;
            }
            uVar34 = (ulong)uVar12;
            puVar36 = puVar36 + 1;
            do {
              uVar12 = *(uint *)puVar36;
              if (-1 < (int)uVar12) {
                puVar2 = (undefined4 *)(*(long *)param_2 + (ulong)uVar12 * 0x20);
                *puVar2 = 0;
                *(undefined8 *)(puVar2 + 4) = 0;
                puVar2[6] = uVar12;
              }
              puVar36 = (undefined8 *)((long)puVar36 + 4);
              uVar34 = uVar34 - 1;
            } while (uVar34 != 0);
          }
          break;
        case 4:
          foldLOOP((uint)param_1,pvVar30,bVar8,param_5,*(int *)(param_1 + 0x38) == 0);
          break;
        case 6:
        case 7:
        case 9:
          if ((uVar37 & 0xffff) != 0) {
            lVar13 = 0;
            uVar12 = uVar37 & 0xffff;
            while( true ) {
              uVar37 = *(uint *)((long)puVar36 + (lVar13 + (ulong)(uVar37 >> 0x10)) * 4 + 8);
              if ((int)uVar37 < 0) {
                uVar29 = 0xffffffff;
                pplVar19 = (long **)(*(long *)(*(long *)param_1 + 0x80) +
                                    ((ulong)uVar37 & 0x7fffffff) * 0x18);
                local_a0 = (long **)*pplVar19;
                uStack_98 = (uint)pplVar19[1];
                uStack_94 = (uint)((ulong)pplVar19[1] >> 0x20);
                local_90._0_4_ = SUB84(pplVar19[2],0);
                local_90._4_4_ = (undefined4)((ulong)pplVar19[2] >> 0x20);
              }
              else {
                pplVar19 = (long **)(*(long *)param_2 + (ulong)uVar37 * 0x20);
                local_a0 = (long **)*pplVar19;
                uStack_98 = (uint)pplVar19[1];
                uStack_94 = (uint)((ulong)pplVar19[1] >> 0x20);
                local_90._0_4_ = SUB84(pplVar19[2],0);
                local_90._4_4_ = (undefined4)((ulong)pplVar19[2] >> 0x20);
                uVar29 = *(undefined4 *)(pplVar19 + 3);
                local_bc = *(undefined4 *)((long)pplVar19 + 0x1c);
              }
              pplVar19 = (long **)ppvVar17[1];
              if (pplVar19 < ppvVar17[2]) {
                pplVar19[1] = (long *)CONCAT44(uStack_94,uStack_98);
                *pplVar19 = (long *)local_a0;
                *(undefined4 *)(pplVar19 + 3) = uVar29;
                *(undefined4 *)((long)pplVar19 + 0x1c) = local_bc;
                pplVar19[2] = (long *)CONCAT44(local_90._4_4_,(undefined4)local_90);
                ppvVar17[1] = pplVar19 + 4;
              }
              else {
                __src = *ppvVar17;
                __n = (long)pplVar19 - (long)__src;
                uVar34 = ((long)__n >> 5) + 1;
                if (uVar34 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__vector_base_common<true>::__throw_length_error();
                }
                uVar32 = (long)ppvVar17[2] - (long)__src;
                uVar31 = (long)uVar32 >> 4;
                if (uVar34 <= uVar31) {
                  uVar34 = uVar31;
                }
                if (0x7fffffffffffffdf < uVar32) {
                  uVar34 = 0x7ffffffffffffff;
                }
                if (uVar34 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                __dest = operator_new(uVar34 * 0x20);
                pplVar19 = (long **)((long)__dest + ((long)__n >> 5) * 0x20);
                pplVar19[2] = (long *)CONCAT44(local_90._4_4_,(undefined4)local_90);
                pplVar19[1] = (long *)CONCAT44(uStack_94,uStack_98);
                *pplVar19 = (long *)local_a0;
                *(undefined4 *)(pplVar19 + 3) = uVar29;
                *(undefined4 *)((long)pplVar19 + 0x1c) = local_bc;
                if (0 < (long)__n) {
                  memcpy(__dest,__src,__n);
                }
                *ppvVar17 = __dest;
                ppvVar17[1] = pplVar19 + 4;
                ppvVar17[2] = (void *)((long)__dest + uVar34 * 0x20);
                if (__src != (void *)0x0) {
                  operator_delete(__src);
                }
              }
              if (uVar12 - 1 == (int)lVar13) break;
              uVar37 = *(uint *)((long)puVar36 + 4);
              lVar13 = lVar13 + 1;
            }
          }
          break;
        case 0xe:
          uVar37 = *(uint *)(puVar36 + 1);
          if (-1 < (int)uVar37) {
            uVar12 = *(uint *)((long)puVar36 + (ulong)(uVar12 + 2) * 4);
            if ((int)uVar12 < 0) {
              iVar9 = -1;
              piVar35 = (int *)(*(long *)(*(long *)param_1 + 0x80) +
                               ((ulong)uVar12 & 0x7fffffff) * 0x18);
              local_a0 = *(long ***)(piVar35 + 1);
              iVar3 = *piVar35;
              uStack_98 = piVar35[3];
            }
            else {
              piVar35 = (int *)(*(long *)param_2 + (ulong)uVar12 * 0x20);
              local_a0 = *(long ***)(piVar35 + 1);
              iVar3 = *piVar35;
              uStack_98 = piVar35[3];
              iVar9 = piVar35[6];
            }
            if (iVar3 == 0) {
              puVar2 = (undefined4 *)(*(long *)param_2 + (ulong)uVar37 * 0x20);
              *puVar2 = 0;
              *(undefined8 *)(puVar2 + 4) = 0;
              puVar2[6] = uVar37;
            }
            else {
              *puVar36 = 0x100010000001a;
              *(uint *)((long)puVar36 + 0xc) = uVar12;
              uVar14 = IR_RegisterSet::getRegisterType
                                 ((IR_RegisterSet *)(*(long *)param_1 + 0x98),uVar37);
              piVar35 = (int *)(*(long *)param_2 + (ulong)uVar37 * 0x20);
              *piVar35 = iVar3;
              piVar35[3] = uStack_98;
              *(undefined8 *)(piVar35 + 4) = uVar14;
              piVar35[6] = iVar9;
              *(long ***)(piVar35 + 1) = local_a0;
            }
          }
          break;
        case 0xf:
          if (((param_5) && ((uVar37 & 0xffff) == 3)) &&
             (uVar37 = *(uint *)(puVar36 + 1), -1 < (int)uVar37)) {
            uVar10 = *(uint *)((long)puVar36 + (ulong)(uVar12 + 3) * 4);
            uVar4 = *(uint *)((long)puVar36 + (ulong)(uVar12 + 4) * 4);
            uVar12 = *(uint *)((long)puVar36 + (ulong)uVar12 * 4 + 8);
            if ((((int)uVar10 < 0) || (-1 < (int)uVar4)) ||
               (piVar35 = (int *)IR_RegisterSet::getRegisterType
                                           ((IR_RegisterSet *)(*(long *)param_1 + 0x98),uVar10),
               *piVar35 != 3)) {
              if ((int)uVar4 < 0) {
                if ((int)uVar10 < 0) {
                  piVar35 = (int *)IR_Function::getConstType
                                             (*(IR_Function **)param_1,uVar10 & 0x7fffffff);
                  if (*piVar35 == 1) {
                    piVar35 = (int *)(*(long *)(*(IR_Function **)param_1 + 0x80) +
                                     ((ulong)uVar4 & 0x7fffffff) * 0x18);
                    lVar13 = IR_Function::getConstType(*(IR_Function **)param_1,uVar10 & 0x7fffffff)
                    ;
                    goto LAB_00c44d0c;
                  }
                }
                else {
                  piVar35 = (int *)IR_RegisterSet::getRegisterType
                                             ((IR_RegisterSet *)(*(IR_Function **)param_1 + 0x98),
                                              uVar10);
                  if (*piVar35 == 1) {
                    piVar35 = (int *)(*(long *)(*(long *)param_1 + 0x80) +
                                     ((ulong)uVar4 & 0x7fffffff) * 0x18);
                    lVar13 = IR_RegisterSet::getRegisterType
                                       ((IR_RegisterSet *)(*(long *)param_1 + 0x98),uVar10);
LAB_00c44d0c:
                    uVar4 = *(uint *)(lVar13 + 0x14);
                    uVar34 = (ulong)uVar4;
                    if ((int)uVar12 < 0) {
                      piVar15 = (int *)IR_Function::getConstType
                                                 (*(IR_Function **)param_1,uVar12 & 0x7fffffff);
                    }
                    else {
                      piVar15 = (int *)IR_RegisterSet::getRegisterType
                                                 ((IR_RegisterSet *)
                                                  (*(IR_Function **)param_1 + 0x98),uVar12);
                    }
                    if (*piVar15 == 0) {
                      uVar26 = 1;
                    }
                    else if (*piVar15 == 1) {
                      uVar26 = piVar15[5];
                    }
                    else {
                      uVar26 = 0;
                    }
                    if ((uVar4 == uVar26) && (*piVar35 == 0xd)) {
                      if (uVar4 != 0) {
                        uVar32 = 0;
                        do {
                          if (uVar32 != *(byte *)((long)piVar35 + uVar32 + 8)) goto LAB_00c44ba4;
                          uVar32 = uVar32 + 1;
                        } while (uVar34 != uVar32);
                      }
                      *puVar36 = 0x100010000001a;
                      uVar29 = *(undefined4 *)
                                ((long)puVar36 +
                                ((ulong)(*(uint *)((long)puVar36 + 4) >> 0xe) & 0x3fffc) + 8);
                      *(uint *)(puVar36 + 1) = uVar37;
                      *(undefined4 *)((long)puVar36 + 0xc) = uVar29;
                    }
                    else if ((int)(uVar10 & uVar12) < 0) {
                      uVar10 = IR_Function::storeConst
                                         (*(IR_Function **)param_1,
                                          (IR_Const *)
                                          (*(long *)(*(IR_Function **)param_1 + 0x80) +
                                          ((ulong)uVar10 & 0x7fffffff) * 0x18));
                      uVar12 = IR_Function::storeConst
                                         (*(IR_Function **)param_1,
                                          (IR_Const *)
                                          (*(long *)(*(IR_Function **)param_1 + 0x80) +
                                          ((ulong)uVar12 & 0x7fffffff) * 0x18));
                      if (uVar4 != 0) {
                        if (uVar4 < 8) {
                          uVar31 = 0;
                        }
                        else {
                          uVar31 = uVar34 & 0xfffffff8;
                          pplVar19 = (long **)(CONCAT44(uVar10,uVar10) | 0x8000000080000000);
                          pplVar23 = (long **)(CONCAT44(uVar10,uVar10) | 0x8000000080000000);
                          uVar32 = uVar31;
                          ppplVar24 = &local_a0;
                          do {
                            ppplVar24[-1] = pplVar23;
                            ppplVar24[-2] = pplVar19;
                            ppplVar24[1] = pplVar23;
                            *ppplVar24 = pplVar19;
                            ppplVar24 = ppplVar24 + 4;
                            uVar32 = uVar32 - 8;
                          } while (uVar32 != 0);
                          if (uVar31 == uVar34) goto LAB_00c44e44;
                        }
                        lVar13 = uVar34 - uVar31;
                        puVar22 = local_b0 + uVar31;
                        do {
                          lVar13 = lVar13 + -1;
                          *puVar22 = uVar10 | 0x80000000;
                          puVar22 = puVar22 + 1;
                        } while (lVar13 != 0);
                      }
LAB_00c44e44:
                      uVar12 = uVar12 | 0x80000000;
                      if (*piVar35 == 6) {
                        local_b0[(uint)piVar35[2]] = uVar12;
                      }
                      else if (uVar26 != 0) {
                        uVar34 = (ulong)uVar26;
                        if (uVar26 == 1) {
                          uVar31 = 0;
                        }
                        else {
                          uVar31 = uVar34 & 0xfffffffe;
                          pbVar25 = (byte *)((long)piVar35 + 9);
                          uVar32 = uVar31;
                          do {
                            uVar32 = uVar32 - 2;
                            bVar5 = *pbVar25;
                            local_b0[pbVar25[-1]] = uVar12;
                            local_b0[bVar5] = uVar12;
                            pbVar25 = pbVar25 + 2;
                          } while (uVar32 != 0);
                          if (uVar31 == uVar34) goto LAB_00c44ec0;
                        }
                        lVar13 = uVar34 - uVar31;
                        pbVar25 = (byte *)((long)piVar35 + uVar31 + 8);
                        do {
                          lVar13 = lVar13 + -1;
                          local_b0[*pbVar25] = uVar12;
                          pbVar25 = pbVar25 + 1;
                        } while (lVar13 != 0);
                      }
LAB_00c44ec0:
                      local_a0 = (long **)CONCAT44(uVar4 + 0x10000,0x11);
                      local_90._4_4_ = (undefined4)uStack_a8;
                      local_88 = (uint)((ulong)uStack_a8 >> 0x20);
                      uStack_94 = local_b0[0];
                      local_90._0_4_ = local_b0[1];
                      uStack_98 = uVar37;
                      IR_InstructionSequence::emitReplace
                                ((IR_InstructionSequence *)param_1,uVar11,(uint *)&local_a0);
                    }
                  }
                }
              }
            }
            else {
              lVar13 = *(long *)(param_1 + 0x20);
              lVar18 = *(long *)(param_1 + 0x28);
              pvVar27 = (vector *)(ulong)(uVar11 + 1);
              uVar12 = uVar37;
              if (pvVar27 < (vector *)(lVar18 - lVar13 >> 3)) {
                do {
                  piVar35 = *(int **)(lVar13 + (long)pvVar27 * 8);
                  uVar26 = piVar35[1];
                  if (*piVar35 == 0xf) {
                    if (*(uint *)((long)piVar35 + ((ulong)(uVar26 >> 0xe) & 0x3fffc) + 0xc) ==
                        uVar12) {
                      iVar9 = countRegisterReads((IR_Section *)param_1,uVar12,(int)pvVar30 + 2);
                      if (iVar9 == 0) {
                        if ((uVar26 & 0xffff) == 3) {
                          if (*(uint *)((long)piVar35 +
                                       ((ulong)((uint)piVar35[1] >> 0xe) & 0x3fffc) + 0x10) != uVar4
                             ) goto LAB_00c44c30;
                        }
                        else if ((uVar26 & 0xffff) != 2) {
LAB_00c44c30:
                          lVar13 = *(long *)(param_1 + 0x20);
                          lVar18 = *(long *)(param_1 + 0x28);
                          uVar12 = piVar35[2];
                          goto LAB_00c44c38;
                        }
                        *puVar36 = 0x100010000001a;
                        *(uint *)(puVar36 + 1) = uVar37;
                        *(uint *)((long)puVar36 + 0xc) = uVar10;
                      }
                      break;
                    }
                  }
                  else if (((*piVar35 == 0xe) && (piVar35[(ulong)(uVar26 >> 0x10) + 2] == uVar12))
                          && (piVar35[(uVar26 >> 0x10) + 3] == uVar4)) break;
LAB_00c44c38:
                  pvVar28 = (vector *)(ulong)((int)pvVar27 + 1);
                  pvVar30 = pvVar27;
                  pvVar27 = pvVar28;
                } while (pvVar28 < (vector *)(lVar18 - lVar13 >> 3));
              }
            }
          }
LAB_00c44ba4:
          uVar12 = *(uint *)(puVar36 + 1);
          if (-1 < (int)uVar12) {
            puVar2 = (undefined4 *)(*(long *)param_2 + (ulong)uVar12 * 0x20);
            *puVar2 = 0;
            *(undefined8 *)(puVar2 + 4) = 0;
            puVar2[6] = uVar12;
          }
          break;
        case 0x10:
          uVar37 = *(uint *)(puVar36 + 1);
          if (-1 < (int)uVar37) {
            uVar12 = *(uint *)((long)puVar36 + (ulong)(uVar12 + 2) * 4);
            if ((int)uVar12 < 0) {
              iVar9 = -1;
              piVar35 = (int *)(*(long *)(*(long *)param_1 + 0x80) +
                               ((ulong)uVar12 & 0x7fffffff) * 0x18);
              local_a0 = *(long ***)(piVar35 + 1);
              iVar3 = *piVar35;
              uStack_98 = piVar35[3];
            }
            else {
              piVar35 = (int *)(*(long *)param_2 + (ulong)uVar12 * 0x20);
              local_a0 = *(long ***)(piVar35 + 1);
              iVar3 = *piVar35;
              uStack_98 = piVar35[3];
              iVar9 = piVar35[6];
            }
            if (iVar3 == 0) {
              puVar2 = (undefined4 *)(*(long *)param_2 + (ulong)uVar37 * 0x20);
              *puVar2 = 0;
              *(undefined8 *)(puVar2 + 4) = 0;
              puVar2[6] = uVar37;
            }
            else {
              uVar14 = IR_RegisterSet::getRegisterType
                                 ((IR_RegisterSet *)(*(long *)param_1 + 0x98),uVar37);
              piVar35 = (int *)(*(long *)param_2 + (ulong)uVar37 * 0x20);
              *piVar35 = iVar3;
              piVar35[3] = uStack_98;
              *(undefined8 *)(piVar35 + 4) = uVar14;
              piVar35[6] = iVar9;
              *(long ***)(piVar35 + 1) = local_a0;
            }
          }
          break;
        case 0x19:
          if (0xffff < uVar37) {
            uVar34 = 0;
            if (uVar12 < 2) {
              uVar12 = 1;
            }
            lVar13 = 0x18;
            do {
              uVar37 = *(uint *)((long)puVar36 + uVar34 * 4 + 8);
              if (-1 < (int)uVar37) {
                if (uVar34 < (ulong)(*(long *)(param_3 + 8) - *(long *)param_3 >> 5)) {
                  puVar22 = (uint *)(*(long *)param_3 + lVar13);
                  uVar38 = *(undefined8 *)(puVar22 + -4);
                  uVar14 = *(undefined8 *)(puVar22 + -6);
                  puVar1 = (undefined8 *)(*(long *)param_2 + (ulong)uVar37 * 0x20);
                  if (*puVar22 != 0xffffffff || puVar22[-6] != 0) {
                    uVar37 = *puVar22;
                  }
                  puVar1[2] = *(undefined8 *)(puVar22 + -2);
                  puVar1[1] = uVar38;
                  *puVar1 = uVar14;
                  *(uint *)(puVar1 + 3) = uVar37;
                }
                else {
                  puVar2 = (undefined4 *)(*(long *)param_2 + (ulong)uVar37 * 0x20);
                  *puVar2 = 0;
                  *(undefined8 *)(puVar2 + 4) = 0;
                  puVar2[6] = uVar37;
                }
              }
              uVar34 = uVar34 + 1;
              lVar13 = lVar13 + 0x20;
            } while (uVar12 != uVar34);
          }
        }
      }
      else {
        foldAluInstruction((uint *)param_1,(vector *)puVar36,bVar8,param_5);
        uVar37 = local_88;
        uVar12 = *(uint *)(puVar36 + 1);
        if (-1 < (int)uVar12) {
          uVar10 = uVar12;
          if (local_88 != 0xffffffff || (int)local_a0 != 0) {
            uVar10 = local_88;
          }
          pplVar19 = (long **)(*(long *)param_2 + (ulong)uVar12 * 0x20);
          pplVar19[2] = (long *)CONCAT44(local_90._4_4_,(undefined4)local_90);
          pplVar19[1] = (long *)CONCAT44(uStack_94,uStack_98);
          *pplVar19 = (long *)local_a0;
          *(uint *)(pplVar19 + 3) = uVar10;
          if (((((int)local_a0 == 0) && (local_88 != 0xffffffff)) &&
              (lVar13 = IR_RegisterSet::getRegisterName
                                  ((IR_RegisterSet *)(*(long *)param_1 + 0x98),uVar12), lVar13 != 0)
              ) && (lVar13 = IR_RegisterSet::getRegisterName
                                       ((IR_RegisterSet *)(*(long *)param_1 + 0x98),uVar37),
                   lVar13 == 0)) {
            lVar13 = *(long *)param_1;
            IR_RegisterSet::getRegisterName((IR_RegisterSet *)(lVar13 + 0x98),uVar12);
            IR_RegisterSet::setRegisterName
                      ((uint)(IR_RegisterSet *)(lVar13 + 0x98),(char *)(ulong)uVar37);
          }
        }
      }
      lVar13 = *(long *)(param_1 + 0x20);
      pvVar30 = (vector *)(ulong)(uVar11 + 1);
      lVar18 = *(long *)(param_1 + 0x28);
    } while (pvVar30 < (vector *)(*(long *)(param_1 + 0x28) - lVar13 >> 3));
  }
  if (!param_5) goto LAB_00c451b8;
  uStack_98 = 0;
  uStack_94 = 0;
  local_90._0_4_ = 0;
  local_90._4_4_ = 0;
  local_90 = 0;
  local_a0 = (long **)&uStack_98;
  lVar7 = 0;
  if (lVar18 != lVar13) {
    uVar34 = 0;
LAB_00c44f34:
    piVar35 = *(int **)(lVar13 + uVar34 * 8);
    uVar12 = piVar35[1];
    uVar11 = uVar12 & 0xffff;
    if (uVar11 != 0) {
      uVar37 = 0;
      iVar9 = *piVar35;
      do {
        uVar32 = (ulong)uVar37 + 2;
        uVar12 = piVar35[(int)uVar32 + (uVar12 >> 0x10)];
        uVar31 = (ulong)uVar12;
        if (-1 < (int)uVar12) {
          piVar15 = (int *)(*(long *)param_2 + uVar31 * 0x20);
          if (*piVar15 == 0) {
            uVar10 = piVar15[6];
            if (uVar10 != 0xffffffff && uVar10 != uVar12) {
                    /* try { // try from 00c44fdc to 00c4505f has its CatchHandler @ 00c45214 */
              uVar16 = IR_RegisterSet::hasRegister((IR_RegisterSet *)(lVar21 + 0x98),uVar10);
              if ((uVar16 & 1) == 0) {
                IR_RegisterSet::copyRegisterDetails
                          ((IR_RegisterSet *)(lVar21 + 0x98),uVar12,
                           *(uint *)(*(long *)param_2 + uVar31 * 0x20 + 0x18));
              }
              piVar35[(ulong)*(ushort *)((long)piVar35 + 6) + (uVar32 & 0xffffffff)] =
                   *(int *)(*(long *)param_2 + uVar31 * 0x20 + 0x18);
            }
          }
          else if ((iVar9 == 0xf) && (uVar37 == 1)) {
            pplVar19 = (long **)CONCAT44(uStack_94,uStack_98);
            pplVar23 = (long **)&uStack_98;
            pplVar33 = (long **)&uStack_98;
            while (pplVar19 != (long **)0x0) {
              while (pplVar33 = pplVar19, uVar12 < *(uint *)((long)pplVar33 + 0x1c)) {
                pplVar23 = pplVar33;
                pplVar19 = (long **)*pplVar33;
                if ((long **)*pplVar33 == (long **)0x0) {
                  plVar20 = *pplVar33;
                  goto joined_r0x00c450a4;
                }
              }
              if (uVar12 <= *(uint *)((long)pplVar33 + 0x1c)) break;
              pplVar23 = pplVar33 + 1;
              pplVar19 = (long **)*pplVar23;
            }
            plVar20 = *pplVar23;
joined_r0x00c450a4:
            if (plVar20 == (long *)0x0) {
              plVar20 = (long *)operator_new(0x20);
              *(uint *)((long)plVar20 + 0x1c) = uVar12;
              *plVar20 = 0;
              plVar20[1] = 0;
              plVar20[2] = (long)pplVar33;
              *pplVar23 = plVar20;
              if ((long **)*local_a0 != (long **)0x0) {
                plVar20 = *pplVar23;
                local_a0 = (long **)*local_a0;
              }
              std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                        ((__tree_node_base *)CONCAT44(uStack_94,uStack_98),
                         (__tree_node_base *)plVar20);
              lVar13 = local_90 + 1;
              local_90._0_4_ = (undefined4)lVar13;
              local_90._4_4_ = (undefined4)((ulong)lVar13 >> 0x20);
              local_90 = lVar13;
            }
          }
          else {
            uVar12 = IR_Function::storeConst(*(IR_Function **)param_1,(IR_TConst *)piVar15);
            piVar35[*(ushort *)((long)piVar35 + 6) + uVar32] = uVar12 | 0x80000000;
          }
        }
        uVar37 = uVar37 + 1;
        if (uVar37 == uVar11) goto LAB_00c44f1c;
        uVar12 = piVar35[1];
      } while( true );
    }
    goto LAB_00c44f24;
  }
LAB_00c45180:
                    /* try { // try from 00c45180 to 00c4518f has its CatchHandler @ 00c45208 */
  local_90 = lVar7;
  checkHssaCorrectness((char *)param_1);
  do {
                    /* try { // try from 00c45190 to 00c451a3 has its CatchHandler @ 00c45210 */
    uVar11 = killDeadRegisters();
    uVar12 = clearDeadInsts();
  } while (((uVar11 | uVar12) & 1) != 0);
  std::__ndk1::
  __tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>::destroy
            ((__tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
              *)&local_a0,(__tree_node *)CONCAT44(uStack_94,uStack_98));
LAB_00c451b8:
  if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00c44f1c:
  lVar13 = *(long *)(param_1 + 0x20);
  lVar18 = *(long *)(param_1 + 0x28);
LAB_00c44f24:
  uVar34 = (ulong)((int)uVar34 + 1);
  if ((ulong)(lVar18 - lVar13 >> 3) <= uVar34) goto LAB_00c450bc;
  goto LAB_00c44f34;
LAB_00c450bc:
  lVar7 = local_90;
  if (lVar18 != lVar13) {
    uVar34 = 0;
    do {
      lVar21 = *(long *)(lVar13 + uVar34 * 8);
      uVar11 = *(uint *)(lVar21 + 4);
      if (0xffff < uVar11) {
        uVar32 = 0;
        do {
          uVar12 = *(uint *)(lVar21 + (uVar32 + 2) * 4);
          if ((-1 < (int)uVar12) && (*(int *)(*(long *)param_2 + (ulong)uVar12 * 0x20) != 0)) {
            pplVar23 = (long **)CONCAT44(uStack_94,uStack_98);
            pplVar19 = (long **)&uStack_98;
            if (pplVar23 != (long **)0x0) {
              do {
                bVar8 = *(uint *)((long)pplVar23 + 0x1c) < uVar12;
                if (!bVar8) {
                  pplVar19 = pplVar23;
                }
                pplVar23 = (long **)pplVar23[bVar8];
              } while (pplVar23 != (long **)0x0);
              if ((pplVar19 != (long **)&uStack_98) && (*(uint *)((long)pplVar19 + 0x1c) <= uVar12))
              goto LAB_00c45118;
            }
            local_b0[0] = 0;
                    /* try { // try from 00c45108 to 00c4510f has its CatchHandler @ 00c4520c */
            local_90 = lVar7;
            uVar12 = IR_Function::storeConst(*(IR_Function **)param_1,(IR_Const *)local_b0);
            *(uint *)(lVar21 + (uVar32 + 2) * 4) = uVar12 | 0x80000000;
            lVar7 = local_90;
          }
LAB_00c45118:
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar11 >> 0x10);
        lVar13 = *(long *)(param_1 + 0x20);
        lVar18 = *(long *)(param_1 + 0x28);
      }
      uVar34 = (ulong)((int)uVar34 + 1);
    } while (uVar34 < (ulong)(lVar18 - lVar13 >> 3));
  }
  goto LAB_00c45180;
}


