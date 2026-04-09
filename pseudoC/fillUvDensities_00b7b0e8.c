// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fillUvDensities
// Entry Point: 00b7b0e8
// Size: 432 bytes
// Signature: undefined __thiscall fillUvDensities(IndexedTriangleSet * this, uint param_1, uint param_2, uint param_3, vector * param_4)


/* IndexedTriangleSet::fillUvDensities(unsigned int, unsigned int, unsigned int,
   std::__ndk1::vector<float, std::__ndk1::allocator<float> >&) const */

void __thiscall
IndexedTriangleSet::fillUvDensities
          (IndexedTriangleSet *this,uint param_1,uint param_2,uint param_3,vector *param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  void *pvVar5;
  ulong __n;
  size_t __n_00;
  undefined4 uVar6;
  
  if (*(long *)(this + (ulong)param_1 * 8 + 0x18) != 0) {
    pvVar5 = *(void **)param_4;
    __n_00 = *(long *)(param_4 + 8) - (long)pvVar5;
    uVar1 = ((long)__n_00 >> 2) + (ulong)param_3;
    if ((ulong)(*(long *)(param_4 + 0x10) - (long)pvVar5 >> 2) < uVar1) {
      if (uVar1 >> 0x3e != 0) {
LAB_00b7b28c:
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar4 = operator_new(uVar1 * 4);
      if (0 < (long)__n_00) {
        memcpy(pvVar4,pvVar5,__n_00);
      }
      *(void **)param_4 = pvVar4;
      *(void **)(param_4 + 8) = (void *)((long)pvVar4 + ((long)__n_00 >> 2) * 4);
      *(void **)(param_4 + 0x10) = (void *)((long)pvVar4 + uVar1 * 4);
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
    }
    uVar2 = param_3 + param_2;
    if (param_2 < uVar2) {
      do {
        uVar6 = computeTriangleUvDensity(this,param_1,param_2);
        puVar3 = *(undefined4 **)(param_4 + 8);
        if (puVar3 == *(undefined4 **)(param_4 + 0x10)) {
          pvVar5 = *(void **)param_4;
          __n = (long)puVar3 - (long)pvVar5;
          uVar1 = ((long)__n >> 2) + 1;
          if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar1 <= (ulong)((long)__n >> 1)) {
            uVar1 = (long)__n >> 1;
          }
          if (0x7ffffffffffffffb < __n) {
            uVar1 = 0x3fffffffffffffff;
          }
          if (uVar1 == 0) {
            pvVar4 = (void *)0x0;
          }
          else {
            if (uVar1 >> 0x3e != 0) goto LAB_00b7b28c;
            pvVar4 = operator_new(uVar1 << 2);
          }
          puVar3 = (undefined4 *)((long)pvVar4 + ((long)__n >> 2) * 4);
          *puVar3 = uVar6;
          if (0 < (long)__n) {
            memcpy(pvVar4,pvVar5,__n);
          }
          *(void **)param_4 = pvVar4;
          *(undefined4 **)(param_4 + 8) = puVar3 + 1;
          *(void **)(param_4 + 0x10) = (void *)((long)pvVar4 + uVar1 * 4);
          if (pvVar5 != (void *)0x0) {
            operator_delete(pvVar5);
          }
        }
        else {
          *puVar3 = uVar6;
          *(undefined4 **)(param_4 + 8) = puVar3 + 1;
        }
        param_2 = param_2 + 3;
      } while (param_2 < uVar2);
    }
  }
  return;
}


