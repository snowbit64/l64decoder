// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_get_frame_short
// Entry Point: 00e4a9dc
// Size: 360 bytes
// Signature: undefined stb_vorbis_get_frame_short(void)


int stb_vorbis_get_frame_short(long param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0x5c) != '\0') {
    lVar4 = 0;
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x9c) = 2;
    goto LAB_00e4aaec;
  }
  iVar3 = FUN_00e4589c(param_1,&local_4c,&local_54,&local_50);
  if (iVar3 == 0) {
    lVar4 = 0;
    *(undefined8 *)(param_1 + 0x764) = 0;
    iVar3 = 0;
    goto LAB_00e4aaec;
  }
  iVar3 = FUN_00e46748(param_1,local_4c,local_54,local_50);
  uVar1 = *(uint *)(param_1 + 4);
  uVar5 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    lVar4 = (long)local_54;
    if (uVar1 == 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar5 & 0xfffffffe;
      plVar8 = (long *)(param_1 + 0x3f8);
      uVar9 = uVar7;
      do {
        uVar9 = uVar9 - 2;
        plVar8[1] = plVar8[-0xf] + lVar4 * 4;
        *plVar8 = plVar8[-0x10] + lVar4 * 4;
        plVar8 = plVar8 + 2;
      } while (uVar9 != 0);
      if (uVar7 == uVar5) goto LAB_00e4aadc;
    }
    lVar6 = uVar5 - uVar7;
    plVar8 = (long *)(param_1 + uVar7 * 8 + 0x3f8);
    do {
      lVar6 = lVar6 + -1;
      *plVar8 = plVar8[-0x10] + lVar4 * 4;
      plVar8 = plVar8 + 1;
    } while (lVar6 != 0);
  }
LAB_00e4aadc:
  lVar4 = param_1 + 0x3f8;
  *(int *)(param_1 + 0x764) = local_54;
  *(int *)(param_1 + 0x768) = iVar3 + local_54;
LAB_00e4aaec:
  if (iVar3 <= param_4) {
    param_4 = iVar3;
  }
  if (param_4 != 0) {
    FUN_00e4ab44(param_2,param_3,0,*(undefined4 *)(param_1 + 4),lVar4,0,param_4);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


