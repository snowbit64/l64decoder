// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removePhysicsObstacle
// Entry Point: 0072e7a0
// Size: 448 bytes
// Signature: undefined __thiscall removePhysicsObstacle(VehicleNavigationMapGenerator * this, TransformGroup * param_1)


/* VehicleNavigationMapGenerator::removePhysicsObstacle(TransformGroup*) */

void __thiscall
VehicleNavigationMapGenerator::removePhysicsObstacle
          (VehicleNavigationMapGenerator *this,TransformGroup *param_1)

{
  ulong uVar1;
  void *pvVar2;
  long **pplVar3;
  ulong uVar4;
  Obstacle **ppOVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  Obstacle *pOVar9;
  void **__src;
  size_t sVar10;
  long lVar11;
  
  pplVar3 = *(long ***)(this + 0x188);
  if (pplVar3 != *(long ***)(this + 400)) {
    lVar11 = -(long)pplVar3;
    do {
      plVar8 = *pplVar3;
      if ((TransformGroup *)plVar8[3] == param_1) {
        pOVar9 = (Obstacle *)plVar8[1];
        if (pOVar9 == (Obstacle *)0x0) goto LAB_0072e8fc;
        if ((*(DynamicAvoidance **)(this + 0x140))[0x88] == (DynamicAvoidance)0x0) {
          DynamicAvoidance::removeObstacle(*(DynamicAvoidance **)(this + 0x140),pOVar9);
          __src = (void **)plVar8[1];
          if (__src == (void **)0x0) goto LAB_0072e8fc;
          pvVar2 = *__src;
          if (pvVar2 != (void *)0x0) {
            __src[1] = pvVar2;
            operator_delete(pvVar2);
          }
        }
        else {
          ppOVar5 = *(Obstacle ***)(this + 0x220);
          if (ppOVar5 < *(Obstacle ***)(this + 0x228)) {
            *ppOVar5 = pOVar9;
            *(Obstacle ***)(this + 0x220) = ppOVar5 + 1;
            goto LAB_0072e8fc;
          }
          __src = *(void ***)(this + 0x218);
          sVar10 = (long)ppOVar5 - (long)__src;
          uVar1 = ((long)sVar10 >> 3) + 1;
          if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar4 = (long)*(Obstacle ***)(this + 0x228) - (long)__src;
          uVar7 = (long)uVar4 >> 2;
          if (uVar1 <= uVar7) {
            uVar1 = uVar7;
          }
          if (0x7ffffffffffffff7 < uVar4) {
            uVar1 = 0x1fffffffffffffff;
          }
          if (uVar1 == 0) {
            pvVar2 = (void *)0x0;
          }
          else {
            if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            pvVar2 = operator_new(uVar1 << 3);
          }
          ppOVar5 = (Obstacle **)((long)pvVar2 + ((long)sVar10 >> 3) * 8);
          *ppOVar5 = pOVar9;
          if (0 < (long)sVar10) {
            memcpy(pvVar2,__src,sVar10);
          }
          *(void **)(this + 0x218) = pvVar2;
          *(Obstacle ***)(this + 0x220) = ppOVar5 + 1;
          *(void **)(this + 0x228) = (void *)((long)pvVar2 + uVar1 * 8);
          if (__src == (void **)0x0) goto LAB_0072e8fc;
        }
        operator_delete(__src);
LAB_0072e8fc:
        sVar10 = *(long *)(this + 400) - (long)(void *)(8 - lVar11);
        if (sVar10 != 0) {
          memmove((void *)-lVar11,(void *)(8 - lVar11),sVar10);
        }
        lVar6 = *plVar8;
        *(size_t *)(this + 400) = (long)(void *)-lVar11 + sVar10;
                    /* WARNING: Could not recover jumptable at 0x0072e94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 8))(plVar8);
        return;
      }
      pplVar3 = pplVar3 + 1;
      lVar11 = lVar11 + -8;
    } while (pplVar3 != *(long ***)(this + 400));
  }
  return;
}


