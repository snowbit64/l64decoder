// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign<OrientedBox*>
// Entry Point: 00726924
// Size: 484 bytes
// Signature: type __thiscall assign<OrientedBox*>(vector<OrientedBox,std::__ndk1::allocator<OrientedBox>> * this, OrientedBox * param_1, OrientedBox * param_2)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<OrientedBox*>::value&&is_constructible<OrientedBox,
   std::__ndk1::iterator_traits<OrientedBox*>::reference>::value, void>::type
   std::__ndk1::vector<OrientedBox, std::__ndk1::allocator<OrientedBox>
   >::assign<OrientedBox*>(OrientedBox*, OrientedBox*) */

type __thiscall
std::__ndk1::vector<OrientedBox,std::__ndk1::allocator<OrientedBox>>::assign<OrientedBox*>
          (vector<OrientedBox,std::__ndk1::allocator<OrientedBox>> *this,OrientedBox *param_1,
          OrientedBox *param_2)

{
  OrientedBox *__src;
  type tVar1;
  void *pvVar2;
  vector<OrientedBox,std::__ndk1::allocator<OrientedBox>> *pvVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  size_t sVar7;
  void *pvVar8;
  ulong uVar9;
  
  lVar4 = *(long *)(this + 0x10);
  pvVar8 = *(void **)this;
  sVar7 = (long)param_2 - (long)param_1;
  lVar6 = lVar4 - (long)pvVar8 >> 2;
  uVar9 = ((long)sVar7 >> 2) * 0x6db6db6db6db6db7;
  if (uVar9 < (ulong)(lVar6 * 0x6db6db6db6db6db7) || uVar9 + lVar6 * -0x6db6db6db6db6db7 == 0) {
    lVar4 = *(long *)(this + 8) - (long)pvVar8 >> 2;
    __src = param_1 + (*(long *)(this + 8) - (long)pvVar8);
    if (uVar9 < (ulong)(lVar4 * 0x6db6db6db6db6db7) || uVar9 + lVar4 * -0x6db6db6db6db6db7 == 0) {
      __src = param_2;
    }
    sVar7 = (long)__src - (long)param_1;
    pvVar3 = this;
    if (sVar7 != 0) {
      pvVar3 = (vector<OrientedBox,std::__ndk1::allocator<OrientedBox>> *)
               memmove(pvVar8,param_1,sVar7);
    }
    tVar1 = (type)pvVar3;
    if (uVar9 < (ulong)(lVar4 * 0x6db6db6db6db6db7) || uVar9 + lVar4 * -0x6db6db6db6db6db7 == 0) {
      *(size_t *)(this + 8) = (long)pvVar8 + sVar7;
    }
    else {
      pvVar8 = *(void **)(this + 8);
      sVar7 = (long)param_2 - (long)__src;
      if (0 < (long)sVar7) {
        pvVar2 = memcpy(pvVar8,__src,sVar7);
        tVar1 = (type)pvVar2;
        pvVar8 = (void *)((long)pvVar8 + (sVar7 / 0x1c) * 0x1c);
      }
      *(void **)(this + 8) = pvVar8;
    }
    return tVar1;
  }
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 8) = pvVar8;
    operator_delete(pvVar8);
    lVar4 = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (uVar9 < 0x924924924924925) {
    uVar5 = (lVar4 >> 2) * -0x2492492492492492;
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    if (0x492492492492491 < (ulong)((lVar4 >> 2) * 0x6db6db6db6db6db7)) {
      uVar9 = 0x924924924924924;
    }
    if (uVar9 < 0x924924924924925) {
      pvVar2 = operator_new(uVar9 * 0x1c);
      *(void **)this = pvVar2;
      *(void **)(this + 8) = pvVar2;
      *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar9 * 0x1c);
      pvVar8 = pvVar2;
      if (0 < (long)sVar7) {
        pvVar8 = memcpy(pvVar2,param_1,sVar7);
        pvVar2 = (void *)((long)pvVar2 + (sVar7 / 0x1c) * 0x1c);
      }
      *(void **)(this + 8) = pvVar2;
      return (type)pvVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_length_error();
}


