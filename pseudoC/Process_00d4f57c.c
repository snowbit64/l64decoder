// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Process
// Entry Point: 00d4f57c
// Size: 2156 bytes
// Signature: undefined Process(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::ICHull::Process() */

ICHull HACD::ICHull::Process(void)

{
  CircularListElement *pCVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  ICHull *in_x0;
  long lVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  CircularListElement *pCVar9;
  ICHull IVar10;
  char *pcVar11;
  long lVar12;
  double *pdVar13;
  long lVar14;
  long *plVar15;
  double *pdVar16;
  long *plVar17;
  double *pdVar18;
  long *plVar19;
  long *plVar20;
  CircularListElement **ppCVar21;
  CircularListElement **ppCVar22;
  void *pvVar23;
  ulong uVar24;
  CircularListElement **ppCVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  long *local_88;
  long *local_80;
  long *local_78;
  ulong local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_70 = 0;
  if (*(ulong *)(in_x0 + 0x20) < 3) {
    IVar10 = (ICHull)0x4;
    goto LAB_00d4fd48;
  }
  if (*(ulong *)(in_x0 + 0x20) == 3) {
    in_x0[0x100] = (ICHull)0x1;
    lVar5 = CircularList<HACD::TMMTriangle>::Add
                      ((CircularList<HACD::TMMTriangle> *)(in_x0 + 0x50),(TMMTriangle *)0x0);
    lVar6 = CircularList<HACD::TMMTriangle>::Add
                      ((CircularList<HACD::TMMTriangle> *)(in_x0 + 0x50),(TMMTriangle *)0x0);
    pdVar16 = *(double **)(in_x0 + 0x18);
    pdVar13 = (double *)pdVar16[7];
    pdVar18 = (double *)pdVar13[7];
    dVar27 = *pdVar13 - *pdVar16;
    dVar30 = pdVar13[1] - pdVar16[1];
    dVar32 = pdVar18[1] - pdVar16[1];
    dVar31 = pdVar13[2] - pdVar16[2];
    dVar28 = pdVar18[2] - pdVar16[2];
    dVar33 = *pdVar18 - *pdVar16;
    dVar26 = (double)NEON_fmadd(dVar31,dVar33,dVar28 * -dVar27);
    dVar28 = (double)NEON_fmadd(dVar30,dVar28,dVar32 * -dVar31);
    *(double *)(in_x0 + 0xf0) = dVar26;
    *(double *)(in_x0 + 0xe8) = dVar28;
    dVar27 = (double)NEON_fmadd(dVar27,dVar32,dVar33 * -dVar30);
    uVar29 = NEON_fmadd(dVar28,dVar28,dVar26 * dVar26);
    dVar30 = (double)NEON_fmadd(dVar27,dVar27,uVar29);
    *(double *)(in_x0 + 0xf8) = dVar27;
    dVar30 = SQRT(dVar30);
    if (dVar30 != 0.0) {
      *(double *)(in_x0 + 0xe8) = dVar28 / dVar30;
      *(double *)(in_x0 + 0xf0) = dVar26 / dVar30;
      *(double *)(in_x0 + 0xf8) = dVar27 / dVar30;
    }
    IVar10 = (ICHull)0x0;
    *(double **)(lVar5 + 0x20) = pdVar16;
    *(double **)(lVar5 + 0x28) = pdVar13;
    *(double **)(lVar5 + 0x30) = pdVar18;
    *(double **)(lVar6 + 0x20) = pdVar13;
    *(double **)(lVar6 + 0x28) = pdVar18;
    *(double **)(lVar6 + 0x30) = pdVar18;
    goto LAB_00d4fd48;
  }
  if (in_x0[0x100] != (ICHull)0x0) {
    do {
      uVar7 = CircularList<HACD::TMMEdge>::Delete();
    } while ((uVar7 & 1) != 0);
    do {
      uVar7 = CircularList<HACD::TMMTriangle>::Delete();
    } while ((uVar7 & 1) != 0);
    in_x0[0x100] = (ICHull)0x0;
  }
  if (*(long *)(in_x0 + 0x60) == 0) {
    iVar4 = DoubleTriangle();
    if (iVar4 != 0) {
      IVar10 = (ICHull)0x1;
      goto LAB_00d4fd48;
    }
    local_70 = 3;
    lVar5 = *(long *)(in_x0 + 0x18);
    lVar6 = *(long *)(lVar5 + 0x40);
    cVar2 = *(char *)(lVar6 + 0x31);
  }
  else {
    lVar5 = *(long *)(in_x0 + 0x18);
    lVar6 = *(long *)(lVar5 + 0x40);
    cVar2 = *(char *)(lVar6 + 0x31);
  }
  if (cVar2 == '\0') {
    if (*(long *)(in_x0 + 0x20) == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    do {
      lVar5 = lVar6;
      *(long *)(in_x0 + 0x18) = lVar5;
      lVar6 = *(long *)(lVar5 + 0x40);
    } while (*(char *)(*(long *)(lVar5 + 0x40) + 0x31) == '\0');
  }
  pcVar11 = (char *)(lVar5 + 0x31);
  cVar2 = *pcVar11;
  while (cVar2 == '\0') {
    *pcVar11 = '\x01';
    uVar7 = ProcessPoint();
    if ((uVar7 & 1) != 0) {
      local_70 = local_70 + 1;
      CleanUp(in_x0,&local_70);
      if (*(long *)(in_x0 + 0x20) != 0) {
        *(undefined8 *)(in_x0 + 0x18) = *(undefined8 *)(*(long *)(in_x0 + 0x18) + 0x38);
      }
      uVar7 = TMMesh::CheckConsistancy();
      if ((uVar7 & 1) == 0) {
        lVar5 = *(long *)(in_x0 + 0x20);
        if (lVar5 == 0) {
          IVar10 = (ICHull)0x3;
          goto LAB_00d4fd48;
        }
        lVar6 = *(long *)(in_x0 + 0x18);
        goto LAB_00d4fd8c;
      }
    }
    pcVar11 = (char *)(*(long *)(in_x0 + 0x18) + 0x31);
    cVar2 = *pcVar11;
  }
  IVar10 = in_x0[0x100];
  if (IVar10 == (ICHull)0x0) goto LAB_00d4fd48;
  lVar5 = *(long *)(in_x0 + 0x60);
  local_88 = (long *)0x0;
  local_80 = (long *)0x0;
  local_78 = (long *)0x0;
  if (lVar5 != 0) {
    do {
      lVar6 = *(long *)(in_x0 + 0x58);
      plVar15 = local_88;
      if (((*(long *)(*(long *)(lVar6 + 0x20) + 0x18) == 0x7fffffffffffffff) ||
          (*(long *)(*(long *)(lVar6 + 0x28) + 0x18) == 0x7fffffffffffffff)) ||
         (*(long *)(*(long *)(lVar6 + 0x30) + 0x18) == 0x7fffffffffffffff)) {
        plVar17 = *(long **)(in_x0 + 0xd0);
        if (plVar17 == *(long **)(in_x0 + 0xd8)) {
          pvVar23 = *(void **)(in_x0 + 200);
          uVar24 = (long)plVar17 - (long)pvVar23;
          lVar12 = (long)uVar24 >> 3;
          uVar7 = lVar12 + 1;
          if (uVar7 >> 0x3d != 0) goto LAB_00d4fdc8;
          if (uVar7 <= (ulong)((long)uVar24 >> 2)) {
            uVar7 = (long)uVar24 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar24) {
            uVar7 = 0x1fffffffffffffff;
          }
          if (uVar7 == 0) {
            pvVar8 = (void *)0x0;
            plVar17 = (long *)(lVar12 * 8);
            *plVar17 = lVar6;
          }
          else {
            if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            pvVar8 = operator_new(uVar7 << 3);
            plVar17 = (long *)((long)pvVar8 + lVar12 * 8);
            *plVar17 = lVar6;
          }
          if (0 < (long)uVar24) {
            memcpy(pvVar8,pvVar23,uVar24);
          }
          *(void **)(in_x0 + 200) = pvVar8;
          *(long **)(in_x0 + 0xd0) = plVar17 + 1;
          *(void **)(in_x0 + 0xd8) = (void *)((long)pvVar8 + uVar7 * 8);
          if (pvVar23 != (void *)0x0) {
            operator_delete(pvVar23);
          }
        }
        else {
          *plVar17 = lVar6;
          *(long **)(in_x0 + 0xd0) = plVar17 + 1;
        }
        lVar12 = *(long *)(in_x0 + 0x58);
        plVar17 = (long *)(*(long *)(lVar6 + 8) + 8);
        if ((*plVar17 == lVar12) ||
           (plVar17 = (long *)(*(long *)(lVar6 + 8) + 0x10), *plVar17 == lVar12)) {
          *plVar17 = 0;
          lVar12 = *(long *)(in_x0 + 0x58);
          lVar14 = *(long *)(lVar6 + 0x10);
          plVar17 = (long *)(lVar14 + 8);
          if (*plVar17 != lVar12) goto LAB_00d4f8a8;
LAB_00d4f8d0:
          *plVar17 = 0;
          lVar12 = *(long *)(in_x0 + 0x58);
          lVar6 = *(long *)(lVar6 + 0x18);
          plVar17 = (long *)(lVar6 + 8);
          if (*plVar17 != lVar12) {
LAB_00d4f8ec:
            plVar17 = (long *)(lVar6 + 0x10);
            if (*plVar17 != lVar12) goto LAB_00d4f900;
          }
        }
        else {
          lVar14 = *(long *)(lVar6 + 0x10);
          plVar17 = (long *)(lVar14 + 8);
          if (*plVar17 == lVar12) goto LAB_00d4f8d0;
LAB_00d4f8a8:
          plVar17 = (long *)(lVar14 + 0x10);
          if (*plVar17 == lVar12) goto LAB_00d4f8d0;
          lVar6 = *(long *)(lVar6 + 0x18);
          plVar17 = (long *)(lVar6 + 8);
          if (*plVar17 != lVar12) goto LAB_00d4f8ec;
        }
        *plVar17 = 0;
      }
      else if (local_80 == local_78) {
        uVar24 = (long)local_80 - (long)local_88;
        lVar12 = (long)uVar24 >> 3;
        uVar7 = lVar12 + 1;
        if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar7 <= (ulong)((long)uVar24 >> 2)) {
          uVar7 = (long)uVar24 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar24) {
          uVar7 = 0x1fffffffffffffff;
        }
        if (uVar7 == 0) {
          plVar15 = (long *)0x0;
          local_80 = (long *)(lVar12 * 8);
          *local_80 = lVar6;
        }
        else {
          if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          plVar15 = (long *)operator_new(uVar7 << 3);
          local_80 = plVar15 + lVar12;
          *local_80 = lVar6;
        }
        local_80 = local_80 + 1;
        if (0 < (long)uVar24) {
          memcpy(plVar15,local_88,uVar24);
        }
        local_78 = plVar15 + uVar7;
        if (local_88 != (long *)0x0) {
          operator_delete(local_88);
        }
      }
      else {
        *local_80 = lVar6;
        local_80 = local_80 + 1;
      }
LAB_00d4f900:
      local_88 = plVar15;
      if (*(long *)(in_x0 + 0x60) != 0) {
        *(undefined8 *)(in_x0 + 0x58) = *(undefined8 *)(*(long *)(in_x0 + 0x58) + 0xd8);
      }
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  lVar5 = *(long *)(in_x0 + 0x40);
  if (lVar5 != 0) {
    lVar6 = lVar5;
    do {
      lVar12 = *(long *)(in_x0 + 0x38);
      if ((*(ulong *)(lVar12 + 8) | *(ulong *)(lVar12 + 0x10)) == 0) {
        plVar15 = *(long **)(in_x0 + 0xa0);
        if (plVar15 == *(long **)(in_x0 + 0xa8)) {
          pvVar23 = *(void **)(in_x0 + 0x98);
          uVar24 = (long)plVar15 - (long)pvVar23;
          lVar14 = (long)uVar24 >> 3;
          uVar7 = lVar14 + 1;
          if (uVar7 >> 0x3d != 0) {
LAB_00d4fdc8:
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar7 <= (ulong)((long)uVar24 >> 2)) {
            uVar7 = (long)uVar24 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar24) {
            uVar7 = 0x1fffffffffffffff;
          }
          if (uVar7 == 0) {
            pvVar8 = (void *)0x0;
            plVar15 = (long *)(lVar14 * 8);
            *plVar15 = lVar12;
          }
          else {
            if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            pvVar8 = operator_new(uVar7 << 3);
            plVar15 = (long *)((long)pvVar8 + lVar14 * 8);
            *plVar15 = lVar12;
          }
          if (0 < (long)uVar24) {
            memcpy(pvVar8,pvVar23,uVar24);
          }
          *(void **)(in_x0 + 0x98) = pvVar8;
          *(long **)(in_x0 + 0xa0) = plVar15 + 1;
          *(void **)(in_x0 + 0xa8) = (void *)((long)pvVar8 + uVar7 * 8);
          if (pvVar23 != (void *)0x0) {
            operator_delete(pvVar23);
            lVar6 = *(long *)(in_x0 + 0x40);
          }
        }
        else {
          *plVar15 = lVar12;
          *(long **)(in_x0 + 0xa0) = plVar15 + 1;
        }
      }
      if (lVar6 != 0) {
        *(undefined8 *)(in_x0 + 0x38) = *(undefined8 *)(*(long *)(in_x0 + 0x38) + 0x30);
      }
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  for (lVar5 = *(long *)(in_x0 + 0x20); lVar5 != 0; lVar5 = lVar5 + -1) {
    lVar6 = *(long *)(in_x0 + 0x18);
    if (*(long *)(lVar6 + 0x18) == 0x7fffffffffffffff) {
      CircularList<HACD::TMMVertex>::Delete();
    }
    else {
      *(undefined *)(lVar6 + 0x31) = 0;
      if (*(long *)(in_x0 + 0x20) != 0) {
        *(undefined8 *)(in_x0 + 0x18) = *(undefined8 *)(lVar6 + 0x38);
      }
    }
  }
  plVar17 = *(long **)(in_x0 + 0xb8);
  for (plVar15 = *(long **)(in_x0 + 0xb0); plVar15 != plVar17; plVar15 = plVar15 + 1) {
    lVar5 = *plVar15;
    lVar6 = *(long *)(lVar5 + 0x28);
    if (lVar6 != 0) {
      cVar2 = *(char *)(*(long *)(lVar5 + 8) + 0xd0);
      *(undefined8 *)(lVar5 + 0x28) = 0;
      lVar12 = 0x10;
      if (cVar2 != '\0') {
        lVar12 = 8;
      }
      *(long *)(lVar5 + lVar12) = lVar6;
    }
  }
  ppCVar25 = *(CircularListElement ***)(in_x0 + 0xa0);
  if (*(CircularListElement ***)(in_x0 + 0x98) != ppCVar25) {
    ppCVar22 = *(CircularListElement ***)(in_x0 + 0x98);
    do {
      ppCVar21 = ppCVar22 + 1;
      CircularList<HACD::TMMEdge>::Delete((CircularList<HACD::TMMEdge> *)(in_x0 + 0x30),*ppCVar22);
      ppCVar22 = ppCVar21;
    } while (ppCVar21 != ppCVar25);
    ppCVar25 = *(CircularListElement ***)(in_x0 + 0x98);
  }
  ppCVar22 = *(CircularListElement ***)(in_x0 + 200);
  ppCVar21 = *(CircularListElement ***)(in_x0 + 0xd0);
  *(CircularListElement ***)(in_x0 + 0xa0) = ppCVar25;
  *(undefined8 *)(in_x0 + 0xb8) = *(undefined8 *)(in_x0 + 0xb0);
  if (ppCVar22 == ppCVar21) {
    *(CircularListElement ***)(in_x0 + 0xd0) = ppCVar21;
    lVar5 = (long)local_80 - (long)local_88;
    if (lVar5 == 0) goto LAB_00d4fd38;
LAB_00d4fbd4:
    uVar7 = lVar5 >> 3;
    plVar15 = local_88;
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    do {
      lVar5 = CircularList<HACD::TMMTriangle>::Add
                        ((CircularList<HACD::TMMTriangle> *)(in_x0 + 0x50),(TMMTriangle *)0x0);
      uVar7 = uVar7 - 1;
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(*plVar15 + 0x28);
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(*plVar15 + 0x20);
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(*plVar15 + 0x30);
      plVar15 = plVar15 + 1;
    } while (uVar7 != 0);
LAB_00d4fd3c:
    operator_delete(local_88);
  }
  else {
    do {
      pCVar9 = *ppCVar22;
      if (((*(long *)(in_x0 + 0xe0) != 0) && (in_x0[0x100] == (ICHull)0x0)) &&
         (lVar5 = *(long *)(pCVar9 + 0xc0), lVar5 != 0)) {
        plVar15 = (long *)(*(long *)(in_x0 + 0xe0) + 8);
        plVar17 = (long *)*plVar15;
        if (plVar17 != (long *)0x0) {
          lVar6 = 0;
          lVar12 = *(long *)(pCVar9 + 200);
          do {
            pCVar1 = pCVar9 + 0x38;
            if (lVar12 != 0x10) {
              pCVar1 = *(CircularListElement **)(pCVar9 + 0xb8);
            }
            lVar14 = *(long *)(pCVar1 + lVar6 * 8);
            plVar19 = plVar15;
            plVar20 = plVar17;
            do {
              if (lVar14 <= plVar20[4]) {
                plVar19 = plVar20;
              }
              plVar20 = (long *)plVar20[plVar20[4] < lVar14];
            } while (plVar20 != (long *)0x0);
            if ((plVar19 != plVar15) && (plVar19[4] <= lVar14)) {
              *(undefined *)(plVar19 + 7) = 0;
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 != lVar5);
        }
      }
      CircularList<HACD::TMMTriangle>::Delete
                ((CircularList<HACD::TMMTriangle> *)(in_x0 + 0x50),pCVar9);
      ppCVar22 = ppCVar22 + 1;
    } while (ppCVar22 != ppCVar21);
    *(undefined8 *)(in_x0 + 0xd0) = *(undefined8 *)(in_x0 + 200);
    lVar5 = (long)local_80 - (long)local_88;
    if (lVar5 != 0) goto LAB_00d4fbd4;
LAB_00d4fd38:
    if (local_88 != (long *)0x0) goto LAB_00d4fd3c;
  }
  IVar10 = (ICHull)0x0;
LAB_00d4fd48:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return IVar10;
  while( true ) {
    lVar6 = *(long *)(lVar6 + 0x38);
    lVar5 = lVar5 + -1;
    IVar10 = (ICHull)0x3;
    *(long *)(in_x0 + 0x18) = lVar6;
    if (lVar5 == 0) break;
LAB_00d4fd8c:
    if (*(long *)(lVar6 + 0x18) == 0x7fffffffffffffff) {
      CircularList<HACD::TMMVertex>::Delete();
      IVar10 = (ICHull)0x3;
      break;
    }
  }
  goto LAB_00d4fd48;
}


