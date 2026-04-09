// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_colorspace_set_endpoints
// Entry Point: 00daa79c
// Size: 1652 bytes
// Signature: undefined png_colorspace_set_endpoints(void)


void png_colorspace_set_endpoints(undefined8 param_1,long param_2,long *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  long lVar11;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  int local_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  lVar8 = param_3[1];
  lVar6 = *param_3;
  lVar11 = param_3[3];
  lVar9 = param_3[2];
  local_70 = *(int *)(param_3 + 4);
  local_90._4_4_ = (int)((ulong)lVar6 >> 0x20);
  if (((((lVar6 < 0) || (local_80._0_4_ = (int)lVar9, (int)local_80 < 0)) ||
       (local_78._4_4_ = (int)((ulong)lVar11 >> 0x20), lVar11 < 0)) ||
      (((local_90._0_4_ = (int)lVar6, (int)local_90 < 0 ||
        (uStack_88._4_4_ = (uint)((ulong)lVar8 >> 0x20), lVar8 < 0)) ||
       ((local_78._0_4_ = (uint)lVar11, (int)(uint)local_78 < 0 ||
        ((uStack_88._0_4_ = (int)lVar8, (int)uStack_88 < 0 ||
         (local_80._4_4_ = (int)((ulong)lVar9 >> 0x20), lVar9 < 0)))))))) ||
     ((local_70 < 0 ||
      (((0x7fffffffU - local_90._4_4_ < uStack_88._4_4_ ||
        (0x7fffffffU - ((int)local_80 + local_90._4_4_) < (uint)local_78)) ||
       (iVar1 = local_78._4_4_ + (int)local_80 + local_90._4_4_, iVar1 == 0)))))) {
LAB_00daad7c:
    local_78 = lVar11;
    local_80 = lVar9;
    uStack_88 = lVar8;
    local_90 = lVar6;
    uVar4 = *(ushort *)(param_2 + 0x4a);
    pcVar3 = "invalid end points";
LAB_00daad8c:
    *(ushort *)(param_2 + 0x4a) = uVar4 | 0x8000;
    png_benign_error(param_1,pcVar3);
  }
  else {
    if (iVar1 == 100000) {
      local_90 = lVar6;
      uStack_88 = lVar8;
      local_80 = lVar9;
      local_78 = lVar11;
      iVar1 = FUN_00dae3d0(&local_b0,&local_90);
    }
    else {
      dVar7 = (double)iVar1;
      if ((int)local_90 != 0) {
        dVar10 = (double)(long)(((double)(int)local_90 * 100000.0) / dVar7 + 0.5);
        if (2147483647.0 < dVar10 || dVar10 < -2147483648.0) goto LAB_00daad7c;
        local_90._0_4_ = (int)dVar10;
      }
      if (local_90._4_4_ != 0) {
        dVar10 = (double)(long)(((double)local_90._4_4_ * 100000.0) / dVar7 + 0.5);
        lVar6 = local_90;
        if (2147483647.0 < dVar10 || dVar10 < -2147483648.0) goto LAB_00daad7c;
        local_90._4_4_ = (int)dVar10;
      }
      lVar6 = local_90;
      if ((int)uStack_88 != 0) {
        dVar10 = (double)(long)(((double)(int)uStack_88 * 100000.0) / dVar7 + 0.5);
        if (2147483647.0 < dVar10 || dVar10 < -2147483648.0) goto LAB_00daad7c;
        uStack_88._0_4_ = (int)dVar10;
      }
      if (uStack_88._4_4_ != 0) {
        dVar10 = (double)(long)(((double)uStack_88._4_4_ * 100000.0) / dVar7 + 0.5);
        lVar8 = uStack_88;
        if (2147483647.0 < dVar10 || dVar10 < -2147483648.0) goto LAB_00daad7c;
        uStack_88._4_4_ = (uint)dVar10;
      }
      lVar8 = uStack_88;
      if ((int)local_80 != 0) {
        dVar10 = (double)(long)(((double)(int)local_80 * 100000.0) / dVar7 + 0.5);
        if (2147483647.0 < dVar10 || dVar10 < -2147483648.0) goto LAB_00daad7c;
        local_80._0_4_ = (int)dVar10;
      }
      if (local_80._4_4_ != 0) {
        dVar10 = (double)(long)(((double)local_80._4_4_ * 100000.0) / dVar7 + 0.5);
        lVar9 = local_80;
        if (2147483647.0 < dVar10 || dVar10 < -2147483648.0) goto LAB_00daad7c;
        local_80._4_4_ = (int)dVar10;
      }
      lVar9 = local_80;
      if ((uint)local_78 != 0) {
        dVar10 = (double)(long)(((double)(uint)local_78 * 100000.0) / dVar7 + 0.5);
        if (2147483647.0 < dVar10 || dVar10 < -2147483648.0) goto LAB_00daad7c;
        local_78._0_4_ = (uint)dVar10;
      }
      if (local_78._4_4_ != 0) {
        dVar10 = (double)(long)(((double)local_78._4_4_ * 100000.0) / dVar7 + 0.5);
        lVar11 = local_78;
        if ((2147483647.0 < dVar10) || (dVar10 < -2147483648.0)) goto LAB_00daad7c;
        local_78._4_4_ = (int)dVar10;
      }
      if (local_70 != 0) {
        dVar7 = (double)(long)(((double)local_70 * 100000.0) / dVar7 + 0.5);
        lVar11 = local_78;
        if ((2147483647.0 < dVar7) || (dVar7 < -2147483648.0)) goto LAB_00daad7c;
        local_70 = (int)dVar7;
      }
      iVar1 = FUN_00dae3d0(&local_b0,&local_90);
    }
    if (iVar1 == 0) {
      local_60 = local_90;
      lStack_58 = uStack_88;
      lStack_50 = local_80;
      lStack_48 = local_78;
      local_40 = local_70;
      iVar1 = FUN_00da9e34(&local_60,&local_b0);
    }
    lVar6 = local_90;
    lVar8 = uStack_88;
    lVar9 = local_80;
    lVar11 = local_78;
    if (iVar1 == 1) goto LAB_00daad7c;
    if (iVar1 != 0) {
      *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | 0x8000;
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"internal error checking chromaticities");
    }
    uVar4 = *(ushort *)(param_2 + 0x4a);
    if (-1 < (short)uVar4) {
      if ((1 < param_4) || ((uVar4 >> 1 & 1) == 0)) {
LAB_00daa9ac:
        *(ulong *)(param_2 + 0xc) = CONCAT44(iStack_a4,iStack_a8);
        *(ulong *)(param_2 + 4) = CONCAT44(iStack_ac,local_b0);
        *(ulong *)(param_2 + 0x1c) = CONCAT44(local_94,local_98);
        *(ulong *)(param_2 + 0x14) = CONCAT44(local_9c,local_a0);
        *(long *)(param_2 + 0x2c) = uStack_88;
        *(long *)(param_2 + 0x24) = local_90;
        *(long *)(param_2 + 0x3c) = local_78;
        *(long *)(param_2 + 0x34) = local_80;
        *(int *)(param_2 + 0x44) = local_70;
        if ((((local_98 - 0x7e0fU < 0xfffff82f) || (local_94 - 0x846dU < 0xfffff82f)) ||
            ((local_b0 - 0xfde9U < 0xfffff82f ||
             (((iStack_ac - 0x84d1U < 0xfffff82f || (iStack_a8 - 0x7919U < 0xfffff82f)) ||
              (iStack_a4 - 0xee49U < 0xfffff82f)))))) ||
           ((local_a0 - 0x3e81U < 0xfffff82f || (local_9c - 0x1b59U < 0xfffff82f)))) {
          uVar4 = uVar4 & 0xffbf | 2;
        }
        else {
          uVar4 = uVar4 | 0x42;
        }
        uVar2 = 2;
        *(ushort *)(param_2 + 0x4a) = uVar4;
        lVar5 = *(long *)(lVar5 + 0x28);
joined_r0x00daadec:
        if (lVar5 == local_38) {
          return;
        }
        goto LAB_00daadf0;
      }
      if (((*(int *)(param_2 + 0x1c) + -100 <= local_98) &&
          (((((local_98 <= *(int *)(param_2 + 0x1c) + 100 &&
              (*(int *)(param_2 + 0x20) + -100 <= local_94)) &&
             (local_94 <= *(int *)(param_2 + 0x20) + 100)) &&
            ((*(int *)(param_2 + 4) + -100 <= local_b0 && (local_b0 <= *(int *)(param_2 + 4) + 100))
            )) && (*(int *)(param_2 + 8) + -100 <= iStack_ac)))) &&
         (((((iStack_ac <= *(int *)(param_2 + 8) + 100 &&
             (*(int *)(param_2 + 0xc) + -100 <= iStack_a8)) &&
            (iStack_a8 <= *(int *)(param_2 + 0xc) + 100)) &&
           ((((*(int *)(param_2 + 0x10) + -100 <= iStack_a4 &&
              (iStack_a4 <= *(int *)(param_2 + 0x10) + 100)) &&
             (*(int *)(param_2 + 0x14) + -100 <= local_a0)) &&
            ((local_a0 <= *(int *)(param_2 + 0x14) + 100 &&
             (*(int *)(param_2 + 0x18) + -100 <= local_9c)))))) &&
          (local_9c <= *(int *)(param_2 + 0x18) + 100)))) {
        if (param_4 != 0) goto LAB_00daa9ac;
        uVar2 = 1;
        lVar5 = *(long *)(lVar5 + 0x28);
        goto joined_r0x00daadec;
      }
      pcVar3 = "inconsistent chromaticities";
      goto LAB_00daad8c;
    }
  }
  uVar2 = 0;
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
LAB_00daadf0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


