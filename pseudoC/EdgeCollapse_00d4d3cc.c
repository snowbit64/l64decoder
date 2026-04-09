// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EdgeCollapse
// Entry Point: 00d4d3cc
// Size: 1216 bytes
// Signature: undefined __thiscall EdgeCollapse(Graph * this, long param_1, long param_2)


/* HACD::Graph::EdgeCollapse(long, long) */

undefined8 __thiscall HACD::Graph::EdgeCollapse(Graph *this,long param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  void *__dest;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  void *__src;
  ulong uVar16;
  long **pplVar17;
  long lVar18;
  ulong uVar19;
  
  lVar12 = *(long *)(this + 0x38);
  lVar5 = (*(long *)(this + 0x40) - lVar12 >> 4) * 0x7d6343eb1a1f58d1;
  if (((lVar5 - param_1 != 0 && param_1 <= lVar5) &&
      (*(char *)(lVar12 + param_1 * 0x310 + 0xa8) == '\0')) &&
     (lVar5 = *(long *)(lVar12 + param_1 * 0x310 + 0x98), lVar5 != 0)) {
    lVar12 = lVar12 + param_1 * 0x310;
    lVar10 = *(long *)(this + 0x20);
    plVar6 = (long *)(lVar12 + 0x10);
    if (*(long *)(lVar12 + 0xa0) != 0x10) {
      plVar6 = *(long **)(lVar12 + 0x90);
    }
    do {
      lVar12 = *plVar6;
      if ((*(long *)(lVar10 + lVar12 * 0x30 + 8) == param_2) ||
         (*(long *)(lVar10 + lVar12 * 0x30 + 0x10) == param_2)) {
        lVar12 = *(long *)(lVar10 + lVar12 * 0x30);
        if (lVar12 < 0) {
          return 0;
        }
        DeleteEdge(this,lVar12);
        lVar12 = *(long *)(this + 0x38) + param_1 * 0x310;
        pplVar17 = (long **)(lVar12 + 0xb8);
        plVar6 = *pplVar17;
        if (plVar6 == *(long **)(lVar12 + 0xc0)) {
          __src = *(void **)(lVar12 + 0xb0);
          uVar15 = (long)plVar6 - (long)__src;
          uVar16 = ((long)uVar15 >> 3) + 1;
          if (uVar16 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar16 <= (ulong)((long)uVar15 >> 2)) {
            uVar16 = (long)uVar15 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar15) {
            uVar16 = 0x1fffffffffffffff;
          }
          if (uVar16 == 0) {
            __dest = (void *)0x0;
          }
          else {
            if (uVar16 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            __dest = operator_new(uVar16 << 3);
          }
          plVar6 = (long *)((long)__dest + ((long)uVar15 >> 3) * 8);
          *plVar6 = param_2;
          if (0 < (long)uVar15) {
            memcpy(__dest,__src,uVar15);
          }
          *pplVar17 = plVar6 + 1;
          *(long **)(lVar12 + 0xc0) = (long *)((long)__dest + uVar16 * 8);
          *(void **)(lVar12 + 0xb0) = __dest;
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
        }
        else {
          *plVar6 = param_2;
          *pplVar17 = plVar6 + 1;
        }
        lVar12 = *(long *)(this + 0x38) + param_2 * 0x310;
        puVar3 = (undefined8 *)(*(long *)(this + 0x38) + param_1 * 0x310 + 0xb0);
        std::__ndk1::vector<long,std::__ndk1::allocator<long>>::
        insert<std::__ndk1::__wrap_iter<long*>>
                  ((vector<long,std::__ndk1::allocator<long>> *)puVar3,(__wrap_iter)*puVar3,
                   (__wrap_iter)*(undefined8 *)(lVar12 + 0xb0),
                   (__wrap_iter)*(undefined8 *)(lVar12 + 0xb8));
        lVar12 = *(long *)(this + 0x38);
        if (*(long *)(lVar12 + param_2 * 0x310 + 0x98) != 0) {
          lVar5 = lVar12 + param_1 * 0x310;
          uVar16 = 0;
          plVar6 = (long *)(lVar5 + 0x10);
          puVar1 = (ulong *)(lVar5 + 0x98);
          do {
            lVar7 = lVar12 + param_2 * 0x310;
            lVar10 = lVar7 + 0x10;
            if (*(long *)(lVar7 + 0xa0) != 0x10) {
              lVar10 = *(long *)(lVar7 + 0x90);
            }
            lVar18 = *(long *)(lVar10 + uVar16 * 8);
            lVar10 = *(long *)(this + 0x20);
            lVar7 = lVar10 + lVar18 * 0x30;
            plVar11 = (long *)(lVar7 + 8);
            plVar2 = (long *)(lVar7 + 0x10);
            plVar4 = plVar2;
            if (*plVar11 != param_2) {
              plVar4 = plVar11;
            }
            lVar13 = (*(long *)(this + 0x40) - lVar12 >> 4) * 0x7d6343eb1a1f58d1;
            lVar7 = *plVar4;
            if (((lVar13 - param_1 != 0 && param_1 <= lVar13) &&
                (*(char *)(lVar12 + param_1 * 0x310 + 0xa8) == '\0')) &&
               (lVar13 = *(long *)(lVar12 + param_1 * 0x310 + 0x98), lVar13 != 0)) {
              lVar14 = lVar12 + param_1 * 0x310;
              plVar4 = (long *)(lVar14 + 0x10);
              if (*(long *)(lVar14 + 0xa0) != 0x10) {
                plVar4 = *(long **)(lVar14 + 0x90);
              }
              do {
                lVar14 = *plVar4;
                if ((*(long *)(lVar10 + lVar14 * 0x30 + 8) == lVar7) ||
                   (*(long *)(lVar10 + lVar14 * 0x30 + 0x10) == lVar7)) {
                  if (-1 < *(long *)(lVar10 + lVar14 * 0x30)) {
                    lVar7 = lVar12 + lVar7 * 0x310;
                    puVar9 = (ulong *)(lVar7 + 0x98);
                    uVar15 = *puVar9;
                    *(undefined *)(lVar10 + lVar18 * 0x30 + 0x28) = 1;
                    lVar10 = lVar7 + 0x10;
                    if (*(long *)(lVar7 + 0xa0) != 0x10) {
                      lVar10 = *(long *)(lVar7 + 0x90);
                    }
                    if (uVar15 == 0) goto LAB_00d4d860;
                    uVar8 = 0;
                    goto LAB_00d4d80c;
                  }
                  break;
                }
                lVar13 = lVar13 + -1;
                plVar4 = plVar4 + 1;
              } while (lVar13 != 0);
            }
            *plVar11 = param_1;
            uVar19 = *(ulong *)(lVar5 + 0xa0);
            *plVar2 = lVar7;
            uVar8 = *puVar1;
            plVar11 = *(long **)(lVar5 + 0x90);
            uVar15 = uVar8;
            plVar4 = plVar6;
            plVar2 = plVar6;
            if (uVar19 != 0x10) {
              plVar4 = plVar11;
              plVar2 = plVar11;
            }
            for (; uVar15 != 0; uVar15 = uVar15 - 1) {
              if (lVar18 == *plVar4) goto LAB_00d4d670;
              plVar4 = plVar4 + 1;
            }
            plVar4 = plVar11;
            uVar15 = uVar19;
            if (uVar8 == uVar19) {
              uVar15 = uVar19 << 1;
              uVar8 = uVar19 << 4;
              if (uVar15 >> 0x3d != 0) {
                uVar8 = 0xffffffffffffffff;
              }
              plVar4 = (long *)operator_new__(uVar8);
              memcpy(plVar4,plVar2,uVar19 << 3);
              uVar8 = uVar19;
              if (plVar11 != (long *)0x0) {
                operator_delete__(plVar11);
                uVar8 = *puVar1;
                lVar12 = *(long *)(this + 0x38);
              }
              *(long **)(lVar5 + 0x90) = plVar4;
              *(ulong *)(lVar5 + 0xa0) = uVar15;
            }
            plVar2 = plVar6;
            if (uVar15 != 0x10) {
              plVar2 = plVar4;
            }
            *puVar1 = uVar8 + 1;
            plVar2[uVar8] = lVar18;
LAB_00d4d670:
            uVar16 = uVar16 + 1;
          } while (uVar16 < *(ulong *)(lVar12 + param_2 * 0x310 + 0x98));
        }
        DeleteVertex(this,param_2);
        return 1;
      }
      lVar5 = lVar5 + -1;
      plVar6 = plVar6 + 1;
    } while (lVar5 != 0);
  }
  return 0;
LAB_00d4d80c:
  uVar19 = uVar8 + 1;
  if (*(long *)(lVar10 + uVar8 * 8) != lVar18) goto code_r0x00d4d81c;
  if (uVar19 < uVar15) {
    do {
      puVar3 = (undefined8 *)(lVar10 + uVar8 * 8);
      uVar19 = uVar8 + 2;
      *puVar3 = puVar3[1];
      uVar8 = uVar8 + 1;
      uVar15 = *puVar9;
    } while (uVar19 < uVar15);
  }
  *puVar9 = uVar15 - 1;
LAB_00d4d860:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + -1;
  goto LAB_00d4d670;
code_r0x00d4d81c:
  uVar8 = uVar19;
  if (uVar15 == uVar19) goto LAB_00d4d860;
  goto LAB_00d4d80c;
}


