// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addClearPPReferences
// Entry Point: 009d4ee8
// Size: 292 bytes
// Signature: undefined __thiscall addClearPPReferences(ProceduralPlacementManager * this, PPMask * param_1)


/* ProceduralPlacementManager::addClearPPReferences(ProceduralPlacementScriptBinding::PPMask*) */

void __thiscall
ProceduralPlacementManager::addClearPPReferences(ProceduralPlacementManager *this,PPMask *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *__dest;
  ulong uVar5;
  ulong uVar6;
  void *__src;
  size_t __n;
  
  puVar4 = (undefined8 *)operator_new(0x10);
  puVar2 = *(undefined8 **)(this + 0x148);
  puVar3 = *(undefined8 **)(this + 0x150);
  *puVar4 = &PTR_apply_00fe23a0;
  puVar4[1] = param_1;
  if (puVar2 < puVar3) {
    *puVar2 = puVar4;
    *(undefined8 **)(this + 0x148) = puVar2 + 1;
  }
  else {
    __src = *(void **)(this + 0x140);
    __n = (long)puVar2 - (long)__src;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar5 = (long)puVar3 - (long)__src;
    uVar6 = (long)uVar5 >> 2;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x7ffffffffffffff7 < uVar5) {
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
    puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
    *puVar2 = puVar4;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x140) = __dest;
    *(undefined8 **)(this + 0x148) = puVar2 + 1;
    *(void **)(this + 0x150) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


