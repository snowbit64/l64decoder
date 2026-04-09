// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeDistance
// Entry Point: 00d52278
// Size: 848 bytes
// Signature: undefined __thiscall ComputeDistance(ICHull * this, long param_1, Vec3 * param_2, Vec3 * param_3, bool * param_4, bool param_5)


/* HACD::ICHull::ComputeDistance(long, HACD::Vec3<double> const&, HACD::Vec3<double> const&, bool&,
   bool) */

undefined  [16] __thiscall
HACD::ICHull::ComputeDistance
          (ICHull *this,long param_1,Vec3 *param_2,Vec3 *param_3,bool *param_4,bool param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  long **pplVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  double dVar23;
  undefined auVar24 [16];
  double dVar25;
  double local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  double dStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  dVar25 = 0.0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (this[0x100] == (ICHull)0x0) {
    uStack_78 = *(undefined8 *)(param_2 + 8);
    local_80 = *(undefined8 *)param_2;
    local_70 = *(undefined8 *)(param_2 + 0x10);
    dStack_98 = *(double *)(param_3 + 8);
    local_a0 = *(undefined8 *)param_3;
    local_90 = *(undefined8 *)(param_3 + 0x10);
    lVar19 = *(long *)(this + 0x60);
    *param_4 = false;
    if (lVar19 == 0) {
      dVar25 = 0.0;
    }
    else {
      dVar25 = 0.0;
      lVar18 = 0;
      do {
        lVar8 = *(long *)(this + 0x58);
        puVar1 = *(undefined8 **)(lVar8 + 0x20);
        puVar2 = *(undefined8 **)(lVar8 + 0x28);
        lVar11 = puVar1[3];
        lVar10 = puVar2[3];
        if (lVar11 != lVar10) {
          puVar9 = *(undefined8 **)(lVar8 + 0x30);
          lVar8 = puVar9[3];
          if (lVar10 != lVar8 && lVar8 != lVar11) {
            if ((lVar11 == param_1 || lVar10 == param_1) || lVar8 == param_1) {
              local_108 = 0.0;
              cVar3 = *param_4;
            }
            else {
              uStack_b8 = puVar1[1];
              local_c0 = *puVar1;
              local_b0 = puVar1[2];
              uStack_d8 = puVar2[1];
              local_e0 = *puVar2;
              uVar22 = NEON_fmadd(local_a0,*(undefined8 *)param_3,
                                  dStack_98 * *(double *)(param_3 + 8));
              local_d0 = puVar2[2];
              dVar23 = (double)NEON_fmadd(local_90,*(undefined8 *)(param_3 + 0x10),uVar22);
              uStack_f8 = puVar9[1];
              local_100 = *puVar9;
              local_f0 = puVar9[2];
              if ((dVar23 <= 0.0) ||
                 (lVar8 = IntersectRayTriangle
                                    ((Vec3 *)&local_80,(Vec3 *)&local_a0,(Vec3 *)&local_c0,
                                     (Vec3 *)&local_e0,(Vec3 *)&local_100,&local_108), lVar8 != 1))
              goto LAB_00d52434;
              cVar3 = *param_4;
            }
            if ((cVar3 == '\0') || (dVar25 < local_108)) {
              *param_4 = true;
              lVar18 = *(long *)(this + 0x58);
              dVar25 = local_108;
            }
          }
        }
LAB_00d52434:
        if (*(long *)(this + 0x60) != 0) {
          *(undefined8 *)(this + 0x58) = *(undefined8 *)(*(long *)(this + 0x58) + 0xd8);
        }
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      if (((param_5) && (lVar18 != 0)) &&
         (pplVar14 = *(long ***)(this + 0xe0), pplVar14 != (long **)0x0)) {
        pplVar15 = pplVar14 + 1;
        pplVar16 = (long **)*pplVar15;
        pplVar17 = pplVar15;
        if (pplVar16 != (long **)0x0) {
          pplVar15 = pplVar14 + 1;
          do {
            while (pplVar17 = pplVar16, param_1 < (long)pplVar17[4]) {
              pplVar15 = pplVar17;
              pplVar16 = (long **)*pplVar17;
              if ((long **)*pplVar17 == (long **)0x0) {
                plVar12 = *pplVar17;
                goto joined_r0x00d524fc;
              }
            }
            if (param_1 <= (long)pplVar17[4]) break;
            pplVar15 = pplVar17 + 1;
            pplVar16 = (long **)*pplVar15;
          } while ((long **)*pplVar15 != (long **)0x0);
        }
        plVar12 = *pplVar15;
joined_r0x00d524fc:
        if (plVar12 == (long *)0x0) {
          plVar12 = (long *)operator_new(0x40);
          plVar12[5] = 0;
          plVar12[6] = 0;
          plVar12[4] = param_1;
          *(undefined2 *)(plVar12 + 7) = 0;
          *plVar12 = 0;
          plVar12[1] = 0;
          plVar12[2] = (long)pplVar17;
          *pplVar15 = plVar12;
          plVar6 = plVar12;
          if ((long *)**pplVar14 != (long *)0x0) {
            *pplVar14 = (long *)**pplVar14;
            plVar6 = *pplVar15;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    ((__tree_node_base *)pplVar14[1],(__tree_node_base *)plVar6);
          pplVar14[2] = (long *)((long)pplVar14[2] + 1);
        }
        plVar12[6] = (long)dVar25;
        plVar12 = (long *)(lVar18 + 0x38);
        uVar7 = *(ulong *)(lVar18 + 0xc0);
        uVar21 = *(ulong *)(lVar18 + 200);
        plVar13 = *(long **)(lVar18 + 0xb8);
        uVar20 = uVar7;
        plVar5 = plVar12;
        plVar6 = plVar12;
        if (uVar21 != 0x10) {
          plVar5 = plVar13;
          plVar6 = plVar13;
        }
        for (; uVar20 != 0; uVar20 = uVar20 - 1) {
          if (*plVar5 == param_1) goto LAB_00d522b4;
          plVar5 = plVar5 + 1;
        }
        if (uVar7 == uVar21) {
          uVar20 = uVar21 << 1;
          uVar7 = uVar21 << 4;
          if (uVar20 >> 0x3d != 0) {
            uVar7 = 0xffffffffffffffff;
          }
          plVar5 = (long *)operator_new__(uVar7);
          memcpy(plVar5,plVar6,uVar21 << 3);
          uVar7 = uVar21;
          if (plVar13 != (long *)0x0) {
            operator_delete__(plVar13);
            uVar7 = *(ulong *)(lVar18 + 0xc0);
          }
          *(long **)(lVar18 + 0xb8) = plVar5;
          *(ulong *)(lVar18 + 200) = uVar20;
          plVar13 = plVar5;
          uVar21 = uVar20;
        }
        if (uVar21 != 0x10) {
          plVar12 = plVar13;
        }
        *(ulong *)(lVar18 + 0xc0) = uVar7 + 1;
        plVar12[uVar7] = param_1;
      }
    }
  }
LAB_00d522b4:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    auVar24._8_8_ = 0;
    auVar24._0_8_ = dVar25;
    return auVar24;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


