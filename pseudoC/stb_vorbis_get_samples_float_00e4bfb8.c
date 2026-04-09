// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_get_samples_float
// Entry Point: 00e4bfb8
// Size: 636 bytes
// Signature: undefined stb_vorbis_get_samples_float(void)


int stb_vorbis_get_samples_float(long param_1,uint param_2,long *param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  iVar11 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x764);
  uVar2 = param_2;
  if ((int)*(uint *)(param_1 + 4) <= (int)param_2) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  do {
    iVar12 = iVar11;
    if (param_4 <= iVar11) break;
    uVar3 = *(int *)(param_1 + 0x768) - *(int *)(param_1 + 0x764);
    if (param_4 <= (int)(uVar3 + iVar11)) {
      uVar3 = param_4 - iVar11;
    }
    if (uVar3 != 0) {
      lVar16 = (long)iVar11;
      uVar15 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
      if ((int)uVar2 < 1) {
        uVar7 = 0;
      }
      else {
        memcpy((void *)(*param_3 + lVar16 * 4),
               (void *)(*(long *)(param_1 + 0x378) + (long)*(int *)(param_1 + 0x764) * 4),uVar15);
        plVar9 = param_3 + 1;
        plVar13 = (long *)(param_1 + 0x380);
        lVar14 = (ulong)uVar2 - 1;
        uVar7 = uVar2;
        if (uVar2 != 1) {
          do {
            memcpy((void *)(*plVar9 + lVar16 * 4),(void *)(*plVar13 + (long)*(int *)puVar1 * 4),
                   uVar15);
            lVar14 = lVar14 + -1;
            plVar9 = plVar9 + 1;
            plVar13 = plVar13 + 1;
          } while (lVar14 != 0);
        }
      }
      if ((int)uVar7 < (int)param_2) {
        lVar14 = (ulong)param_2 - (ulong)uVar7;
        plVar9 = param_3 + uVar7;
        do {
          memset((void *)(*plVar9 + lVar16 * 4),0,uVar15);
          lVar14 = lVar14 + -1;
          plVar9 = plVar9 + 1;
        } while (lVar14 != 0);
      }
    }
    iVar11 = uVar3 + iVar11;
    *(uint *)puVar1 = *(int *)puVar1 + uVar3;
    iVar12 = param_4;
    if (iVar11 == param_4) break;
    iVar12 = iVar11;
    if (*(char *)(param_1 + 0x5c) != '\0') {
      *(undefined4 *)(param_1 + 0x9c) = 2;
      break;
    }
    iVar6 = FUN_00e4589c(param_1,&local_6c,&local_74,&local_70);
    iVar5 = local_74;
    if (iVar6 == 0) {
      *puVar1 = 0;
      break;
    }
    iVar6 = FUN_00e46748(param_1,local_6c,local_74,local_70);
    uVar3 = *(uint *)(param_1 + 4);
    uVar15 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      lVar16 = (long)iVar5;
      if (uVar3 == 1) {
        uVar8 = 0;
      }
      else {
        uVar8 = uVar15 & 0xfffffffe;
        uVar10 = uVar8;
        plVar9 = (long *)(param_1 + 0x3f8);
        do {
          uVar10 = uVar10 - 2;
          plVar9[1] = plVar9[-0xf] + lVar16 * 4;
          *plVar9 = plVar9[-0x10] + lVar16 * 4;
          plVar9 = plVar9 + 2;
        } while (uVar10 != 0);
        if (uVar8 == uVar15) goto LAB_00e4c03c;
      }
      lVar14 = uVar15 - uVar8;
      plVar9 = (long *)(param_1 + 0x3f8) + uVar8;
      do {
        lVar14 = lVar14 + -1;
        *plVar9 = plVar9[-0x10] + lVar16 * 4;
        plVar9 = plVar9 + 1;
      } while (lVar14 != 0);
    }
LAB_00e4c03c:
    *(int *)(param_1 + 0x764) = iVar5;
    *(int *)(param_1 + 0x768) = iVar6 + iVar5;
  } while (iVar6 != 0);
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar12;
}


