// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveImage
// Entry Point: 00a92344
// Size: 1124 bytes
// Signature: undefined __cdecl saveImage(char * param_1, ImageDesc * param_2)


/* WARNING: Type propagation algorithm not settling */
/* HDRUtil::saveImage(char const*, ImageDesc const&) */

void HDRUtil::saveImage(char *param_1,ImageDesc *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined *puVar11;
  undefined uVar12;
  undefined uVar13;
  undefined uVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  float *pfVar19;
  ulong uVar20;
  undefined *puVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  byte local_188;
  undefined local_187;
  undefined4 local_184;
  undefined auStack_180 [256];
  long local_80;
  ulong uVar18;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  if ((*(int *)(param_2 + 0x40) == 3) || (*(int *)(param_2 + 0x18) == 8)) {
    plVar10 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,1,
                                       false);
    if (plVar10 == (long *)0x0) goto LAB_00a92764;
    iVar6 = FUN_00a927a8(auStack_180);
    iVar7 = (**(code **)(*plVar10 + 0x30))(plVar10,auStack_180,iVar6);
    if (iVar7 == iVar6) {
      uVar2 = *(uint *)param_2;
      lVar22 = (long)(int)uVar2;
      puVar11 = (undefined *)operator_new__(lVar22 << 2);
      uVar17 = *(uint *)(param_2 + 4);
      if (uVar17 != 0) {
        uVar16 = 0;
        do {
          uVar17 = uVar17 + ~uVar16;
          if (*(int *)(param_2 + 0x44) != 1) {
            uVar17 = uVar16;
          }
          if (0 < (int)uVar2) {
            pfVar19 = (float *)(*(long *)(param_2 + 0x28) + (ulong)(uVar2 * 3 * uVar17) * 4 + 4);
            uVar20 = (ulong)uVar2;
            puVar21 = puVar11;
            do {
              fVar25 = *pfVar19;
              if (*pfVar19 <= pfVar19[-1]) {
                fVar25 = pfVar19[-1];
              }
              fVar26 = pfVar19[1];
              if (pfVar19[1] <= fVar25) {
                fVar26 = fVar25;
              }
              if (1e-32 <= fVar26) {
                fVar25 = frexpf(fVar26,&local_184);
                bVar15 = (byte)local_184 ^ 0x80;
                fVar26 = (fVar25 * 256.0) / fVar26;
                uVar13 = (undefined)(int)(pfVar19[-1] * fVar26);
                uVar12 = (undefined)(int)(fVar26 * *pfVar19);
                uVar14 = (undefined)(int)(fVar26 * pfVar19[1]);
              }
              else {
                uVar12 = 0;
                uVar13 = 0;
                uVar14 = 0;
                bVar15 = 0;
              }
              *puVar21 = uVar13;
              uVar20 = uVar20 - 1;
              puVar21[lVar22] = uVar12;
              pfVar19 = pfVar19 + 3;
              puVar21[lVar22 * 2] = uVar14;
              puVar21[(int)(uVar2 * 3)] = bVar15;
              puVar21 = puVar21 + 1;
            } while (uVar20 != 0);
          }
          local_184._3_1_ = (undefined)uVar2;
          local_184._0_2_ = 0x202;
          local_184._2_1_ = (char)(uVar2 >> 8);
          (**(code **)(*plVar10 + 0x30))(plVar10,&local_184,4);
          bVar5 = true;
          uVar20 = 0;
          do {
            if (0 < (int)uVar2) {
              iVar6 = 0;
              lVar3 = uVar20 * lVar22;
              do {
                if (iVar6 < (int)uVar2) {
                  uVar18 = 0;
                  iVar7 = iVar6;
                  do {
                    uVar23 = uVar18;
                    iVar8 = (int)uVar23;
                    iVar7 = iVar8 + iVar7;
                    if (iVar7 + 1 < (int)uVar2) {
                      uVar18 = 1;
                      do {
                        uVar17 = (uint)uVar18;
                        if (puVar11[iVar7 + lVar3] != puVar11[(int)(iVar7 + uVar17) + lVar3])
                        goto joined_r0x00a925e8;
                        uVar24 = uVar18 + 1;
                      } while ((uVar18 < 0x7e) &&
                              (lVar1 = (long)iVar7 + uVar18, uVar18 = uVar24, lVar1 + 1 < lVar22));
                    }
                    else {
                      uVar24 = 1;
                    }
                    uVar17 = (uint)uVar24;
                    uVar18 = uVar24;
joined_r0x00a925e8:
                  } while ((uVar17 < 4) && (iVar7 < (int)uVar2));
                  if ((1 < iVar8) && (iVar8 == iVar7 - iVar6)) {
                    local_188 = (byte)uVar23 ^ 0x80;
                    local_187 = puVar11[iVar6 + lVar3];
                    iVar8 = (**(code **)(*plVar10 + 0x30))(plVar10,&local_188,2);
                    iVar6 = iVar7;
                    if (0 < iVar8) goto LAB_00a9263c;
LAB_00a92704:
                    operator_delete__(puVar11);
                    (**(code **)(*plVar10 + 8))(plVar10);
                    if (!bVar5) goto LAB_00a92738;
                    plVar10 = (long *)0x0;
                    goto LAB_00a92764;
                  }
                  for (; iVar6 < iVar7; iVar6 = iVar8 + iVar6) {
                    iVar8 = iVar7 - iVar6;
                    if (0x7f < iVar8) {
                      iVar8 = 0x80;
                    }
                    local_188 = (byte)iVar8;
                    iVar9 = (**(code **)(*plVar10 + 0x30))(plVar10,&local_188,1);
                    if ((iVar9 < 1) ||
                       (iVar9 = (**(code **)(*plVar10 + 0x30))
                                          (plVar10,puVar11 + iVar6 + lVar3,iVar8), iVar9 < 1))
                    goto LAB_00a92704;
                  }
LAB_00a9263c:
                  if (3 < (uint)uVar18) {
                    local_188 = (byte)uVar18 ^ 0x80;
                    local_187 = puVar11[iVar7 + lVar3];
                    iVar7 = (**(code **)(*plVar10 + 0x30))(plVar10,&local_188,2);
                    if (iVar7 < 1) goto LAB_00a92704;
                    iVar6 = iVar6 + (uint)uVar18;
                  }
                }
              } while (iVar6 < (int)uVar2);
            }
            uVar18 = uVar20 + 1;
            bVar5 = uVar20 < 3;
            uVar20 = uVar18;
          } while (uVar18 != 4);
LAB_00a92738:
          uVar17 = *(uint *)(param_2 + 4);
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar17);
      }
      (**(code **)(*plVar10 + 8))(plVar10);
      plVar10 = (long *)0x1;
      goto LAB_00a92764;
    }
  }
  plVar10 = (long *)0x0;
LAB_00a92764:
  if (*(long *)(lVar4 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar10);
  }
  return;
}


