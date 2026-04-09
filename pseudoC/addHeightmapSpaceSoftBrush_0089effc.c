// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addHeightmapSpaceSoftBrush
// Entry Point: 0089effc
// Size: 388 bytes
// Signature: undefined __thiscall addHeightmapSpaceSoftBrush(TerrainDeformation * this, float param_1, float param_2, BRUSH_TYPE param_3, float param_4, float param_5, float param_6, TerrainBrush * param_7)


/* TerrainDeformation::addHeightmapSpaceSoftBrush(float, float, TerrainDeformation::BRUSH_TYPE,
   float, float, float, TerrainBrush*) */

void __thiscall
TerrainDeformation::addHeightmapSpaceSoftBrush
          (TerrainDeformation *this,float param_1,float param_2,BRUSH_TYPE param_3,float param_4,
          float param_5,float param_6,TerrainBrush *param_7)

{
  ulong uVar1;
  BRUSH_TYPE *pBVar2;
  void *__dest;
  void *__src;
  ulong __n;
  BRUSH_TYPE BVar3;
  BRUSH_TYPE BVar4;
  BRUSH_TYPE BVar5;
  float fVar6;
  
  pBVar2 = *(BRUSH_TYPE **)(this + 0x80);
  BVar4 = NEON_fmin(param_5,0x3f800000);
  fVar6 = -param_4;
  if (-param_4 < param_4) {
    fVar6 = param_4;
  }
  BVar3 = NEON_fmin(param_6,0x3f800000);
  BVar5 = 0;
  if (0.0 <= param_5) {
    BVar5 = BVar4;
  }
  BVar4 = 0;
  if (0.0 <= param_6) {
    BVar4 = BVar3;
  }
  if (pBVar2 == *(BRUSH_TYPE **)(this + 0x88)) {
    __src = *(void **)(this + 0x78);
    __n = (long)pBVar2 - (long)__src;
    uVar1 = ((long)__n >> 5) + 1;
    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)__n >> 4)) {
      uVar1 = (long)__n >> 4;
    }
    if (0x7fffffffffffffdf < __n) {
      uVar1 = 0x7ffffffffffffff;
    }
    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar1 * 0x20);
    pBVar2 = (BRUSH_TYPE *)((long)__dest + ((long)__n >> 5) * 0x20);
    *pBVar2 = param_3;
    pBVar2[1] = (BRUSH_TYPE)param_1;
    pBVar2[2] = (BRUSH_TYPE)param_2;
    pBVar2[3] = (BRUSH_TYPE)fVar6;
    *(TerrainBrush **)(pBVar2 + 4) = param_7;
    pBVar2[6] = BVar5;
    pBVar2[7] = BVar4;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x78) = __dest;
    *(BRUSH_TYPE **)(this + 0x80) = pBVar2 + 8;
    *(void **)(this + 0x88) = (void *)((long)__dest + uVar1 * 0x20);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *pBVar2 = param_3;
    pBVar2[1] = (BRUSH_TYPE)param_1;
    pBVar2[2] = (BRUSH_TYPE)param_2;
    pBVar2[3] = (BRUSH_TYPE)fVar6;
    *(TerrainBrush **)(pBVar2 + 4) = param_7;
    pBVar2[6] = BVar5;
    pBVar2[7] = BVar4;
    *(BRUSH_TYPE **)(this + 0x80) = pBVar2 + 8;
  }
  return;
}


