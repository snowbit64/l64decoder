// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_get_samples_short_interleaved
// Entry Point: 00e4b730
// Size: 440 bytes
// Signature: undefined stb_vorbis_get_samples_short_interleaved(void)


int stb_vorbis_get_samples_short_interleaved(long param_1,int param_2,long param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = param_4 / param_2;
  }
  lVar4 = tpidr_el0;
  iVar13 = 0;
  local_68 = *(long *)(lVar4 + 0x28);
  do {
    iVar14 = iVar13;
    if (iVar2 - iVar13 == 0 || iVar2 < iVar13) break;
    iVar14 = *(int *)(param_1 + 0x764);
    iVar3 = *(int *)(param_1 + 0x768) - iVar14;
    if (iVar2 <= iVar3 + iVar13) {
      iVar3 = iVar2 - iVar13;
    }
    if (iVar3 != 0) {
      FUN_00e4b168(param_2,param_3,*(undefined4 *)(param_1 + 4),param_1 + 0x378,iVar14,iVar3);
      iVar14 = *(int *)(param_1 + 0x764);
    }
    iVar13 = iVar3 + iVar13;
    *(int *)(undefined8 *)(param_1 + 0x764) = iVar14 + iVar3;
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
    uVar1 = *(uint *)(param_1 + 4);
    uVar8 = (ulong)uVar1;
    if (0 < (int)uVar1) {
      lVar7 = (long)iVar5;
      if (uVar1 == 1) {
        uVar10 = 0;
      }
      else {
        uVar10 = uVar8 & 0xfffffffe;
        uVar12 = uVar10;
        plVar11 = (long *)(param_1 + 0x3f8);
        do {
          uVar12 = uVar12 - 2;
          plVar11[1] = plVar11[-0xf] + lVar7 * 4;
          *plVar11 = plVar11[-0x10] + lVar7 * 4;
          plVar11 = plVar11 + 2;
        } while (uVar12 != 0);
        if (uVar10 == uVar8) goto LAB_00e4b784;
      }
      lVar9 = uVar8 - uVar10;
      plVar11 = (long *)(param_1 + 0x3f8) + uVar10;
      do {
        lVar9 = lVar9 + -1;
        *plVar11 = plVar11[-0x10] + lVar7 * 4;
        plVar11 = plVar11 + 1;
      } while (lVar9 != 0);
    }
LAB_00e4b784:
    *(int *)(param_1 + 0x764) = iVar5;
    param_3 = param_3 + (long)(iVar3 * param_2) * 2;
    *(int *)(param_1 + 0x768) = iVar6 + iVar5;
  } while (iVar6 != 0);
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar14;
}


