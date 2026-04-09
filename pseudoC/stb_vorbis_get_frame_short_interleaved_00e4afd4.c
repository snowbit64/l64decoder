// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_get_frame_short_interleaved
// Entry Point: 00e4afd4
// Size: 404 bytes
// Signature: undefined stb_vorbis_get_frame_short_interleaved(void)


int stb_vorbis_get_frame_short_interleaved
              (long param_1,ulong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 local_70;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar4 = (int)param_2;
  local_70 = param_3;
  if (iVar4 == 1) {
    iVar3 = stb_vorbis_get_frame_short(param_1,param_2,&local_70,param_4);
    goto LAB_00e4b03c;
  }
  if (*(char *)(param_1 + 0x5c) != '\0') {
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x9c) = 2;
    goto LAB_00e4b03c;
  }
  iVar3 = FUN_00e4589c(param_1,&local_5c,&local_64,&local_60);
  if (iVar3 == 0) {
    iVar3 = 0;
    *(undefined8 *)(param_1 + 0x764) = 0;
    goto LAB_00e4b03c;
  }
  iVar3 = FUN_00e46748(param_1,local_5c,local_64,local_60);
  uVar1 = *(uint *)(param_1 + 4);
  uVar5 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    lVar6 = (long)local_64;
    if (uVar1 == 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar5 & 0xfffffffe;
      plVar9 = (long *)(param_1 + 0x3f8);
      uVar10 = uVar7;
      do {
        uVar10 = uVar10 - 2;
        plVar9[1] = plVar9[-0xf] + lVar6 * 4;
        *plVar9 = plVar9[-0x10] + lVar6 * 4;
        plVar9 = plVar9 + 2;
      } while (uVar10 != 0);
      if (uVar7 == uVar5) goto LAB_00e4b128;
    }
    lVar8 = uVar5 - uVar7;
    plVar9 = (long *)(param_1 + uVar7 * 8 + 0x3f8);
    do {
      lVar8 = lVar8 + -1;
      *plVar9 = plVar9[-0x10] + lVar6 * 4;
      plVar9 = plVar9 + 1;
    } while (lVar8 != 0);
  }
LAB_00e4b128:
  *(int *)(param_1 + 0x764) = local_64;
  *(int *)(param_1 + 0x768) = iVar3 + local_64;
  if (iVar3 != 0) {
    if ((param_4 < iVar3 * iVar4) && (iVar3 = 0, iVar4 != 0)) {
      iVar3 = param_4 / iVar4;
    }
    FUN_00e4b168(param_2 & 0xffffffff,param_3,uVar5,param_1 + 0x3f8,0,iVar3);
  }
LAB_00e4b03c:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}


