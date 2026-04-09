// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementSignedDistanceMask
// Entry Point: 009e8ac8
// Size: 1060 bytes
// Signature: undefined __thiscall ProceduralPlacementSignedDistanceMask(ProceduralPlacementSignedDistanceMask * this, ProceduralPlacementMask * param_1, float param_2, float param_3, int param_4)


/* ProceduralPlacementSignedDistanceMask::ProceduralPlacementSignedDistanceMask(ProceduralPlacementMask*,
   float, float, int) */

void __thiscall
ProceduralPlacementSignedDistanceMask::ProceduralPlacementSignedDistanceMask
          (ProceduralPlacementSignedDistanceMask *this,ProceduralPlacementMask *param_1,
          float param_2,float param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ProceduralPlacementMask **ppPVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  void *__dest;
  void *pvVar12;
  float *pfVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  ushort local_c0;
  void *local_b0;
  ushort local_a8;
  void *local_98;
  byte local_90;
  undefined uStack_8f;
  undefined6 uStack_8e;
  undefined8 uStack_88;
  void *local_80;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  local_90 = 0;
  uStack_8f = 0;
  local_a8 = 0;
  local_c0 = 0;
                    /* try { // try from 009e8b18 to 009e8b27 has its CatchHandler @ 009e8ef0 */
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(basic_string *)&local_90,(basic_string *)&local_a8,
             (basic_string *)&local_c0);
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  *(int *)(this + 200) = param_4;
  *(float *)(this + 0xcc) = param_2;
  *(float *)(this + 0xd0) = param_3;
  *(undefined ***)this = &PTR__ProceduralPlacementSignedDistanceMask_00fe2be8;
                    /* try { // try from 009e8b60 to 009e8b77 has its CatchHandler @ 009e8eec */
  getSignedDistanceSignature(param_1,param_2,param_3,param_4);
  if ((*(byte *)(this + 0x70) & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  ppPVar4 = *(ProceduralPlacementMask ***)(this + 0x90);
  *(undefined8 *)(this + 0x78) = uStack_88;
  *(ulong *)(this + 0x70) = CONCAT62(uStack_8e,CONCAT11(uStack_8f,local_90));
  *(void **)(this + 0x80) = local_80;
  if (ppPVar4 == *(ProceduralPlacementMask ***)(this + 0x98)) {
    pvVar12 = *(void **)(this + 0x88);
    uVar17 = (long)ppPVar4 - (long)pvVar12;
    uVar14 = ((long)uVar17 >> 3) + 1;
    if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar14 <= (ulong)((long)uVar17 >> 2)) {
      uVar14 = (long)uVar17 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar17) {
      uVar14 = 0x1fffffffffffffff;
    }
    if (uVar14 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009e8c20 to 009e8c23 has its CatchHandler @ 009e8f40 */
      __dest = operator_new(uVar14 << 3);
    }
    ppPVar4 = (ProceduralPlacementMask **)((long)__dest + ((long)uVar17 >> 3) * 8);
    *ppPVar4 = param_1;
    if (0 < (long)uVar17) {
      memcpy(__dest,pvVar12,uVar17);
    }
    *(void **)(this + 0x88) = __dest;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar4 + 1;
    *(void **)(this + 0x98) = (void *)((long)__dest + uVar14 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *ppPVar4 = param_1;
    *(ProceduralPlacementMask ***)(this + 0x90) = ppPVar4 + 1;
  }
                    /* try { // try from 009e8c70 to 009e8ee7 has its CatchHandler @ 009e8f40 */
  uVar10 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
  *(undefined4 *)(this + 0x50) = uVar10;
  iVar11 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
  *(int *)(this + 0x54) = iVar11;
  pvVar12 = operator_new__((ulong)(uint)(*(int *)(this + 0x50) * iVar11) << 2);
  *(void **)(this + 0x58) = pvVar12;
  pfVar13 = (float *)(**(code **)(*(long *)param_1 + 0x50))(param_1);
  ImageUtil::computeDistanceField
            (pfVar13,*(uint *)(this + 0x50),*(uint *)(this + 0x54),*(float **)(this + 0x58),0);
  fVar18 = (float)(ulong)*(uint *)(this + 0x50);
  uVar5 = *(int *)(this + 0x54) * *(uint *)(this + 0x50);
  uVar14 = (ulong)uVar5;
  fVar19 = (float)param_4 / fVar18;
  if (param_4 < 0) {
    fVar19 = -((float)param_4 / fVar18);
  }
  if (uVar5 != 0) {
    lVar15 = *(long *)(this + 0x58);
    fVar20 = (param_2 - param_3) / fVar19;
    fVar21 = (param_3 - param_2) / fVar19;
    if (uVar5 == 1) {
      uVar16 = 0;
    }
    else {
      uVar16 = uVar14 & 0xfffffffe;
      pfVar13 = (float *)(lVar15 + 4);
      uVar17 = uVar16;
      do {
        bVar3 = param_2 < param_3;
        fVar24 = pfVar13[-1] / fVar18;
        if (param_4 < 0) {
          fVar24 = -(pfVar13[-1] / fVar18);
        }
        fVar22 = *pfVar13 / fVar18;
        if (param_4 < 0) {
          fVar22 = -(*pfVar13 / fVar18);
        }
        bVar1 = fVar19 < fVar24;
        bVar2 = fVar19 < fVar22;
        bVar8 = 0.0 <= fVar24;
        bVar9 = fVar22 < 0.0;
        bVar7 = !bVar1;
        if (((((bVar8 && bVar1) && 0.0 < fVar24) || (fVar24 < 0.0)) || (bVar3 && (bVar8 && bVar7)))
           || ((bVar8 && bVar7) && param_3 <= param_2)) {
          fVar25 = (float)NEON_fmadd(fVar24,fVar21,param_2);
          fVar23 = (float)NEON_fmsub(fVar24,fVar20,param_2);
          if (!bVar3 || (!bVar8 || !bVar7)) {
            fVar25 = fVar23;
          }
          fVar23 = 0.0;
          if (((!bVar8 || !bVar1) || (fVar24 == 0.0 || !bVar8)) && 0.0 <= fVar24) {
            fVar23 = fVar25;
          }
          pfVar13[-1] = fVar23;
        }
        bVar1 = !bVar9;
        bVar7 = !bVar2;
        if ((((!bVar9 && bVar2) && (fVar22 != 0.0 && !bVar9) || bVar9) || bVar3 && (bVar1 && bVar7))
            || (bVar1 && bVar7) && param_3 <= param_2) {
          fVar24 = (float)NEON_fmadd(fVar22,fVar21,param_2);
          fVar25 = (float)NEON_fmsub(fVar22,fVar20,param_2);
          if (!bVar3 || (!bVar1 || !bVar7)) {
            fVar24 = fVar25;
          }
          fVar25 = 0.0;
          if (((bVar9 || !bVar2) || (fVar22 == 0.0 || bVar9)) && 0.0 <= fVar22) {
            fVar25 = fVar24;
          }
          *pfVar13 = fVar25;
        }
        pfVar13 = pfVar13 + 2;
        uVar17 = uVar17 - 2;
      } while (uVar17 != 0);
      if (uVar16 == uVar14) goto LAB_009e8e40;
    }
    pfVar13 = (float *)(lVar15 + uVar16 * 4);
    lVar15 = uVar14 - uVar16;
    do {
      fVar24 = *pfVar13 / fVar18;
      if (param_4 < 0) {
        fVar24 = -(*pfVar13 / fVar18);
      }
      fVar22 = 0.0;
      if (fVar24 < 0.0) {
LAB_009e8e84:
        *pfVar13 = fVar22;
      }
      else {
        if (fVar24 <= fVar19) {
          if (param_3 <= param_2) {
            fVar22 = (float)NEON_fmsub(fVar24,fVar20,param_2);
          }
          else {
            fVar22 = (float)NEON_fmadd(fVar24,fVar21,param_2);
          }
          goto LAB_009e8e84;
        }
        if (0.0 < fVar24) goto LAB_009e8e84;
      }
      pfVar13 = pfVar13 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
LAB_009e8e40:
  if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


