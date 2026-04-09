// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Process
// Entry Point: 00d5099c
// Size: 2288 bytes
// Signature: undefined __thiscall Process(ICHull * this, ulong param_1)


/* HACD::ICHull::Process(unsigned long) */

ICHull __thiscall HACD::ICHull::Process(ICHull *this,ulong param_1)

{
  undefined8 *puVar1;
  CircularListElement *pCVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  void *pvVar10;
  CircularListElement *pCVar11;
  ICHull IVar12;
  undefined8 *puVar13;
  long lVar14;
  double *pdVar15;
  long lVar16;
  double *pdVar17;
  long *plVar18;
  double *pdVar19;
  long *plVar20;
  long *plVar21;
  CircularListElement **ppCVar22;
  void *pvVar23;
  CircularListElement **ppCVar24;
  CircularListElement **ppCVar25;
  undefined8 *puVar26;
  double dVar27;
  undefined8 uVar28;
  double dVar29;
  undefined8 uVar30;
  double dVar31;
  undefined8 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  long *plVar36;
  double dVar37;
  long *local_98;
  long *local_90;
  long *local_88;
  ulong local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  local_80 = 0;
  if ((param_1 < 3) || (*(ulong *)(this + 0x20) < 3)) {
    IVar12 = (ICHull)0x4;
    goto LAB_00d509ec;
  }
  if (*(ulong *)(this + 0x20) == 3) {
    this[0x100] = (ICHull)0x1;
    lVar6 = CircularList<HACD::TMMTriangle>::Add
                      ((CircularList<HACD::TMMTriangle> *)(this + 0x50),(TMMTriangle *)0x0);
    lVar7 = CircularList<HACD::TMMTriangle>::Add
                      ((CircularList<HACD::TMMTriangle> *)(this + 0x50),(TMMTriangle *)0x0);
    pdVar15 = *(double **)(this + 0x18);
    pdVar17 = (double *)pdVar15[7];
    pdVar19 = (double *)pdVar17[7];
    dVar29 = *pdVar17 - *pdVar15;
    dVar33 = pdVar17[1] - pdVar15[1];
    dVar35 = pdVar19[1] - pdVar15[1];
    dVar34 = pdVar17[2] - pdVar15[2];
    dVar31 = pdVar19[2] - pdVar15[2];
    dVar37 = *pdVar19 - *pdVar15;
    dVar27 = (double)NEON_fmadd(dVar34,dVar37,dVar31 * -dVar29);
    dVar31 = (double)NEON_fmadd(dVar33,dVar31,dVar35 * -dVar34);
    *(double *)(this + 0xf0) = dVar27;
    *(double *)(this + 0xe8) = dVar31;
    dVar29 = (double)NEON_fmadd(dVar29,dVar35,dVar37 * -dVar33);
    uVar32 = NEON_fmadd(dVar31,dVar31,dVar27 * dVar27);
    dVar33 = (double)NEON_fmadd(dVar29,dVar29,uVar32);
    *(double *)(this + 0xf8) = dVar29;
    dVar33 = SQRT(dVar33);
    if (dVar33 != 0.0) {
      *(double *)(this + 0xe8) = dVar31 / dVar33;
      *(double *)(this + 0xf0) = dVar27 / dVar33;
      *(double *)(this + 0xf8) = dVar29 / dVar33;
    }
    IVar12 = (ICHull)0x0;
    *(double **)(lVar6 + 0x20) = pdVar15;
    *(double **)(lVar6 + 0x28) = pdVar17;
    *(double **)(lVar6 + 0x30) = pdVar19;
    *(double **)(lVar7 + 0x20) = pdVar17;
    *(double **)(lVar7 + 0x28) = pdVar15;
    *(double **)(lVar7 + 0x30) = pdVar19;
    goto LAB_00d509ec;
  }
  if (this[0x100] != (ICHull)0x0) {
    do {
      uVar8 = CircularList<HACD::TMMTriangle>::Delete();
    } while ((uVar8 & 1) != 0);
    do {
      uVar8 = CircularList<HACD::TMMEdge>::Delete();
    } while ((uVar8 & 1) != 0);
    this[0x100] = (ICHull)0x0;
  }
  if (*(long *)(this + 0x60) == 0) {
    iVar5 = DoubleTriangle();
    if (iVar5 != 0) {
      IVar12 = (ICHull)0x1;
      goto LAB_00d509ec;
    }
    uVar8 = 3;
    local_80 = 3;
    puVar13 = *(undefined8 **)(this + 0x18);
    cVar3 = *(char *)((long)puVar13 + 0x31);
  }
  else {
    uVar8 = 0;
    puVar13 = *(undefined8 **)(this + 0x18);
    cVar3 = *(char *)((long)puVar13 + 0x31);
  }
  if ((cVar3 == '\0') && (uVar8 < param_1)) {
    do {
      plVar36 = (long *)0x0;
      puVar26 = (undefined8 *)0x0;
      lVar6 = puVar13[8];
      local_98 = (long *)0x0;
      do {
        uVar9 = ComputePointVolume(this,(double *)&local_98,false);
        if ((uVar9 & 1) == 0) {
          puVar13 = *(undefined8 **)(this + 0x18);
        }
        else {
          puVar13 = *(undefined8 **)(this + 0x18);
          puVar1 = puVar13;
          plVar18 = local_98;
          if ((double)local_98 <= (double)plVar36) {
            puVar1 = puVar26;
            plVar18 = plVar36;
          }
          plVar36 = plVar18;
          puVar26 = puVar1;
          if (*(long *)(this + 0x20) != 0) {
            puVar13 = (undefined8 *)puVar13[7];
            *(undefined8 **)(this + 0x18) = puVar13;
          }
        }
      } while (*(char *)((long)puVar13 + 0x31) == '\0');
      puVar13 = *(undefined8 **)(lVar6 + 0x38);
      *(undefined8 **)(this + 0x18) = puVar13;
      if ((puVar26 == (undefined8 *)0x0) || (puVar26 == puVar13)) {
        if (puVar26 == (undefined8 *)0x0) break;
      }
      else {
        uVar28 = puVar13[1];
        uVar32 = *puVar13;
        uVar30 = puVar13[2];
        *puVar13 = *puVar26;
        puVar13[1] = puVar26[1];
        puVar13[2] = puVar26[2];
        puVar26[1] = uVar28;
        *puVar26 = uVar32;
        puVar26[2] = uVar30;
      }
      *(undefined *)((long)puVar13 + 0x31) = 1;
      uVar9 = ProcessPoint();
      if ((uVar9 & 1) != 0) {
        local_80 = uVar8 + 1;
        CleanUp(this,&local_80);
        uVar8 = TMMesh::CheckConsistancy();
        lVar6 = *(long *)(this + 0x20);
        if ((uVar8 & 1) == 0) {
          if (lVar6 == 0) {
            IVar12 = (ICHull)0x3;
            goto LAB_00d509ec;
          }
          lVar7 = *(long *)(this + 0x18);
          goto LAB_00d51230;
        }
        if (lVar6 != 0) {
          *(undefined8 *)(this + 0x18) = *(undefined8 *)(*(long *)(this + 0x18) + 0x38);
        }
      }
      puVar13 = *(undefined8 **)(this + 0x18);
      if ((*(char *)((long)puVar13 + 0x31) != '\0') || (uVar8 = local_80, param_1 <= local_80))
      break;
    } while( true );
  }
  while (*(char *)((long)puVar13 + 0x31) == '\0') {
    CircularList<HACD::TMMVertex>::Delete();
    puVar13 = *(undefined8 **)(this + 0x18);
  }
  IVar12 = this[0x100];
  if (IVar12 == (ICHull)0x0) goto LAB_00d509ec;
  lVar6 = *(long *)(this + 0x60);
  local_98 = (long *)0x0;
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  if (lVar6 != 0) {
    do {
      plVar36 = local_98;
      lVar7 = *(long *)(this + 0x58);
      if (((*(long *)(*(long *)(lVar7 + 0x20) + 0x18) == 0x7fffffffffffffff) ||
          (*(long *)(*(long *)(lVar7 + 0x28) + 0x18) == 0x7fffffffffffffff)) ||
         (*(long *)(*(long *)(lVar7 + 0x30) + 0x18) == 0x7fffffffffffffff)) {
        plVar36 = *(long **)(this + 0xd0);
        if (plVar36 == *(long **)(this + 0xd8)) {
          pvVar23 = *(void **)(this + 200);
          uVar9 = (long)plVar36 - (long)pvVar23;
          lVar14 = (long)uVar9 >> 3;
          uVar8 = lVar14 + 1;
          if (uVar8 >> 0x3d != 0) goto LAB_00d5126c;
          if (uVar8 <= (ulong)((long)uVar9 >> 2)) {
            uVar8 = (long)uVar9 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar9) {
            uVar8 = 0x1fffffffffffffff;
          }
          if (uVar8 == 0) {
            pvVar10 = (void *)0x0;
            plVar36 = (long *)(lVar14 * 8);
            *plVar36 = lVar7;
          }
          else {
            if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            pvVar10 = operator_new(uVar8 << 3);
            plVar36 = (long *)((long)pvVar10 + lVar14 * 8);
            *plVar36 = lVar7;
          }
          if (0 < (long)uVar9) {
            memcpy(pvVar10,pvVar23,uVar9);
          }
          *(void **)(this + 200) = pvVar10;
          *(long **)(this + 0xd0) = plVar36 + 1;
          *(void **)(this + 0xd8) = (void *)((long)pvVar10 + uVar8 * 8);
          if (pvVar23 != (void *)0x0) {
            operator_delete(pvVar23);
          }
        }
        else {
          *plVar36 = lVar7;
          *(long **)(this + 0xd0) = plVar36 + 1;
        }
        lVar14 = *(long *)(this + 0x58);
        plVar36 = (long *)(*(long *)(lVar7 + 8) + 8);
        if ((*plVar36 == lVar14) ||
           (plVar36 = (long *)(*(long *)(lVar7 + 8) + 0x10), *plVar36 == lVar14)) {
          *plVar36 = 0;
          lVar14 = *(long *)(this + 0x58);
          lVar16 = *(long *)(lVar7 + 0x10);
          plVar36 = (long *)(lVar16 + 8);
          if (*plVar36 != lVar14) goto LAB_00d50e00;
LAB_00d50e28:
          *plVar36 = 0;
          lVar14 = *(long *)(this + 0x58);
          lVar7 = *(long *)(lVar7 + 0x18);
          plVar36 = (long *)(lVar7 + 8);
          if (*plVar36 != lVar14) {
LAB_00d50e44:
            plVar36 = (long *)(lVar7 + 0x10);
            if (*plVar36 != lVar14) goto LAB_00d50e58;
          }
        }
        else {
          lVar16 = *(long *)(lVar7 + 0x10);
          plVar36 = (long *)(lVar16 + 8);
          if (*plVar36 == lVar14) goto LAB_00d50e28;
LAB_00d50e00:
          plVar36 = (long *)(lVar16 + 0x10);
          if (*plVar36 == lVar14) goto LAB_00d50e28;
          lVar7 = *(long *)(lVar7 + 0x18);
          plVar36 = (long *)(lVar7 + 8);
          if (*plVar36 != lVar14) goto LAB_00d50e44;
        }
        *plVar36 = 0;
      }
      else if (local_90 == local_88) {
        uVar9 = (long)local_90 - (long)local_98;
        uVar8 = ((long)uVar9 >> 3) + 1;
        if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar8 <= (ulong)((long)uVar9 >> 2)) {
          uVar8 = (long)uVar9 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar8 = 0x1fffffffffffffff;
        }
        if (uVar8 == 0) {
          plVar18 = (long *)0x0;
        }
        else {
          if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          plVar18 = (long *)operator_new(uVar8 << 3);
        }
        plVar20 = plVar18 + ((long)uVar9 >> 3);
        *plVar20 = lVar7;
        if (0 < (long)uVar9) {
          memcpy(plVar18,plVar36,uVar9);
        }
        local_88 = plVar18 + uVar8;
        local_98 = plVar18;
        local_90 = plVar20 + 1;
        if (plVar36 != (long *)0x0) {
          operator_delete(plVar36);
        }
      }
      else {
        *local_90 = lVar7;
        local_90 = local_90 + 1;
      }
LAB_00d50e58:
      if (*(long *)(this + 0x60) != 0) {
        *(undefined8 *)(this + 0x58) = *(undefined8 *)(*(long *)(this + 0x58) + 0xd8);
      }
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  lVar6 = *(long *)(this + 0x40);
  if (lVar6 != 0) {
    lVar7 = lVar6;
    do {
      lVar14 = *(long *)(this + 0x38);
      if ((*(ulong *)(lVar14 + 8) | *(ulong *)(lVar14 + 0x10)) == 0) {
        plVar36 = *(long **)(this + 0xa0);
        if (plVar36 == *(long **)(this + 0xa8)) {
          pvVar23 = *(void **)(this + 0x98);
          uVar9 = (long)plVar36 - (long)pvVar23;
          lVar16 = (long)uVar9 >> 3;
          uVar8 = lVar16 + 1;
          if (uVar8 >> 0x3d != 0) {
LAB_00d5126c:
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar8 <= (ulong)((long)uVar9 >> 2)) {
            uVar8 = (long)uVar9 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar9) {
            uVar8 = 0x1fffffffffffffff;
          }
          if (uVar8 == 0) {
            pvVar10 = (void *)0x0;
            plVar36 = (long *)(lVar16 * 8);
            *plVar36 = lVar14;
          }
          else {
            if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            pvVar10 = operator_new(uVar8 << 3);
            plVar36 = (long *)((long)pvVar10 + lVar16 * 8);
            *plVar36 = lVar14;
          }
          if (0 < (long)uVar9) {
            memcpy(pvVar10,pvVar23,uVar9);
          }
          *(void **)(this + 0x98) = pvVar10;
          *(long **)(this + 0xa0) = plVar36 + 1;
          *(void **)(this + 0xa8) = (void *)((long)pvVar10 + uVar8 * 8);
          if (pvVar23 != (void *)0x0) {
            operator_delete(pvVar23);
            lVar7 = *(long *)(this + 0x40);
          }
        }
        else {
          *plVar36 = lVar14;
          *(long **)(this + 0xa0) = plVar36 + 1;
        }
      }
      if (lVar7 != 0) {
        *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 0x30);
      }
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  for (lVar6 = *(long *)(this + 0x20); lVar6 != 0; lVar6 = lVar6 + -1) {
    lVar7 = *(long *)(this + 0x18);
    if (*(long *)(lVar7 + 0x18) == 0x7fffffffffffffff) {
      CircularList<HACD::TMMVertex>::Delete();
    }
    else {
      *(undefined *)(lVar7 + 0x31) = 0;
      if (*(long *)(this + 0x20) != 0) {
        *(undefined8 *)(this + 0x18) = *(undefined8 *)(lVar7 + 0x38);
      }
    }
  }
  plVar18 = *(long **)(this + 0xb8);
  for (plVar36 = *(long **)(this + 0xb0); plVar36 != plVar18; plVar36 = plVar36 + 1) {
    lVar6 = *plVar36;
    lVar7 = *(long *)(lVar6 + 0x28);
    if (lVar7 != 0) {
      cVar3 = *(char *)(*(long *)(lVar6 + 8) + 0xd0);
      *(undefined8 *)(lVar6 + 0x28) = 0;
      lVar14 = 0x10;
      if (cVar3 != '\0') {
        lVar14 = 8;
      }
      *(long *)(lVar6 + lVar14) = lVar7;
    }
  }
  ppCVar25 = *(CircularListElement ***)(this + 0xa0);
  if (*(CircularListElement ***)(this + 0x98) != ppCVar25) {
    ppCVar22 = *(CircularListElement ***)(this + 0x98);
    do {
      ppCVar24 = ppCVar22 + 1;
      CircularList<HACD::TMMEdge>::Delete((CircularList<HACD::TMMEdge> *)(this + 0x30),*ppCVar22);
      ppCVar22 = ppCVar24;
    } while (ppCVar24 != ppCVar25);
    ppCVar25 = *(CircularListElement ***)(this + 0x98);
  }
  ppCVar22 = *(CircularListElement ***)(this + 200);
  ppCVar24 = *(CircularListElement ***)(this + 0xd0);
  *(CircularListElement ***)(this + 0xa0) = ppCVar25;
  *(undefined8 *)(this + 0xb8) = *(undefined8 *)(this + 0xb0);
  if (ppCVar22 != ppCVar24) {
    do {
      pCVar11 = *ppCVar22;
      if (((*(long *)(this + 0xe0) != 0) && (this[0x100] == (ICHull)0x0)) &&
         (lVar6 = *(long *)(pCVar11 + 0xc0), lVar6 != 0)) {
        plVar36 = (long *)(*(long *)(this + 0xe0) + 8);
        plVar18 = (long *)*plVar36;
        if (plVar18 != (long *)0x0) {
          lVar7 = 0;
          lVar14 = *(long *)(pCVar11 + 200);
          do {
            pCVar2 = pCVar11 + 0x38;
            if (lVar14 != 0x10) {
              pCVar2 = *(CircularListElement **)(pCVar11 + 0xb8);
            }
            lVar16 = *(long *)(pCVar2 + lVar7 * 8);
            plVar20 = plVar36;
            plVar21 = plVar18;
            do {
              if (lVar16 <= plVar21[4]) {
                plVar20 = plVar21;
              }
              plVar21 = (long *)plVar21[plVar21[4] < lVar16];
            } while (plVar21 != (long *)0x0);
            if ((plVar20 != plVar36) && (plVar20[4] <= lVar16)) {
              *(undefined *)(plVar20 + 7) = 0;
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 != lVar6);
        }
      }
      CircularList<HACD::TMMTriangle>::Delete
                ((CircularList<HACD::TMMTriangle> *)(this + 0x50),pCVar11);
      ppCVar22 = ppCVar22 + 1;
    } while (ppCVar22 != ppCVar24);
    ppCVar24 = *(CircularListElement ***)(this + 200);
  }
  plVar36 = local_98;
  *(CircularListElement ***)(this + 0xd0) = ppCVar24;
  if ((long)local_90 - (long)local_98 == 0) {
    if (local_98 != (long *)0x0) goto LAB_00d51214;
  }
  else {
    uVar8 = (long)local_90 - (long)local_98 >> 3;
    plVar18 = local_98;
    if (uVar8 < 2) {
      uVar8 = 1;
    }
    do {
      lVar6 = CircularList<HACD::TMMTriangle>::Add
                        ((CircularList<HACD::TMMTriangle> *)(this + 0x50),(TMMTriangle *)0x0);
      uVar8 = uVar8 - 1;
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(*plVar18 + 0x28);
      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(*plVar18 + 0x20);
      *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(*plVar18 + 0x30);
      plVar18 = plVar18 + 1;
    } while (uVar8 != 0);
LAB_00d51214:
    operator_delete(plVar36);
  }
  IVar12 = (ICHull)0x0;
LAB_00d509ec:
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return IVar12;
  while( true ) {
    lVar7 = *(long *)(lVar7 + 0x38);
    lVar6 = lVar6 + -1;
    IVar12 = (ICHull)0x3;
    *(long *)(this + 0x18) = lVar7;
    if (lVar6 == 0) break;
LAB_00d51230:
    if (*(long *)(lVar7 + 0x18) == 0x7fffffffffffffff) {
      CircularList<HACD::TMMVertex>::Delete();
      IVar12 = (ICHull)0x3;
      break;
    }
  }
  goto LAB_00d509ec;
}


