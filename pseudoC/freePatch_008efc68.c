// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: freePatch
// Entry Point: 008efc68
// Size: 336 bytes
// Signature: undefined __thiscall freePatch(GeoMipMappingTerrain * this, GeoMipMappingTerrainPatch * param_1)


/* GeoMipMappingTerrain::freePatch(GeoMipMappingTerrainPatch*) */

void __thiscall
GeoMipMappingTerrain::freePatch(GeoMipMappingTerrain *this,GeoMipMappingTerrainPatch *param_1)

{
  ulong uVar1;
  GeoMipMappingTerrainPatch **ppGVar2;
  int iVar3;
  void *__dest;
  void *__src;
  ulong __n;
  
  if (*(Node **)(param_1 + 0x78) == (Node *)0x0) {
    iVar3 = FUN_00f27700(0xffffffff,param_1 + 8);
    if (iVar3 < 2) {
                    /* WARNING: Could not recover jumptable at 0x008efce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x10))(param_1);
      return;
    }
  }
  else {
    Node::unlink(*(Node **)(param_1 + 0x78),false);
    ppGVar2 = *(GeoMipMappingTerrainPatch ***)(this + 0x1b0);
    if (ppGVar2 == *(GeoMipMappingTerrainPatch ***)(this + 0x1b8)) {
      __src = *(void **)(this + 0x1a8);
      __n = (long)ppGVar2 - (long)__src;
      uVar1 = ((long)__n >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar1 <= (ulong)((long)__n >> 2)) {
        uVar1 = (long)__n >> 2;
      }
      if (0x7ffffffffffffff7 < __n) {
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
      ppGVar2 = (GeoMipMappingTerrainPatch **)((long)__dest + ((long)__n >> 3) * 8);
      *ppGVar2 = param_1;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *(void **)(this + 0x1a8) = __dest;
      *(GeoMipMappingTerrainPatch ***)(this + 0x1b0) = ppGVar2 + 1;
      *(void **)(this + 0x1b8) = (void *)((long)__dest + uVar1 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        return;
      }
    }
    else {
      *ppGVar2 = param_1;
      *(GeoMipMappingTerrainPatch ***)(this + 0x1b0) = ppGVar2 + 1;
    }
  }
  return;
}


