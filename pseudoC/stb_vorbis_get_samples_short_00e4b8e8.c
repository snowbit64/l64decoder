// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_get_samples_short
// Entry Point: 00e4b8e8
// Size: 432 bytes
// Signature: undefined stb_vorbis_get_samples_short(void)


int stb_vorbis_get_samples_short(long param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  iVar11 = 0;
  local_68 = *(long *)(lVar2 + 0x28);
  do {
    iVar12 = iVar11;
    if (param_4 <= iVar11) break;
    iVar4 = *(int *)(param_1 + 0x764);
    iVar12 = *(int *)(param_1 + 0x768) - iVar4;
    if (param_4 <= iVar12 + iVar11) {
      iVar12 = param_4 - iVar11;
    }
    if (iVar12 != 0) {
      FUN_00e4ab44(param_2,param_3,iVar11,*(undefined4 *)(param_1 + 4),param_1 + 0x378,iVar4,iVar12)
      ;
      iVar4 = *(int *)(param_1 + 0x764);
    }
    iVar11 = iVar12 + iVar11;
    *(int *)(undefined8 *)(param_1 + 0x764) = iVar4 + iVar12;
    iVar12 = param_4;
    if (iVar11 == param_4) break;
    iVar12 = iVar11;
    if (*(char *)(param_1 + 0x5c) != '\0') {
      *(undefined4 *)(param_1 + 0x9c) = 2;
      break;
    }
    iVar3 = FUN_00e4589c(param_1,&local_6c,&local_74,&local_70);
    iVar4 = local_74;
    if (iVar3 == 0) {
      *(undefined8 *)(param_1 + 0x764) = 0;
      break;
    }
    iVar3 = FUN_00e46748(param_1,local_6c,local_74,local_70);
    uVar1 = *(uint *)(param_1 + 4);
    uVar6 = (ulong)uVar1;
    if (0 < (int)uVar1) {
      lVar5 = (long)iVar4;
      if (uVar1 == 1) {
        uVar8 = 0;
      }
      else {
        uVar8 = uVar6 & 0xfffffffe;
        uVar10 = uVar8;
        plVar9 = (long *)(param_1 + 0x3f8);
        do {
          uVar10 = uVar10 - 2;
          plVar9[1] = plVar9[-0xf] + lVar5 * 4;
          *plVar9 = plVar9[-0x10] + lVar5 * 4;
          plVar9 = plVar9 + 2;
        } while (uVar10 != 0);
        if (uVar8 == uVar6) goto LAB_00e4b938;
      }
      lVar7 = uVar6 - uVar8;
      plVar9 = (long *)(param_1 + 0x3f8) + uVar8;
      do {
        lVar7 = lVar7 + -1;
        *plVar9 = plVar9[-0x10] + lVar5 * 4;
        plVar9 = plVar9 + 1;
      } while (lVar7 != 0);
    }
LAB_00e4b938:
    *(int *)(param_1 + 0x764) = iVar4;
    *(int *)(param_1 + 0x768) = iVar3 + iVar4;
  } while (iVar3 != 0);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar12;
}


