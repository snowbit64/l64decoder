// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_encode_float
// Entry Point: 00e81774
// Size: 564 bytes
// Signature: undefined opus_encode_float(void)


undefined4 opus_encode_float(long param_1,float *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  undefined2 *puVar9;
  float fVar10;
  int aiStack_60 [6];
  code *pcStack_48;
  undefined4 auStack_40 [4];
  undefined2 auStack_30 [4];
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  iVar2 = *(int *)(param_1 + 0x90);
  if (iVar2 / 400 <= param_3) {
    uVar1 = *(uint *)(param_1 + 0x9c);
    iVar7 = param_3;
    if (uVar1 == 5000) {
LAB_00e817f4:
      if (((iVar7 * 400 == iVar2) || (iVar7 * 200 == iVar2)) || (iVar7 * 100 == iVar2)) {
        if (iVar7 < 1) goto LAB_00e817b4;
      }
      else {
        iVar3 = iVar7 * 0x32;
        uVar6 = 0xffffffff;
        if ((((((iVar3 != iVar2 && iVar7 * 0x19 != iVar2) && iVar3 != iVar2 * 3) &&
              iVar3 != iVar2 * 4) && iVar3 != iVar2 * 5) && iVar3 != iVar2 * 6) || (iVar7 < 1))
        goto LAB_00e817b8;
      }
      iVar2 = *(int *)(param_1 + 0x70);
      uVar1 = iVar2 * iVar7;
      uVar8 = (ulong)uVar1;
      lVar5 = -((-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | uVar8 << 1) + 0xf &
               0xfffffffffffffff0);
      puVar9 = (undefined2 *)((long)auStack_30 + lVar5);
      if (0 < (int)uVar1) {
        do {
          uVar8 = uVar8 - 1;
          fVar10 = *param_2 * 32768.0;
          if (*param_2 * 32768.0 <= -32768.0) {
            fVar10 = -32768.0;
          }
          fVar10 = (float)NEON_fminnm(fVar10,0x46fffe00);
          *puVar9 = (short)(long)(float)(int)fVar10;
          param_2 = param_2 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar8 != 0);
      }
      *(undefined4 *)((long)auStack_40 + lVar5) = 1;
      *(int *)((long)aiStack_60 + lVar5 + 0x10) = iVar2;
      *(undefined4 *)((long)aiStack_60 + lVar5) = 0;
      *(code **)((long)&pcStack_48 + lVar5) = downmix_float;
      *(undefined4 *)((long)aiStack_60 + lVar5 + 8) = 0xfffffffe;
      uVar6 = opus_encode_native();
      goto LAB_00e817b8;
    }
    if (uVar1 - 0x1389 < 9) {
      if (uVar1 >> 1 < 0x9c7) {
        iVar7 = iVar2 / 400 << (ulong)(uVar1 - 0x1389 & 0x1f);
      }
      else {
        iVar7 = (int)((uVar1 - 0x138b) * iVar2) / 0x32;
      }
      if (iVar7 <= param_3) goto LAB_00e817f4;
    }
  }
LAB_00e817b4:
  uVar6 = 0xffffffff;
LAB_00e817b8:
  if (*(long *)(lVar4 + 0x28) == local_28) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


