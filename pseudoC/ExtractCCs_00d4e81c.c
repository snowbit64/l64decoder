// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ExtractCCs
// Entry Point: 00d4e81c
// Size: 932 bytes
// Signature: undefined ExtractCCs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::Graph::ExtractCCs() */

long HACD::Graph::ExtractCCs(void)

{
  ulong uVar1;
  long lVar2;
  long in_x0;
  long *__dest;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  long *__src;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong __n;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  lVar16 = *(long *)(in_x0 + 0x38);
  lVar4 = *(long *)(in_x0 + 0x40);
  if (lVar4 - lVar16 != 0) {
    uVar11 = (lVar4 - lVar16) / 0x310;
    pcVar9 = (char *)(lVar16 + 0xa8);
    if (uVar11 < 2) {
      uVar11 = 1;
    }
    do {
      if (*pcVar9 == '\0') {
        *(undefined8 *)(pcVar9 + -0xa0) = 0xffffffffffffffff;
      }
      uVar11 = uVar11 - 1;
      pcVar9 = pcVar9 + 0x310;
    } while (uVar11 != 0);
  }
  *(undefined8 *)(in_x0 + 8) = 0;
  if (lVar4 == lVar16) {
    lVar13 = 0;
  }
  else {
    __dest = (long *)0x0;
    __src = (long *)0x0;
    plVar12 = (long *)0x0;
    plVar15 = (long *)0x0;
    lVar13 = 0;
    uVar11 = 0;
    do {
      if ((*(char *)(lVar16 + uVar11 * 0x310 + 0xa8) == '\0') &&
         (plVar8 = (long *)(lVar16 + uVar11 * 0x310 + 8), *plVar8 == -1)) {
        plVar10 = (long *)(lVar16 + uVar11 * 0x310);
        *plVar8 = lVar13;
        if (__dest == plVar15) {
          __dest = (long *)operator_new(8);
          plVar8 = __dest + 1;
          *__dest = *plVar10;
          if (plVar15 != (long *)0x0) {
            operator_delete(plVar15);
          }
          lVar4 = (long)plVar8 - (long)__dest;
          lVar16 = *(long *)(in_x0 + 0x38);
          plVar12 = plVar8;
          plVar15 = plVar8;
          __src = __dest;
        }
        else {
          plVar8 = __dest + 1;
          *__dest = *plVar10;
          lVar4 = (long)plVar8 - (long)__dest;
          lVar16 = *(long *)(in_x0 + 0x38);
        }
        while (lVar4 != 0) {
          plVar8 = plVar8 + -1;
          lVar4 = *(long *)((long)__dest + lVar4 + -8);
          if (*(long *)(lVar16 + lVar4 * 0x310 + 0x98) != 0) {
            uVar14 = 0;
            plVar10 = plVar8;
            do {
              lVar5 = lVar16 + lVar4 * 0x310;
              lVar13 = lVar5 + 0x10;
              if (*(long *)(lVar5 + 0xa0) != 0x10) {
                lVar13 = *(long *)(lVar5 + 0x90);
              }
              lVar13 = *(long *)(in_x0 + 0x20) + *(long *)(lVar13 + uVar14 * 8) * 0x30;
              plVar6 = (long *)(lVar13 + 8);
              plVar8 = (long *)(lVar13 + 0x10);
              if (*plVar6 != lVar4) {
                plVar8 = plVar6;
              }
              lVar13 = *plVar8;
              plVar6 = __src;
              plVar8 = plVar10;
              if ((*(char *)(lVar16 + lVar13 * 0x310 + 0xa8) == '\0') &&
                 (plVar7 = (long *)(lVar16 + lVar13 * 0x310 + 8), *plVar7 == -1)) {
                *plVar7 = *(long *)(in_x0 + 8);
                if (plVar10 == plVar12) {
                  __n = (long)plVar12 - (long)__src;
                  lVar5 = (long)__n >> 3;
                  uVar1 = lVar5 + 1;
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
                    __dest = (long *)0x0;
                    plVar8 = (long *)(lVar5 * 8);
                    *plVar8 = lVar13;
                  }
                  else {
                    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                      abort();
                    }
                    __dest = (long *)operator_new(uVar1 << 3);
                    plVar8 = __dest + lVar5;
                    *plVar8 = lVar13;
                  }
                  plVar8 = plVar8 + 1;
                  if (0 < (long)__n) {
                    memcpy(__dest,__src,__n);
                  }
                  plVar12 = __dest + uVar1;
                  plVar6 = __dest;
                  plVar15 = plVar12;
                  if (__src != (long *)0x0) {
                    operator_delete(__src);
                    lVar16 = *(long *)(in_x0 + 0x38);
                  }
                }
                else {
                  plVar8 = plVar10 + 1;
                  *plVar10 = lVar13;
                  plVar15 = plVar12;
                }
              }
              uVar14 = uVar14 + 1;
              __src = plVar6;
              plVar10 = plVar8;
            } while (uVar14 < *(ulong *)(lVar16 + lVar4 * 0x310 + 0x98));
          }
          __src = __dest;
          lVar4 = (long)plVar8 - (long)__dest;
        }
        lVar13 = *(long *)(in_x0 + 8) + 1;
        lVar4 = *(long *)(in_x0 + 0x40);
        *(long *)(in_x0 + 8) = lVar13;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulong)((lVar4 - lVar16 >> 4) * 0x7d6343eb1a1f58d1));
    if (__dest != (long *)0x0) {
      operator_delete(__dest);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return lVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


