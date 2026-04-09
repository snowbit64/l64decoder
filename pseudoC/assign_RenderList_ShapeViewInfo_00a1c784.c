// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign<RenderList::ShapeViewInfo*>
// Entry Point: 00a1c784
// Size: 428 bytes
// Signature: type __thiscall assign<RenderList::ShapeViewInfo*>(vector<RenderList::ShapeViewInfo,std::__ndk1::allocator<RenderList::ShapeViewInfo>> * this, ShapeViewInfo * param_1, ShapeViewInfo * param_2)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<RenderList::ShapeViewInfo*>::value&&is_constructible<RenderList::ShapeViewInfo,
   std::__ndk1::iterator_traits<RenderList::ShapeViewInfo*>::reference>::value, void>::type
   std::__ndk1::vector<RenderList::ShapeViewInfo, std::__ndk1::allocator<RenderList::ShapeViewInfo>
   >::assign<RenderList::ShapeViewInfo*>(RenderList::ShapeViewInfo*, RenderList::ShapeViewInfo*) */

type __thiscall
std::__ndk1::vector<RenderList::ShapeViewInfo,std::__ndk1::allocator<RenderList::ShapeViewInfo>>::
assign<RenderList::ShapeViewInfo*>
          (vector<RenderList::ShapeViewInfo,std::__ndk1::allocator<RenderList::ShapeViewInfo>> *this
          ,ShapeViewInfo *param_1,ShapeViewInfo *param_2)

{
  ShapeViewInfo *__src;
  type tVar1;
  void *pvVar2;
  vector<RenderList::ShapeViewInfo,std::__ndk1::allocator<RenderList::ShapeViewInfo>> *pvVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong __n;
  void *pvVar8;
  ulong uVar9;
  
  lVar5 = *(long *)(this + 0x10);
  __n = (long)param_2 - (long)param_1;
  pvVar8 = *(void **)this;
  uVar9 = ((long)__n >> 3) * -0x5555555555555555;
  lVar7 = lVar5 - (long)pvVar8 >> 3;
  if (uVar9 < (ulong)(lVar7 * -0x5555555555555555) || uVar9 + lVar7 * 0x5555555555555555 == 0) {
    lVar5 = *(long *)(this + 8) - (long)pvVar8 >> 3;
    __src = param_1 + (*(long *)(this + 8) - (long)pvVar8);
    if (uVar9 < (ulong)(lVar5 * -0x5555555555555555) || uVar9 + lVar5 * 0x5555555555555555 == 0) {
      __src = param_2;
    }
    sVar4 = (long)__src - (long)param_1;
    pvVar3 = this;
    if (sVar4 != 0) {
      pvVar3 = (vector<RenderList::ShapeViewInfo,std::__ndk1::allocator<RenderList::ShapeViewInfo>>
                *)memmove(pvVar8,param_1,sVar4);
    }
    tVar1 = (type)pvVar3;
    if (uVar9 < (ulong)(lVar5 * -0x5555555555555555) || uVar9 + lVar5 * 0x5555555555555555 == 0) {
      *(size_t *)(this + 8) = (long)pvVar8 + sVar4;
    }
    else {
      pvVar8 = *(void **)(this + 8);
      sVar4 = (long)param_2 - (long)__src;
      if (0 < (long)sVar4) {
        pvVar2 = memcpy(pvVar8,__src,sVar4);
        tVar1 = (type)pvVar2;
        pvVar8 = (void *)((long)pvVar8 + (sVar4 / 0x18) * 0x18);
      }
      *(void **)(this + 8) = pvVar8;
    }
    return tVar1;
  }
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 8) = pvVar8;
    operator_delete(pvVar8);
    lVar5 = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (uVar9 < 0xaaaaaaaaaaaaaab) {
    uVar6 = (lVar5 >> 3) * 0x5555555555555556;
    if (uVar9 <= uVar6) {
      uVar9 = uVar6;
    }
    if (0x555555555555554 < (ulong)((lVar5 >> 3) * -0x5555555555555555)) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar9 < 0xaaaaaaaaaaaaaab) {
      pvVar2 = operator_new(uVar9 * 0x18);
      *(void **)this = pvVar2;
      *(void **)(this + 8) = pvVar2;
      *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar9 * 0x18);
      pvVar8 = pvVar2;
      if (0 < (long)__n) {
        pvVar8 = memcpy(pvVar2,param_1,__n);
        pvVar2 = (void *)((long)pvVar2 + (__n / 0x18) * 0x18);
      }
      *(void **)(this + 8) = pvVar2;
      return (type)pvVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_length_error();
}


