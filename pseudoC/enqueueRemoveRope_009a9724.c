// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueRemoveRope
// Entry Point: 009a9724
// Size: 652 bytes
// Signature: undefined __thiscall enqueueRemoveRope(Bt2ScenegraphPhysicsContext * this, uint param_1)


/* Bt2ScenegraphPhysicsContext::enqueueRemoveRope(unsigned int) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueRemoveRope(Bt2ScenegraphPhysicsContext *this,uint param_1)

{
  byte bVar1;
  size_t __n;
  ulong uVar2;
  void *__dest;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long **pplVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  void *__src;
  long lVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  
  uVar5 = (ulong)param_1;
  uVar3 = *(ulong *)(this + 0x2b8);
  if (uVar3 != 0) {
    uVar14 = NEON_cnt(uVar3,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar6 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = (ulong)((int)uVar3 - 1U & param_1);
    }
    else {
      uVar7 = uVar5;
      if (uVar3 <= uVar5) {
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = uVar5 / uVar3;
        }
        uVar7 = uVar5 - uVar7 * uVar3;
      }
    }
    pplVar8 = *(long ***)(*(long *)(this + 0x2b0) + uVar7 * 8);
    if ((pplVar8 != (long **)0x0) && (plVar9 = *pplVar8, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar5) {
          if (*(uint *)(plVar9 + 2) == param_1) {
            bVar1 = *(byte *)(plVar9[3] + 0x34);
            if ((bVar1 & 1) != 0) {
              return;
            }
            *(byte *)(plVar9[3] + 0x34) = bVar1 | 1;
            if (this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) {
              removeRope(this,param_1);
              return;
            }
            puVar4 = *(uint **)(this + 0x2f8);
            if (puVar4 != *(uint **)(this + 0x300)) {
              *puVar4 = param_1;
              *(uint **)(this + 0x2f8) = puVar4 + 1;
              return;
            }
            __src = *(void **)(this + 0x2f0);
            uVar3 = (long)puVar4 - (long)__src;
            uVar5 = ((long)uVar3 >> 2) + 1;
            if (uVar5 >> 0x3e == 0) {
              if (uVar5 <= (ulong)((long)uVar3 >> 1)) {
                uVar5 = (long)uVar3 >> 1;
              }
              if (0x7ffffffffffffffb < uVar3) {
                uVar5 = 0x3fffffffffffffff;
              }
              if (uVar5 == 0) {
                __dest = (void *)0x0;
              }
              else {
                if (uVar5 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                __dest = operator_new(uVar5 << 2);
              }
              puVar4 = (uint *)((long)__dest + ((long)uVar3 >> 2) * 4);
              *puVar4 = param_1;
              if (0 < (long)uVar3) {
                memcpy(__dest,__src,uVar3);
              }
              *(void **)(this + 0x2f0) = __dest;
              *(uint **)(this + 0x2f8) = puVar4 + 1;
              *(void **)(this + 0x300) = (void *)((long)__dest + uVar5 * 4);
              if (__src == (void *)0x0) {
                return;
              }
              operator_delete(__src);
              return;
            }
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
        }
        else {
          if (uVar6 < 2) {
            uVar10 = uVar10 & uVar3 - 1;
          }
          else if (uVar3 <= uVar10) {
            uVar2 = 0;
            if (uVar3 != 0) {
              uVar2 = uVar10 / uVar3;
            }
            uVar10 = uVar10 - uVar2 * uVar3;
          }
          if (uVar10 != uVar7) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  lVar11 = *(long *)(this + 0x2d8);
  uVar5 = (*(long *)(this + 0x2e0) - lVar11 >> 3) * 0xba2e8ba3;
  if ((int)uVar5 != 0) {
    lVar12 = 0;
    do {
      if (*(uint *)(lVar11 + lVar12) == param_1) {
        __n = ((*(long *)(this + 0x2e0) - lVar11) + -0x58) - lVar12;
        if (__n != 0) {
          memmove((void *)(lVar11 + lVar12),(void *)((long)(void *)(lVar11 + lVar12) + 0x58),__n);
        }
        *(long *)(this + 0x2e0) = lVar11 + ((long)__n / 0x58) * 0x58 + lVar12;
        return;
      }
      lVar12 = lVar12 + 0x58;
    } while ((uVar5 & 0xffffffff) * 0x58 - lVar12 != 0);
  }
  return;
}


