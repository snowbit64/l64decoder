// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ec_enc_done
// Entry Point: 00e66c78
// Size: 1868 bytes
// Signature: undefined ec_enc_done(void)


void ec_enc_done(long *param_1)

{
  bool bVar1;
  char cVar2;
  uint *puVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  uint *puVar12;
  int *piVar13;
  long *plVar14;
  byte bVar15;
  int iVar16;
  
  iVar6 = *(int *)((long)param_1 + 0x24);
  uVar5 = (uint)LZCOUNT(*(int *)(param_1 + 4));
  uVar8 = 0x7fffffff >> (ulong)(uVar5 & 0x1f);
  uVar7 = uVar8 + iVar6 & -0x80000000 >> (uVar5 & 0x1f);
  if ((uVar7 | uVar8) < (uint)(iVar6 + *(int *)(param_1 + 4))) {
    if (uVar5 != 0) {
      if (uVar7 >> 0x17 != 0xff) goto LAB_00e66d3c;
LAB_00e66cec:
      *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + 1;
      if (8 < uVar5) goto LAB_00e66e34;
LAB_00e66d00:
      iVar6 = 8;
      goto LAB_00e671b0;
    }
    uVar5 = 0;
    iVar6 = *(int *)((long)param_1 + 0x2c);
    if (iVar6 < 0) goto LAB_00e66d88;
LAB_00e671bc:
    plVar4 = param_1 + 6;
    uVar7 = *(uint *)((long)param_1 + 0x1c);
    if (*(int *)((long)param_1 + 0xc) + uVar7 < *(uint *)(param_1 + 1)) {
      *(uint *)((long)param_1 + 0x1c) = uVar7 + 1;
      *(char *)(*param_1 + (ulong)uVar7) = (char)iVar6;
      iVar6 = *(int *)(param_1 + 5);
      *(undefined4 *)plVar4 = *(undefined4 *)plVar4;
    }
    else {
      iVar6 = *(int *)(param_1 + 5);
      *(undefined4 *)plVar4 = 0xffffffff;
    }
    if (iVar6 != 0) goto LAB_00e67218;
  }
  else {
    uVar5 = uVar5 + 1;
    uVar7 = (uVar8 >> 1) + iVar6 & (uVar8 >> 1 ^ 0xffffffff);
    if (uVar7 >> 0x17 == 0xff) goto LAB_00e66cec;
LAB_00e66d3c:
    plVar11 = param_1 + 6;
    plVar4 = param_1 + 5;
    uVar8 = *(uint *)((long)param_1 + 0x2c);
    cVar2 = -(char)((int)uVar7 >> 0x1f);
    if (-1 < (int)uVar8) {
      uVar10 = *(uint *)((long)param_1 + 0x1c);
      if (*(int *)((long)param_1 + 0xc) + uVar10 < *(uint *)(param_1 + 1)) {
        uVar9 = 0;
        *(uint *)((long)param_1 + 0x1c) = uVar10 + 1;
        *(char *)(*param_1 + (ulong)uVar10) = (char)uVar8 + cVar2;
      }
      else {
        uVar9 = 0xffffffff;
      }
      *(uint *)plVar11 = *(uint *)plVar11 | uVar9;
    }
    iVar6 = *(int *)plVar4;
    if (iVar6 != 0) {
      do {
        while( true ) {
          uVar8 = *(uint *)((long)param_1 + 0x1c);
          if (*(int *)((long)param_1 + 0xc) + uVar8 < *(uint *)(param_1 + 1)) break;
          iVar6 = iVar6 + -1;
          *(int *)plVar4 = iVar6;
          *(uint *)plVar11 = 0xffffffff;
          if (iVar6 == 0) goto LAB_00e66e24;
        }
        *(uint *)((long)param_1 + 0x1c) = uVar8 + 1;
        *(char *)(*param_1 + (ulong)uVar8) = cVar2 + -1;
        iVar6 = *(int *)(param_1 + 5) + -1;
        *(int *)plVar4 = iVar6;
        *(uint *)plVar11 = *(uint *)plVar11;
      } while (iVar6 != 0);
    }
LAB_00e66e24:
    *(uint *)((long)param_1 + 0x2c) = uVar7 >> 0x17 & 0xff;
    if (uVar5 < 9) goto LAB_00e66d00;
LAB_00e66e34:
    plVar14 = param_1 + 1;
    piVar13 = (int *)((long)param_1 + 0xc);
    puVar12 = (uint *)((long)param_1 + 0x1c);
    plVar11 = param_1 + 6;
    plVar4 = param_1 + 5;
    puVar3 = (uint *)((long)param_1 + 0x2c);
    uVar8 = uVar7 >> 0xf & 0xff;
    if (uVar8 == 0xff) {
      *(int *)plVar4 = *(int *)plVar4 + 1;
    }
    else {
      if (-1 < (int)*puVar3) {
        uVar10 = *puVar12;
        if (*piVar13 + uVar10 < *(uint *)plVar14) {
          uVar9 = 0;
          *(uint *)((long)param_1 + 0x1c) = uVar10 + 1;
          *(char *)(*param_1 + (ulong)uVar10) = (char)*puVar3;
        }
        else {
          uVar9 = 0xffffffff;
        }
        *(uint *)plVar11 = *(uint *)plVar11 | uVar9;
      }
      iVar6 = *(int *)plVar4;
      while (iVar6 != 0) {
        while( true ) {
          uVar10 = *puVar12;
          if (*piVar13 + uVar10 < *(uint *)plVar14) break;
          iVar6 = iVar6 + -1;
          *(int *)plVar4 = iVar6;
          *(uint *)plVar11 = 0xffffffff;
          if (iVar6 == 0) goto LAB_00e66f18;
        }
        *(uint *)((long)param_1 + 0x1c) = uVar10 + 1;
        *(undefined *)(*param_1 + (ulong)uVar10) = 0xff;
        iVar6 = *(int *)(param_1 + 5) + -1;
        *(int *)plVar4 = iVar6;
        *(uint *)plVar11 = *(uint *)plVar11;
      }
LAB_00e66f18:
      *puVar3 = uVar8;
    }
    if (uVar5 < 0x11) {
      iVar6 = 0x10;
    }
    else {
      uVar8 = uVar7 >> 7 & 0xff;
      if (uVar8 == 0xff) {
        *(int *)plVar4 = *(int *)plVar4 + 1;
      }
      else {
        if (-1 < (int)*puVar3) {
          uVar10 = *puVar12;
          if (*piVar13 + uVar10 < *(uint *)plVar14) {
            uVar9 = 0;
            *(uint *)((long)param_1 + 0x1c) = uVar10 + 1;
            *(char *)(*param_1 + (ulong)uVar10) = (char)*puVar3;
          }
          else {
            uVar9 = 0xffffffff;
          }
          *(uint *)plVar11 = *(uint *)plVar11 | uVar9;
        }
        iVar6 = *(int *)plVar4;
        while (iVar6 != 0) {
          while( true ) {
            uVar10 = *puVar12;
            if (*piVar13 + uVar10 < *(uint *)plVar14) break;
            iVar6 = iVar6 + -1;
            *(int *)plVar4 = iVar6;
            *(uint *)plVar11 = 0xffffffff;
            if (iVar6 == 0) goto LAB_00e67008;
          }
          *(uint *)((long)param_1 + 0x1c) = uVar10 + 1;
          *(undefined *)(*param_1 + (ulong)uVar10) = 0xff;
          iVar6 = *(int *)(param_1 + 5) + -1;
          *(int *)plVar4 = iVar6;
          *(uint *)plVar11 = *(uint *)plVar11;
        }
LAB_00e67008:
        *puVar3 = uVar8;
      }
      if (uVar5 < 0x19) {
        iVar6 = 0x18;
      }
      else {
        if (-1 < (int)*puVar3) {
          uVar8 = *puVar12;
          if (*piVar13 + uVar8 < *(uint *)plVar14) {
            uVar10 = 0;
            *(uint *)((long)param_1 + 0x1c) = uVar8 + 1;
            *(char *)(*param_1 + (ulong)uVar8) = (char)*puVar3;
          }
          else {
            uVar10 = 0xffffffff;
          }
          *(uint *)plVar11 = *(uint *)plVar11 | uVar10;
        }
        iVar6 = *(int *)plVar4;
        while (iVar6 != 0) {
          while( true ) {
            uVar8 = *puVar12;
            if (*piVar13 + uVar8 < *(uint *)plVar14) break;
            iVar6 = iVar6 + -1;
            *(int *)plVar4 = iVar6;
            *(uint *)plVar11 = 0xffffffff;
            if (iVar6 == 0) goto LAB_00e670d4;
          }
          *(uint *)((long)param_1 + 0x1c) = uVar8 + 1;
          *(undefined *)(*param_1 + (ulong)uVar8) = 0xff;
          iVar6 = *(int *)(param_1 + 5) + -1;
          *(int *)plVar4 = iVar6;
          *(uint *)plVar11 = *(uint *)plVar11;
        }
LAB_00e670d4:
        *puVar3 = (uVar7 & 0x7f) << 1;
        if (uVar5 < 0x21) {
          iVar6 = 0x20;
        }
        else {
          if (-1 < (int)*puVar3) {
            uVar7 = *puVar12;
            if (*piVar13 + uVar7 < *(uint *)plVar14) {
              uVar8 = 0;
              *(uint *)((long)param_1 + 0x1c) = uVar7 + 1;
              *(char *)(*param_1 + (ulong)uVar7) = (char)*puVar3;
            }
            else {
              uVar8 = 0xffffffff;
            }
            *(uint *)plVar11 = *(uint *)plVar11 | uVar8;
          }
          iVar6 = *(int *)plVar4;
          while (iVar6 != 0) {
            while( true ) {
              uVar7 = *puVar12;
              if (*piVar13 + uVar7 < *(uint *)plVar14) break;
              iVar6 = iVar6 + -1;
              *(int *)plVar4 = iVar6;
              *(uint *)plVar11 = 0xffffffff;
              if (iVar6 == 0) goto LAB_00e671a8;
            }
            *(uint *)((long)param_1 + 0x1c) = uVar7 + 1;
            *(undefined *)(*param_1 + (ulong)uVar7) = 0xff;
            iVar6 = *(int *)(param_1 + 5) + -1;
            *(int *)plVar4 = iVar6;
            *(uint *)plVar11 = *(uint *)plVar11;
          }
LAB_00e671a8:
          iVar6 = 0x28;
          *puVar3 = 0;
        }
      }
    }
LAB_00e671b0:
    uVar5 = iVar6 - uVar5;
    iVar6 = *(int *)((long)param_1 + 0x2c);
    if (-1 < iVar6) goto LAB_00e671bc;
LAB_00e66d88:
    iVar6 = *(int *)(param_1 + 5);
    if (iVar6 == 0) {
      uVar7 = *(uint *)(param_1 + 2);
      iVar6 = *(int *)((long)param_1 + 0x14);
      goto joined_r0x00e66d98;
    }
LAB_00e67218:
    plVar4 = param_1 + 6;
    do {
      while( true ) {
        uVar7 = *(uint *)((long)param_1 + 0x1c);
        if (*(int *)((long)param_1 + 0xc) + uVar7 < *(uint *)(param_1 + 1)) break;
        iVar6 = iVar6 + -1;
        *(int *)(param_1 + 5) = iVar6;
        *(undefined4 *)plVar4 = 0xffffffff;
        if (iVar6 == 0) goto LAB_00e67284;
      }
      *(uint *)((long)param_1 + 0x1c) = uVar7 + 1;
      *(undefined *)(*param_1 + (ulong)uVar7) = 0xff;
      iVar6 = *(int *)(param_1 + 5) + -1;
      *(int *)(param_1 + 5) = iVar6;
      *(undefined4 *)plVar4 = *(undefined4 *)plVar4;
    } while (iVar6 != 0);
  }
LAB_00e67284:
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  uVar7 = *(uint *)(param_1 + 2);
  iVar6 = *(int *)((long)param_1 + 0x14);
joined_r0x00e66d98:
  iVar16 = iVar6;
  if (iVar6 < 8) {
    uVar8 = *(uint *)(param_1 + 6);
  }
  else {
    do {
      if ((uint)(*(int *)((long)param_1 + 0xc) + *(int *)((long)param_1 + 0x1c)) <
          *(uint *)(param_1 + 1)) {
        iVar6 = *(int *)((long)param_1 + 0xc) + 1;
        uVar8 = 0;
        *(int *)((long)param_1 + 0xc) = iVar6;
        *(char *)(*param_1 + (ulong)(*(uint *)(param_1 + 1) - iVar6)) = (char)uVar7;
      }
      else {
        uVar8 = 0xffffffff;
      }
      iVar6 = iVar16 + -8;
      uVar7 = uVar7 >> 8;
      uVar8 = *(uint *)(param_1 + 6) | uVar8;
      *(uint *)(param_1 + 6) = uVar8;
      bVar1 = 0xf < iVar16;
      iVar16 = iVar6;
    } while (bVar1);
  }
  if (uVar8 == 0) {
    bVar15 = (byte)uVar7;
    uVar7 = *(uint *)((long)param_1 + 0x1c);
    memset((void *)(*param_1 + (ulong)uVar7),0,
           (ulong)(*(uint *)(param_1 + 1) - (uVar7 + *(uint *)((long)param_1 + 0xc))));
    if (0 < iVar6) {
      uVar7 = *(uint *)((long)param_1 + 0xc);
      uVar8 = *(uint *)(param_1 + 1);
      if (uVar8 <= uVar7) {
        *(undefined4 *)(param_1 + 6) = 0xffffffff;
        return;
      }
      if ((uVar8 <= *(uint *)((long)param_1 + 0x1c) + uVar7) && ((int)uVar5 < iVar6)) {
        bVar15 = bVar15 & ((byte)(-1 << (ulong)(uVar5 & 0x1f)) ^ 0xff);
        *(undefined4 *)(param_1 + 6) = 0xffffffff;
      }
      *(byte *)(*param_1 + (ulong)(uVar8 + ~uVar7)) =
           *(byte *)(*param_1 + (ulong)(uVar8 + ~uVar7)) | bVar15;
      return;
    }
  }
  return;
}


