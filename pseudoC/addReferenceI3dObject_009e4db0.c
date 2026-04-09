// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addReferenceI3dObject
// Entry Point: 009e4db0
// Size: 628 bytes
// Signature: undefined __thiscall addReferenceI3dObject(ProceduralPlacementRule * this, uint param_1, basic_string * param_2, basic_string * param_3, uint param_4, uint param_5, uint param_6, uint param_7, basic_string * param_8, float param_9, float param_10, int param_11)


/* ProceduralPlacementRule::addReferenceI3dObject(unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, unsigned int, unsigned int, unsigned int, unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float, float, int) */

void __thiscall
ProceduralPlacementRule::addReferenceI3dObject
          (ProceduralPlacementRule *this,uint param_1,basic_string *param_2,basic_string *param_3,
          uint param_4,uint param_5,uint param_6,uint param_7,basic_string *param_8,float param_9,
          float param_10,int param_11)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  ProceduralPlacementReferenceObjectDesc *this_00;
  ProceduralPlacementManager *this_01;
  void *__dest;
  ProceduralPlacementReferenceObjectDesc **ppPVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  void *__src;
  size_t __n;
  
  this_00 = (ProceduralPlacementReferenceObjectDesc *)operator_new(0x98);
                    /* try { // try from 009e4e10 to 009e4e3f has its CatchHandler @ 009e5024 */
  ProceduralPlacementReferenceObjectDesc::ProceduralPlacementReferenceObjectDesc
            (this_00,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             param_10,param_11);
  this_01 = (ProceduralPlacementManager *)ProceduralPlacementManager::getInstance();
  ProceduralPlacementManager::setPPType(this_01,(ProceduralPlacementObjectDesc *)this_00);
  ppPVar5 = *(ProceduralPlacementReferenceObjectDesc ***)(this + 0x70);
  if (*(int *)(this_00 + 0x28) != -1) goto LAB_009e4eb4;
  lVar6 = *(long *)(this + 0x68);
  if ((long)ppPVar5 - lVar6 == 0) {
    iVar10 = 1;
  }
  else {
    uVar7 = (long)ppPVar5 - lVar6 >> 3;
    uVar4 = uVar7;
    if (uVar7 < 2) {
      uVar4 = 1;
    }
    if (uVar4 < 2) {
      uVar9 = 0;
      iVar10 = 0;
LAB_009e4e88:
      do {
        lVar1 = uVar9 * 8;
        uVar9 = uVar9 + 1;
        iVar11 = *(int *)(*(long *)(lVar6 + lVar1) + 0x28);
        if (iVar11 <= iVar10) {
          iVar11 = iVar10;
        }
        iVar10 = iVar11;
      } while ((uVar9 & 0xffffffff) < uVar7);
    }
    else {
      iVar10 = 0;
      uVar8 = uVar7;
      if (uVar7 < 2) {
        uVar8 = 1;
      }
      uVar9 = 0;
      if (((int)(uVar8 - 1) == -1) || (uVar8 - 1 >> 0x20 != 0)) goto LAB_009e4e88;
      uVar9 = uVar4 & 0xfffffffffffffffe;
      plVar13 = (long *)(lVar6 + 8);
      uVar8 = uVar9;
      iVar11 = 0;
      iVar12 = 0;
      do {
        plVar2 = plVar13 + -1;
        lVar1 = *plVar13;
        plVar13 = plVar13 + 2;
        iVar10 = *(int *)(*plVar2 + 0x28);
        if (*(int *)(*plVar2 + 0x28) <= iVar11) {
          iVar10 = iVar11;
        }
        iVar3 = *(int *)(lVar1 + 0x28);
        if (*(int *)(lVar1 + 0x28) <= iVar12) {
          iVar3 = iVar12;
        }
        uVar8 = uVar8 - 2;
        iVar11 = iVar10;
        iVar12 = iVar3;
      } while (uVar8 != 0);
      if (iVar10 <= iVar3) {
        iVar10 = iVar3;
      }
      if (uVar4 != uVar9) goto LAB_009e4e88;
    }
    iVar10 = iVar10 + 1;
  }
  *(int *)(this_00 + 0x28) = iVar10;
LAB_009e4eb4:
  if (ppPVar5 < *(ProceduralPlacementReferenceObjectDesc ***)(this + 0x78)) {
    *ppPVar5 = this_00;
    *(ProceduralPlacementReferenceObjectDesc ***)(this + 0x70) = ppPVar5 + 1;
  }
  else {
    __src = *(void **)(this + 0x68);
    __n = (long)ppPVar5 - (long)__src;
    uVar4 = ((long)__n >> 3) + 1;
    if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar7 = (long)*(ProceduralPlacementReferenceObjectDesc ***)(this + 0x78) - (long)__src;
    uVar8 = (long)uVar7 >> 2;
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar4 = 0x1fffffffffffffff;
    }
    if (uVar4 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar4 << 3);
    }
    ppPVar5 = (ProceduralPlacementReferenceObjectDesc **)((long)__dest + ((long)__n >> 3) * 8);
    *ppPVar5 = this_00;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x68) = __dest;
    *(ProceduralPlacementReferenceObjectDesc ***)(this + 0x70) = ppPVar5 + 1;
    *(void **)(this + 0x78) = (void *)((long)__dest + uVar4 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


