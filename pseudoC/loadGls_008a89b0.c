// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadGls
// Entry Point: 008a89b0
// Size: 1064 bytes
// Signature: undefined __cdecl loadGls(uchar * param_1, int param_2, int param_3, uint param_4)


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* LoadSimulationRuntimeSettings::loadGls(unsigned char const*, int, int, unsigned int) */

int LoadSimulationRuntimeSettings::loadGls(uchar *param_1,int param_2,int param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  long *this;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  float fVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined4 uVar30;
  float fVar31;
  undefined8 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined8 uVar35;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  Settings *local_e8;
  Settings *pSStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined4 uStack_bc;
  undefined4 *local_b8;
  undefined4 *local_b0;
  undefined8 uStack_a8;
  long local_a0;
  
  pfVar5 = (float *)(ulong)(uint)param_2;
  lVar3 = tpidr_el0;
  local_a0 = *(long *)(lVar3 + 0x28);
  fVar31 = pfVar5[1];
  fVar18 = powf(10.0,*pfVar5 * 0.05);
  *(float *)param_1 = fVar18;
  fVar18 = powf(10.0,fVar31 * 0.05);
  *(float *)(param_1 + 4) = fVar18;
  this = (long *)(param_1 + 0x48);
  lVar12 = *this;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(pfVar5 + 2);
  *(float *)(param_1 + 0x14) = pfVar5[4];
  *(float *)(param_1 + 0x1c) = pfVar5[5];
  *(float *)(param_1 + 0x24) = pfVar5[6];
  param_1[8] = *(uchar *)(pfVar5 + 7);
  param_1[9] = *(uchar *)((long)pfVar5 + 0x1d);
  uVar2 = *(uint *)((long)pfVar5 + 0x1e);
  uVar15 = (ulong)uVar2;
  lVar6 = *(long *)(param_1 + 0x50);
  lVar9 = lVar12;
  if (*(long *)(param_1 + 0x50) != lVar12) {
    do {
      pvVar4 = *(void **)(lVar6 + -0x30);
      lVar9 = lVar6 + -0x40;
      if (pvVar4 != (void *)0x0) {
        *(void **)(lVar6 + -0x28) = pvVar4;
        operator_delete(pvVar4);
      }
      lVar6 = lVar9;
    } while (lVar9 != lVar12);
    lVar9 = *this;
  }
  *(long *)(param_1 + 0x50) = lVar12;
  uVar7 = lVar12 - lVar9 >> 6;
  if (uVar7 < uVar15) {
    std::__ndk1::
    vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
    ::__append((vector<LoadSimulationRuntimeSettings::LoadPoint,std::__ndk1::allocator<LoadSimulationRuntimeSettings::LoadPoint>>
                *)this,uVar15 - uVar7);
  }
  else if (uVar15 < uVar7) {
    lVar9 = lVar9 + uVar15 * 0x40;
    while (lVar6 = lVar12, lVar6 != lVar9) {
      pvVar4 = *(void **)(lVar6 + -0x30);
      lVar12 = lVar6 + -0x40;
      if (pvVar4 != (void *)0x0) {
        *(void **)(lVar6 + -0x28) = pvVar4;
        operator_delete(pvVar4);
      }
    }
    *(long *)(param_1 + 0x50) = lVar9;
  }
  uVar7 = (ulong)(int)param_4;
  if (uVar7 < (ulong)(uVar2 * 3) * 4 + (long)(param_3 + 0x22)) {
    iVar11 = -1;
  }
  else {
    puVar17 = (undefined8 *)((long)pfVar5 + 0x22);
    if (uVar2 == 0) {
      iVar11 = 0x22;
    }
    else {
      uVar16 = 0;
      iVar11 = 0x22;
      do {
        uVar33 = *(undefined4 *)puVar17;
        uVar32 = *(undefined8 *)((long)puVar17 + 4);
        uVar30 = *(undefined4 *)((long)puVar17 + 0xc);
        local_b0 = (undefined4 *)0x0;
        uStack_a8 = 0;
        uVar2 = *(uint *)(puVar17 + 2);
        uVar13 = (ulong)uVar2;
        local_b8 = (undefined4 *)0x0;
        if (uVar7 < (ulong)(uVar2 * 3) * 4 + (long)(iVar11 + 0x14 + param_3)) {
LAB_008a8d54:
          iVar11 = -1;
          goto LAB_008a8d94;
        }
        puVar14 = (undefined8 *)((long)puVar17 + 0x14);
        if (uVar2 != 0) {
                    /* try { // try from 008a8b88 to 008a8b93 has its CatchHandler @ 008a8dd8 */
          std::__ndk1::
          vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
          ::__append((vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
                      *)&local_b8,uVar13);
          if ((uVar2 < 8) ||
             ((local_b8 < (undefined4 *)((long)puVar17 + uVar13 * 0xc + 0x14) &&
              (puVar14 < local_b8 + uVar13 * 3)))) {
            uVar8 = 0;
          }
          else {
            uVar8 = uVar13 & 0xfffffff8;
            puVar14 = (undefined8 *)((long)puVar14 + uVar8 * 0xc);
            lVar9 = 0;
            do {
              puVar1 = (undefined8 *)((long)local_b8 + lVar9);
              lVar6 = lVar9 + 0x60;
              uVar35 = *(undefined8 *)((long)puVar17 + lVar9 + 0x3c);
              uVar19 = *(undefined8 *)((long)puVar17 + lVar9 + 0x34);
              uVar22 = *(undefined8 *)((long)puVar17 + lVar9 + 0x2c);
              uVar21 = *(undefined8 *)((long)puVar17 + lVar9 + 0x24);
              uVar23 = *(undefined8 *)((long)puVar17 + lVar9 + 0x14);
              uVar25 = *(undefined8 *)((long)puVar17 + lVar9 + 0x6c);
              uVar24 = *(undefined8 *)((long)puVar17 + lVar9 + 100);
              uVar27 = *(undefined8 *)((long)puVar17 + lVar9 + 0x5c);
              uVar26 = *(undefined8 *)((long)puVar17 + lVar9 + 0x54);
              uVar29 = *(undefined8 *)((long)puVar17 + lVar9 + 0x4c);
              uVar28 = *(undefined8 *)((long)puVar17 + lVar9 + 0x44);
              puVar1[1] = *(undefined8 *)((long)puVar17 + lVar9 + 0x1c);
              *puVar1 = uVar23;
              puVar1[3] = uVar22;
              puVar1[2] = uVar21;
              puVar1[9] = uVar27;
              puVar1[8] = uVar26;
              puVar1[0xb] = uVar25;
              puVar1[10] = uVar24;
              puVar1[5] = uVar35;
              puVar1[4] = uVar19;
              puVar1[7] = uVar29;
              puVar1[6] = uVar28;
              lVar9 = lVar6;
            } while ((ulong)(uVar2 >> 3) * 0x60 - lVar6 != 0);
            if (uVar8 == uVar13) goto LAB_008a8bfc;
          }
          lVar9 = uVar13 - uVar8;
          puVar10 = local_b8 + uVar8 * 3 + 2;
          do {
            uVar19 = *puVar14;
            lVar9 = lVar9 + -1;
            uVar20 = *(undefined4 *)(puVar14 + 1);
            puVar14 = (undefined8 *)((long)puVar14 + 0xc);
            *(undefined8 *)(puVar10 + -2) = uVar19;
            *puVar10 = uVar20;
            puVar10 = puVar10 + 3;
          } while (lVar9 != 0);
        }
LAB_008a8bfc:
        iVar11 = iVar11 + 0x14 + uVar2 * 0xc;
        uVar13 = (long)(iVar11 + param_3) + 0xc;
        puVar17 = puVar14;
        if (uVar13 <= uVar7) {
          uVar19 = *puVar14;
          uVar34 = *(undefined4 *)(puVar14 + 1);
          uVar35 = *(undefined8 *)((long)puVar14 + 0xc);
          uStack_f4 = 0;
          uStack_f0 = 0;
          uStack_c8 = 0;
          pSStack_e0 = (Settings *)0x0;
          local_e8 = (Settings *)0x0;
          local_d0 = 0;
          uStack_d8 = 0;
          uStack_bc = 0;
          uStack_c4._4_4_ = (undefined4)((ulong)uVar32 >> 0x20);
          uVar20 = uStack_c4._4_4_;
          local_f8 = uVar33;
          uStack_c4 = uVar32;
                    /* try { // try from 008a8c70 to 008a8cbb has its CatchHandler @ 008a8df4 */
          std::__ndk1::
          vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
          ::assign<BiquadResonantFilter::Settings*>
                    ((vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
                      *)&local_e8,(Settings *)local_b8,(Settings *)local_b0);
          uStack_f4 = (undefined4)uVar35;
          uStack_f0 = (undefined4)((ulong)uVar35 >> 0x20);
          puVar17 = (undefined8 *)(*this + uVar16 * 0x40);
          *(undefined4 *)(puVar17 + 1) = uStack_f0;
          *puVar17 = CONCAT44(uStack_f4,local_f8);
          local_d0 = uVar19;
          uStack_c8 = uVar34;
          uStack_bc = uVar30;
          if (puVar17 != (undefined8 *)&local_f8) {
            std::__ndk1::
            vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
            ::assign<BiquadResonantFilter::Settings*>
                      ((vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
                        *)(puVar17 + 2),local_e8,pSStack_e0);
          }
          puVar17[7] = CONCAT44(uStack_bc,uVar20);
          puVar17[6] = CONCAT84(uStack_c4,uStack_c8);
          puVar17[5] = local_d0;
          if (local_e8 != (Settings *)0x0) {
            pSStack_e0 = local_e8;
            operator_delete(local_e8);
          }
          iVar11 = iVar11 + 0x14;
          puVar17 = (undefined8 *)((long)puVar14 + 0x14);
        }
        if (local_b8 != (undefined4 *)0x0) {
          local_b0 = local_b8;
          operator_delete(local_b8);
        }
        if (uVar7 < uVar13) goto LAB_008a8d54;
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar15);
    }
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)puVar17;
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((long)puVar17 + 4);
    iVar11 = iVar11 + 0x14;
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(puVar17 + 1);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)((long)puVar17 + 0xc);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(puVar17 + 2);
  }
LAB_008a8d94:
  if (*(long *)(lVar3 + 0x28) == local_a0) {
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


