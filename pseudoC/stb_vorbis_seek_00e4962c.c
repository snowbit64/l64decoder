// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_seek
// Entry Point: 00e4962c
// Size: 332 bytes
// Signature: undefined stb_vorbis_seek(void)


void stb_vorbis_seek(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar5 = stb_vorbis_seek_frame();
  if ((int)uVar5 == 0) goto LAB_00e4974c;
  iVar1 = *(int *)(param_1 + 0x580);
  if (iVar1 == param_2) {
    uVar5 = 1;
    goto LAB_00e4974c;
  }
  if (*(char *)(param_1 + 0x5c) == '\0') {
    iVar4 = FUN_00e4589c(param_1,&local_4c,&local_54,&local_50);
    if (iVar4 == 0) {
      local_54 = 0;
      *(undefined4 *)(param_1 + 0x768) = 0;
    }
    else {
      iVar4 = FUN_00e46748(param_1,local_4c,local_54,local_50);
      uVar2 = *(uint *)(param_1 + 4);
      uVar7 = (ulong)uVar2;
      if (0 < (int)uVar2) {
        lVar6 = (long)local_54;
        if (uVar2 == 1) {
          uVar9 = 0;
        }
        else {
          uVar9 = uVar7 & 0xfffffffe;
          plVar10 = (long *)(param_1 + 0x3f8);
          uVar11 = uVar9;
          do {
            uVar11 = uVar11 - 2;
            plVar10[1] = plVar10[-0xf] + lVar6 * 4;
            *plVar10 = plVar10[-0x10] + lVar6 * 4;
            plVar10 = plVar10 + 2;
          } while (uVar11 != 0);
          if (uVar9 == uVar7) goto LAB_00e49734;
        }
        lVar8 = uVar7 - uVar9;
        plVar10 = (long *)(param_1 + uVar9 * 8 + 0x3f8);
        do {
          lVar8 = lVar8 + -1;
          *plVar10 = plVar10[-0x10] + lVar6 * 4;
          plVar10 = plVar10 + 1;
        } while (lVar8 != 0);
      }
LAB_00e49734:
      *(int *)(param_1 + 0x768) = iVar4 + local_54;
    }
  }
  else {
    local_54 = *(int *)(param_1 + 0x764);
    *(undefined4 *)(param_1 + 0x9c) = 2;
  }
  uVar5 = 1;
  *(int *)(param_1 + 0x764) = (param_2 - iVar1) + local_54;
LAB_00e4974c:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


