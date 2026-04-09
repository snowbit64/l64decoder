// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextLine
// Entry Point: 006f06f0
// Size: 588 bytes
// Signature: undefined __thiscall getNextLine(FontOverlayRenderer * this, PrintState * param_1, char * param_2, float param_3, ADVANCE_MODE param_4, float param_5, bool param_6)


/* FontOverlayRenderer::getNextLine(FontOverlayRenderer::PrintState&, char const*, float,
   FontOverlayRenderer::ADVANCE_MODE, float, bool) */

void __thiscall
FontOverlayRenderer::getNextLine
          (FontOverlayRenderer *this,PrintState *param_1,char *param_2,float param_3,
          ADVANCE_MODE param_4,float param_5,bool param_6)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  ulong uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  short *local_88;
  uint local_7c;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  uVar7 = *(uint *)(param_1 + 0x14);
  if (uVar7 == 0xffffffff) {
    uVar7 = *(uint *)param_1;
    uVar12 = 0;
    uVar6 = 0;
    uVar10 = uVar7;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x18);
    uVar12 = *(undefined4 *)(param_1 + 0x1c);
    uVar10 = *(uint *)param_1;
  }
  uVar11 = (ulong)uVar10;
  *(uint *)(param_1 + 4) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar6;
  *(undefined4 *)(param_1 + 0xc) = uVar12;
  param_1[0x10] = (PrintState)0x0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  if (param_2[uVar11] != '\n') {
    pfVar1 = (float *)(this + 0x14);
    do {
      uVar4 = getNextCharInfo(this,param_2,(uint *)param_1,(CharInfo **)&local_88,&local_7c);
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
        goto LAB_006f08e0;
      }
      iVar2 = *(int *)(param_1 + 8);
      iVar8 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 8) = iVar2 + 1U;
      *(int *)(param_1 + 0x18) = iVar8;
      if (*local_88 != 0x7fff) {
        pfVar9 = pfVar1;
        if (param_4 != 1) {
          if (param_4 != 0) {
            if (((local_7c == 0x2007) || (local_7c - 0x30 < 10)) ||
               (param_4 == 3 && local_7c == 0x20)) goto LAB_006f084c;
          }
          pfVar9 = (float *)(local_88 + 4);
        }
LAB_006f084c:
        fVar13 = *pfVar9 * param_3;
        fVar14 = *(float *)(param_1 + 0xc) + fVar13;
        *(float *)(param_1 + 0xc) = fVar14;
        if (0.0 < param_5) {
          fVar15 = fVar13 + *(float *)(param_1 + 0x1c);
          *(float *)(param_1 + 0x1c) = fVar15;
          if ((local_7c == 0x2d) || (local_7c == 0x20)) {
            fVar15 = 0.0;
            iVar8 = 0;
            *(undefined8 *)(param_1 + 0x18) = 0;
            *(float *)(param_1 + 0x20) = fVar13;
            *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)param_1;
          }
          if ((param_5 < fVar14) && (param_6 || *(int *)(param_1 + 0x14) != -1)) {
            if (*(int *)(param_1 + 0x14) == -1) {
              uVar5 = 1;
              if (1 < iVar2 + 1U) {
                *(int *)(param_1 + 8) = iVar2;
                *(int *)(param_1 + 0x14) = (int)uVar11;
                *(undefined4 *)(param_1 + 0x18) = 1;
                *(float *)(param_1 + 0x1c) = fVar13;
                *(float *)(param_1 + 0xc) = fVar14 - fVar13;
              }
              goto LAB_006f08e0;
            }
            *(int *)(param_1 + 8) = iVar2 - iVar8;
            *(float *)(param_1 + 0xc) = fVar14 - (*(float *)(param_1 + 0x20) + fVar15);
            goto LAB_006f0794;
          }
        }
      }
      uVar10 = *(uint *)param_1;
      uVar11 = (ulong)uVar10;
    } while (param_2[uVar11] != '\n');
  }
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(uint *)param_1 = uVar10 + 1;
LAB_006f0794:
  uVar5 = 1;
  param_1[0x10] = (PrintState)0x1;
LAB_006f08e0:
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


