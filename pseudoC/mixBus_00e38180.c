// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mixBus
// Entry Point: 00e38180
// Size: 2192 bytes
// Signature: undefined __thiscall mixBus(Soloud * this, float * param_1, uint param_2, uint param_3, AlignedFloatBuffer * param_4, uint param_5, float param_6, uint param_7, bool param_8)


/* SoLoud::Soloud::mixBus(float*, unsigned int, unsigned int, SoLoud::AlignedFloatBuffer&, unsigned
   int, float, unsigned int, bool) */

void __thiscall
SoLoud::Soloud::mixBus
          (Soloud *this,float *param_1,uint param_2,uint param_3,AlignedFloatBuffer *param_4,
          uint param_5,float param_6,uint param_7,bool param_8)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  undefined4 uVar25;
  float fVar26;
  uint *local_a0;
  
  memset(param_1,0,(ulong)(((param_8 & 1) + param_7) * param_3) << 2);
  if (*(uint *)(this + 0x224ec) != 0) {
    uVar21 = 0;
    do {
      plVar24 = *(long **)(this + (ulong)*(uint *)(this + uVar21 * 4 + 0x214ec) * 8 + 0xa0);
      if ((plVar24 != (long *)0x0) && (*(uint *)((long)plVar24 + 0x184) == param_5)) {
        if ((*(uint *)((long)plVar24 + 0x14) & 0x12) == 0) {
          uVar19 = *(uint *)(plVar24 + 0x3c);
          fVar26 = 0.0;
          if (*(float *)(plVar24 + 9) / param_6 <= 4096.0) {
            fVar26 = (*(float *)(plVar24 + 9) / param_6) * 1048576.0;
          }
          if (uVar19 == 0) {
            uVar8 = 0;
          }
          else {
            iVar5 = 0;
            if (param_2 <= uVar19) {
              iVar5 = uVar19 - param_2;
            }
            uVar20 = param_2;
            if (param_2 > uVar19 || uVar19 - param_2 == 0) {
              uVar20 = uVar19;
            }
            uVar8 = (ulong)uVar20;
            *(int *)(plVar24 + 0x3c) = iVar5;
            if (*(int *)((long)plVar24 + 0x4c) != 0) {
              uVar19 = 0;
              uVar22 = 0;
              do {
                memset((void *)(*(long *)param_4 + (ulong)uVar19 * 4),0,uVar8 << 2);
                uVar22 = uVar22 + 1;
                uVar19 = uVar19 + param_3;
              } while (uVar22 < *(uint *)((long)plVar24 + 0x4c));
            }
          }
          if ((int)fVar26 != 0) {
            uVar20 = (uint)fVar26;
            uVar19 = (uint)uVar8;
            while (uVar19 < param_2) {
              if (*(int *)((long)plVar24 + 0x1dc) == 0) {
                lVar14 = plVar24[0x39];
                plVar24[0x39] = plVar24[0x3a];
                plVar24[0x3a] = lVar14;
                uVar22 = (**(code **)(*plVar24 + 0x18))(plVar24);
                if ((((uVar22 & 1) == 0) || (*(uint *)(plVar24 + 2) == 0)) ||
                   (*(uint *)((long)plVar24 + 0xc) < *(uint *)(plVar24 + 2))) {
                  iVar5 = (**(code **)(*plVar24 + 0x10))
                                    (plVar24,*(undefined8 *)plVar24[0x39],0x200,0x200);
                  if (iVar5 < 0x200) {
                    if ((*(uint *)(plVar24 + 2) == 0) ||
                       (*(uint *)((long)plVar24 + 0xc) < *(uint *)(plVar24 + 2))) {
                      do {
                        iVar6 = (**(code **)(*plVar24 + 0x20))
                                          (plVar24[0x3d],plVar24,*(undefined8 *)(this + 0x58),
                                           *(undefined4 *)(this + 0x70));
                        if (iVar6 != 0) goto LAB_00e384e8;
                        lVar14 = *(long *)plVar24[0x39];
                        *(int *)((long)plVar24 + 0xc) = *(int *)((long)plVar24 + 0xc) + 1;
                        iVar6 = (**(code **)(*plVar24 + 0x10))
                                          (plVar24,lVar14 + (long)iVar5 * 4,0x200 - iVar5,0x200);
                        iVar5 = iVar6 + iVar5;
                      } while ((iVar6 != 0) && (iVar5 < 0x200));
                      if (0x1ff < iVar5) goto LAB_00e3853c;
                    }
                    goto LAB_00e384e8;
                  }
                }
                else {
                  iVar5 = 0;
LAB_00e384e8:
                  if (*(int *)((long)plVar24 + 0x4c) != 0) {
                    uVar23 = 0;
                    uVar22 = 0;
                    do {
                      memset((void *)(*(long *)plVar24[0x39] + (long)iVar5 * 4 +
                                     (uVar23 & 0xfffffe00) * 4),0,(ulong)(0x200 - iVar5) << 2);
                      uVar22 = uVar22 + 1;
                      uVar23 = uVar23 + 0x200;
                    } while (uVar22 < *(uint *)((long)plVar24 + 0x4c));
                  }
                }
LAB_00e3853c:
                plVar7 = (long *)plVar24[0x31];
                iVar5 = 0;
                if (0x1fffffff < *(uint *)(plVar24 + 0x3b)) {
                  iVar5 = *(uint *)(plVar24 + 0x3b) + 0xe0000000;
                }
                *(int *)(plVar24 + 0x3b) = iVar5;
                if (plVar7 != (long *)0x0) {
                  (**(code **)(*plVar7 + 0x10))
                            (*(undefined4 *)(plVar24 + 9),*(undefined8 *)(this + 0x2108),plVar7,
                             *(undefined8 *)plVar24[0x39],0x200,
                             *(undefined4 *)((long)plVar24 + 0x4c));
                }
                plVar7 = (long *)plVar24[0x32];
                if (plVar7 != (long *)0x0) {
                  (**(code **)(*plVar7 + 0x10))
                            (*(undefined4 *)(plVar24 + 9),*(undefined8 *)(this + 0x2108),plVar7,
                             *(undefined8 *)plVar24[0x39],0x200,
                             *(undefined4 *)((long)plVar24 + 0x4c));
                }
                plVar7 = (long *)plVar24[0x33];
                if (plVar7 != (long *)0x0) {
                  (**(code **)(*plVar7 + 0x10))
                            (*(undefined4 *)(plVar24 + 9),*(undefined8 *)(this + 0x2108),plVar7,
                             *(undefined8 *)plVar24[0x39],0x200,
                             *(undefined4 *)((long)plVar24 + 0x4c));
                }
                plVar7 = (long *)plVar24[0x34];
                if (plVar7 != (long *)0x0) {
                  (**(code **)(*plVar7 + 0x10))
                            (*(undefined4 *)(plVar24 + 9),*(undefined8 *)(this + 0x2108),plVar7,
                             *(undefined8 *)plVar24[0x39],0x200,
                             *(undefined4 *)((long)plVar24 + 0x4c));
                }
                plVar7 = (long *)plVar24[0x35];
                if (plVar7 != (long *)0x0) {
                  (**(code **)(*plVar7 + 0x10))
                            (*(undefined4 *)(plVar24 + 9),*(undefined8 *)(this + 0x2108),plVar7,
                             *(undefined8 *)plVar24[0x39],0x200,
                             *(undefined4 *)((long)plVar24 + 0x4c));
                }
                plVar7 = (long *)plVar24[0x36];
                if (plVar7 != (long *)0x0) {
                  (**(code **)(*plVar7 + 0x10))
                            (*(undefined4 *)(plVar24 + 9),*(undefined8 *)(this + 0x2108),plVar7,
                             *(undefined8 *)plVar24[0x39],0x200,
                             *(undefined4 *)((long)plVar24 + 0x4c));
                }
                plVar7 = (long *)plVar24[0x37];
                if (plVar7 != (long *)0x0) {
                  (**(code **)(*plVar7 + 0x10))
                            (*(undefined4 *)(plVar24 + 9),*(undefined8 *)(this + 0x2108),plVar7,
                             *(undefined8 *)plVar24[0x39],0x200,
                             *(undefined4 *)((long)plVar24 + 0x4c));
                }
                plVar7 = (long *)plVar24[0x38];
                if (plVar7 != (long *)0x0) {
                  (**(code **)(*plVar7 + 0x10))
                            (*(undefined4 *)(plVar24 + 9),*(undefined8 *)(this + 0x2108),plVar7,
                             *(undefined8 *)plVar24[0x39],0x200,
                             *(undefined4 *)((long)plVar24 + 0x4c));
                }
              }
              else {
                *(undefined4 *)((long)plVar24 + 0x1dc) = 0;
              }
              uVar11 = *(uint *)(plVar24 + 0x3b);
              uVar19 = (uint)uVar8;
              if (uVar11 >> 0x1d == 0) {
                uVar12 = 0;
                if (uVar20 != 0) {
                  uVar12 = (0x20000000 - uVar11) / uVar20;
                }
                if (uVar11 + (uVar12 + 1) * uVar20 >> 0x1d == 0) {
                  uVar12 = uVar12 + 1;
                }
                iVar5 = (uVar12 + uVar19) - param_2;
                if (param_2 <= uVar12 + uVar19 && iVar5 != 0) {
LAB_00e38704:
                  uVar12 = param_2 - uVar19;
                  *(int *)((long)plVar24 + 0x1dc) = iVar5;
                }
              }
              else {
                uVar12 = 0;
                iVar5 = uVar19 - param_2;
                if (param_2 <= uVar19 && iVar5 != 0) goto LAB_00e38704;
              }
              if (((uVar12 != 0) && (uVar13 = *(uint *)((long)plVar24 + 0x4c), uVar13 != 0)) &&
                 (0 < (int)uVar12)) {
                uVar15 = 0;
                lVar17 = *(long *)param_4;
                uVar22 = 0;
                lVar14 = *(long *)plVar24[0x39];
                lVar16 = *(long *)plVar24[0x3a];
                do {
                  lVar9 = (ulong)(uint)((int)uVar22 << 9) * 4;
                  uVar23 = (ulong)uVar12;
                  puVar18 = (undefined4 *)(lVar17 + uVar8 * 4 + (ulong)uVar15 * 4);
                  uVar10 = uVar11;
                  do {
                    iVar5 = (int)uVar10 >> 0x14;
                    bVar4 = 0xfffff < uVar10;
                    uVar2 = uVar10 & 0xfffff;
                    uVar10 = uVar10 + uVar20;
                    pfVar1 = (float *)(lVar14 + lVar9 + (long)iVar5 * 4);
                    pfVar3 = (float *)(lVar16 + 0x7fc + lVar9);
                    if (bVar4) {
                      pfVar3 = pfVar1 + -1;
                    }
                    uVar23 = uVar23 - 1;
                    uVar25 = NEON_fmadd((*pfVar1 - *pfVar3) * (float)uVar2,0x35800000,*pfVar3);
                    *puVar18 = uVar25;
                    puVar18 = puVar18 + 1;
                  } while (uVar23 != 0);
                  uVar22 = uVar22 + 1;
                  uVar15 = uVar15 + param_3;
                } while (uVar22 != uVar13);
              }
              uVar19 = uVar12 + uVar19;
              uVar8 = (ulong)uVar19;
              *(uint *)(plVar24 + 0x3b) = uVar11 + uVar12 * uVar20;
            }
          }
          panAndExpand(this,(AudioSourceInstance *)plVar24,param_1,param_2,param_3,param_4,param_7,
                       SUB41(param_8 & 1,0));
          if ((*(uint *)(plVar24 + 2) == 0) ||
             (*(uint *)((long)plVar24 + 0xc) < *(uint *)(plVar24 + 2))) goto LAB_00e38234;
          uVar8 = (**(code **)(*plVar24 + 0x18))(plVar24);
        }
        else {
          if ((*(uint *)((long)plVar24 + 0x14) & 0x52) != 0x50) goto LAB_00e38234;
          uVar19 = *(uint *)(plVar24 + 0x3c);
          if (uVar19 == 0) {
LAB_00e387bc:
            plVar7 = plVar24 + 2;
            uVar20 = (uint)((*(float *)(plVar24 + 9) / param_6) * 1048576.0);
            if (uVar20 == 0 || param_2 <= uVar19) {
              uVar19 = *(uint *)plVar7;
            }
            else {
              do {
                if (*(int *)((long)plVar24 + 0x1dc) == 0) {
                  lVar14 = plVar24[0x39];
                  plVar24[0x39] = plVar24[0x3a];
                  plVar24[0x3a] = lVar14;
                  uVar8 = (**(code **)(*plVar24 + 0x18))(plVar24);
                  if (((((uVar8 & 1) == 0) || (*(uint *)plVar7 == 0)) ||
                      (*(uint *)((long)plVar24 + 0xc) < *(uint *)plVar7)) &&
                     ((iVar5 = (**(code **)(*plVar24 + 0x10))
                                         (plVar24,*(undefined8 *)plVar24[0x39],0x200,0x200),
                      iVar5 < 0x200 &&
                      ((*(uint *)plVar7 == 0 || (*(uint *)((long)plVar24 + 0xc) < *(uint *)plVar7)))
                      ))) {
                    do {
                      iVar6 = (**(code **)(*plVar24 + 0x20))
                                        (plVar24[0x3d],plVar24,*(undefined8 *)(this + 0x58),
                                         *(undefined4 *)(this + 0x70));
                      if (iVar6 != 0) break;
                      lVar14 = *(long *)plVar24[0x39];
                      *(int *)((long)plVar24 + 0xc) = *(int *)((long)plVar24 + 0xc) + 1;
                      iVar6 = (**(code **)(*plVar24 + 0x10))
                                        (plVar24,lVar14 + (long)iVar5 * 4,0x200 - iVar5,0x200);
                      iVar5 = iVar6 + iVar5;
                    } while (iVar5 < 0x200);
                  }
                  uVar11 = 0;
                  if (0x1fffffff < *(uint *)(plVar24 + 0x3b)) {
                    uVar11 = *(uint *)(plVar24 + 0x3b) + 0xe0000000;
                  }
                  *(uint *)(plVar24 + 0x3b) = uVar11;
                  if (uVar11 >> 0x1d == 0) goto LAB_00e3881c;
LAB_00e3894c:
                  uVar13 = 0;
                  iVar5 = uVar19 - param_2;
                  uVar12 = uVar19;
                  if (param_2 <= uVar19 && iVar5 != 0) goto LAB_00e38978;
                }
                else {
                  uVar11 = *(uint *)(plVar24 + 0x3b);
                  *(undefined4 *)((long)plVar24 + 0x1dc) = 0;
                  if (uVar11 >> 0x1d != 0) goto LAB_00e3894c;
LAB_00e3881c:
                  uVar13 = 0;
                  if (uVar20 != 0) {
                    uVar13 = (0x20000000 - uVar11) / uVar20;
                  }
                  if ((uVar13 + 1) * uVar20 + uVar11 >> 0x1d == 0) {
                    uVar13 = uVar13 + 1;
                  }
                  uVar12 = uVar13 + uVar19;
                  iVar5 = uVar12 - param_2;
                  if (param_2 <= uVar12 && iVar5 != 0) {
LAB_00e38978:
                    *(int *)((long)plVar24 + 0x1dc) = iVar5;
                    *(uint *)(plVar24 + 0x3b) = (param_2 - uVar19) * uVar20 + uVar11;
                    break;
                  }
                }
                uVar19 = uVar12;
                *(uint *)(plVar24 + 0x3b) = uVar13 * uVar20 + uVar11;
              } while (uVar19 < param_2);
              uVar19 = *(uint *)plVar7;
            }
          }
          else {
            if (uVar19 < param_2 || uVar19 - param_2 == 0) {
              *(undefined4 *)(plVar24 + 0x3c) = 0;
              goto LAB_00e387bc;
            }
            *(uint *)(plVar24 + 0x3c) = uVar19 - param_2;
            uVar19 = *(uint *)(plVar24 + 2);
          }
          if ((uVar19 == 0) || (local_a0 = (uint *)((long)plVar24 + 0xc), *local_a0 < uVar19))
          goto LAB_00e38234;
          uVar8 = (**(code **)(*plVar24 + 0x18))(plVar24);
        }
        if ((uVar8 & 1) != 0) {
          stopVoice(this,*(uint *)(this + uVar21 * 4 + 0x214ec));
        }
      }
LAB_00e38234:
      uVar21 = uVar21 + 1;
    } while (uVar21 < *(uint *)(this + 0x224ec));
  }
  return;
}


