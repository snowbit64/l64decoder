// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exportCharacterSets
// Entry Point: 00916760
// Size: 3052 bytes
// Signature: undefined __cdecl exportCharacterSets(set * param_1, set * param_2, FileOutputStream * param_3)


/* I3DSave::exportCharacterSets(std::__ndk1::set<CharacterSet*, std::__ndk1::less<CharacterSet*>,
   std::__ndk1::allocator<CharacterSet*> >&, std::__ndk1::set<TransformGroup*,
   std::__ndk1::less<TransformGroup*>, std::__ndk1::allocator<TransformGroup*> >&,
   FileOutputStream&) */

void I3DSave::exportCharacterSets(set *param_1,set *param_2,FileOutputStream *param_3)

{
  FileOutputStream *pFVar1;
  long **pplVar2;
  set **ppsVar3;
  Clip *__s;
  FileOutputStream FVar4;
  byte bVar5;
  ushort uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  long *plVar12;
  size_t sVar13;
  Clip *this;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 uVar17;
  set **ppsVar18;
  set **ppsVar19;
  set **ppsVar20;
  uint uVar21;
  set *psVar22;
  float *pfVar23;
  char *pcVar24;
  CharacterSet *this_00;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  long local_88;
  
  lVar7 = tpidr_el0;
  local_88 = *(long *)(lVar7 + 0x28);
  if (*(set ***)param_1 != (set **)(param_1 + 8)) {
    pFVar1 = param_3 + 0x10;
    pplVar2 = (long **)(param_3 + 8);
    ppsVar3 = (set **)(param_2 + 8);
    ppsVar20 = *(set ***)param_1;
    do {
      this_00 = (CharacterSet *)ppsVar20[4];
      plVar12 = *pplVar2;
      if (*pFVar1 == (FileOutputStream)0x0) {
        (**(code **)(*plVar12 + 0x30))(plVar12,"      <AnimationSet name=\"",0x1a);
      }
      else {
        File::writeDosEOLExpand((File *)plVar12,"      <AnimationSet name=\"",0x1a);
      }
      pcVar24 = *(char **)(this_00 + 8);
      FVar4 = *pFVar1;
      plVar12 = *pplVar2;
      sVar13 = strlen(pcVar24);
      if (FVar4 == (FileOutputStream)0x0) {
        (**(code **)(*plVar12 + 0x30))(plVar12,pcVar24);
      }
      else {
        File::writeDosEOLExpand((File *)plVar12,pcVar24,(uint)sVar13);
      }
      plVar12 = *pplVar2;
      if (*pFVar1 == (FileOutputStream)0x0) {
        (**(code **)(*plVar12 + 0x30))(plVar12,&DAT_004ddf6f,3);
      }
      else {
        File::writeDosEOLExpand((File *)plVar12,&DAT_004ddf6f,3);
      }
      iVar8 = CharacterSet::getNumClips();
      if (iVar8 != 0) {
        uVar21 = 0;
        do {
          this = (Clip *)CharacterSet::getClip(this_00,uVar21);
          plVar12 = *pplVar2;
          if (*pFVar1 == (FileOutputStream)0x0) {
            (**(code **)(*plVar12 + 0x30))(plVar12,"        <Clip name=\"",0x14);
          }
          else {
            File::writeDosEOLExpand((File *)plVar12,"        <Clip name=\"",0x14);
          }
          FVar4 = *pFVar1;
          plVar12 = *pplVar2;
          __s = this + 9;
          if (((byte)this[8] & 1) != 0) {
            __s = *(Clip **)(this + 0x18);
          }
          sVar13 = strlen((char *)__s);
          if (FVar4 == (FileOutputStream)0x0) {
            (**(code **)(*plVar12 + 0x30))(plVar12,__s);
          }
          else {
            File::writeDosEOLExpand((File *)plVar12,__s,(uint)sVar13);
          }
          plVar12 = *pplVar2;
          if (*pFVar1 == (FileOutputStream)0x0) {
            (**(code **)(*plVar12 + 0x30))(plVar12,"\" duration=\"",0xc);
          }
          else {
            File::writeDosEOLExpand((File *)plVar12,"\" duration=\"",0xc);
          }
          fVar25 = (float)Clip::getDuration();
          uVar10 = FUN_0091faa0((double)fVar25,&local_a8,extraout_x1,&DAT_0050d9a5);
          (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_a8,uVar10);
          plVar12 = *pplVar2;
          if (*pFVar1 == (FileOutputStream)0x0) {
            (**(code **)(*plVar12 + 0x30))(plVar12,&DAT_004ddf6f,3);
          }
          else {
            File::writeDosEOLExpand((File *)plVar12,&DAT_004ddf6f,3);
          }
          iVar8 = Clip::getNumOfTransforms();
          if (iVar8 != 0) {
            uVar9 = 0;
            do {
              lVar14 = Clip::getKeyframedTransformation(this,uVar9);
              uVar15 = KeyframedTransformation::getTransformIndex();
              ppsVar18 = (set **)*ppsVar3;
              if (ppsVar18 != (set **)0x0) {
                psVar22 = *(set **)(*(long *)(this_00 + 0xd0) + (uVar15 & 0xffffffff) * 8);
                ppsVar19 = ppsVar3;
                do {
                  if (ppsVar18[4] >= psVar22) {
                    ppsVar19 = ppsVar18;
                  }
                  ppsVar18 = (set **)ppsVar18[ppsVar18[4] < psVar22];
                } while (ppsVar18 != (set **)0x0);
                if ((ppsVar19 != ppsVar3) && (ppsVar19[4] <= psVar22)) {
                  plVar12 = *pplVar2;
                  if (*pFVar1 == (FileOutputStream)0x0) {
                    (**(code **)(*plVar12 + 0x30))(plVar12,"          <Keyframes nodeId=\"",0x1d);
                    uVar17 = extraout_x1_01;
                  }
                  else {
                    File::writeDosEOLExpand((File *)plVar12,"          <Keyframes nodeId=\"",0x1d);
                    uVar17 = extraout_x1_00;
                  }
                  uVar10 = FUN_0091faa0(&local_a8,uVar17,&DAT_004cf2ba,
                                        *(undefined4 *)(psVar22 + 0x18));
                  (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_a8,uVar10);
                  plVar12 = *pplVar2;
                  if (*pFVar1 == (FileOutputStream)0x0) {
                    (**(code **)(*plVar12 + 0x30))(plVar12,&DAT_004ddf6f,3);
                  }
                  else {
                    File::writeDosEOLExpand((File *)plVar12,&DAT_004ddf6f,3);
                  }
                  iVar8 = KeyframedTransformation::getNumKeys();
                  if (iVar8 != 0) {
                    uVar15 = 0;
                    do {
                      plVar12 = *pplVar2;
                      pfVar23 = *(float **)(*(long *)(lVar14 + 8) + uVar15 * 8);
                      if (*pFVar1 == (FileOutputStream)0x0) {
                        (**(code **)(*plVar12 + 0x30))(plVar12,"            <Keyframe time=\"",0x1c)
                        ;
                        uVar17 = extraout_x1_03;
                      }
                      else {
                        File::writeDosEOLExpand
                                  ((File *)plVar12,"            <Keyframe time=\"",0x1c);
                        uVar17 = extraout_x1_02;
                      }
                      uVar10 = FUN_0091faa0((double)*pfVar23,&local_a8,uVar17,&DAT_0050d9a5);
                      (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_a8,uVar10);
                      uVar6 = *(ushort *)(pfVar23 + 1);
                      if ((uVar6 & 1) != 0) {
                        fVar27 = pfVar23[2];
                        fVar26 = pfVar23[3];
                        fVar25 = pfVar23[4];
                        plVar12 = *pplVar2;
                        if (*pFVar1 == (FileOutputStream)0x0) {
                          (**(code **)(*plVar12 + 0x30))(plVar12,"\" translation=\"",0xf);
                          uVar17 = extraout_x1_05;
                        }
                        else {
                          File::writeDosEOLExpand((File *)plVar12,"\" translation=\"",0xf);
                          uVar17 = extraout_x1_04;
                        }
                        uVar10 = FUN_0091faa0((double)fVar27,&local_a8,uVar17,&DAT_0050d9a5);
                        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_a8,uVar10);
                        plVar12 = *pplVar2;
                        if (*pFVar1 == (FileOutputStream)0x0) {
                          (**(code **)(*plVar12 + 0x30))(plVar12,&DAT_004d3339,1);
                          uVar17 = extraout_x1_07;
                        }
                        else {
                          File::writeDosEOLExpand((File *)plVar12,&DAT_004d3339,1);
                          uVar17 = extraout_x1_06;
                        }
                        uVar10 = FUN_0091faa0((double)fVar26,&local_a8,uVar17,&DAT_0050d9a5);
                        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_a8,uVar10);
                        plVar12 = *pplVar2;
                        if (*pFVar1 == (FileOutputStream)0x0) {
                          (**(code **)(*plVar12 + 0x30))(plVar12,&DAT_004d3339,1);
                          uVar17 = extraout_x1_09;
                        }
                        else {
                          File::writeDosEOLExpand((File *)plVar12,&DAT_004d3339,1);
                          uVar17 = extraout_x1_08;
                        }
                        uVar10 = FUN_0091faa0((double)fVar25,&local_a8,uVar17,&DAT_0050d9a5);
                        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_a8,uVar10);
                        if ((uVar6 >> 4 & 1) == 0) {
                          plVar12 = *pplVar2;
                          if (*pFVar1 == (FileOutputStream)0x0) {
                            (**(code **)(*plVar12 + 0x30))(plVar12,"\" iptin=\"linear",0xf);
                          }
                          else {
                            File::writeDosEOLExpand((File *)plVar12,"\" iptin=\"linear",0xf);
                          }
                        }
                        if ((uVar6 >> 7 & 1) == 0) {
                          plVar12 = *pplVar2;
                          if (*pFVar1 == (FileOutputStream)0x0) {
                            (**(code **)(*plVar12 + 0x30))(plVar12,"\" iptout=\"linear",0x10);
                          }
                          else {
                            File::writeDosEOLExpand((File *)plVar12,"\" iptout=\"linear",0x10);
                          }
                        }
                      }
                      if ((uVar6 >> 1 & 1) != 0) {
                        bVar5 = *(byte *)((long)pfVar23 + 6);
                        local_a0 = (float)(int)*(short *)((long)pfVar23 + (ulong)bVar5 + 10) /
                                   32767.0;
                        fStack_a4 = (float)(int)*(short *)((long)pfVar23 + (ulong)bVar5 + 8) /
                                    32767.0;
                        fStack_9c = (float)(int)*(short *)((long)pfVar23 + (ulong)bVar5 + 0xc) /
                                    32767.0;
                        local_a8 = (float)(int)*(short *)((long)pfVar23 + (ulong)bVar5 + 0xe) /
                                   32767.0;
                        uVar10 = NEON_fmadd(fStack_a4,fStack_a4,local_a0 * local_a0);
                        uVar10 = NEON_fmadd(fStack_9c,fStack_9c,uVar10);
                        fVar25 = (float)NEON_fmadd(local_a8,local_a8,uVar10);
                        fVar25 = 1.0 / SQRT(fVar25);
                        local_a0 = local_a0 * fVar25;
                        fStack_9c = fStack_9c * fVar25;
                        fStack_a4 = fStack_a4 * fVar25;
                        local_a8 = local_a8 * fVar25;
                        GsQuaternion::getEulerAngles((GsQuaternion *)&local_a8,(Vector3 *)&local_b8)
                        ;
                        plVar12 = *pplVar2;
                        if (*pFVar1 == (FileOutputStream)0x0) {
                          (**(code **)(*plVar12 + 0x30))(plVar12,"\" rotation=\"",0xc);
                        }
                        else {
                          File::writeDosEOLExpand((File *)plVar12,"\" rotation=\"",0xc);
                        }
                        fVar25 = (float)MathUtil::radianToDegree(local_b8);
                        uVar10 = FUN_0091faa0((double)fVar25,&local_a8,extraout_x1_10,&DAT_0050d9a5)
                        ;
                        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_a8,uVar10);
                        plVar12 = *pplVar2;
                        if (*pFVar1 == (FileOutputStream)0x0) {
                          (**(code **)(*plVar12 + 0x30))(plVar12,&DAT_004d3339,1);
                        }
                        else {
                          File::writeDosEOLExpand((File *)plVar12,&DAT_004d3339,1);
                        }
                        fVar25 = (float)MathUtil::radianToDegree(local_b4);
                        uVar10 = FUN_0091faa0((double)fVar25,&local_a8,extraout_x1_11,&DAT_0050d9a5)
                        ;
                        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_a8,uVar10);
                        plVar12 = *pplVar2;
                        if (*pFVar1 == (FileOutputStream)0x0) {
                          (**(code **)(*plVar12 + 0x30))(plVar12,&DAT_004d3339,1);
                        }
                        else {
                          File::writeDosEOLExpand((File *)plVar12,&DAT_004d3339,1);
                        }
                        fVar25 = (float)MathUtil::radianToDegree(local_b0);
                        uVar10 = FUN_0091faa0((double)fVar25,&local_a8,extraout_x1_12,&DAT_0050d9a5)
                        ;
                        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_a8,uVar10);
                        if ((uVar6 >> 5 & 1) == 0) {
                          plVar12 = *pplVar2;
                          if (*pFVar1 == (FileOutputStream)0x0) {
                            (**(code **)(*plVar12 + 0x30))(plVar12,"\" iprin=\"linear",0xf);
                          }
                          else {
                            File::writeDosEOLExpand((File *)plVar12,"\" iprin=\"linear",0xf);
                          }
                        }
                        if ((uVar6 >> 8 & 1) == 0) {
                          plVar12 = *pplVar2;
                          if (*pFVar1 == (FileOutputStream)0x0) {
                            (**(code **)(*plVar12 + 0x30))(plVar12,"\" iprout=\"linear",0x10);
                          }
                          else {
                            File::writeDosEOLExpand((File *)plVar12,"\" iprout=\"linear",0x10);
                          }
                        }
                      }
                      if ((uVar6 >> 2 & 1) != 0) {
                        bVar5 = *(byte *)((long)pfVar23 + 7);
                        plVar12 = *pplVar2;
                        fVar27 = *(float *)((long)pfVar23 + (ulong)bVar5 + 8);
                        fVar26 = *(float *)((long)pfVar23 + (ulong)bVar5 + 0xc);
                        fVar25 = *(float *)((long)pfVar23 + (ulong)bVar5 + 0x10);
                        if (*pFVar1 == (FileOutputStream)0x0) {
                          (**(code **)(*plVar12 + 0x30))(plVar12,"\" scale=\"",9);
                          uVar17 = extraout_x1_14;
                        }
                        else {
                          File::writeDosEOLExpand((File *)plVar12,"\" scale=\"",9);
                          uVar17 = extraout_x1_13;
                        }
                        uVar10 = FUN_0091faa0((double)fVar27,&local_a8,uVar17,&DAT_0050d9a5);
                        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_a8,uVar10);
                        plVar12 = *pplVar2;
                        if (*pFVar1 == (FileOutputStream)0x0) {
                          (**(code **)(*plVar12 + 0x30))(plVar12,&DAT_004d3339,1);
                          uVar17 = extraout_x1_16;
                        }
                        else {
                          File::writeDosEOLExpand((File *)plVar12,&DAT_004d3339,1);
                          uVar17 = extraout_x1_15;
                        }
                        uVar10 = FUN_0091faa0((double)fVar26,&local_a8,uVar17,&DAT_0050d9a5);
                        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_a8,uVar10);
                        plVar12 = *pplVar2;
                        if (*pFVar1 == (FileOutputStream)0x0) {
                          (**(code **)(*plVar12 + 0x30))(plVar12,&DAT_004d3339,1);
                          uVar17 = extraout_x1_18;
                        }
                        else {
                          File::writeDosEOLExpand((File *)plVar12,&DAT_004d3339,1);
                          uVar17 = extraout_x1_17;
                        }
                        uVar10 = FUN_0091faa0((double)fVar25,&local_a8,uVar17,&DAT_0050d9a5);
                        (**(code **)(**pplVar2 + 0x30))(*pplVar2,&local_a8,uVar10);
                        if ((uVar6 >> 6 & 1) == 0) {
                          plVar12 = *pplVar2;
                          if (*pFVar1 == (FileOutputStream)0x0) {
                            (**(code **)(*plVar12 + 0x30))(plVar12,"\" ipsin=\"linear",0xf);
                          }
                          else {
                            File::writeDosEOLExpand((File *)plVar12,"\" ipsin=\"linear",0xf);
                          }
                        }
                        if ((uVar6 >> 9 & 1) == 0) {
                          plVar12 = *pplVar2;
                          if (*pFVar1 == (FileOutputStream)0x0) {
                            (**(code **)(*plVar12 + 0x30))(plVar12,"\" ipsout=\"linear",0x10);
                          }
                          else {
                            File::writeDosEOLExpand((File *)plVar12,"\" ipsout=\"linear",0x10);
                          }
                        }
                      }
                      if ((uVar6 >> 3 & 1) != 0) {
                        plVar12 = *pplVar2;
                        if (*pFVar1 == (FileOutputStream)0x0) {
                          (**(code **)(*plVar12 + 0x30))(plVar12,"\" visibility=\"",0xe);
                        }
                        else {
                          File::writeDosEOLExpand((File *)plVar12,"\" visibility=\"",0xe);
                        }
                        FVar4 = *pFVar1;
                        plVar12 = *pplVar2;
                        pcVar24 = "true";
                        if (-1 < *(short *)(pfVar23 + 1)) {
                          pcVar24 = "false";
                        }
                        uVar11 = __strlen_chk(pcVar24,6);
                        if (FVar4 == (FileOutputStream)0x0) {
                          (**(code **)(*plVar12 + 0x30))(plVar12,pcVar24);
                        }
                        else {
                          File::writeDosEOLExpand((File *)plVar12,pcVar24,uVar11);
                        }
                      }
                      plVar12 = *pplVar2;
                      if (*pFVar1 == (FileOutputStream)0x0) {
                        (**(code **)(*plVar12 + 0x30))(plVar12,&DAT_004ddf8b,4);
                      }
                      else {
                        File::writeDosEOLExpand((File *)plVar12,&DAT_004ddf8b,4);
                      }
                      uVar15 = uVar15 + 1;
                      uVar16 = KeyframedTransformation::getNumKeys();
                    } while (uVar15 < (uVar16 & 0xffffffff));
                  }
                  plVar12 = *pplVar2;
                  if (*pFVar1 == (FileOutputStream)0x0) {
                    (**(code **)(*plVar12 + 0x30))(plVar12,"          </Keyframes>\n",0x17);
                  }
                  else {
                    File::writeDosEOLExpand((File *)plVar12,"          </Keyframes>\n",0x17);
                  }
                }
              }
              uVar9 = uVar9 + 1;
              uVar11 = Clip::getNumOfTransforms();
            } while (uVar9 < uVar11);
          }
          plVar12 = *pplVar2;
          if (*pFVar1 == (FileOutputStream)0x0) {
            (**(code **)(*plVar12 + 0x30))(plVar12,"        </Clip>\n",0x10);
          }
          else {
            File::writeDosEOLExpand((File *)plVar12,"        </Clip>\n",0x10);
          }
          uVar21 = uVar21 + 1;
          uVar9 = CharacterSet::getNumClips();
        } while (uVar21 < uVar9);
      }
      plVar12 = *pplVar2;
      if (*pFVar1 == (FileOutputStream)0x0) {
        (**(code **)(*plVar12 + 0x30))(plVar12,"      </AnimationSet>\n",0x16);
      }
      else {
        File::writeDosEOLExpand((File *)plVar12,"      </AnimationSet>\n",0x16);
      }
      ppsVar18 = (set **)ppsVar20[1];
      if ((set **)ppsVar20[1] == (set **)0x0) {
        ppsVar18 = ppsVar20 + 2;
        ppsVar19 = (set **)*ppsVar18;
        if ((set **)*ppsVar19 != ppsVar20) {
          do {
            psVar22 = *ppsVar18;
            ppsVar18 = (set **)(psVar22 + 0x10);
            ppsVar19 = (set **)*ppsVar18;
          } while (*ppsVar19 != psVar22);
        }
      }
      else {
        do {
          ppsVar19 = ppsVar18;
          ppsVar18 = (set **)*ppsVar19;
        } while ((set **)*ppsVar19 != (set **)0x0);
      }
      ppsVar20 = ppsVar19;
    } while (ppsVar19 != (set **)(param_1 + 8));
  }
  if (*(long *)(lVar7 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


