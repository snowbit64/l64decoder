// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAllShapesAndLights
// Entry Point: 00a1afac
// Size: 1068 bytes
// Signature: undefined __thiscall getAllShapesAndLights(RenderList * this, vector * param_1, vector * param_2)


/* RenderList::getAllShapesAndLights(std::__ndk1::vector<GsShape const*,
   std::__ndk1::allocator<GsShape const*> >&, std::__ndk1::vector<LightSource*,
   std::__ndk1::allocator<LightSource*> >&) */

void __thiscall RenderList::getAllShapesAndLights(RenderList *this,vector *param_1,vector *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  size_t __n;
  long lVar9;
  long lVar10;
  
  lVar10 = *(long *)(this + 0x58);
  uVar5 = (*(long *)(this + 0x60) - lVar10 >> 3) * -0x5555555555555555;
  if ((int)uVar5 != 0) {
    lVar9 = 0;
    while( true ) {
      puVar1 = *(undefined8 **)(param_1 + 8);
      if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
        pvVar8 = *(void **)param_1;
        uVar7 = (long)puVar1 - (long)pvVar8;
        uVar6 = ((long)uVar7 >> 3) + 1;
        if (uVar6 >> 0x3d != 0) goto LAB_00a1b3bc;
        if (uVar6 <= (ulong)((long)uVar7 >> 2)) {
          uVar6 = (long)uVar7 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar6 = 0x1fffffffffffffff;
        }
        if (uVar6 == 0) {
          pvVar4 = (void *)0x0;
        }
        else {
          if (uVar6 >> 0x3d != 0) goto LAB_00a1b3c4;
          pvVar4 = operator_new(uVar6 << 3);
        }
        puVar1 = (undefined8 *)((long)pvVar4 + ((long)uVar7 >> 3) * 8);
        *puVar1 = *(undefined8 *)(lVar10 + lVar9);
        if (0 < (long)uVar7) {
          memcpy(pvVar4,pvVar8,uVar7);
        }
        *(void **)param_1 = pvVar4;
        *(undefined8 **)(param_1 + 8) = puVar1 + 1;
        *(void **)(param_1 + 0x10) = (void *)((long)pvVar4 + uVar6 * 8);
        if (pvVar8 != (void *)0x0) {
          operator_delete(pvVar8);
        }
      }
      else {
        *puVar1 = *(undefined8 *)(lVar10 + lVar9);
        *(undefined8 **)(param_1 + 8) = puVar1 + 1;
      }
      if ((uVar5 & 0xffffffff) * 0x18 + -0x18 == lVar9) break;
      lVar10 = *(long *)(this + 0x58);
      lVar9 = lVar9 + 0x18;
    }
  }
  lVar10 = *(long *)(this + 0x88);
  uVar5 = (*(long *)(this + 0x90) - lVar10 >> 3) * -0x5555555555555555;
  if ((int)uVar5 != 0) {
    lVar9 = 0;
    while( true ) {
      puVar1 = *(undefined8 **)(param_1 + 8);
      if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
        pvVar8 = *(void **)param_1;
        uVar7 = (long)puVar1 - (long)pvVar8;
        uVar6 = ((long)uVar7 >> 3) + 1;
        if (uVar6 >> 0x3d != 0) goto LAB_00a1b3bc;
        if (uVar6 <= (ulong)((long)uVar7 >> 2)) {
          uVar6 = (long)uVar7 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar6 = 0x1fffffffffffffff;
        }
        if (uVar6 == 0) {
          pvVar4 = (void *)0x0;
        }
        else {
          if (uVar6 >> 0x3d != 0) goto LAB_00a1b3c4;
          pvVar4 = operator_new(uVar6 << 3);
        }
        puVar1 = (undefined8 *)((long)pvVar4 + ((long)uVar7 >> 3) * 8);
        *puVar1 = *(undefined8 *)(lVar10 + lVar9);
        if (0 < (long)uVar7) {
          memcpy(pvVar4,pvVar8,uVar7);
        }
        *(void **)param_1 = pvVar4;
        *(undefined8 **)(param_1 + 8) = puVar1 + 1;
        *(void **)(param_1 + 0x10) = (void *)((long)pvVar4 + uVar6 * 8);
        if (pvVar8 != (void *)0x0) {
          operator_delete(pvVar8);
        }
      }
      else {
        *puVar1 = *(undefined8 *)(lVar10 + lVar9);
        *(undefined8 **)(param_1 + 8) = puVar1 + 1;
      }
      if ((uVar5 & 0xffffffff) * 0x18 + -0x18 == lVar9) break;
      lVar10 = *(long *)(this + 0x88);
      lVar9 = lVar9 + 0x18;
    }
  }
  lVar10 = *(long *)(this + 0xb8);
  uVar5 = (*(long *)(this + 0xc0) - lVar10 >> 3) * -0x5555555555555555;
  if ((int)uVar5 != 0) {
    lVar9 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + 8);
      if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
        pvVar8 = *(void **)param_1;
        uVar7 = (long)puVar1 - (long)pvVar8;
        uVar6 = ((long)uVar7 >> 3) + 1;
        if (uVar6 >> 0x3d != 0) {
LAB_00a1b3bc:
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar6 <= (ulong)((long)uVar7 >> 2)) {
          uVar6 = (long)uVar7 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar6 = 0x1fffffffffffffff;
        }
        if (uVar6 == 0) {
          pvVar4 = (void *)0x0;
        }
        else {
          if (uVar6 >> 0x3d != 0) goto LAB_00a1b3c4;
          pvVar4 = operator_new(uVar6 << 3);
        }
        puVar1 = (undefined8 *)((long)pvVar4 + ((long)uVar7 >> 3) * 8);
        *puVar1 = *(undefined8 *)(lVar10 + lVar9);
        if (0 < (long)uVar7) {
          memcpy(pvVar4,pvVar8,uVar7);
        }
        *(void **)param_1 = pvVar4;
        *(undefined8 **)(param_1 + 8) = puVar1 + 1;
        *(void **)(param_1 + 0x10) = (void *)((long)pvVar4 + uVar6 * 8);
        if (pvVar8 != (void *)0x0) {
          operator_delete(pvVar8);
        }
      }
      else {
        *puVar1 = *(undefined8 *)(lVar10 + lVar9);
        *(undefined8 **)(param_1 + 8) = puVar1 + 1;
      }
      if ((uVar5 & 0xffffffff) * 0x18 + -0x18 == lVar9) break;
      lVar10 = *(long *)(this + 0xb8);
      lVar9 = lVar9 + 0x18;
    } while( true );
  }
  uVar3 = *(uint *)(this + 0x2cc);
  if (uVar3 != 0) {
    lVar10 = 0;
    do {
      plVar2 = *(long **)(param_2 + 8);
      lVar9 = 0;
      if (*(long *)(*(long *)(this + 0x2d0) + lVar10) != 0) {
        lVar9 = *(long *)(*(long *)(this + 0x2d0) + lVar10) + -0x154;
      }
      if (plVar2 < *(long **)(param_2 + 0x10)) {
        *plVar2 = lVar9;
        *(long **)(param_2 + 8) = plVar2 + 1;
      }
      else {
        pvVar8 = *(void **)param_2;
        __n = (long)plVar2 - (long)pvVar8;
        uVar5 = ((long)__n >> 3) + 1;
        if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar6 = (long)*(long **)(param_2 + 0x10) - (long)pvVar8;
        uVar7 = (long)uVar6 >> 2;
        if (uVar5 <= uVar7) {
          uVar5 = uVar7;
        }
        if (0x7ffffffffffffff7 < uVar6) {
          uVar5 = 0x1fffffffffffffff;
        }
        if (uVar5 == 0) {
          pvVar4 = (void *)0x0;
        }
        else {
          if (uVar5 >> 0x3d != 0) {
LAB_00a1b3c4:
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar4 = operator_new(uVar5 << 3);
        }
        plVar2 = (long *)((long)pvVar4 + ((long)__n >> 3) * 8);
        *plVar2 = lVar9;
        if (0 < (long)__n) {
          memcpy(pvVar4,pvVar8,__n);
        }
        *(void **)param_2 = pvVar4;
        *(long **)(param_2 + 8) = plVar2 + 1;
        *(void **)(param_2 + 0x10) = (void *)((long)pvVar4 + uVar5 * 8);
        if (pvVar8 != (void *)0x0) {
          operator_delete(pvVar8);
        }
      }
      lVar10 = lVar10 + 0x10;
    } while ((ulong)uVar3 * 0x10 - lVar10 != 0);
  }
  return;
}


