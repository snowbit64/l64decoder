// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcMedianFilterWalkableArea
// Entry Point: 00ddb000
// Size: 2428 bytes
// Signature: undefined __cdecl rcMedianFilterWalkableArea(rcContext * param_1, rcCompactHeightfield * param_2)


/* WARNING: Type propagation algorithm not settling */
/* rcMedianFilterWalkableArea(rcContext*, rcCompactHeightfield&) */

void rcMedianFilterWalkableArea(rcContext *param_1,rcCompactHeightfield *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  long lVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  void *__s;
  ulong uVar17;
  byte bVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  byte bVar28;
  long lVar29;
  byte local_74 [12];
  long local_68;
  
  lVar12 = tpidr_el0;
  local_68 = *(long *)(lVar12 + 0x28);
  uVar7 = *(uint *)param_2;
  uVar20 = (ulong)uVar7;
  uVar8 = *(uint *)(param_2 + 4);
  if (param_1[9] != (rcContext)0x0) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,9);
  }
  __s = (void *)rcAlloc(*(int *)(param_2 + 8),1);
  if (__s == (void *)0x0) {
    rcContext::log((rcLogCategory)param_1,(char *)0x3,
                   "medianFilterWalkableArea: Out of memory \'areas\' (%d).");
  }
  else {
    memset(__s,0xff,(long)*(int *)(param_2 + 8));
    if ((0 < (int)uVar8) && (0 < (int)uVar7)) {
      uVar22 = 0;
      do {
        uVar21 = 0;
        lVar19 = (uVar22 - 1) * uVar20;
        lVar23 = uVar22 * uVar20;
        lVar2 = uVar20 + lVar23;
        do {
          uVar7 = *(uint *)(*(long *)(param_2 + 0x40) + (uVar21 + lVar23) * 4);
          if (uVar7 >> 0x18 != 0) {
            uVar27 = (ulong)uVar7 & 0xffffff;
            lVar25 = uVar21 - 1;
            uVar3 = uVar27 + (uVar7 >> 0x18);
            lVar1 = uVar21 + 1;
            uVar17 = uVar27 << 3 | 4;
            do {
              while( true ) {
                lVar29 = *(long *)(param_2 + 0x58);
                bVar9 = *(byte *)(lVar29 + uVar27);
                if (bVar9 == 0) break;
                bVar10 = *(byte *)(lVar29 + uVar27);
                lVar5 = *(long *)(param_2 + 0x40);
                lVar6 = *(long *)(param_2 + 0x48);
                *(short *)((int *)((ulong)local_74 | 1) + 1) = (short)((uint)bVar10 * 0x1010101);
                *(int *)((ulong)local_74 | 1) = (uint)bVar10 * 0x1010101;
                uVar26 = (ulong)*(uint *)(lVar6 + uVar17) & 0x3f;
                local_74[0] = bVar9;
                if ((int)uVar26 == 0x3f) {
LAB_00ddb20c:
                  uVar26 = (ulong)(*(uint *)(lVar6 + uVar17) >> 6) & 0x3f;
                  iVar24 = (int)uVar26;
                  bVar9 = bVar10;
                  bVar13 = local_74[0];
                }
                else {
                  lVar4 = ((ulong)*(uint *)(lVar5 + (lVar23 + lVar25) * 4) & 0xffffff) + uVar26;
                  bVar9 = *(byte *)(lVar29 + lVar4);
                  if (bVar9 != 0) {
                    local_74[0] = bVar9;
                  }
                  uVar26 = (ulong)(*(uint *)(lVar6 + lVar4 * 8 + 4) >> 6) & 0x3f;
                  if (((int)uVar26 == 0x3f) ||
                     (bVar9 = *(byte *)(lVar29 + ((ulong)*(uint *)(lVar5 + (lVar25 + lVar2) * 4) &
                                                 0xffffff) + uVar26), bVar9 == 0))
                  goto LAB_00ddb20c;
                  uVar26 = (ulong)(*(uint *)(lVar6 + uVar17) >> 6) & 0x3f;
                  iVar24 = (int)uVar26;
                  bVar13 = local_74[0];
                  local_74[1] = bVar9;
                }
                bVar28 = bVar10;
                if (iVar24 != 0x3f) {
                  lVar4 = ((ulong)*(uint *)(lVar5 + (lVar2 + uVar21) * 4) & 0xffffff) + uVar26;
                  bVar18 = *(byte *)(lVar29 + lVar4);
                  if (bVar18 != 0) {
                    local_74[2] = bVar18;
                    bVar28 = bVar18;
                  }
                  uVar26 = (ulong)(*(uint *)(lVar6 + lVar4 * 8 + 4) >> 0xc) & 0x3f;
                  if (((int)uVar26 != 0x3f) &&
                     (bVar18 = *(byte *)(lVar29 + ((ulong)*(uint *)(lVar5 + (lVar1 + lVar2) * 4) &
                                                  0xffffff) + uVar26), bVar18 != 0)) {
                    local_74[3] = bVar18;
                  }
                }
                uVar26 = (ulong)(*(uint *)(lVar6 + uVar17) >> 0xc) & 0x3f;
                bVar18 = bVar10;
                if ((int)uVar26 != 0x3f) {
                  lVar4 = ((ulong)*(uint *)(lVar5 + (lVar23 + lVar1) * 4) & 0xffffff) + uVar26;
                  bVar11 = *(byte *)(lVar29 + lVar4);
                  if (bVar11 != 0) {
                    bVar18 = bVar11;
                  }
                  uVar26 = (ulong)(*(uint *)(lVar6 + lVar4 * 8 + 4) >> 0x12) & 0x3f;
                  if (((int)uVar26 != 0x3f) &&
                     (bVar11 = *(byte *)(lVar29 + ((ulong)*(uint *)(lVar5 + (lVar1 + lVar19) * 4) &
                                                  0xffffff) + uVar26), bVar11 != 0)) {
                    local_74[5] = bVar11;
                  }
                }
                uVar26 = (ulong)(*(uint *)(lVar6 + uVar17) >> 0x12) & 0x3f;
                local_74[7] = bVar10;
                if ((int)uVar26 != 0x3f) {
                  lVar4 = ((ulong)*(uint *)(lVar5 + (lVar19 + uVar21) * 4) & 0xffffff) + uVar26;
                  bVar11 = *(byte *)(lVar29 + lVar4);
                  if (bVar11 != 0) {
                    local_74[6] = bVar11;
                  }
                  uVar26 = (ulong)*(uint *)(lVar6 + lVar4 * 8 + 4) & 0x3f;
                  if (((int)uVar26 != 0x3f) &&
                     (bVar11 = *(byte *)(lVar29 + ((ulong)*(uint *)(lVar5 + (lVar25 + lVar19) * 4) &
                                                  0xffffff) + uVar26), bVar11 != 0)) {
                    local_74[7] = bVar11;
                  }
                }
                bVar11 = local_74[5];
                bVar14 = local_74[7];
                bVar15 = local_74[6];
                if (bVar9 < bVar13) {
                  local_74[0] = bVar9;
                  local_74[1] = bVar13;
                  if (bVar28 < bVar13) goto LAB_00ddb3b8;
LAB_00ddb344:
                  *(byte *)((ulong)local_74 | 2) = bVar28;
joined_r0x00ddb438:
                  if (local_74[3] < local_74[2]) goto LAB_00ddb360;
LAB_00ddb43c:
                  *(byte *)((ulong)local_74 | 3) = local_74[3];
                  bVar9 = local_74[0];
                  bVar13 = local_74[1];
                  local_74[4] = local_74[3];
joined_r0x00ddb398:
                  local_74[1] = bVar13;
                  local_74[0] = bVar9;
                  local_74[3] = local_74[4];
                  if (bVar18 < local_74[4]) goto LAB_00ddb454;
LAB_00ddb404:
                  bVar13 = local_74[0];
                  local_74[4] = bVar18;
                  bVar9 = local_74[3];
                  bVar28 = local_74[1];
                  if (local_74[5] < bVar18) goto LAB_00ddb4f4;
joined_r0x00ddb54c:
                  local_74[1] = bVar28;
                  bVar18 = bVar11;
                  local_74[0] = bVar13;
                  local_74[5] = bVar18;
                  bVar13 = local_74[1];
                  bVar28 = local_74[2];
                  if (bVar18 <= local_74[6]) goto joined_r0x00ddb674;
LAB_00ddb5d4:
                  local_74[3] = bVar9;
                  bVar13 = local_74[0];
                  bVar9 = local_74[3];
                  bVar28 = local_74[2];
                  bVar11 = local_74[1];
                  local_74[5] = local_74[6];
                  if ((local_74[6] < local_74[4]) &&
                     (((bVar15 = bVar18, local_74[5] = local_74[4], bVar13 = local_74[1],
                       local_74[4] = local_74[6], local_74[3] <= local_74[6] ||
                       (bVar9 = local_74[6], local_74[4] = local_74[3], local_74[2] <= local_74[6]))
                      || ((bVar28 = local_74[6], bVar9 = local_74[2], local_74[4] = local_74[3],
                          local_74[1] <= local_74[6] ||
                          (bVar13 = local_74[6], local_74[4] = local_74[3], bVar9 = local_74[2],
                          bVar28 = local_74[1], bVar11 = local_74[0], local_74[0] <= local_74[6]))))
                     )) goto joined_r0x00ddb674;
                  local_74[1] = bVar11;
                  local_74[2] = bVar28;
                  local_74[3] = bVar9;
                  local_74[0] = bVar13;
                  bVar9 = local_74[0];
                  local_74[6] = bVar18;
                  bVar13 = local_74[4];
                  bVar28 = local_74[3];
                  bVar11 = local_74[2];
                  bVar15 = local_74[1];
                  if (local_74[7] < bVar18) goto LAB_00ddb6e8;
joined_r0x00ddb75c:
                  local_74[1] = bVar15;
                  local_74[2] = bVar11;
                  local_74[3] = bVar28;
                  local_74[4] = bVar13;
                  local_74[7] = bVar14;
                  local_74[0] = bVar9;
                  if (bVar10 < local_74[7]) goto LAB_00ddb7f4;
LAB_00ddb778:
                  lVar29 = 8;
                  local_74[8] = bVar10;
                }
                else {
                  *(byte *)((ulong)local_74 | 1) = bVar9;
                  local_74[0] = bVar13;
                  if (local_74[1] <= bVar28) goto LAB_00ddb344;
LAB_00ddb3b8:
                  local_74[2] = local_74[1];
                  bVar9 = local_74[0];
                  if (local_74[0] <= bVar28) {
                    *(byte *)((ulong)local_74 | 1) = bVar28;
                    goto joined_r0x00ddb438;
                  }
                  local_74[1] = local_74[0];
                  local_74[0] = bVar28;
                  if (local_74[2] <= local_74[3]) goto LAB_00ddb43c;
LAB_00ddb360:
                  local_74[4] = local_74[2];
                  if (local_74[1] <= local_74[3]) {
                    *(byte *)((ulong)local_74 | 2) = local_74[3];
                    bVar9 = local_74[0];
                    bVar13 = local_74[1];
                    goto joined_r0x00ddb398;
                  }
                  local_74[2] = local_74[1];
                  bVar9 = local_74[3];
                  bVar13 = local_74[0];
                  if (local_74[3] < local_74[0]) goto joined_r0x00ddb398;
                  *(byte *)((ulong)local_74 | 1) = local_74[3];
                  local_74[3] = local_74[4];
                  if (local_74[4] <= bVar18) goto LAB_00ddb404;
LAB_00ddb454:
                  local_74[3] = bVar18;
                  bVar9 = local_74[2];
                  bVar13 = local_74[0];
                  if ((bVar18 < local_74[2]) &&
                     ((bVar13 = local_74[1], bVar9 = bVar18, local_74[1] <= bVar18 ||
                      (bVar13 = bVar18, bVar9 = local_74[1], local_74[3] = local_74[2],
                      local_74[1] = local_74[0], local_74[0] <= bVar18)))) {
                    local_74[3] = local_74[2];
                    local_74[1] = bVar13;
                    bVar13 = local_74[0];
                  }
                  local_74[0] = bVar13;
                  local_74[2] = bVar9;
                  bVar18 = local_74[4];
                  bVar13 = local_74[0];
                  bVar9 = local_74[3];
                  bVar28 = local_74[1];
                  if (local_74[4] <= local_74[5]) goto joined_r0x00ddb54c;
LAB_00ddb4f4:
                  bVar13 = local_74[0];
                  bVar11 = bVar18;
                  local_74[4] = local_74[5];
                  bVar9 = local_74[3];
                  bVar28 = local_74[1];
                  if ((local_74[3] <= local_74[5]) ||
                     (((local_74[4] = local_74[3], bVar9 = local_74[5], local_74[5] < local_74[2] &&
                       (bVar9 = local_74[2], local_74[2] = local_74[5], local_74[5] < local_74[1]))
                      && (bVar13 = local_74[5], local_74[2] = local_74[1], bVar28 = local_74[0],
                         local_74[1] = local_74[5], local_74[5] < local_74[0]))))
                  goto joined_r0x00ddb54c;
                  local_74[5] = bVar18;
                  bVar13 = local_74[1];
                  bVar28 = local_74[2];
                  if (local_74[6] < bVar18) goto LAB_00ddb5d4;
joined_r0x00ddb674:
                  local_74[3] = bVar9;
                  local_74[2] = bVar28;
                  local_74[1] = bVar13;
                  bVar18 = bVar15;
                  bVar9 = local_74[0];
                  local_74[6] = bVar18;
                  bVar13 = local_74[4];
                  bVar28 = local_74[3];
                  bVar11 = local_74[2];
                  bVar15 = local_74[1];
                  if (bVar18 <= local_74[7]) goto joined_r0x00ddb75c;
LAB_00ddb6e8:
                  bVar9 = local_74[0];
                  bVar14 = bVar18;
                  local_74[6] = local_74[7];
                  bVar13 = local_74[4];
                  bVar28 = local_74[3];
                  bVar11 = local_74[2];
                  bVar15 = local_74[1];
                  if ((local_74[5] <= local_74[7]) ||
                     (((local_74[6] = local_74[5], bVar16 = local_74[7], local_74[7] < local_74[4]
                       && (bVar16 = local_74[4], bVar13 = local_74[7], local_74[7] < local_74[3]))
                      && ((bVar16 = local_74[4], bVar13 = local_74[3], bVar28 = local_74[7],
                          local_74[7] < local_74[2] &&
                          ((bVar16 = local_74[4], bVar11 = local_74[7], bVar13 = local_74[3],
                           bVar28 = local_74[2], local_74[7] < local_74[1] &&
                           (bVar9 = local_74[7], local_74[5] = local_74[4], bVar13 = local_74[3],
                           bVar28 = local_74[2], bVar11 = local_74[1], bVar15 = local_74[0],
                           bVar16 = local_74[4], local_74[1] = local_74[7],
                           local_74[7] < local_74[0])))))))) goto joined_r0x00ddb75c;
                  local_74[3] = bVar28;
                  local_74[4] = bVar13;
                  local_74[2] = bVar11;
                  local_74[5] = bVar16;
                  local_74[7] = bVar18;
                  if (bVar18 <= bVar10) goto LAB_00ddb778;
LAB_00ddb7f4:
                  local_74[8] = local_74[7];
                  if (bVar10 < local_74[6]) {
                    local_74[7] = local_74[6];
                    if (bVar10 < local_74[5]) {
                      local_74[6] = local_74[5];
                      if (bVar10 < local_74[4]) {
                        local_74[5] = local_74[4];
                        if (bVar10 < local_74[3]) {
                          local_74[4] = local_74[3];
                          if (bVar10 < local_74[2]) {
                            local_74[3] = local_74[2];
                            if (bVar10 < local_74[1]) {
                              local_74[2] = local_74[1];
                              if (bVar10 < local_74[0]) {
                                lVar29 = 0;
                                local_74[1] = local_74[0];
                              }
                              else {
                                lVar29 = 1;
                              }
                            }
                            else {
                              lVar29 = 2;
                            }
                          }
                          else {
                            lVar29 = 3;
                          }
                        }
                        else {
                          lVar29 = 4;
                        }
                      }
                      else {
                        lVar29 = 5;
                      }
                    }
                    else {
                      lVar29 = 6;
                    }
                  }
                  else {
                    lVar29 = 7;
                  }
                }
                local_74[lVar29] = bVar10;
                *(byte *)((long)__s + uVar27) = local_74[4];
                uVar27 = uVar27 + 1;
                uVar17 = uVar17 + 8;
                if (uVar3 <= uVar27) goto LAB_00ddb0f4;
              }
              *(undefined *)((long)__s + uVar27) = 0;
              uVar27 = uVar27 + 1;
              uVar17 = uVar17 + 8;
            } while (uVar27 < uVar3);
          }
LAB_00ddb0f4:
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar20);
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar8);
    }
    memcpy(*(void **)(param_2 + 0x58),__s,(long)*(int *)(param_2 + 8));
    rcFree(__s);
    if (param_1[9] != (rcContext)0x0) {
      (**(code **)(*(long *)param_1 + 0x30))(param_1,9);
    }
  }
  if (*(long *)(lVar12 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s != (void *)0x0);
  }
  return;
}


