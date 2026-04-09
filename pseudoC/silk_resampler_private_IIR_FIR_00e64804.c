// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_resampler_private_IIR_FIR
// Entry Point: 00e64804
// Size: 444 bytes
// Signature: undefined silk_resampler_private_IIR_FIR(void)


void silk_resampler_private_IIR_FIR(long param_1,undefined2 *param_2,long param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  local_88 = tpidr_el0;
  local_68 = *(long *)(local_88 + 0x28);
  uVar11 = (ulong)*(int *)(param_1 + 0x10c);
  lVar10 = -(uVar11 * 4 + 0x1f & 0xfffffffffffffff0);
  puVar14 = (undefined8 *)((long)&local_90 + lVar10);
  local_90 = (undefined8 *)(param_1 + 0x18);
  uVar15 = *(undefined8 *)(param_1 + 0x18);
  iVar8 = *(int *)(param_1 + 0x110);
  local_78 = (long)&local_80 + lVar10;
  *(undefined8 *)((long)&local_88 + lVar10) = *(undefined8 *)(param_1 + 0x20);
  *puVar14 = uVar15;
  local_80 = param_1;
  while( true ) {
    iVar7 = param_4;
    if ((int)uVar11 <= param_4) {
      iVar7 = (int)uVar11;
    }
    local_70 = param_3;
    silk_resampler_private_up2_HQ(param_1,local_78,param_3,iVar7);
    param_1 = local_80;
    if (0 < iVar7 * 0x20000) {
      uVar12 = 0;
      puVar13 = param_2;
      do {
        uVar4 = uVar12 & 0xffff;
        iVar5 = (int)uVar12 >> 0x10;
        uVar1 = uVar12 & 0xffff;
        uVar12 = uVar12 + iVar8;
        uVar1 = uVar4 + uVar1 * 2 >> 0xe;
        puVar3 = (undefined8 *)((long)puVar14 + (long)iVar5 * 2);
        uVar15 = (&silk_resampler_frac_FIR_12)[uVar1];
        uVar16 = *puVar3;
        uVar11 = (ulong)(0xb - uVar1);
        lVar2 = uVar11 * 8;
        iVar9 = (int)(short)uVar15 * (int)(short)uVar16 +
                (int)(short)((ulong)uVar15 >> 0x10) * (int)(short)((ulong)uVar16 >> 0x10) +
                (int)(short)((ulong)uVar15 >> 0x20) * (int)(short)((ulong)uVar16 >> 0x20) +
                (int)(short)((ulong)uVar15 >> 0x30) * (int)(short)((ulong)uVar16 >> 0x30) +
                (int)*(short *)((long)&silk_resampler_frac_FIR_12 + lVar2 + 6) *
                (int)*(short *)(puVar3 + 1) +
                (int)*(short *)((long)&silk_resampler_frac_FIR_12 + lVar2 + 4) *
                (int)*(short *)((long)puVar3 + 10) +
                (int)*(short *)((long)&silk_resampler_frac_FIR_12 + lVar2 + 2) *
                (int)*(short *)((long)puVar3 + 0xc) +
                (int)*(short *)(&silk_resampler_frac_FIR_12 + uVar11) *
                (int)*(short *)((long)puVar3 + 0xe);
        iVar5 = (iVar9 >> 0xe) + 1 >> 1;
        if (iVar5 == -0x8000 || iVar5 + 0x8000 < 0 != SCARRY4(iVar5,0x8000)) {
          iVar5 = -0x8000;
        }
        uVar6 = 0x7fff;
        if (iVar9 < 0x3fffc000) {
          uVar6 = (short)iVar5;
        }
        param_2 = puVar13 + 1;
        *puVar13 = uVar6;
        puVar13 = param_2;
      } while ((int)(uVar12 + iVar7 * -0x20000) < 0 != SBORROW4(uVar12,iVar7 * 0x20000));
    }
    param_4 = param_4 - iVar7;
    uVar12 = iVar7 << 1;
    if (param_4 < 1) break;
    puVar3 = (undefined8 *)
             ((long)puVar14 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar12 << 1));
    uVar15 = *puVar3;
    uVar11 = (ulong)*(uint *)(local_80 + 0x10c);
    param_3 = local_70 + (long)iVar7 * 2;
    *(undefined8 *)((long)&local_88 + lVar10) = puVar3[1];
    *puVar14 = uVar15;
  }
  puVar14 = (undefined8 *)
            ((long)puVar14 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar12 << 1));
  uVar15 = *puVar14;
  local_90[1] = puVar14[1];
  *local_90 = uVar15;
  if (*(long *)(local_88 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


