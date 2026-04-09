// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_read_filter
// Entry Point: 00e20124
// Size: 952 bytes
// Signature: undefined ov_read_filter(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9)


void ov_read_filter(long param_1,ushort *param_2,int param_3,int param_4,int param_5,int param_6,
                   undefined4 *param_7,code *param_8,undefined8 param_9)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  ushort *puVar11;
  long lVar12;
  long local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  iVar6 = *(int *)(param_1 + 0x80);
  if (iVar6 < 2) {
LAB_00e2015c:
    uVar7 = 0xffffffffffffff7d;
  }
  else {
    while( true ) {
      if ((iVar6 == 4) && (iVar6 = vorbis_synthesis_pcmout(param_1 + 0x240,&local_70), iVar6 != 0))
      {
        uVar7 = (ulong)iVar6;
        if (iVar6 < 1) goto LAB_00e201e0;
        if (*(int *)(param_1 + 8) == 0) {
          lVar8 = *(long *)(param_1 + 0x68);
        }
        else {
          lVar8 = *(long *)(param_1 + 0x68);
          if (2 < *(int *)(param_1 + 0x80)) {
            lVar8 = lVar8 + (long)*(int *)(param_1 + 0x90) * 0x38;
          }
        }
        iVar6 = *(int *)(lVar8 + 4);
        lVar12 = (long)iVar6;
        lVar8 = lVar12 * param_5;
        uVar4 = 0;
        if (lVar8 != 0) {
          uVar4 = (long)param_3 / lVar8;
        }
        if ((long)uVar7 <= (long)uVar4) {
          uVar4 = uVar7;
        }
        if (0 < (long)uVar4) {
          if (param_8 != (code *)0x0) {
            (*param_8)(local_70,lVar12,uVar4,param_9);
          }
          if (param_5 == 1) {
            if (0 < iVar6) {
              uVar7 = 0;
              do {
                lVar9 = 0;
                do {
                  iVar6 = (int)(*(float *)(*(long *)(local_70 + lVar9 * 8) + uVar7 * 4) * 128.0 +
                               0.5);
                  if (iVar6 == -0x80 || iVar6 + 0x80 < 0 != SCARRY4(iVar6,0x80)) {
                    iVar6 = -0x80;
                  }
                  if (0x7e < iVar6) {
                    iVar6 = 0x7f;
                  }
                  *(char *)((long)param_2 + lVar9) = (char)iVar6 + (param_6 == 0) * -0x80;
                  lVar9 = lVar9 + 1;
                } while (lVar12 != lVar9);
                uVar7 = uVar7 + 1;
                param_2 = (ushort *)((long)param_2 + lVar9);
              } while (uVar7 != uVar4);
            }
          }
          else {
            iVar3 = (uint)(param_6 == 0) * 0x8000;
            if (param_4 == 0) {
              if (param_6 == 0) {
                if (0 < iVar6) {
                  lVar9 = 0;
                  do {
                    pfVar10 = *(float **)(local_70 + lVar9 * 8);
                    puVar11 = param_2;
                    uVar7 = uVar4;
                    do {
                      iVar6 = (int)(*pfVar10 * 32768.0 + 0.5);
                      if (iVar6 == -0x8000 || iVar6 + 0x8000 < 0 != SCARRY4(iVar6,0x8000)) {
                        iVar6 = -0x8000;
                      }
                      if (0x7ffe < iVar6) {
                        iVar6 = 0x7fff;
                      }
                      uVar7 = uVar7 - 1;
                      *puVar11 = (short)iVar6 + (short)iVar3;
                      puVar11 = puVar11 + lVar12;
                      pfVar10 = pfVar10 + 1;
                    } while (uVar7 != 0);
                    lVar9 = lVar9 + 1;
                    param_2 = param_2 + 1;
                  } while (lVar9 != lVar12);
                }
              }
              else if (0 < iVar6) {
                lVar9 = 0;
                do {
                  pfVar10 = *(float **)(local_70 + lVar9 * 8);
                  puVar11 = param_2;
                  uVar7 = uVar4;
                  do {
                    iVar6 = (int)(*pfVar10 * 32768.0 + 0.5);
                    if (iVar6 == -0x8000 || iVar6 + 0x8000 < 0 != SCARRY4(iVar6,0x8000)) {
                      iVar6 = -0x8000;
                    }
                    if (0x7ffe < iVar6) {
                      iVar6 = 0x7fff;
                    }
                    uVar7 = uVar7 - 1;
                    *puVar11 = (ushort)iVar6;
                    puVar11 = puVar11 + lVar12;
                    pfVar10 = pfVar10 + 1;
                  } while (uVar7 != 0);
                  lVar9 = lVar9 + 1;
                  param_2 = param_2 + 1;
                } while (lVar9 != lVar12);
              }
            }
            else if (0 < iVar6) {
              uVar7 = 0;
              do {
                lVar9 = 0;
                puVar11 = param_2;
                do {
                  lVar1 = lVar9 * 8;
                  lVar9 = lVar9 + 1;
                  iVar6 = (int)(*(float *)(*(long *)(local_70 + lVar1) + uVar7 * 4) * 32768.0 + 0.5)
                  ;
                  if (iVar6 == -0x8000 || iVar6 + 0x8000 < 0 != SCARRY4(iVar6,0x8000)) {
                    iVar6 = -0x8000;
                  }
                  if (0x7ffe < iVar6) {
                    iVar6 = 0x7fff;
                  }
                  uVar2 = iVar6 + iVar3;
                  param_2 = puVar11 + 1;
                  *puVar11 = (ushort)(uVar2 >> 8) & 0xff | (ushort)((uVar2 & 0xff00ff) << 8);
                  puVar11 = param_2;
                } while (lVar12 != lVar9);
                uVar7 = uVar7 + 1;
              } while (uVar7 != uVar4);
            }
          }
          vorbis_synthesis_read(param_1 + 0x240,uVar4 & 0xffffffff);
          uVar7 = vorbis_synthesis_halfrate_p(*(undefined8 *)(param_1 + 0x68));
          *(ulong *)(param_1 + 0x78) = (uVar4 << (uVar7 & 0x3f)) + *(long *)(param_1 + 0x78);
          if (param_7 != (undefined4 *)0x0) {
            *param_7 = *(undefined4 *)(param_1 + 0x90);
          }
          uVar7 = uVar4 * lVar8;
          goto LAB_00e201e0;
        }
        goto LAB_00e2015c;
      }
      iVar6 = FUN_00e1f850(param_1,1);
      if (iVar6 == -2) {
        uVar7 = 0;
        goto LAB_00e201e0;
      }
      if (iVar6 < 1) break;
      iVar6 = *(int *)(param_1 + 0x80);
    }
    uVar7 = (ulong)iVar6;
  }
LAB_00e201e0:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


