// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: evaluate_solution
// Entry Point: 00a86920
// Size: 1940 bytes
// Signature: undefined __cdecl evaluate_solution(color_quad_u8 * param_1, color_quad_u8 * param_2, uint * param_3, color_cell_compressor_params * param_4, color_cell_compressor_results * param_5)


/* BC7EncodeUtil::BC7Enc16::evaluate_solution(BC7EncodeUtil::BC7Enc16::color_quad_u8 const*,
   BC7EncodeUtil::BC7Enc16::color_quad_u8 const*, unsigned int const*,
   BC7EncodeUtil::BC7Enc16::color_cell_compressor_params const*,
   BC7EncodeUtil::BC7Enc16::color_cell_compressor_results*) */

ulong BC7EncodeUtil::BC7Enc16::evaluate_solution
                (color_quad_u8 *param_1,color_quad_u8 *param_2,uint *param_3,
                color_cell_compressor_params *param_4,color_cell_compressor_results *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  color_cell_compressor_params cVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  undefined *puVar38;
  ulong uVar39;
  uint uVar40;
  ulong uVar41;
  uint *puVar42;
  uint *puVar43;
  byte *pbVar44;
  long lVar45;
  undefined *puVar46;
  byte *pbVar47;
  float fVar48;
  uint local_b0;
  uint local_ac;
  undefined4 uStack_a8;
  long local_68;
  
  lVar21 = tpidr_el0;
  local_68 = *(long *)(lVar21 + 0x28);
  uVar30 = *(uint *)param_1;
  uVar27 = *(uint *)param_2;
  uVar31 = uVar30 >> 8;
  uVar29 = uVar30 >> 0x10;
  uVar28 = uVar30 >> 0x18;
  uVar23 = uVar27 >> 8;
  uVar40 = uVar27 >> 0x10;
  uVar26 = uVar27 >> 0x18;
  if (param_4[0x3d] != (color_cell_compressor_params)0x0) {
    uVar5 = *param_3;
    uVar6 = uVar5;
    if (param_4[0x3e] == (color_cell_compressor_params)0x0) {
      uVar6 = param_3[1];
    }
    uVar30 = (uVar30 & 0xff) << 1 | uVar5;
    uVar31 = (uVar31 & 0xff) << 1 | uVar5;
    uVar29 = (uVar29 & 0xff) << 1 | uVar5;
    uVar28 = uVar5 | uVar28 << 1;
    uVar27 = (uVar27 & 0xff) << 1 | uVar6;
    uVar23 = (uVar23 & 0xff) << 1 | uVar6;
    uVar40 = (uVar40 & 0xff) << 1 | uVar6;
    uVar26 = uVar6 | uVar26 << 1;
  }
  uVar5 = *(uint *)(param_4 + 0x28);
  if (param_4[0x3d] != (color_cell_compressor_params)0x0) {
    uVar5 = uVar5 + 1;
  }
  uVar6 = 8 - uVar5;
  uVar29 = (uVar29 & 0xff) << (ulong)(uVar6 & 0x1f);
  uVar30 = (uVar30 & 0xff) << (ulong)(uVar6 & 0x1f);
  uVar31 = (uVar31 & 0xff) << (ulong)(uVar6 & 0x1f);
  uVar28 = (uVar28 & 0xff) << (ulong)(uVar6 & 0x1f);
  uVar29 = uVar29 >> (ulong)(uVar5 & 0x1f) | uVar29;
  uVar31 = uVar31 >> (ulong)(uVar5 & 0x1f) | uVar31;
  uVar28 = uVar28 >> (ulong)(uVar5 & 0x1f) | uVar28;
  uVar40 = (uVar40 & 0xff) << (ulong)(uVar6 & 0x1f);
  uVar30 = uVar30 >> (ulong)(uVar5 & 0x1f) | uVar30;
  uVar23 = (uVar23 & 0xff) << (ulong)(uVar6 & 0x1f);
  uVar26 = (uVar26 & 0xff) << (ulong)(uVar6 & 0x1f);
  uVar6 = (uVar27 & 0xff) << (ulong)(uVar6 & 0x1f);
  uVar40 = uVar40 >> (ulong)(uVar5 & 0x1f) | uVar40;
  uVar23 = uVar23 >> (ulong)(uVar5 & 0x1f) | uVar23;
  uVar26 = uVar26 >> (ulong)(uVar5 & 0x1f) | uVar26;
  local_ac = uVar28 << 0x18 | (uVar29 & 0xff) << 0x10 | (uVar31 & 0xff) << 8 | uVar30 & 0xff;
  uVar6 = uVar6 >> (ulong)(uVar5 & 0x1f) | uVar6;
  uVar27 = *(uint *)(param_4 + 0x10);
  cVar8 = param_4[0x3c];
  uStack_a8 = local_ac;
  local_b0 = uVar26 << 0x18 | (uVar40 & 0xff) << 0x10 | (uVar23 & 0xff) << 8 | uVar6 & 0xff;
  uVar5 = uVar27 - 1;
  (&uStack_a8)[uVar5] = local_b0;
  if (1 < uVar5) {
    lVar25 = *(long *)(param_4 + 0x18);
    lVar37 = 3;
    if (cVar8 != (color_cell_compressor_params)0x0) {
      lVar37 = 4;
    }
    puVar38 = (undefined *)((ulong)&uStack_a8 | 4);
    uVar41 = 1;
    do {
      puVar42 = &local_ac;
      puVar43 = &local_b0;
      lVar24 = lVar37;
      puVar46 = puVar38;
      do {
        iVar7 = *(int *)(lVar25 + uVar41 * 4);
        lVar24 = lVar24 + -1;
        *puVar46 = (char)(iVar7 * (uint)*(byte *)puVar43 + (0x40 - iVar7) * (uint)*(byte *)puVar42 +
                          0x20 >> 6);
        puVar42 = (uint *)((long)puVar42 + 1);
        puVar43 = (uint *)((long)puVar43 + 1);
        puVar46 = puVar46 + 1;
      } while (lVar24 != 0);
      uVar41 = uVar41 + 1;
      puVar38 = puVar38 + 4;
    } while (uVar41 != uVar5);
  }
  if (param_4[0x3f] == (color_cell_compressor_params)0x0) {
    uVar30 = uVar30 & 0xff;
    uVar31 = uVar31 & 0xff;
    uVar29 = uVar29 & 0xff;
    iVar7 = (uVar6 & 0xff) - uVar30;
    iVar3 = (uVar23 & 0xff) - uVar31;
    iVar4 = (uVar40 & 0xff) - uVar29;
    if (cVar8 == (color_cell_compressor_params)0x0) {
      if (*(int *)param_4 != 0) {
        lVar37 = 0;
        uVar41 = 0;
        uVar39 = 0;
        do {
          pbVar44 = (byte *)(*(long *)(param_4 + 8) + lVar37);
          lVar37 = lVar37 + 4;
          bVar9 = *pbVar44;
          bVar10 = pbVar44[1];
          bVar11 = pbVar44[2];
          fVar48 = (float)NEON_fmadd((float)((bVar10 - uVar31) * iVar3 + (bVar9 - uVar30) * iVar7 +
                                            (bVar11 - uVar29) * iVar4),
                                     (float)(ulong)uVar27 /
                                     ((float)(iVar7 * iVar7 + iVar3 * iVar3 + iVar4 * iVar4) +
                                     1.25e-06),0x3f000000);
          uVar23 = (uint)fVar48;
          uVar28 = uVar5;
          if ((int)uVar23 <= (int)uVar5) {
            uVar28 = uVar23;
          }
          if ((int)uVar23 < 1) {
            uVar28 = 1;
          }
          lVar24 = (long)(int)uVar28 + -1;
          lVar25 = (long)(int)uVar28 * 4;
          iVar13 = (uint)*(byte *)(&uStack_a8 + (int)uVar28) - (uint)bVar9;
          iVar14 = (uint)*(byte *)((long)&uStack_a8 + lVar24 * 4 + 1) - (uint)bVar10;
          iVar15 = (uint)*(byte *)((long)&uStack_a8 + lVar25 + 1) - (uint)bVar10;
          iVar16 = (uint)*(byte *)((long)&uStack_a8 + lVar24 * 4 + 2) - (uint)bVar11;
          iVar17 = (uint)*(byte *)((long)&uStack_a8 + lVar25 + 2) - (uint)bVar11;
          uVar40 = ((uint)*(byte *)(&uStack_a8 + lVar24) - (uint)bVar9) *
                   ((uint)*(byte *)(&uStack_a8 + lVar24) - (uint)bVar9) * *(int *)(param_4 + 0x2c) +
                   iVar14 * iVar14 * *(int *)(param_4 + 0x30) +
                   iVar16 * iVar16 * *(int *)(param_4 + 0x34);
          uVar26 = iVar13 * *(int *)(param_4 + 0x2c) * iVar13 +
                   iVar15 * *(int *)(param_4 + 0x30) * iVar15 +
                   iVar17 * *(int *)(param_4 + 0x34) * iVar17;
          uVar23 = (uint)lVar24;
          if (uVar26 <= uVar40) {
            uVar23 = uVar28;
          }
          if (uVar26 <= uVar40) {
            uVar40 = uVar26;
          }
          *(char *)(*(long *)(param_5 + 0x20) + uVar41) = (char)uVar23;
          uVar39 = uVar39 + uVar40;
          uVar41 = uVar41 + 1;
        } while (uVar41 < *(uint *)param_4);
        goto LAB_00a87034;
      }
    }
    else if (*(int *)param_4 != 0) {
      uVar28 = uVar28 & 0xff;
      iVar13 = (uVar26 & 0xff) - uVar28;
      lVar37 = 0;
      uVar41 = 0;
      uVar39 = 0;
      do {
        pbVar44 = (byte *)(*(long *)(param_4 + 8) + lVar37);
        lVar37 = lVar37 + 4;
        bVar9 = *pbVar44;
        bVar10 = pbVar44[1];
        bVar11 = pbVar44[2];
        bVar12 = pbVar44[3];
        fVar48 = (float)NEON_fmadd((float)((bVar10 - uVar31) * iVar3 + (bVar9 - uVar30) * iVar7 +
                                           (bVar11 - uVar29) * iVar4 + (bVar12 - uVar28) * iVar13),
                                   (float)(ulong)uVar27 /
                                   ((float)(iVar7 * iVar7 + iVar3 * iVar3 + iVar4 * iVar4 +
                                           iVar13 * iVar13) + 1.25e-06),0x3f000000);
        uVar40 = (uint)fVar48;
        uVar23 = uVar5;
        if ((int)uVar40 <= (int)uVar5) {
          uVar23 = uVar40;
        }
        if ((int)uVar40 < 1) {
          uVar23 = 1;
        }
        lVar45 = (long)(int)uVar23 + -1;
        lVar24 = (long)(int)uVar23 * 4;
        lVar25 = lVar45 * 4;
        iVar14 = (uint)*(byte *)(&uStack_a8 + (int)uVar23) - (uint)bVar9;
        iVar15 = (uint)*(byte *)((long)&uStack_a8 + lVar24 + 1) - (uint)bVar10;
        iVar16 = (uint)*(byte *)((long)&uStack_a8 + lVar24 + 2) - (uint)bVar11;
        iVar17 = (uint)*(byte *)((long)&uStack_a8 + lVar25 + 1) - (uint)bVar10;
        iVar18 = (uint)*(byte *)((long)&uStack_a8 + lVar24 + 3) - (uint)bVar12;
        iVar19 = (uint)*(byte *)((long)&uStack_a8 + lVar25 + 3) - (uint)bVar12;
        iVar20 = (uint)*(byte *)((long)&uStack_a8 + lVar25 + 2) - (uint)bVar11;
        uVar36 = (ulong)(((uint)*(byte *)(&uStack_a8 + lVar45) - (uint)bVar9) *
                         ((uint)*(byte *)(&uStack_a8 + lVar45) - (uint)bVar9) *
                         *(int *)(param_4 + 0x2c) + iVar17 * iVar17 * *(int *)(param_4 + 0x30) +
                        iVar20 * iVar20 * *(int *)(param_4 + 0x34)) +
                 (ulong)(uint)(iVar19 * iVar19 * *(int *)(param_4 + 0x38));
        uVar34 = (ulong)(uint)(iVar14 * *(int *)(param_4 + 0x2c) * iVar14 +
                               iVar15 * *(int *)(param_4 + 0x30) * iVar15 +
                              iVar16 * *(int *)(param_4 + 0x34) * iVar16) +
                 (ulong)(uint)(iVar18 * *(int *)(param_4 + 0x38) * iVar18);
        uVar40 = (uint)lVar45;
        if (uVar34 <= uVar36) {
          uVar36 = uVar34;
          uVar40 = uVar23;
        }
        uVar39 = uVar36 + uVar39;
        *(char *)(*(long *)(param_5 + 0x20) + uVar41) = (char)uVar40;
        uVar41 = uVar41 + 1;
      } while (uVar41 < *(uint *)param_4);
      goto LAB_00a87034;
    }
  }
  else if (*(int *)param_4 != 0) {
    uVar41 = 0;
    uVar39 = 0;
    if (cVar8 != (color_cell_compressor_params)0x0) goto LAB_00a86b54;
    do {
      if (uVar27 == 0) goto LAB_00a86cf0;
      uVar36 = 0;
      pbVar47 = (byte *)(*(long *)(param_4 + 8) + uVar41 * 4);
      iVar7 = (uint)*pbVar47 * 0x6d + (uint)pbVar47[1] * 0x16e + (uint)pbVar47[2] * 0x25;
      uVar34 = 0xffffffffffffffff;
      pbVar44 = (byte *)((ulong)&uStack_a8 | 1);
      uVar32 = 0;
      do {
        pbVar2 = pbVar44 + -1;
        bVar9 = *pbVar44;
        pbVar1 = pbVar44 + 1;
        pbVar44 = pbVar44 + 4;
        iVar13 = (uint)*pbVar2 * 0x6d + (uint)bVar9 * 0x16e + (uint)*pbVar1 * 0x25;
        iVar3 = iVar13 - iVar7 >> 8;
        iVar4 = (int)(((uint)*pbVar2 * 0x200 - iVar13) + (uint)*pbVar47 * -0x200 + iVar7) >> 8;
        iVar13 = (int)(((uint)*pbVar1 * 0x200 - iVar13) + (uint)pbVar47[2] * -0x200 + iVar7) >> 8;
        uVar22 = (ulong)(uint)(iVar3 * *(int *)(param_4 + 0x2c) * iVar3 +
                               iVar4 * *(int *)(param_4 + 0x30) * iVar4 +
                              iVar13 * *(int *)(param_4 + 0x34) * iVar13);
        uVar35 = uVar22;
        if (uVar34 <= uVar22) {
          uVar35 = uVar34;
        }
        uVar33 = (int)uVar36;
        if (uVar34 <= uVar22) {
          uVar33 = uVar32;
        }
        uVar36 = uVar36 + 1;
        uVar34 = uVar35;
        uVar32 = uVar33;
      } while (uVar27 != uVar36);
      while( true ) {
        uVar39 = uVar35 + uVar39;
        *(char *)(*(long *)(param_5 + 0x20) + uVar41) = (char)uVar33;
        uVar41 = uVar41 + 1;
        if (*(uint *)param_4 <= uVar41) goto LAB_00a87034;
        if (param_4[0x3c] == (color_cell_compressor_params)0x0) break;
LAB_00a86b54:
        if (uVar27 == 0) {
LAB_00a86cf0:
          uVar33 = 0;
          uVar35 = 0xffffffffffffffff;
        }
        else {
          uVar36 = 0;
          pbVar44 = (byte *)(*(long *)(param_4 + 8) + uVar41 * 4);
          iVar7 = (uint)*pbVar44 * 0x6d + (uint)pbVar44[1] * 0x16e + (uint)pbVar44[2] * 0x25;
          uVar34 = 0xffffffffffffffff;
          pbVar47 = (byte *)((ulong)&uStack_a8 | 3);
          uVar32 = 0;
          do {
            iVar13 = (uint)pbVar47[-3] * 0x6d + (uint)pbVar47[-2] * 0x16e + (uint)pbVar47[-1] * 0x25
            ;
            iVar3 = iVar13 - iVar7 >> 8;
            iVar4 = (int)(((uint)pbVar47[-3] * 0x200 - iVar13) + (uint)*pbVar44 * -0x200 + iVar7) >>
                    8;
            iVar13 = (int)(((uint)pbVar47[-1] * 0x200 - iVar13) + (uint)pbVar44[2] * -0x200 + iVar7)
                     >> 8;
            uVar22 = (ulong)(uint)(iVar3 * *(int *)(param_4 + 0x2c) * iVar3 +
                                   iVar4 * *(int *)(param_4 + 0x30) * iVar4 +
                                  iVar13 * *(int *)(param_4 + 0x34) * iVar13) +
                     (ulong)(((uint)*pbVar47 - (uint)pbVar44[3]) *
                             ((uint)*pbVar47 - (uint)pbVar44[3]) * *(int *)(param_4 + 0x38));
            uVar35 = uVar22;
            if (uVar34 <= uVar22) {
              uVar35 = uVar34;
            }
            uVar33 = (int)uVar36;
            if (uVar34 <= uVar22) {
              uVar33 = uVar32;
            }
            uVar36 = uVar36 + 1;
            uVar34 = uVar35;
            pbVar47 = pbVar47 + 4;
            uVar32 = uVar33;
          } while (uVar27 != uVar36);
        }
      }
    } while( true );
  }
  uVar39 = 0;
LAB_00a87034:
  if (uVar39 < *(ulong *)param_5) {
    *(ulong *)param_5 = uVar39;
    *(undefined4 *)(param_5 + 8) = *(undefined4 *)param_1;
    *(undefined4 *)(param_5 + 0xc) = *(undefined4 *)param_2;
    *(uint *)(param_5 + 0x10) = *param_3;
    *(uint *)(param_5 + 0x14) = param_3[1];
    memcpy(*(void **)(param_5 + 0x18),*(void **)(param_5 + 0x20),(ulong)*(uint *)param_4);
  }
  if (*(long *)(lVar21 + 0x28) == local_68) {
    return uVar39;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


