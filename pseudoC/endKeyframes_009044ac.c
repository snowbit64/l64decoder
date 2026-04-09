// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endKeyframes
// Entry Point: 009044ac
// Size: 592 bytes
// Signature: undefined __cdecl endKeyframes(void * param_1, char * param_2)


/* I3DAnimationSetsFactory::endKeyframes(void*, char const*) */

void I3DAnimationSetsFactory::endKeyframes(void *param_1,char *param_2)

{
  ulong uVar1;
  void *__src;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  void *__dest;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  KeyframedTransformation *this;
  ulong uVar10;
  ulong __n;
  long **pplVar11;
  long **pplVar12;
  long **pplVar13;
  
  iVar4 = KeyframedTransformation::getNumKeys();
  lVar6 = *(long *)((long)param_1 + 0x288);
  this = *(KeyframedTransformation **)(lVar6 + 0x10);
  if (iVar4 == 0) {
    if (this == (KeyframedTransformation *)0x0) goto LAB_009046d0;
    KeyframedTransformation::~KeyframedTransformation(this);
    operator_delete(this);
  }
  else {
    KeyframedTransformation::finalize();
    lVar6 = *(long *)((long)param_1 + 0x288);
    uVar5 = *(uint *)(lVar6 + 0x18);
    plVar8 = (long *)(lVar6 + 0x28);
    plVar9 = (long *)*plVar8;
    plVar7 = plVar8;
    if (plVar9 == (long *)0x0) {
LAB_0090452c:
      __src = *(void **)(lVar6 + 0x38);
      puVar2 = *(uint **)(lVar6 + 0x40);
      __n = (long)puVar2 - (long)__src;
      uVar10 = (long)__n >> 2;
      if (puVar2 == *(uint **)(lVar6 + 0x48)) {
        uVar1 = uVar10 + 1;
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
          __dest = (void *)0x0;
        }
        else {
          if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          __dest = operator_new(uVar1 << 2);
          uVar5 = *(uint *)(lVar6 + 0x18);
        }
        puVar2 = (uint *)((long)__dest + uVar10 * 4);
        *puVar2 = uVar5;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
        }
        *(void **)(lVar6 + 0x38) = __dest;
        *(uint **)(lVar6 + 0x40) = puVar2 + 1;
        *(void **)(lVar6 + 0x48) = (void *)((long)__dest + uVar1 * 4);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
      else {
        *puVar2 = uVar5;
        *(uint **)(lVar6 + 0x40) = puVar2 + 1;
      }
      lVar6 = *(long *)((long)param_1 + 0x288);
      uVar5 = *(uint *)(lVar6 + 0x18);
      pplVar11 = (long **)(lVar6 + 0x28);
      pplVar12 = (long **)*pplVar11;
      pplVar13 = pplVar11;
      if (pplVar12 != (long **)0x0) {
        pplVar11 = (long **)(lVar6 + 0x28);
        do {
          while (pplVar13 = pplVar12, uVar5 < *(uint *)((long)pplVar13 + 0x1c)) {
            pplVar11 = pplVar13;
            pplVar12 = (long **)*pplVar13;
            if ((long **)*pplVar13 == (long **)0x0) {
              plVar7 = *pplVar13;
              goto joined_r0x00904690;
            }
          }
          if (uVar5 <= *(uint *)((long)pplVar13 + 0x1c)) break;
          pplVar11 = pplVar13 + 1;
          pplVar12 = (long **)*pplVar11;
        } while ((long **)*pplVar11 != (long **)0x0);
      }
      plVar7 = *pplVar11;
joined_r0x00904690:
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)operator_new(0x28);
        *plVar7 = 0;
        plVar7[1] = 0;
        plVar7[2] = (long)pplVar13;
        *pplVar11 = plVar7;
        plVar8 = *(long **)(lVar6 + 0x20);
        *(uint *)((long)plVar7 + 0x1c) = uVar5;
        *(int *)(plVar7 + 4) = (int)uVar10;
        if (*plVar8 != 0) {
          *(long *)(lVar6 + 0x20) = *plVar8;
          plVar7 = *pplVar11;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(lVar6 + 0x28),(__tree_node_base *)plVar7);
        *(long *)(lVar6 + 0x30) = *(long *)(lVar6 + 0x30) + 1;
        lVar6 = *(long *)((long)param_1 + 0x288);
      }
    }
    else {
      do {
        bVar3 = *(uint *)((long)plVar9 + 0x1c) < uVar5;
        if (!bVar3) {
          plVar7 = plVar9;
        }
        plVar9 = (long *)plVar9[bVar3];
      } while (plVar9 != (long *)0x0);
      if ((plVar7 == plVar8) || (uVar5 < *(uint *)((long)plVar7 + 0x1c))) goto LAB_0090452c;
      uVar10 = (ulong)*(uint *)(plVar7 + 4);
    }
    KeyframedTransformation::setTransformIndex
              (*(KeyframedTransformation **)(lVar6 + 0x10),(uint)uVar10);
    Clip::addKeyedTransformation
              (*(Clip **)(*(long *)((long)param_1 + 0x288) + 8),
               *(KeyframedTransformation **)(*(long *)((long)param_1 + 0x288) + 0x10));
  }
  lVar6 = *(long *)((long)param_1 + 0x288);
LAB_009046d0:
  *(undefined8 *)(lVar6 + 0x10) = 0;
  return;
}


