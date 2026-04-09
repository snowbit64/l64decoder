// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: queryFull
// Entry Point: 0089a7b8
// Size: 344 bytes
// Signature: undefined __thiscall queryFull(PedestrianSpawnGrid * this, Vector3 * param_1, vector * param_2)


/* PedestrianSpawnGrid::queryFull(Vector3 const&, std::__ndk1::vector<PedestrianSpawnPoint*,
   std::__ndk1::allocator<PedestrianSpawnPoint*> >&) */

void __thiscall
PedestrianSpawnGrid::queryFull(PedestrianSpawnGrid *this,Vector3 *param_1,vector *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  size_t __n;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  lVar6 = *(long *)this;
  lVar3 = *(long *)(this + 8);
  if (lVar6 != lVar3) {
    fVar7 = *(float *)(this + 0x20);
    do {
      fVar8 = *(float *)(lVar6 + 0x10) - *(float *)param_1;
      fVar10 = *(float *)(lVar6 + 0x14) - *(float *)(param_1 + 4);
      uVar9 = NEON_fmadd(fVar10,fVar10,fVar8 * fVar8);
      fVar8 = *(float *)(lVar6 + 0x18) - *(float *)(param_1 + 8);
      fVar8 = (float)NEON_fmadd(fVar8,fVar8,uVar9);
      if (fVar8 < fVar7 * fVar7) {
        plVar2 = *(long **)(param_2 + 8);
        if (plVar2 < *(long **)(param_2 + 0x10)) {
          *plVar2 = lVar6;
          *(long **)(param_2 + 8) = plVar2 + 1;
        }
        else {
          __src = *(void **)param_2;
          __n = (long)plVar2 - (long)__src;
          uVar1 = ((long)__n >> 3) + 1;
          if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar4 = (long)*(long **)(param_2 + 0x10) - (long)__src;
          uVar5 = (long)uVar4 >> 2;
          if (uVar1 <= uVar5) {
            uVar1 = uVar5;
          }
          if (0x7ffffffffffffff7 < uVar4) {
            uVar1 = 0x1fffffffffffffff;
          }
          if (uVar1 == 0) {
            __dest = (void *)0x0;
          }
          else {
            if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            __dest = operator_new(uVar1 << 3);
          }
          plVar2 = (long *)((long)__dest + ((long)__n >> 3) * 8);
          *plVar2 = lVar6;
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
          }
          *(void **)param_2 = __dest;
          *(long **)(param_2 + 8) = plVar2 + 1;
          *(void **)(param_2 + 0x10) = (void *)((long)__dest + uVar1 * 8);
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
        }
      }
      lVar6 = lVar6 + 0x28;
    } while (lVar6 != lVar3);
  }
  return;
}


