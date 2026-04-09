// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unzOpenCurrentFile3
// Entry Point: 00e31f98
// Size: 1752 bytes
// Signature: undefined unzOpenCurrentFile3(void)


int unzOpenCurrentFile3(void **param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                       long param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  undefined4 uVar6;
  ulong uVar7;
  void *pvVar8;
  void **ppvVar9;
  void *pvVar10;
  void *pvVar11;
  byte bVar12;
  ulong uVar13;
  ulong uVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  void *pvVar19;
  void *pvVar20;
  void *local_80;
  long local_78;
  byte local_6c [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  iVar3 = -0x66;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (void **)0x0) || (param_5 != 0)) goto LAB_00e3204c;
  if (param_1[0x12] == (void *)0x0) {
    iVar3 = -0x66;
    goto LAB_00e3204c;
  }
  ppvVar9 = (void **)param_1[0x28];
  if (ppvVar9 != (void **)0x0) {
    if (*ppvVar9 != (void *)0x0) {
      free(*ppvVar9);
    }
    *ppvVar9 = (void *)0x0;
    if (ppvVar9[0x10] == (void *)0x8) {
      inflateEnd(ppvVar9 + 1);
    }
    free(ppvVar9);
    param_1[0x28] = (void *)0x0;
  }
  lVar4 = call_zseek64(param_1,param_1[0xc],(long)param_1[0xf] + (long)param_1[0x27],0);
  if (lVar4 == 0) {
    iVar2 = FUN_00e32cbc(param_1,param_1[0xc],&local_78);
    pvVar10 = param_1[0xc];
    iVar3 = 0;
    if (local_78 != 0x4034b50) {
      iVar3 = -0x67;
    }
    if (iVar2 != 0) {
      iVar3 = -1;
    }
    iVar2 = (*(code *)param_1[1])(param_1[7],pvVar10,local_6c,1);
    if (iVar2 == 1) {
      uVar13 = (ulong)local_6c[0];
      uVar14 = uVar13 << 8;
LAB_00e320f8:
      iVar2 = (*(code *)param_1[1])(param_1[7],pvVar10,local_6c,1);
      if (iVar2 == 1) {
        uVar14 = (ulong)local_6c[0] << 8;
      }
      else {
        iVar2 = (*(code *)param_1[6])(param_1[7],pvVar10);
        if (iVar2 != 0) goto LAB_00e32138;
      }
      local_80 = (void *)(uVar14 | uVar13);
    }
    else {
      iVar2 = (*(code *)param_1[6])(param_1[7],pvVar10);
      uVar13 = 0;
      if (iVar2 == 0) {
        uVar14 = 0;
        goto LAB_00e320f8;
      }
LAB_00e32138:
      local_80 = (void *)0x0;
      iVar3 = -1;
    }
    pvVar10 = param_1[0xc];
    iVar2 = (*(code *)param_1[1])(param_1[7],pvVar10,local_6c,1);
    bVar12 = local_6c[0];
    if (iVar2 == 1) {
LAB_00e32190:
      iVar2 = (*(code *)param_1[1])(param_1[7],pvVar10,local_6c,1);
      if ((iVar2 != 1) && (iVar2 = (*(code *)param_1[6])(param_1[7],pvVar10), iVar2 != 0))
      goto LAB_00e321cc;
      bVar12 = bVar12 & 8;
    }
    else {
      iVar2 = (*(code *)param_1[6])(param_1[7],pvVar10);
      bVar12 = 0;
      if (iVar2 == 0) goto LAB_00e32190;
LAB_00e321cc:
      bVar12 = 0;
      iVar3 = -1;
    }
    pvVar10 = param_1[0xc];
    iVar2 = (*(code *)param_1[1])(param_1[7],pvVar10,local_6c,1);
    if (iVar2 == 1) {
      uVar13 = (ulong)local_6c[0];
      uVar14 = uVar13 << 8;
LAB_00e32224:
      iVar2 = (*(code *)param_1[1])(param_1[7],pvVar10,local_6c,1);
      if (iVar2 == 1) {
        uVar14 = (ulong)local_6c[0] << 8;
      }
      else {
        iVar2 = (*(code *)param_1[6])(param_1[7],pvVar10);
        if (iVar2 != 0) goto LAB_00e32260;
      }
      local_80 = (void *)(uVar14 | uVar13);
      if (iVar3 == 0) {
        if (((local_80 == param_1[0x19]) && (local_80 < (void *)0xd)) &&
           ((1L << (uVar13 & 0x3f) & 0x1101U) != 0)) {
          iVar3 = 0;
        }
        else {
          iVar3 = -0x67;
        }
      }
    }
    else {
      iVar2 = (*(code *)param_1[6])(param_1[7],pvVar10);
      if (iVar2 == 0) {
        uVar13 = 0;
        uVar14 = 0;
        goto LAB_00e32224;
      }
LAB_00e32260:
      iVar3 = -1;
      local_80 = (void *)0x0;
    }
    iVar2 = FUN_00e32cbc(param_1,param_1[0xc],&local_80);
    if (iVar2 != 0) {
      iVar3 = -1;
    }
    iVar2 = FUN_00e32cbc(param_1,param_1[0xc],&local_80);
    if (iVar2 == 0) {
      if (iVar3 == 0) {
        if (local_80 == param_1[0x1b]) {
          iVar3 = 0;
        }
        else {
          iVar3 = -0x67;
          if (bVar12 != 0) {
            iVar3 = 0;
          }
        }
      }
    }
    else {
      iVar3 = -1;
    }
    iVar2 = FUN_00e32cbc(param_1,param_1[0xc],&local_80);
    if (iVar2 == 0) {
      if ((local_80 != (void *)0xffffffff) && (iVar3 == 0)) {
        if (local_80 == param_1[0x1c]) {
          iVar3 = 0;
        }
        else {
          iVar3 = -0x67;
          if (bVar12 != 0) {
            iVar3 = 0;
          }
        }
      }
    }
    else {
      iVar3 = -1;
    }
    iVar2 = FUN_00e32cbc(param_1,param_1[0xc],&local_80);
    if (iVar2 == 0) {
      if ((local_80 != (void *)0xffffffff) && (iVar3 == 0)) {
        if (local_80 == param_1[0x1d]) {
          iVar3 = 0;
        }
        else {
          iVar3 = -0x67;
          if (bVar12 != 0) {
            iVar3 = 0;
          }
        }
      }
    }
    else {
      iVar3 = -1;
    }
    pvVar10 = param_1[0xc];
    iVar2 = (*(code *)param_1[1])(param_1[7],pvVar10,local_6c,1);
    if (iVar2 == 1) {
      uVar13 = (ulong)local_6c[0];
      uVar14 = uVar13 << 8;
LAB_00e32380:
      iVar2 = (*(code *)param_1[1])(param_1[7],pvVar10,local_6c,1);
      if (iVar2 == 1) {
        uVar14 = (ulong)local_6c[0] << 8;
      }
      else {
        iVar2 = (*(code *)param_1[6])(param_1[7],pvVar10);
        if (iVar2 != 0) goto LAB_00e32410;
      }
      pvVar10 = (void *)(uVar14 | uVar13);
      if ((iVar3 == 0) && (iVar3 = 0, pvVar10 != param_1[0x1e])) {
        iVar3 = -0x67;
      }
    }
    else {
      iVar2 = (*(code *)param_1[6])(param_1[7],pvVar10);
      uVar13 = 0;
      if (iVar2 == 0) {
        uVar14 = 0;
        goto LAB_00e32380;
      }
LAB_00e32410:
      pvVar10 = (void *)0x0;
      iVar3 = -1;
    }
    pvVar11 = param_1[0xc];
    iVar2 = (*(code *)param_1[1])(param_1[7],pvVar11,local_6c,1);
    if (iVar2 == 1) {
      uVar13 = (ulong)local_6c[0];
      uVar14 = uVar13 << 8;
    }
    else {
      iVar2 = (*(code *)param_1[6])(param_1[7],pvVar11);
      if (iVar2 != 0) goto LAB_00e32040;
      uVar13 = 0;
      uVar14 = 0;
    }
    iVar2 = (*(code *)param_1[1])(param_1[7],pvVar11,local_6c,1);
    if (iVar2 == 1) {
      uVar14 = (ulong)local_6c[0] << 8;
    }
    else {
      iVar2 = (*(code *)param_1[6])(param_1[7],pvVar11);
      if (iVar2 != 0) goto LAB_00e32040;
    }
    if (iVar3 == 0) {
      pvVar11 = param_1[0x27];
      ppvVar9 = (void **)malloc(0x140);
      if (ppvVar9 == (void **)0x0) {
        iVar3 = -0x68;
        goto LAB_00e3204c;
      }
      pvVar5 = malloc(0x4000);
      ppvVar9[0x11] = (void *)((long)pvVar10 + (long)pvVar11 + 0x1e);
      *(int *)(ppvVar9 + 0x12) = (int)(uVar14 | uVar13);
      ppvVar9[0x13] = (void *)0x0;
      *ppvVar9 = pvVar5;
      *(int *)(ppvVar9 + 0x27) = param_4;
      if (pvVar5 == (void *)0x0) {
        free(ppvVar9);
        iVar3 = -0x68;
        goto LAB_00e3204c;
      }
      ppvVar9[0x10] = (void *)0x0;
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = (int)param_1[0x19];
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 6;
        uVar7 = (ulong)param_1[0x18] & 6;
        if (uVar7 == 2) {
          uVar6 = 9;
        }
        else if (uVar7 == 6) {
          uVar6 = 1;
        }
        else {
          if (uVar7 != 4) goto LAB_00e32584;
          uVar6 = 2;
        }
        *param_3 = uVar6;
      }
LAB_00e32584:
      pvVar8 = param_1[5];
      pvVar5 = param_1[4];
      pvVar16 = param_1[7];
      pvVar15 = param_1[6];
      ppvVar9[0x14] = (void *)0x0;
      ppvVar9[6] = (void *)0x0;
      ppvVar9[0x1e] = pvVar8;
      ppvVar9[0x1d] = pvVar5;
      pvVar20 = param_1[9];
      pvVar19 = param_1[8];
      ppvVar9[0x20] = pvVar16;
      ppvVar9[0x1f] = pvVar15;
      pvVar5 = param_1[0x1b];
      pvVar8 = param_1[10];
      pvVar16 = param_1[1];
      pvVar15 = *param_1;
      pvVar18 = param_1[3];
      pvVar17 = param_1[2];
      ppvVar9[0x22] = pvVar20;
      ppvVar9[0x21] = pvVar19;
      ppvVar9[0x15] = (void *)0x0;
      ppvVar9[0x16] = pvVar5;
      ppvVar9[0x23] = pvVar8;
      ppvVar9[0x1a] = pvVar16;
      ppvVar9[0x19] = pvVar15;
      pvVar5 = param_1[0x19];
      ppvVar9[0x1c] = pvVar18;
      ppvVar9[0x1b] = pvVar17;
      pvVar8 = param_1[0xf];
      ppvVar9[0x24] = param_1[0xc];
      ppvVar9[0x25] = pvVar5;
      ppvVar9[0x26] = pvVar8;
      if ((param_4 == 0) && (pvVar5 == (void *)0xc)) {
        *(undefined4 *)(ppvVar9 + 0x27) = 1;
      }
      else if ((param_4 == 0) && (pvVar5 == (void *)0x8)) {
        ppvVar9[1] = (void *)0x0;
        *(undefined4 *)(ppvVar9 + 2) = 0;
        ppvVar9[10] = (void *)0x0;
        ppvVar9[0xb] = (void *)0x0;
        ppvVar9[9] = (void *)0x0;
        iVar3 = inflateInit2_(ppvVar9 + 1,0xfffffff1,"1.2.11",0x70);
        if (iVar3 != 0) {
          free(ppvVar9);
          goto LAB_00e3204c;
        }
        pvVar11 = param_1[0x27];
        ppvVar9[0x10] = (void *)0x8;
      }
      iVar3 = 0;
      pvVar8 = param_1[0x1d];
      pvVar5 = param_1[0x1c];
      *(undefined4 *)(ppvVar9 + 2) = 0;
      param_1[0x28] = ppvVar9;
      ppvVar9[0x18] = pvVar8;
      ppvVar9[0x17] = pvVar5;
      ppvVar9[0xf] = (void *)((long)pvVar11 + (long)pvVar10 + (uVar14 | uVar13) + 0x1e);
      *(undefined4 *)(param_1 + 0x29) = 0;
      goto LAB_00e3204c;
    }
  }
LAB_00e32040:
  iVar3 = -0x67;
LAB_00e3204c:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}


