// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeAnimation
// Entry Point: 0091f1ec
// Size: 1528 bytes
// Signature: undefined __cdecl serializeAnimation(set * param_1, set * param_2, uchar * * param_3, uint * param_4)


/* AnimSerializationHelper::serializeAnimation(std::__ndk1::set<CharacterSet*,
   std::__ndk1::less<CharacterSet*>, std::__ndk1::allocator<CharacterSet*> >&,
   std::__ndk1::set<TransformGroup*, std::__ndk1::less<TransformGroup*>,
   std::__ndk1::allocator<TransformGroup*> >&, unsigned char*&, unsigned int&) */

void AnimSerializationHelper::serializeAnimation
               (set *param_1,set *param_2,uchar **param_3,uint *param_4)

{
  set **ppsVar1;
  undefined4 *puVar2;
  Clip *pCVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  long lVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  size_t sVar14;
  Clip *pCVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  set *psVar19;
  long lVar20;
  set **ppsVar21;
  set **ppsVar22;
  set **ppsVar23;
  set **ppsVar24;
  undefined8 *puVar25;
  char *__s;
  ulong uVar26;
  CharacterSet *pCVar27;
  uint uVar28;
  int iVar29;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  undefined8 local_88;
  int local_80;
  long local_78;
  
  lVar7 = tpidr_el0;
  uVar26 = 4;
  local_78 = *(long *)(lVar7 + 0x28);
  ppsVar1 = (set **)(param_2 + 8);
  *param_4 = 4;
  ppsVar21 = (set **)(param_1 + 8);
  if (*(set ***)param_1 == ppsVar21) {
    iVar13 = 0;
  }
  else {
    iVar13 = 0;
    uVar26 = 4;
    ppsVar24 = *(set ***)param_1;
    do {
      pCVar27 = (CharacterSet *)ppsVar24[4];
      *param_4 = (int)uVar26 + 4;
      sVar14 = strlen(*(char **)(pCVar27 + 8));
      *param_4 = ((int)sVar14 + 7U & 0xfffffffc) + *param_4;
      iVar9 = CharacterSet::getNumClips();
      if (iVar9 != 0) {
        uVar28 = 0;
        do {
          pCVar15 = (Clip *)CharacterSet::getClip(pCVar27,uVar28);
          *param_4 = *param_4 + 4;
          pCVar3 = pCVar15 + 9;
          if (((byte)pCVar15[8] & 1) != 0) {
            pCVar3 = *(Clip **)(pCVar15 + 0x18);
          }
          sVar14 = strlen((char *)pCVar3);
          *param_4 = *param_4 + ((int)sVar14 + 7U & 0xfffffffc) + 4;
          iVar9 = Clip::getNumOfTransforms();
          if (iVar9 != 0) {
            uVar10 = 0;
            do {
              lVar16 = Clip::getKeyframedTransformation(pCVar15,uVar10);
              uVar26 = KeyframedTransformation::getTransformIndex();
              ppsVar22 = (set **)*ppsVar1;
              if (ppsVar22 != (set **)0x0) {
                psVar19 = *(set **)(*(long *)(pCVar27 + 0xd0) + (uVar26 & 0xffffffff) * 8);
                ppsVar23 = ppsVar1;
                do {
                  if (ppsVar22[4] >= psVar19) {
                    ppsVar23 = ppsVar22;
                  }
                  ppsVar22 = (set **)ppsVar22[ppsVar22[4] < psVar19];
                } while (ppsVar22 != (set **)0x0);
                if ((ppsVar23 != ppsVar1) && (ppsVar23[4] <= psVar19)) {
                  *param_4 = *param_4 + 8;
                  iVar9 = KeyframedTransformation::getNumKeys();
                  if (iVar9 != 0) {
                    uVar26 = 0;
                    do {
                      uVar4 = *param_4;
                      lVar20 = *(long *)(*(long *)(lVar16 + 8) + uVar26 * 8);
                      uVar11 = uVar4 + 8;
                      *param_4 = uVar11;
                      uVar6 = *(ushort *)(lVar20 + 4);
                      if ((uVar6 & 1) != 0) {
                        uVar11 = uVar4 + 0x14;
                      }
                      if ((uVar6 & 2) != 0) {
                        uVar11 = uVar11 + 0xc;
                      }
                      if ((uVar6 & 7) != 0) {
                        if ((uVar6 & 4) != 0) {
                          uVar11 = uVar11 + 0xc;
                        }
                        *param_4 = uVar11;
                      }
                      uVar26 = uVar26 + 1;
                      uVar17 = KeyframedTransformation::getNumKeys();
                    } while (uVar26 < (uVar17 & 0xffffffff));
                  }
                }
              }
              uVar10 = uVar10 + 1;
              uVar11 = Clip::getNumOfTransforms();
            } while (uVar10 < uVar11);
          }
          uVar28 = uVar28 + 1;
          uVar10 = CharacterSet::getNumClips();
        } while (uVar28 < uVar10);
      }
      ppsVar22 = (set **)ppsVar24[1];
      if ((set **)ppsVar24[1] == (set **)0x0) {
        ppsVar22 = ppsVar24 + 2;
        ppsVar23 = (set **)*ppsVar22;
        if ((set **)*ppsVar23 != ppsVar24) {
          do {
            psVar19 = *ppsVar22;
            ppsVar22 = (set **)(psVar19 + 0x10);
            ppsVar23 = (set **)*ppsVar22;
          } while (*ppsVar23 != psVar19);
        }
      }
      else {
        do {
          ppsVar23 = ppsVar22;
          ppsVar22 = (set **)*ppsVar23;
        } while ((set **)*ppsVar23 != (set **)0x0);
      }
      iVar13 = iVar13 + 1;
      uVar26 = (ulong)*param_4;
      ppsVar24 = ppsVar23;
    } while (ppsVar23 != ppsVar21);
  }
  piVar18 = (int *)operator_new__(uVar26);
  *param_3 = (uchar *)piVar18;
  memset(piVar18,0,uVar26);
  *piVar18 = iVar13;
  if (*(set ***)param_1 != ppsVar21) {
    puVar25 = (undefined8 *)(piVar18 + 1);
    ppsVar24 = *(set ***)param_1;
    do {
      pCVar27 = (CharacterSet *)ppsVar24[4];
      __s = *(char **)(pCVar27 + 8);
      sVar14 = strlen(__s);
      iVar13 = (int)sVar14;
      *(int *)puVar25 = iVar13;
      memcpy((int *)((long)puVar25 + 4),__s,sVar14 & 0xffffffff);
      puVar2 = (undefined4 *)
               ((long)(int *)((long)puVar25 + 4) +
               (ulong)((iVar13 + 3U & 0xfffffffc) - iVar13) + (sVar14 & 0xffffffff));
      uVar12 = CharacterSet::getNumClips();
      puVar25 = (undefined8 *)(puVar2 + 1);
      *puVar2 = uVar12;
      iVar13 = CharacterSet::getNumClips();
      if (iVar13 != 0) {
        uVar28 = 0;
        do {
          pCVar15 = (Clip *)CharacterSet::getClip(pCVar27,uVar28);
          pCVar3 = pCVar15 + 9;
          if (((byte)pCVar15[8] & 1) != 0) {
            pCVar3 = *(Clip **)(pCVar15 + 0x18);
          }
          sVar14 = strlen((char *)pCVar3);
          iVar13 = (int)sVar14;
          *(int *)puVar25 = iVar13;
          memcpy((int *)((long)puVar25 + 4),pCVar3,sVar14 & 0xffffffff);
          puVar2 = (undefined4 *)
                   ((long)(int *)((long)puVar25 + 4) +
                   (ulong)((iVar13 + 3U & 0xfffffffc) - iVar13) + (sVar14 & 0xffffffff));
          uVar12 = Clip::getDuration();
          *puVar2 = uVar12;
          iVar13 = Clip::getNumOfTransforms();
          puVar25 = (undefined8 *)(puVar2 + 2);
          puVar2[1] = iVar13;
          if (iVar13 != 0) {
            iVar9 = 0;
            do {
              lVar16 = Clip::getKeyframedTransformation(pCVar15,iVar9);
              uVar26 = KeyframedTransformation::getTransformIndex();
              ppsVar22 = (set **)*ppsVar1;
              if (ppsVar22 != (set **)0x0) {
                psVar19 = *(set **)(*(long *)(pCVar27 + 0xd0) + (uVar26 & 0xffffffff) * 8);
                ppsVar23 = ppsVar1;
                do {
                  if (ppsVar22[4] >= psVar19) {
                    ppsVar23 = ppsVar22;
                  }
                  ppsVar22 = (set **)ppsVar22[ppsVar22[4] < psVar19];
                } while (ppsVar22 != (set **)0x0);
                if ((ppsVar23 != ppsVar1) && (ppsVar23[4] <= psVar19)) {
                  *(int *)puVar25 = *(int *)(psVar19 + 0x18);
                  uVar10 = KeyframedTransformation::getNumKeys();
                  *(uint *)((long)puVar25 + 4) = uVar10;
                  puVar25 = puVar25 + 1;
                  if (uVar10 != 0) {
                    lVar20 = 0;
                    do {
                      piVar18 = *(int **)(*(long *)(lVar16 + 8) + lVar20);
                      *(int *)puVar25 = *piVar18;
                      uVar6 = *(ushort *)(piVar18 + 1);
                      *(uint *)((long)puVar25 + 4) = uVar6 & 0x3ff;
                      if ((uVar6 & 1) == 0) {
                        puVar25 = puVar25 + 1;
                      }
                      else {
                        iVar29 = piVar18[4];
                        puVar25[1] = *(undefined8 *)(piVar18 + 2);
                        *(int *)(puVar25 + 2) = iVar29;
                        puVar25 = (undefined8 *)((long)puVar25 + 0x14);
                      }
                      if ((uVar6 >> 1 & 1) != 0) {
                        bVar5 = *(byte *)((long)piVar18 + 6);
                        local_90 = (float)(int)*(short *)((long)piVar18 + (ulong)bVar5 + 10) /
                                   32767.0;
                        fStack_94 = (float)(int)*(short *)((long)piVar18 + (ulong)bVar5 + 8) /
                                    32767.0;
                        fStack_8c = (float)(int)*(short *)((long)piVar18 + (ulong)bVar5 + 0xc) /
                                    32767.0;
                        local_98 = (float)(int)*(short *)((long)piVar18 + (ulong)bVar5 + 0xe) /
                                   32767.0;
                        uVar12 = NEON_fmadd(fStack_94,fStack_94,local_90 * local_90);
                        uVar12 = NEON_fmadd(fStack_8c,fStack_8c,uVar12);
                        fVar8 = (float)NEON_fmadd(local_98,local_98,uVar12);
                        fVar8 = 1.0 / SQRT(fVar8);
                        local_90 = local_90 * fVar8;
                        fStack_8c = fStack_8c * fVar8;
                        fStack_94 = fStack_94 * fVar8;
                        local_98 = local_98 * fVar8;
                        GsQuaternion::getEulerAngles((GsQuaternion *)&local_98,(Vector3 *)&local_88)
                        ;
                        *puVar25 = local_88;
                        *(int *)(puVar25 + 1) = local_80;
                        puVar25 = (undefined8 *)((long)puVar25 + 0xc);
                      }
                      if ((uVar6 >> 2 & 1) != 0) {
                        iVar29 = *(int *)((long)piVar18 + (ulong)*(byte *)((long)piVar18 + 7) + 0x10
                                         );
                        *puVar25 = *(undefined8 *)
                                    ((long)piVar18 + (ulong)*(byte *)((long)piVar18 + 7) + 8);
                        *(int *)(puVar25 + 1) = iVar29;
                        puVar25 = (undefined8 *)((long)puVar25 + 0xc);
                      }
                      lVar20 = lVar20 + 8;
                    } while ((ulong)uVar10 * 8 - lVar20 != 0);
                  }
                }
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 != iVar13);
          }
          uVar28 = uVar28 + 1;
          uVar10 = CharacterSet::getNumClips();
        } while (uVar28 < uVar10);
      }
      ppsVar22 = (set **)ppsVar24[1];
      if ((set **)ppsVar24[1] == (set **)0x0) {
        ppsVar22 = ppsVar24 + 2;
        ppsVar23 = (set **)*ppsVar22;
        if ((set **)*ppsVar23 != ppsVar24) {
          do {
            psVar19 = *ppsVar22;
            ppsVar22 = (set **)(psVar19 + 0x10);
            ppsVar23 = (set **)*ppsVar22;
          } while (*ppsVar23 != psVar19);
        }
      }
      else {
        do {
          ppsVar23 = ppsVar22;
          ppsVar22 = (set **)*ppsVar23;
        } while ((set **)*ppsVar23 != (set **)0x0);
      }
      ppsVar24 = ppsVar23;
    } while (ppsVar23 != ppsVar21);
  }
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


