// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_get_samples_float_interleaved
// Entry Point: 00e4bd78
// Size: 576 bytes
// Signature: undefined stb_vorbis_get_samples_float_interleaved(void)


int stb_vorbis_get_samples_float_interleaved
              (long param_1,uint param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  ulong uVar16;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = param_4 / (int)param_2;
  }
  local_68 = *(long *)(lVar4 + 0x28);
  iVar13 = 0;
  uVar1 = param_2;
  if ((int)*(uint *)(param_1 + 4) <= (int)param_2) {
    uVar1 = *(uint *)(param_1 + 4);
  }
  do {
    iVar14 = iVar13;
    if (iVar2 - iVar13 == 0 || iVar2 < iVar13) break;
    iVar14 = *(int *)(param_1 + 0x764);
    uVar3 = *(int *)(param_1 + 0x768) - iVar14;
    if (iVar2 <= (int)(uVar3 + iVar13)) {
      uVar3 = iVar2 - iVar13;
    }
    if (0 < (int)uVar3) {
      uVar16 = 0;
      do {
        if ((int)uVar1 < 1) {
          uVar7 = 0;
          if (0 < (int)param_2) goto LAB_00e4be74;
        }
        else {
          uVar9 = (ulong)uVar1;
          plVar12 = (long *)(param_1 + 0x378);
          puVar15 = param_3;
          do {
            uVar9 = uVar9 - 1;
            param_3 = puVar15 + 1;
            *puVar15 = *(undefined4 *)(*plVar12 + (uVar16 + (long)iVar14) * 4);
            plVar12 = plVar12 + 1;
            puVar15 = param_3;
          } while (uVar9 != 0);
          uVar7 = uVar1;
          if ((int)uVar1 < (int)param_2) {
LAB_00e4be74:
            memset(param_3,0,(ulong)(~uVar7 + param_2) * 4 + 4);
            param_3 = param_3 + (ulong)(~uVar7 + param_2) + 1;
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar3);
    }
    iVar13 = uVar3 + iVar13;
    *(uint *)(undefined8 *)(param_1 + 0x764) = uVar3 + iVar14;
    iVar14 = iVar2;
    if (iVar13 == iVar2) break;
    iVar14 = iVar13;
    if (*(char *)(param_1 + 0x5c) != '\0') {
      *(undefined4 *)(param_1 + 0x9c) = 2;
      break;
    }
    iVar6 = FUN_00e4589c(param_1,&local_6c,&local_74,&local_70);
    iVar5 = local_74;
    if (iVar6 == 0) {
      *(undefined8 *)(param_1 + 0x764) = 0;
      break;
    }
    iVar6 = FUN_00e46748(param_1,local_6c,local_74,local_70);
    uVar3 = *(uint *)(param_1 + 4);
    uVar16 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      lVar8 = (long)iVar5;
      if (uVar3 == 1) {
        uVar11 = 0;
      }
      else {
        uVar11 = uVar16 & 0xfffffffe;
        uVar9 = uVar11;
        plVar12 = (long *)(param_1 + 0x3f8);
        do {
          uVar9 = uVar9 - 2;
          plVar12[1] = plVar12[-0xf] + lVar8 * 4;
          *plVar12 = plVar12[-0x10] + lVar8 * 4;
          plVar12 = plVar12 + 2;
        } while (uVar9 != 0);
        if (uVar11 == uVar16) goto LAB_00e4bde4;
      }
      lVar10 = uVar16 - uVar11;
      plVar12 = (long *)(param_1 + 0x3f8) + uVar11;
      do {
        lVar10 = lVar10 + -1;
        *plVar12 = plVar12[-0x10] + lVar8 * 4;
        plVar12 = plVar12 + 1;
      } while (lVar10 != 0);
    }
LAB_00e4bde4:
    *(int *)(param_1 + 0x764) = iVar5;
    *(int *)(param_1 + 0x768) = iVar6 + iVar5;
  } while (iVar6 != 0);
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar14;
}


