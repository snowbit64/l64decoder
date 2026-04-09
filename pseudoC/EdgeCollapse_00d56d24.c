// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EdgeCollapse
// Entry Point: 00d56d24
// Size: 2732 bytes
// Signature: undefined __thiscall EdgeCollapse(MeshDecimator * this, long param_1, long param_2)


/* HACD::MeshDecimator::EdgeCollapse(long, long) */

void __thiscall HACD::MeshDecimator::EdgeCollapse(MeshDecimator *this,long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  void *__dest;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  void *pvVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  void *pvVar23;
  void *__src;
  long unaff_x25;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long local_288 [64];
  long *local_88;
  ulong uStack_80;
  ulong local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar6 = *(long *)(this + 0x40);
  lVar10 = lVar6;
  if (*(long *)(lVar6 + param_2 * 0x188 + 0x120) != 0) {
    uVar26 = 0;
    unaff_x25 = *(long *)this;
LAB_00d56dc0:
    do {
      lVar7 = lVar6 + param_2 * 0x188;
      lVar8 = lVar7 + 0x98;
      if (*(long *)(lVar7 + 0x128) != 0x10) {
        lVar8 = *(long *)(lVar7 + 0x118);
      }
      lVar25 = *(long *)(lVar8 + uVar26 * 8);
      lVar8 = *(long *)(unaff_x25 + lVar25 * 0x18);
      plVar11 = (long *)(unaff_x25 + lVar25 * 0x18 + 8);
      lVar7 = *plVar11;
      plVar18 = (long *)(unaff_x25 + lVar25 * 0x18 + 0x10);
      if (lVar7 != param_2) {
        plVar18 = plVar11;
      }
      lVar13 = 1;
      if (lVar7 != param_2) {
        lVar13 = 2;
      }
      if (lVar8 == param_2) {
        lVar13 = 0;
        lVar8 = lVar7;
        plVar18 = (long *)(unaff_x25 + lVar25 * 0x18 + 0x10);
      }
      lVar7 = *plVar18;
      if ((lVar8 == param_1) || (lVar7 == param_1)) {
        lVar13 = lVar6 + lVar8 * 0x188;
        *(undefined *)(*(long *)(this + 0x98) + lVar25) = 0;
        uVar21 = *(ulong *)(lVar13 + 0x120);
        lVar8 = lVar13 + 0x98;
        if (*(long *)(lVar13 + 0x128) != 0x10) {
          lVar8 = *(long *)(lVar13 + 0x118);
        }
        if (uVar21 != 0) {
          uVar22 = 0;
LAB_00d56f70:
          uVar14 = uVar22 + 1;
          if (lVar25 != *(long *)(lVar8 + uVar22 * 8)) goto code_r0x00d56f80;
          if (uVar14 < uVar21) {
            do {
              puVar1 = (undefined8 *)(lVar8 + uVar22 * 8);
              uVar14 = uVar22 + 2;
              *puVar1 = puVar1[1];
              uVar22 = uVar22 + 1;
              uVar21 = *(ulong *)(lVar13 + 0x120);
            } while (uVar14 < uVar21);
          }
          *(ulong *)(lVar13 + 0x120) = uVar21 - 1;
        }
LAB_00d56fe0:
        lVar8 = lVar6 + lVar7 * 0x188;
        uVar21 = *(ulong *)(lVar8 + 0x120);
        lVar7 = lVar8 + 0x98;
        if (*(long *)(lVar8 + 0x128) != 0x10) {
          lVar7 = *(long *)(lVar8 + 0x118);
        }
        if (uVar21 != 0) {
          puVar9 = (ulong *)(lVar8 + 0x120);
          uVar22 = 0;
          do {
            uVar14 = uVar22 + 1;
            if (lVar25 == *(long *)(lVar7 + uVar22 * 8)) {
              if (uVar14 < uVar21) {
                do {
                  puVar1 = (undefined8 *)(lVar7 + uVar22 * 8);
                  uVar14 = uVar22 + 2;
                  *puVar1 = puVar1[1];
                  uVar22 = uVar22 + 1;
                  uVar21 = *puVar9;
                } while (uVar14 < uVar21);
              }
              goto LAB_00d56d94;
            }
            uVar22 = uVar14;
          } while (uVar21 != uVar14);
        }
        goto LAB_00d56d9c;
      }
      lVar12 = lVar6 + param_1 * 0x188;
      uVar21 = *(ulong *)(lVar12 + 0x120);
      if (uVar21 == 0) {
        lVar8 = lVar6 + param_1 * 0x188;
        pvVar15 = (void *)(lVar8 + 0x98);
        uVar22 = *(ulong *)(lVar8 + 0x128);
        pvVar23 = *(void **)(lVar8 + 0x118);
        __src = pvVar15;
        if (uVar22 != 0x10) {
          __src = pvVar23;
        }
      }
      else {
        lVar16 = lVar6 + param_1 * 0x188;
        uVar14 = 0;
        uVar22 = *(ulong *)(lVar16 + 0x128);
        pvVar23 = *(void **)(lVar16 + 0x118);
        pvVar15 = (void *)(lVar16 + 0x98);
        if (uVar22 != 0x10) {
          pvVar15 = pvVar23;
        }
        do {
          lVar17 = *(long *)((long)pvVar15 + uVar14 * 8);
          plVar18 = (long *)(unaff_x25 + lVar17 * 0x18);
          lVar16 = *plVar18;
          lVar20 = plVar18[1];
          lVar19 = plVar18[2];
          if (((((((lVar16 == param_1 && lVar20 == lVar8) && lVar19 == lVar7) ||
                 ((lVar16 == param_1 && lVar20 == lVar7) && lVar19 == lVar8)) ||
                ((lVar16 == lVar8 && lVar20 == param_1) && lVar19 == lVar7)) ||
               (((lVar16 == lVar8 && (lVar20 == lVar7)) && (lVar19 == param_1)))) ||
              (((lVar16 == lVar7 && (lVar20 == lVar8)) && (lVar19 == param_1)))) ||
             (((lVar16 == lVar7 && (lVar20 == param_1)) && (lVar19 == lVar8)))) {
            if (lVar17 != -1) {
              lVar13 = lVar6 + lVar8 * 0x188;
              *(undefined *)(*(long *)(this + 0x98) + lVar25) = 0;
              uVar21 = *(ulong *)(lVar13 + 0x120);
              lVar8 = lVar13 + 0x98;
              if (*(long *)(lVar13 + 0x128) != 0x10) {
                lVar8 = *(long *)(lVar13 + 0x118);
              }
              if (uVar21 == 0) goto LAB_00d57188;
              uVar22 = 0;
              goto LAB_00d56f24;
            }
            break;
          }
          uVar14 = uVar14 + 1;
        } while (uVar21 != uVar14);
        pvVar15 = (void *)(lVar6 + param_1 * 0x188 + 0x98);
        __src = pvVar15;
        if (uVar22 != 0x10) {
          __src = pvVar23;
        }
        if (uVar21 != 0) {
          uVar14 = 0;
          do {
            if (lVar25 == *(long *)((long)__src + uVar14 * 8)) goto LAB_00d5712c;
            uVar14 = uVar14 + 1;
          } while (uVar21 != uVar14);
        }
      }
      puVar9 = (ulong *)(lVar12 + 0x120);
      __dest = pvVar23;
      if (uVar21 == uVar22) {
        uVar22 = uVar21 << 1;
        uVar14 = uVar21 << 4;
        if (uVar22 >> 0x3d != 0) {
          uVar14 = 0xffffffffffffffff;
        }
        __dest = operator_new__(uVar14);
        memcpy(__dest,__src,uVar21 << 3);
        if (pvVar23 != (void *)0x0) {
          operator_delete__(pvVar23);
          uVar21 = *puVar9;
          unaff_x25 = *(long *)this;
          lVar10 = *(long *)(this + 0x40);
        }
        lVar6 = lVar6 + param_1 * 0x188;
        *(void **)(lVar6 + 0x118) = __dest;
        *(ulong *)(lVar6 + 0x128) = uVar22;
      }
      lVar6 = lVar10;
      if (uVar22 != 0x10) {
        pvVar15 = __dest;
      }
      *puVar9 = uVar21 + 1;
      *(long *)((long)pvVar15 + uVar21 * 8) = lVar25;
      lVar10 = lVar6;
LAB_00d5712c:
      *(long *)(unaff_x25 + lVar25 * 0x18 + lVar13 * 8) = param_1;
      uVar26 = uVar26 + 1;
    } while (uVar26 < *(ulong *)(lVar6 + param_2 * 0x188 + 0x120));
  }
LAB_00d57204:
  if (*(long *)(lVar6 + param_2 * 0x188 + 0x88) != 0) {
    uVar26 = 0;
    do {
      lVar8 = lVar6 + param_2 * 0x188;
      lVar7 = *(long *)(this + 0x58);
      if (*(long *)(lVar8 + 0x90) != 0x10) {
        lVar8 = *(long *)(lVar8 + 0x80);
      }
      unaff_x25 = *(long *)(lVar8 + uVar26 * 8);
      plVar11 = (long *)(lVar7 + unaff_x25 * 0x38);
      plVar18 = plVar11 + 1;
      if (*plVar11 != param_2) {
        plVar18 = plVar11;
      }
      lVar8 = *plVar18;
      if (lVar8 == param_1) {
        lVar25 = lVar6 + param_1 * 0x188;
        *(undefined *)(lVar7 + unaff_x25 * 0x38 + 0x31) = 0;
        lVar8 = lVar25;
        if (*(long *)(lVar25 + 0x90) != 0x10) {
          lVar8 = *(long *)(lVar25 + 0x80);
        }
        puVar9 = (ulong *)(lVar25 + 0x88);
        uVar21 = *puVar9;
        if (uVar21 != 0) {
          uVar22 = 0;
          do {
            uVar14 = uVar22 + 1;
            if (unaff_x25 == *(long *)(lVar8 + uVar22 * 8)) {
              if (uVar14 < uVar21) {
                do {
                  puVar1 = (undefined8 *)(lVar8 + uVar22 * 8);
                  uVar14 = uVar22 + 2;
                  *puVar1 = puVar1[1];
                  uVar22 = uVar22 + 1;
                  uVar21 = *puVar9;
                } while (uVar14 < uVar21);
              }
              goto LAB_00d57224;
            }
            uVar22 = uVar14;
          } while (uVar21 != uVar14);
        }
LAB_00d5722c:
        *(long *)(this + 0x30) = *(long *)(this + 0x30) + -1;
      }
      else {
        puVar9 = (ulong *)(lVar6 + param_1 * 0x188 + 0x88);
        uVar21 = *puVar9;
        if (uVar21 != 0) {
          plVar18 = (long *)(lVar6 + param_1 * 0x188);
          uVar22 = uVar21;
          if (plVar18[0x12] != 0x10) {
            plVar18 = (long *)plVar18[0x10];
          }
          do {
            lVar25 = *plVar18;
            lVar13 = *(long *)(lVar7 + lVar25 * 0x38);
            if (((lVar13 == param_1) && (*(long *)(lVar7 + lVar25 * 0x38 + 8) == lVar8)) ||
               ((lVar13 == lVar8 && (*(long *)(lVar7 + lVar25 * 0x38 + 8) == param_1)))) {
              if (lVar25 != -1) {
                lVar8 = lVar6 + lVar8 * 0x188;
                *(undefined *)(lVar7 + unaff_x25 * 0x38 + 0x31) = 0;
                lVar7 = lVar8;
                if (*(long *)(lVar8 + 0x90) != 0x10) {
                  lVar7 = *(long *)(lVar8 + 0x80);
                }
                puVar9 = (ulong *)(lVar8 + 0x88);
                uVar21 = *puVar9;
                if (uVar21 == 0) goto LAB_00d5722c;
                uVar22 = 0;
                goto LAB_00d5737c;
              }
              break;
            }
            uVar22 = uVar22 - 1;
            plVar18 = plVar18 + 1;
          } while (uVar22 != 0);
        }
        plVar18 = (long *)(lVar6 + param_1 * 0x188);
        if (*plVar11 != param_2) {
          plVar11 = plVar11 + 1;
        }
        *plVar11 = param_1;
        uVar14 = plVar18[0x12];
        plVar5 = (long *)plVar18[0x10];
        uVar22 = uVar21;
        plVar4 = plVar18;
        plVar11 = plVar18;
        if (uVar14 != 0x10) {
          plVar4 = plVar5;
          plVar11 = plVar5;
        }
        for (; uVar22 != 0; uVar22 = uVar22 - 1) {
          if (unaff_x25 == *plVar4) goto LAB_00d5723c;
          plVar4 = plVar4 + 1;
        }
        plVar4 = plVar5;
        if (uVar21 == uVar14) {
          uVar14 = uVar21 << 1;
          uVar22 = uVar21 << 4;
          if (uVar14 >> 0x3d != 0) {
            uVar22 = 0xffffffffffffffff;
          }
          plVar4 = (long *)operator_new__(uVar22);
          memcpy(plVar4,plVar11,uVar21 << 3);
          lVar6 = lVar10;
          if (plVar5 != (long *)0x0) {
            operator_delete__(plVar5);
            uVar21 = *puVar9;
            lVar6 = *(long *)(this + 0x40);
          }
          plVar18[0x10] = (long)plVar4;
          plVar18[0x12] = uVar14;
          lVar10 = lVar6;
        }
        if (uVar14 != 0x10) {
          plVar18 = plVar4;
        }
        *puVar9 = uVar21 + 1;
        plVar18[uVar21] = unaff_x25;
      }
LAB_00d5723c:
      uVar26 = uVar26 + 1;
    } while (uVar26 < *(ulong *)(lVar6 + param_2 * 0x188 + 0x88));
  }
  *(undefined *)(lVar6 + param_2 * 0x188 + 0x180) = 0;
  local_78 = 0x40;
  uStack_80 = 1;
  local_88 = (long *)0x0;
  local_288[0] = param_1;
  *(long *)(this + 0x20) = *(long *)(this + 0x20) + -1;
  if (*(long *)(lVar6 + param_1 * 0x188 + 0x88) == 0) {
    bVar3 = true;
  }
  else {
    lVar8 = *(long *)(this + 0x58);
    uVar26 = 0;
    lVar10 = *(long *)(lVar8 + unaff_x25 * 0x38);
    do {
      uVar22 = local_78;
      uVar21 = uStack_80;
      plVar11 = (long *)(lVar8 + unaff_x25 * 0x38);
      plVar18 = plVar11 + 1;
      if (lVar10 != param_1) {
        plVar18 = plVar11;
      }
      if (uStack_80 == local_78) {
        uVar24 = local_78 << 1;
        uVar14 = local_78 << 4;
        if (uVar24 >> 0x3d != 0) {
          uVar14 = 0xffffffffffffffff;
        }
        plVar5 = (long *)operator_new__(uVar14);
        plVar4 = local_88;
        plVar11 = local_288;
        if (uVar22 != 0x40) {
          plVar11 = local_88;
        }
        memcpy(plVar5,plVar11,uVar22 << 3);
        if (plVar4 != (long *)0x0) {
          operator_delete__(plVar4);
          lVar6 = *(long *)(this + 0x40);
          lVar8 = *(long *)(this + 0x58);
        }
        local_88 = plVar5;
        local_78 = uVar24;
      }
      lVar10 = lVar6 + param_1 * 0x188;
      plVar11 = local_288;
      if (local_78 != 0x40) {
        plVar11 = local_88;
      }
      uStack_80 = uVar21 + 1;
      plVar11[uVar21] = *plVar18;
      if (*(long *)(lVar10 + 0x90) != 0x10) {
        lVar10 = *(long *)(lVar10 + 0x80);
      }
      unaff_x25 = *(long *)(lVar10 + uVar26 * 8);
      plVar18 = (long *)(lVar8 + unaff_x25 * 0x38);
      lVar10 = *plVar18;
      lVar7 = *(long *)(lVar6 + lVar10 * 0x188 + 0x120);
      if (lVar7 == 0) {
LAB_00d576b4:
        lVar12 = -1;
      }
      else {
        lVar12 = lVar6 + lVar10 * 0x188;
        lVar13 = plVar18[1];
        lVar16 = *(long *)(lVar6 + lVar13 * 0x188 + 0x120);
        lVar25 = lVar12 + 0x98;
        if (*(long *)(lVar12 + 0x128) != 0x10) {
          lVar25 = *(long *)(lVar12 + 0x118);
        }
        if (lVar16 == 0) goto LAB_00d576b4;
        lVar12 = lVar6 + lVar13 * 0x188;
        lVar13 = 0;
        plVar18 = (long *)(lVar12 + 0x98);
        if (*(long *)(lVar12 + 0x128) != 0x10) {
          plVar18 = *(long **)(lVar12 + 0x118);
        }
        lVar12 = -1;
        do {
          lVar17 = *(long *)(lVar25 + lVar13 * 8);
          plVar11 = plVar18;
          lVar20 = lVar16;
          do {
            if ((lVar17 == *plVar11) && (bVar3 = lVar12 != -1, lVar12 = lVar17, bVar3))
            goto LAB_00d576b4;
            lVar20 = lVar20 + -1;
            plVar11 = plVar11 + 1;
          } while (lVar20 != 0);
          lVar13 = lVar13 + 1;
        } while (lVar13 != lVar7);
      }
      uVar26 = uVar26 + 1;
      *(bool *)(lVar8 + unaff_x25 * 0x38 + 0x30) = lVar12 != -1;
    } while (uVar26 < *(ulong *)(lVar6 + param_1 * 0x188 + 0x88));
    bVar3 = local_78 == 0x40;
    if (uStack_80 == 0) goto LAB_00d576fc;
  }
  uVar26 = 0;
  do {
    plVar18 = local_288;
    if (!bVar3) {
      plVar18 = local_88;
    }
    lVar7 = plVar18[uVar26];
    lVar8 = lVar6 + lVar7 * 0x188;
    lVar10 = *(long *)(lVar8 + 0x88);
    *(undefined *)(lVar8 + 0x181) = 0;
    if (lVar10 != 0) {
      plVar18 = (long *)(lVar6 + lVar7 * 0x188);
      if (plVar18[0x12] != 0x10) {
        plVar18 = (long *)plVar18[0x10];
      }
      do {
        if (*(char *)(*(long *)(this + 0x58) + *plVar18 * 0x38 + 0x30) != '\0') {
          *(undefined *)(lVar8 + 0x181) = 1;
          break;
        }
        lVar10 = lVar10 + -1;
        plVar18 = plVar18 + 1;
      } while (lVar10 != 0);
    }
    uVar26 = uVar26 + 1;
  } while (uVar26 != uStack_80);
LAB_00d576fc:
  if (local_88 != (long *)0x0) {
    operator_delete__(local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00d56f80:
  uVar22 = uVar14;
  if (uVar21 == uVar14) goto LAB_00d56fe0;
  goto LAB_00d56f70;
LAB_00d56f24:
  uVar14 = uVar22 + 1;
  if (lVar25 != *(long *)(lVar8 + uVar22 * 8)) goto code_r0x00d56f34;
  if (uVar14 < uVar21) {
    do {
      puVar1 = (undefined8 *)(lVar8 + uVar22 * 8);
      uVar14 = uVar22 + 2;
      *puVar1 = puVar1[1];
      uVar22 = uVar22 + 1;
      uVar21 = *(ulong *)(lVar13 + 0x120);
    } while (uVar14 < uVar21);
  }
  *(ulong *)(lVar13 + 0x120) = uVar21 - 1;
LAB_00d57188:
  lVar8 = lVar6 + lVar7 * 0x188;
  uVar21 = *(ulong *)(lVar8 + 0x120);
  lVar7 = lVar8 + 0x98;
  if (*(long *)(lVar8 + 0x128) != 0x10) {
    lVar7 = *(long *)(lVar8 + 0x118);
  }
  if (uVar21 != 0) {
    puVar9 = (ulong *)(lVar8 + 0x120);
    uVar22 = 0;
    do {
      uVar14 = uVar22 + 1;
      if (lVar25 == *(long *)(lVar7 + uVar22 * 8)) {
        if (uVar14 < uVar21) {
          do {
            puVar1 = (undefined8 *)(lVar7 + uVar22 * 8);
            uVar14 = uVar22 + 2;
            *puVar1 = puVar1[1];
            uVar22 = uVar22 + 1;
            uVar21 = *puVar9;
          } while (uVar14 < uVar21);
        }
LAB_00d56d94:
        *puVar9 = uVar21 - 1;
        break;
      }
      uVar22 = uVar14;
    } while (uVar21 != uVar14);
  }
LAB_00d56d9c:
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
  uVar26 = uVar26 + 1;
  if (*(ulong *)(lVar6 + param_2 * 0x188 + 0x120) <= uVar26) goto LAB_00d57204;
  goto LAB_00d56dc0;
code_r0x00d56f34:
  uVar22 = uVar14;
  if (uVar21 == uVar14) goto LAB_00d57188;
  goto LAB_00d56f24;
LAB_00d5737c:
  uVar14 = uVar22 + 1;
  if (unaff_x25 != *(long *)(lVar7 + uVar22 * 8)) goto code_r0x00d5738c;
  if (uVar14 < uVar21) {
    do {
      puVar1 = (undefined8 *)(lVar7 + uVar22 * 8);
      uVar14 = uVar22 + 2;
      *puVar1 = puVar1[1];
      uVar22 = uVar22 + 1;
      uVar21 = *puVar9;
    } while (uVar14 < uVar21);
  }
LAB_00d57224:
  *puVar9 = uVar21 - 1;
  goto LAB_00d5722c;
code_r0x00d5738c:
  uVar22 = uVar14;
  if (uVar21 == uVar14) goto LAB_00d5722c;
  goto LAB_00d5737c;
}


