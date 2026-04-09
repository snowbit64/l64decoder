// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_get_frame_float
// Entry Point: 00e49778
// Size: 320 bytes
// Signature: undefined stb_vorbis_get_frame_float(void)


void stb_vorbis_get_frame_float(long param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  int local_54;
  undefined4 local_50;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0x5c) != '\0') {
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0x9c) = 2;
    goto LAB_00e497b4;
  }
  uVar3 = FUN_00e4589c(param_1,&local_4c,&local_54,&local_50);
  if ((int)uVar3 == 0) {
    *(undefined8 *)(param_1 + 0x764) = 0;
    goto LAB_00e497b4;
  }
  uVar3 = FUN_00e46748(param_1,local_4c,local_54,local_50);
  uVar1 = *(uint *)(param_1 + 4);
  uVar4 = (ulong)uVar1;
  local_4c = (int)uVar3;
  if (0 < (int)uVar1) {
    lVar5 = (long)local_54;
    if (uVar1 == 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar4 & 0xfffffffe;
      plVar8 = (long *)(param_1 + 0x3f8);
      uVar9 = uVar6;
      do {
        uVar9 = uVar9 - 2;
        plVar8[1] = plVar8[-0xf] + lVar5 * 4;
        *plVar8 = plVar8[-0x10] + lVar5 * 4;
        plVar8 = plVar8 + 2;
      } while (uVar9 != 0);
      if (uVar6 == uVar4) goto LAB_00e49890;
    }
    lVar7 = uVar4 - uVar6;
    plVar8 = (long *)(param_1 + uVar6 * 8 + 0x3f8);
    do {
      lVar7 = lVar7 + -1;
      *plVar8 = plVar8[-0x10] + lVar5 * 4;
      plVar8 = plVar8 + 1;
    } while (lVar7 != 0);
  }
LAB_00e49890:
  *(int *)(param_1 + 0x764) = local_54;
  *(int *)(param_1 + 0x768) = local_4c + local_54;
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar1;
  }
  if (param_3 != (long *)0x0) {
    *param_3 = param_1 + 0x3f8;
  }
LAB_00e497b4:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


