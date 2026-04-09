// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isBlocked
// Entry Point: 00731e44
// Size: 440 bytes
// Signature: undefined __cdecl isBlocked(OrientedBox * param_1)


/* VehicleNavigationMap::isBlocked(OrientedBox const&) const */

void VehicleNavigationMap::isBlocked(OrientedBox *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  float *in_x1;
  uint uVar5;
  float fVar6;
  float in_s1;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  float local_88;
  float fStack_84;
  undefined4 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  fVar6 = (float)OrientedBox::computeWorldExtent();
  fVar7 = *(float *)(param_1 + 0x10);
  fVar8 = *(float *)(param_1 + 8);
  fVar10 = (float)(*(ushort *)(param_1 + 0x14) - 1);
  fVar9 = (float)(int)((*in_x1 + fVar6 + fVar7) * fVar8);
  fVar11 = (float)(int)(fVar8 * (fVar7 + in_x1[1] + in_s1));
  fVar12 = (float)(int)(fVar8 * (fVar7 + (in_x1[1] - in_s1)));
  if (fVar10 < fVar9) {
    fVar9 = fVar10;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (fVar10 < fVar11) {
    fVar11 = fVar10;
  }
  uVar5 = (uint)fVar12;
  if (uVar5 <= (uint)(int)fVar11) {
    fVar10 = *(float *)(param_1 + 0xc);
    fVar12 = (float)(int)(((*in_x1 - fVar6) + fVar7) * fVar8);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    do {
      if ((uint)(int)fVar12 <= (uint)(int)fVar9) {
        uVar1 = (int)fVar12;
        do {
          if (*(char *)(*(long *)param_1 +
                       (ulong)*(ushort *)(param_1 + 0x14) * ((ulong)uVar5 & 0xffff) +
                       (ulong)(ushort)uVar1) == -1) {
            local_90 = 0x3f80000000000000;
            local_80 = 0;
            local_98 = NEON_fnmsub((float)(ulong)(uVar1 & 0xffff) + 0.5,
                                   *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
            uStack_94 = NEON_fnmsub((float)(ulong)(uVar5 & 0xffff) + 0.5,
                                    *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
            local_88 = fVar10 * 0.5;
            fStack_84 = fVar10 * 0.5;
            uVar4 = OrientedBox::overlaps((OrientedBox *)in_x1,(OrientedBox *)&local_98,0.0);
            if ((uVar4 & 1) != 0) {
              uVar3 = 1;
              goto LAB_00731fc4;
            }
          }
          uVar1 = uVar1 + 1;
        } while ((uVar1 & 0xffff) <= (uint)(int)fVar9);
      }
      uVar5 = (int)((ulong)uVar5 & 0xffff) + 1;
    } while ((uVar5 & 0xffff) <= (uint)(int)fVar11);
  }
  uVar3 = 0;
LAB_00731fc4:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


