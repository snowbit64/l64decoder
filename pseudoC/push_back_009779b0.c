// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 009779b0
// Size: 440 bytes
// Signature: undefined __thiscall push_back(__split_buffer<TextureStreamingManager::ChangeRequest*,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest*>> * this, ChangeRequest * * param_1)


/* std::__ndk1::__split_buffer<TextureStreamingManager::ChangeRequest*,
   std::__ndk1::allocator<TextureStreamingManager::ChangeRequest*>
   >::push_back(TextureStreamingManager::ChangeRequest*&&) */

void __thiscall
std::__ndk1::
__split_buffer<TextureStreamingManager::ChangeRequest*,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest*>>
::push_back(__split_buffer<TextureStreamingManager::ChangeRequest*,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest*>>
            *this,ChangeRequest **param_1)

{
  long lVar1;
  ChangeRequest **ppCVar2;
  ChangeRequest **ppCVar3;
  size_t __n;
  ChangeRequest **ppCVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  ChangeRequest **ppCVar8;
  ulong uVar9;
  ulong uVar10;
  ChangeRequest **ppCVar11;
  ChangeRequest **__src;
  ChangeRequest **ppCVar12;
  ulong uVar13;
  ChangeRequest *pCVar14;
  ChangeRequest *pCVar15;
  ChangeRequest *pCVar16;
  
  ppCVar12 = *(ChangeRequest ***)(this + 0x10);
  if (ppCVar12 != *(ChangeRequest ***)(this + 0x18)) goto LAB_00977b30;
  ppCVar3 = *(ChangeRequest ***)this;
  __src = *(ChangeRequest ***)(this + 8);
  if (ppCVar3 <= __src && (long)__src - (long)ppCVar3 != 0) {
    lVar6 = (long)__src - (long)ppCVar3 >> 3;
    lVar1 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      lVar1 = lVar6 + 1;
    }
    __n = (long)ppCVar12 - (long)__src;
    ppCVar12 = __src + -(lVar1 >> 1);
    if (__n != 0) {
      memmove(ppCVar12,__src,__n);
      __src = *(ChangeRequest ***)(this + 8);
    }
    ppCVar12 = (ChangeRequest **)((long)ppCVar12 + __n);
    *(ChangeRequest ***)(this + 8) = __src + -(lVar1 >> 1);
    *(ChangeRequest ***)(this + 0x10) = ppCVar12;
    goto LAB_00977b30;
  }
  uVar7 = (long)ppCVar12 - (long)ppCVar3 >> 2;
  if ((long)ppCVar12 - (long)ppCVar3 == 0) {
    uVar7 = 1;
  }
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  uVar13 = uVar7 >> 2;
  pvVar5 = operator_new(uVar7 * 8);
  ppCVar2 = (ChangeRequest **)((long)pvVar5 + uVar13 * 8);
  uVar9 = (long)ppCVar12 - (long)__src;
  ppCVar12 = ppCVar2;
  if (uVar9 != 0) {
    ppCVar12 = (ChangeRequest **)((long)ppCVar2 + (uVar9 & 0xfffffffffffffff8));
    uVar9 = uVar9 - 8;
    ppCVar8 = ppCVar2;
    if (0x17 < uVar9) {
      if (((void *)((long)__src + (uVar9 & 0xfffffffffffffff8) + 8) <=
           (void *)((long)pvVar5 + uVar13 * 8)) ||
         ((ChangeRequest **)((long)pvVar5 + uVar13 * 8 + (uVar9 & 0xfffffffffffffff8) + 8) <= __src)
         ) {
        uVar9 = (uVar9 >> 3) + 1;
        ppCVar8 = __src + 2;
        uVar10 = uVar9 & 0x3ffffffffffffffc;
        ppCVar11 = (ChangeRequest **)((long)pvVar5 + uVar13 * 8 + 0x10);
        __src = __src + uVar10;
        uVar13 = uVar10;
        do {
          ppCVar4 = ppCVar8 + -1;
          pCVar14 = ppCVar8[-2];
          pCVar16 = ppCVar8[1];
          pCVar15 = *ppCVar8;
          ppCVar8 = ppCVar8 + 4;
          uVar13 = uVar13 - 4;
          ppCVar11[-1] = *ppCVar4;
          ppCVar11[-2] = pCVar14;
          ppCVar11[1] = pCVar16;
          *ppCVar11 = pCVar15;
          ppCVar11 = ppCVar11 + 4;
        } while (uVar13 != 0);
        ppCVar8 = ppCVar2 + uVar10;
        if (uVar9 == uVar10) goto LAB_00977b18;
      }
    }
    do {
      ppCVar11 = ppCVar8 + 1;
      *ppCVar8 = *__src;
      ppCVar8 = ppCVar11;
      __src = __src + 1;
    } while (ppCVar11 != ppCVar12);
  }
LAB_00977b18:
  *(void **)this = pvVar5;
  *(ChangeRequest ***)(this + 8) = ppCVar2;
  *(ChangeRequest ***)(this + 0x10) = ppCVar12;
  *(void **)(this + 0x18) = (void *)((long)pvVar5 + uVar7 * 8);
  if (ppCVar3 != (ChangeRequest **)0x0) {
    operator_delete(ppCVar3);
    ppCVar12 = *(ChangeRequest ***)(this + 0x10);
  }
LAB_00977b30:
  *ppCVar12 = *param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  return;
}


