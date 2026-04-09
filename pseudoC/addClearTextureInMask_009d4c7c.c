// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addClearTextureInMask
// Entry Point: 009d4c7c
// Size: 308 bytes
// Signature: undefined __cdecl addClearTextureInMask(PPMask * param_1, basic_string * param_2)


/* ProceduralPlacementManager::addClearTextureInMask(ProceduralPlacementScriptBinding::PPMask*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void ProceduralPlacementManager::addClearTextureInMask(PPMask *param_1,basic_string *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  size_t __n;
  
  puVar3 = (undefined8 *)operator_new(0x28);
  *puVar3 = &PTR_apply_00fe2330;
  puVar3[1] = param_2;
                    /* try { // try from 009d4cc0 to 009d4cc7 has its CatchHandler @ 009d4db0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar3 + 2));
  puVar2 = *(undefined8 **)(param_1 + 0x148);
  if (puVar2 < *(undefined8 **)(param_1 + 0x150)) {
    *puVar2 = puVar3;
    *(undefined8 **)(param_1 + 0x148) = puVar2 + 1;
  }
  else {
    __src = *(void **)(param_1 + 0x140);
    __n = (long)puVar2 - (long)__src;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar4 = (long)*(undefined8 **)(param_1 + 0x150) - (long)__src;
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
    puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
    *puVar2 = puVar3;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(param_1 + 0x140) = __dest;
    *(undefined8 **)(param_1 + 0x148) = puVar2 + 1;
    *(void **)(param_1 + 0x150) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


