// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateIndirectDiffuseSH
// Entry Point: 00a0d734
// Size: 1108 bytes
// Signature: undefined __thiscall updateIndirectDiffuseSH(IndirectLightRenderController * this, IRenderDevice * param_1, ICommandBuffer * param_2, LightSource * param_3, PostFxParams * param_4)


/* IndirectLightRenderController::updateIndirectDiffuseSH(IRenderDevice*, ICommandBuffer*,
   LightSource const*, PostFxParams const&) */

void __thiscall
IndirectLightRenderController::updateIndirectDiffuseSH
          (IndirectLightRenderController *this,IRenderDevice *param_1,ICommandBuffer *param_2,
          LightSource *param_3,PostFxParams *param_4)

{
  undefined8 *puVar1;
  size_t __n;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined (*pauVar5) [16];
  void *pvVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar16;
  float fVar17;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined8 uVar23;
  undefined local_a0 [16];
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  local_88 = 0;
  local_80 = 0;
  if ((*(long *)(this + 0x1d8) != *(long *)(this + 0x1e0)) &&
     (uVar3 = (**(code **)(**(long **)(*(long *)(this + 0x1d8) + 8) + 0x10))(), (uVar3 & 1) != 0)) {
    plVar4 = **(long ***)(this + 0x1d8);
    pauVar5 = (undefined (*) [16])(**(code **)(*plVar4 + 0x10))(plVar4,param_2,0,0x34,2);
    if (pauVar5 != (undefined (*) [16])0x0) {
      auVar13 = *pauVar5;
      auVar18._0_8_ = (long)auVar13._0_4_;
      auVar18._8_8_ = (long)auVar13._4_4_;
      auVar21._0_8_ = (long)auVar13._8_4_;
      auVar21._8_8_ = (long)auVar13._12_4_;
      auVar19 = NEON_scvtf(auVar18,8);
      auVar13 = NEON_scvtf(auVar21,8);
      *(ulong *)(this + 0x1a8) =
           CONCAT44((float)(auVar13._8_8_ / 10000000.0),(float)(auVar13._0_8_ / 10000000.0));
      *(ulong *)(this + 0x1a0) =
           CONCAT44((float)(auVar19._8_8_ / 10000000.0),(float)(auVar19._0_8_ / 10000000.0));
      auVar13 = pauVar5[1];
      auVar20._0_8_ = (long)auVar13._0_4_;
      auVar20._8_8_ = (long)auVar13._4_4_;
      auVar19._0_8_ = (long)auVar13._8_4_;
      auVar19._8_8_ = (long)auVar13._12_4_;
      auVar21 = NEON_scvtf(auVar20,8);
      auVar13 = NEON_scvtf(auVar19,8);
      *(ulong *)(this + 0x1b8) =
           CONCAT44((float)(auVar13._8_8_ / 10000000.0),(float)(auVar13._0_8_ / 10000000.0));
      *(ulong *)(this + 0x1b0) =
           CONCAT44((float)(auVar21._8_8_ / 10000000.0),(float)(auVar21._0_8_ / 10000000.0));
      auVar13 = pauVar5[2];
      auVar22._0_8_ = (long)auVar13._0_4_;
      auVar22._8_8_ = (long)auVar13._4_4_;
      auVar14._0_8_ = (long)auVar13._8_4_;
      auVar14._8_8_ = (long)auVar13._12_4_;
      auVar21 = NEON_scvtf(auVar22,8);
      auVar13 = NEON_scvtf(auVar14,8);
      *(ulong *)(this + 0x1c8) =
           CONCAT44((float)(auVar13._8_8_ / 10000000.0),(float)(auVar13._0_8_ / 10000000.0));
      *(ulong *)(this + 0x1c0) =
           CONCAT44((float)(auVar21._8_8_ / 10000000.0),(float)(auVar21._0_8_ / 10000000.0));
      iVar10 = *(int *)pauVar5[3];
      SphericalHarmonicsUtil::normalizeSHB2((SHB2 *)(this + 0x1a0));
      SphericalHarmonicsUtil::normalizeSHB2((SHB2 *)(this + 0x1b0));
      SphericalHarmonicsUtil::normalizeSHB2((SHB2 *)(this + 0x1c0));
      SphericalHarmonicsUtil::getClampedCosineSHB2((SHB2 *)local_a0);
      fVar11 = 12.56637 / (((float)(long)iVar10 / 1e+07) * 3.141593);
      this[0x1d0] = (IndirectLightRenderController)0x1;
      fVar12 = local_a0._0_4_ * fVar11;
      fVar16 = local_a0._4_4_ * fVar11;
      fVar17 = local_a0._8_4_ * fVar11;
      fVar11 = local_a0._12_4_ * fVar11;
      auVar13 = *(undefined (*) [16])(this + 0x1a0);
      uVar23 = *(undefined8 *)(this + 0x1b0);
      auVar15._0_8_ =
           CONCAT44(fVar16 * (float)((ulong)*(undefined8 *)(this + 0x1c0) >> 0x20),
                    fVar12 * (float)*(undefined8 *)(this + 0x1c0));
      auVar15._8_4_ = fVar17 * (float)*(undefined8 *)(this + 0x1c8);
      auVar15._12_4_ = fVar11 * (float)((ulong)*(undefined8 *)(this + 0x1c8) >> 0x20);
      *(float *)(this + 0x1b0) = fVar17 * auVar13._8_4_;
      *(float *)(this + 0x1b4) = fVar11 * auVar13._12_4_;
      *(float *)(this + 0x1a0) = fVar12 * auVar13._0_4_;
      *(float *)(this + 0x1a4) = fVar16 * auVar13._4_4_;
      *(ulong *)(this + 0x1b8) =
           CONCAT44(fVar11 * (float)((ulong)*(undefined8 *)(this + 0x1b8) >> 0x20),
                    fVar17 * (float)*(undefined8 *)(this + 0x1b8));
      *(ulong *)(this + 0x1b0) =
           CONCAT44(fVar16 * (float)((ulong)uVar23 >> 0x20),fVar12 * (float)uVar23);
      *(long *)(this + 0x1c8) = auVar15._8_8_;
      *(undefined8 *)(this + 0x1c0) = auVar15._0_8_;
    }
    (**(code **)(***(long ***)(this + 0x1d8) + 0x18))(**(long ***)(this + 0x1d8),param_2);
    puVar1 = *(undefined8 **)(this + 0x1f8);
    pauVar5 = *(undefined (**) [16])(this + 0x1d8);
    if (puVar1 == *(undefined8 **)(this + 0x200)) {
      pvVar8 = *(void **)(this + 0x1f0);
      uVar9 = (long)puVar1 - (long)pvVar8;
      uVar3 = ((long)uVar9 >> 4) + 1;
      if (uVar3 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar3 <= (ulong)((long)uVar9 >> 3)) {
        uVar3 = (long)uVar9 >> 3;
      }
      if (0x7fffffffffffffef < uVar9) {
        uVar3 = 0xfffffffffffffff;
      }
      if (uVar3 == 0) {
        pvVar6 = (void *)0x0;
      }
      else {
        if (uVar3 >> 0x3c != 0) goto LAB_00a0db6c;
        pvVar6 = operator_new(uVar3 << 4);
      }
      puVar1 = (undefined8 *)((long)pvVar6 + ((long)uVar9 >> 4) * 0x10);
      auVar13 = *pauVar5;
      puVar1[1] = auVar13._8_8_;
      *puVar1 = auVar13._0_8_;
      if (0 < (long)uVar9) {
        memcpy(pvVar6,pvVar8,uVar9);
      }
      *(void **)(this + 0x1f0) = pvVar6;
      *(undefined8 **)(this + 0x1f8) = puVar1 + 2;
      *(void **)(this + 0x200) = (void *)((long)pvVar6 + uVar3 * 0x10);
      if (pvVar8 != (void *)0x0) {
        operator_delete(pvVar8);
      }
    }
    else {
      auVar13 = *pauVar5;
      puVar1[1] = auVar13._8_8_;
      *puVar1 = auVar13._0_8_;
      *(undefined8 **)(this + 0x1f8) = puVar1 + 2;
    }
    pvVar8 = *(void **)(this + 0x1d8);
    __n = *(long *)(this + 0x1e0) - (long)(void *)((long)pvVar8 + 0x10);
    if (__n != 0) {
      memmove(pvVar8,(void *)((long)pvVar8 + 0x10),__n);
    }
    *(size_t *)(this + 0x1e0) = (long)pvVar8 + __n;
  }
  if (*(long *)(this + 0x1f0) != *(long *)(this + 0x1f8)) {
    uVar3 = ScreenSpaceProcessor::computeSkySH
                      (*(ScreenSpaceProcessor **)(this + 0x30),param_1,param_2,
                       *(IStructBuffer **)(this + 0x208),param_3,param_4,(Vector3 *)&local_88,0x40,
                       0x40);
    if ((uVar3 & 1) != 0) {
      (**(code **)(*(long *)param_2 + 0x120))(param_2,0,0,1,this + 0x208,3,8);
      (**(code **)(**(long **)(this + 0x208) + 0x38))
                (*(long **)(this + 0x208),param_2,*(undefined8 *)(this + 0x18),
                 *(undefined8 *)(*(long *)(this + 0x1f8) + -0x10),0,0xd,
                 *(undefined8 *)(*(long *)(this + 0x1f8) + -8));
      lVar7 = *(long *)(this + 0x1f8);
      puVar1 = *(undefined8 **)(this + 0x1e0);
      if (puVar1 == *(undefined8 **)(this + 0x1e8)) {
        pvVar8 = *(void **)(this + 0x1d8);
        uVar9 = (long)puVar1 - (long)pvVar8;
        uVar3 = ((long)uVar9 >> 4) + 1;
        if (uVar3 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar3 <= (ulong)((long)uVar9 >> 3)) {
          uVar3 = (long)uVar9 >> 3;
        }
        if (0x7fffffffffffffef < uVar9) {
          uVar3 = 0xfffffffffffffff;
        }
        if (uVar3 == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          if (uVar3 >> 0x3c != 0) {
LAB_00a0db6c:
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar6 = operator_new(uVar3 << 4);
        }
        puVar1 = (undefined8 *)((long)pvVar6 + ((long)uVar9 >> 4) * 0x10);
        auVar13 = *(undefined (*) [16])(lVar7 + -0x10);
        puVar1[1] = auVar13._8_8_;
        *puVar1 = auVar13._0_8_;
        if (0 < (long)uVar9) {
          memcpy(pvVar6,pvVar8,uVar9);
        }
        *(void **)(this + 0x1d8) = pvVar6;
        *(undefined8 **)(this + 0x1e0) = puVar1 + 2;
        *(void **)(this + 0x1e8) = (void *)((long)pvVar6 + uVar3 * 0x10);
        if (pvVar8 != (void *)0x0) {
          operator_delete(pvVar8);
        }
      }
      else {
        auVar13 = *(undefined (*) [16])(lVar7 + -0x10);
        puVar1[1] = auVar13._8_8_;
        *puVar1 = auVar13._0_8_;
        *(undefined8 **)(this + 0x1e0) = puVar1 + 2;
      }
      *(long *)(this + 0x1f8) = *(long *)(this + 0x1f8) + -0x10;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


