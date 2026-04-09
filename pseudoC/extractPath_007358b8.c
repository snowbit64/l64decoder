// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: extractPath
// Entry Point: 007358b8
// Size: 900 bytes
// Signature: undefined __thiscall extractPath(VehicleNavigationAgentEntity * this, float param_1, float param_2, vector * param_3)


/* VehicleNavigationAgentEntity::extractPath(float, float, std::__ndk1::vector<PlanarPose,
   std::__ndk1::allocator<PlanarPose> >&) const */

void __thiscall
VehicleNavigationAgentEntity::extractPath
          (VehicleNavigationAgentEntity *this,float param_1,float param_2,vector *param_3)

{
  ulong uVar1;
  void *__src;
  long lVar2;
  undefined8 *puVar3;
  void *__dest;
  int iVar4;
  long lVar5;
  VehicleNavigationAgent *this_00;
  undefined8 *puVar6;
  ulong __n;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_148;
  undefined4 local_140;
  bool abStack_138 [4];
  bool abStack_134 [4];
  float fStack_130;
  float local_12c;
  float local_128;
  bool local_124 [4];
  bool abStack_120 [4];
  float fStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  float fStack_110;
  float fStack_10c;
  int local_c0;
  long local_b0;
  
  lVar2 = tpidr_el0;
  local_b0 = *(long *)(lVar2 + 0x28);
  fVar14 = *(float *)(this + 0x94);
  local_148 = *(undefined8 *)(this + 0x7c);
  local_140 = *(undefined4 *)(this + 0x84);
  VehicleNavigationAgent::getNextCurvature
            (*(VehicleNavigationAgent **)(this + 0x38),(ExtractionState *)&local_148,&local_12c,
             &fStack_130,abStack_134,abStack_138,(PlanarPose *)(this + 0x98),0.0,fVar14);
  fVar9 = local_12c;
  lVar5 = *(long *)(this + 0x38);
  TractorTrailer::TractorTrailer
            ((TractorTrailer *)&local_118,*(uint *)(lVar5 + 0x13a0),
             (VehicleNavigationTrailerData *)(lVar5 + 0x13b0),
             (bitset)*(undefined8 *)(lVar5 + 0x13a8));
  __memcpy_chk(&local_118,(PlanarPose *)(this + 0x98),(ulong)(local_c0 + 1) << 4,0x68);
  puVar6 = *(undefined8 **)param_3;
  fVar7 = param_1 / (float)(int)param_1;
  *(undefined8 **)(param_3 + 8) = puVar6;
  if (param_1 <= 0.001) {
    fVar7 = 1.0;
  }
  if (puVar6 == *(undefined8 **)(param_3 + 0x10)) {
    puVar3 = (undefined8 *)operator_new(0x10);
    puVar3[1] = CONCAT44(fStack_10c,fStack_110);
    *puVar3 = CONCAT44(uStack_114,local_118);
    *(undefined8 **)param_3 = puVar3;
    *(undefined8 **)(param_3 + 8) = puVar3 + 2;
    *(undefined8 **)(param_3 + 0x10) = puVar3 + 2;
    if (puVar6 != (undefined8 *)0x0) {
      operator_delete(puVar6);
    }
  }
  else {
    puVar6[1] = CONCAT44(fStack_10c,fStack_110);
    *puVar6 = CONCAT44(uStack_114,local_118);
    *(undefined8 **)(param_3 + 8) = puVar6 + 2;
  }
  iVar4 = (int)(float)(int)param_1;
  this_00 = *(VehicleNavigationAgent **)(this + 0x38);
  local_128 = local_12c;
  if (iVar4 != 0) {
    fVar15 = 0.0;
    do {
      iVar4 = iVar4 + -1;
      fVar8 = fVar7 * local_128;
      fVar10 = (float)NEON_fmadd(fStack_110,fVar8 * 0.5,fStack_10c);
      fVar11 = (float)NEON_fmsub(fStack_10c,fVar8 * 0.5,fStack_110);
      fVar13 = (float)NEON_fmadd(fVar11,fVar11,fVar10 * fVar10);
      fVar12 = 1.0;
      if (1e-06 < fVar13) {
        fVar12 = 1.0 / SQRT(fVar13);
      }
      fVar13 = (float)NEON_fmadd(fStack_110,fVar8,fStack_10c);
      fStack_110 = (float)NEON_fmadd(-fStack_10c,fVar8,fStack_110);
      fVar8 = (float)NEON_fmadd(fStack_110,fStack_110,fVar13 * fVar13);
      local_118 = NEON_fmadd(fVar11 * fVar12,fVar7,local_118);
      uStack_114 = NEON_fmadd(fVar10 * fVar12,fVar7,uStack_114);
      fStack_10c = 1.0;
      if (1e-06 < fVar8) {
        fStack_10c = 1.0 / SQRT(fVar8);
      }
      fStack_110 = fStack_110 * fStack_10c;
      fStack_10c = fVar13 * fStack_10c;
      fVar15 = fVar7 + fVar15;
      TractorTrailer::solveTrailers();
      __src = *(void **)param_3;
      puVar6 = *(undefined8 **)(param_3 + 8);
      __n = (long)puVar6 - (long)__src;
      uVar1 = ((long)__n >> 4) + 1;
      if ((float)(unkuint9)uVar1 * param_2 <= ABS(fVar15)) {
        if (puVar6 == *(undefined8 **)(param_3 + 0x10)) {
          if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar1 <= (ulong)((long)__n >> 3)) {
            uVar1 = (long)__n >> 3;
          }
          if (0x7fffffffffffffef < __n) {
            uVar1 = 0xfffffffffffffff;
          }
          if (uVar1 == 0) {
            __dest = (void *)0x0;
          }
          else {
            if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            __dest = operator_new(uVar1 << 4);
          }
          puVar6 = (undefined8 *)((long)__dest + ((long)__n >> 4) * 0x10);
          puVar6[1] = CONCAT44(fStack_10c,fStack_110);
          *puVar6 = CONCAT44(uStack_114,local_118);
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
          }
          *(void **)param_3 = __dest;
          *(undefined8 **)(param_3 + 8) = puVar6 + 2;
          *(void **)(param_3 + 0x10) = (void *)((long)__dest + uVar1 * 0x10);
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
        }
        else {
          puVar6[1] = CONCAT44(fStack_10c,fStack_110);
          *puVar6 = CONCAT44(uStack_114,local_118);
          *(undefined8 **)(param_3 + 8) = puVar6 + 2;
        }
      }
      fVar9 = (float)VehicleNavigationAgent::getNextCurvature
                               (this_00,(ExtractionState *)&local_148,&local_128,&fStack_11c,
                                abStack_120,local_124,(PlanarPose *)&local_118,fVar9,fVar14);
      if ((ABS(fVar9) == INFINITY) || (local_124[0] != fVar14 < 0.0)) break;
      fVar9 = local_128;
    } while (iVar4 != 0);
  }
  if (*(long *)(lVar2 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


