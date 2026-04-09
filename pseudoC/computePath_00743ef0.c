// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computePath
// Entry Point: 00743ef0
// Size: 2136 bytes
// Signature: undefined __thiscall computePath(VehicleNavigationPlanner * this, VehicleNavigationAgent * param_1)


/* VehicleNavigationPlanner::computePath(VehicleNavigationAgent&) */

void __thiscall
VehicleNavigationPlanner::computePath
          (VehicleNavigationPlanner *this,VehicleNavigationAgent *param_1)

{
  ushort uVar1;
  long lVar2;
  byte bVar3;
  VehicleNavigationAgent VVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  bool bVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  short *psVar14;
  undefined8 *puVar15;
  short sVar16;
  int iVar17;
  long lVar18;
  VehicleNavigationAgent *pVVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined4 *puVar30;
  NodeId NVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  VehicleNavigationAgent *pVVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  uint uVar40;
  ulong uVar41;
  float fVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  float fVar46;
  undefined4 local_1300;
  undefined2 local_12f0 [4];
  ushort local_12e8;
  ushort uStack_12e6;
  ushort local_12e4;
  undefined local_12e0 [1568];
  undefined local_cc0 [3136];
  long local_80;
  
  lVar9 = tpidr_el0;
  local_80 = *(long *)(lVar9 + 0x28);
  uVar11 = VehicleNavigationAgent::getCornerNode(param_1,(PlanarPose *)(param_1 + 0x1310));
  uVar5 = *(ushort *)(param_1 + 0x32);
  uVar32 = uVar11 & 0xffffffffffff;
  uVar6 = *(ushort *)(param_1 + 0x34);
  *(uint *)(param_1 + 0x1370) = (uint)uVar11;
  *(short *)(param_1 + 0x1374) = (short)(uVar11 >> 0x20);
  memcpy(local_cc0,param_1 + 0x36,0xc40);
  pVVar35 = param_1 + 0xc76;
  memcpy(local_12e0,pVVar35,0x620);
  memset(param_1 + 0x36,0xff,0xc40);
  memset(pVVar35,0xff,0x620);
  if (((uint)uVar11 & 0xffff) < 6) {
    sVar16 = 0;
  }
  else {
    iVar17 = *(ushort *)(param_1 + 0x30) - 8;
    if ((int)(uint)(ushort)uVar32 <= iVar17) {
      iVar17 = (int)uVar32;
    }
    sVar16 = (short)iVar17 + -6;
  }
  *(short *)(param_1 + 0x32) = sVar16;
  uVar40 = (uint)(uVar32 >> 0x10);
  if ((uVar40 & 0xffff) < 6) {
    sVar16 = 0;
  }
  else {
    uVar7 = *(ushort *)(param_1 + 0x30) - 8;
    if ((int)(uint)(ushort)(uVar32 >> 0x10) <= (int)(*(ushort *)(param_1 + 0x30) - 8)) {
      uVar7 = uVar40;
    }
    sVar16 = (short)uVar7 + -6;
  }
  lVar18 = 0;
  lVar24 = 0x36;
  *(short *)(param_1 + 0x34) = sVar16;
  lVar21 = 0xc76;
  do {
    lVar26 = 0;
    lVar27 = lVar24;
    lVar25 = lVar21;
    do {
      lVar29 = *(long *)(param_1 + 0x28);
      lVar2 = lVar26 + (ulong)*(ushort *)(param_1 + 0x32) +
                       (lVar18 + (ulong)*(ushort *)(param_1 + 0x34)) *
                       (ulong)*(ushort *)(param_1 + 0x30);
      psVar14 = (short *)(lVar29 + lVar2 * 6);
      sVar16 = *psVar14;
      if (sVar16 != -1) {
        lVar28 = lVar29 + lVar2 * 6;
        uVar11 = (ulong)(*(byte *)(lVar28 + 4) >> 5);
        *(short *)(param_1 + lVar27 + uVar11 * 2) = sVar16;
        param_1[lVar25 + uVar11] = *(VehicleNavigationAgent *)(lVar28 + 4);
        bVar3 = *(byte *)(lVar28 + 4);
        *psVar14 = -1;
        *(byte *)(lVar28 + 4) = bVar3 | 0x10;
        sVar16 = *(short *)(lVar28 + 2);
        if (sVar16 != -1) {
          lVar29 = lVar29 + lVar2 * 6;
          uVar11 = (ulong)(*(byte *)(lVar29 + 5) >> 5);
          *(short *)(param_1 + lVar27 + uVar11 * 2) = sVar16;
          param_1[lVar25 + uVar11] = *(VehicleNavigationAgent *)(lVar29 + 5);
          bVar3 = *(byte *)(lVar29 + 5);
          *(short *)(lVar28 + 2) = -1;
          *(byte *)(lVar29 + 5) = bVar3 | 0x10;
        }
      }
      lVar26 = lVar26 + 1;
      lVar25 = lVar25 + 8;
      lVar27 = lVar27 + 0x10;
    } while (lVar26 != 0xe);
    lVar18 = lVar18 + 1;
    lVar21 = lVar21 + 0x70;
    lVar24 = lVar24 + 0xe0;
  } while (lVar18 != 0xe);
  lVar18 = 0;
  puVar36 = local_12e0;
  puVar38 = local_cc0;
  do {
    lVar21 = 0;
    uVar11 = (ulong)((uint)uVar6 + (int)lVar18) & 0xffff;
    puVar37 = puVar36;
    puVar39 = puVar38;
    uVar40 = (uint)uVar5;
    do {
      uVar41 = 0;
      uVar32 = 0;
      uVar34 = (ulong)((uint)uVar5 + (int)lVar21) & 0xffff;
      do {
        if (*(short *)(puVar39 + uVar32 * 2) != -1) {
          bVar3 = puVar37[uVar32];
          uVar33 = uVar41 | uVar11 << 0x10;
          pVVar35 = (VehicleNavigationAgent *)
                    (uVar33 | uVar34 | (ulong)pVVar35 & 0xffff000000000000);
          local_12e8 = 0xffff;
          uStack_12e6 = 0xffff;
          local_12e4 = 0xffff;
          uVar12 = SearchTree::setCostToGoal
                             ((SearchTree *)(param_1 + 0x28),pVVar35,
                              *(short *)(puVar39 + uVar32 * 2),bVar3 & 0xf,&local_12e8,local_12f0);
          if (((uVar12 & 1) != 0) &&
             (updateCandidate(this,param_1,
                              (ulong)CONCAT24(local_12e4,CONCAT22(uStack_12e6,local_12e8)),
                              local_12f0[0]), (uint)local_12e8 == (uint)uVar34)) {
            bVar10 = false;
            if (uVar32 == local_12e4) {
              bVar10 = (uint)uVar11 == (uint)uStack_12e6;
            }
            if (bVar10) goto LAB_007441d0;
          }
          if ((bVar3 >> 4 & 1) == 0) {
            if ((((uint)uVar34 - (uint)*(ushort *)(param_1 + 0x32) & 0xffff) < 0xe) &&
               (uVar7 = (int)(uVar33 >> 0x10) - (uint)*(ushort *)(param_1 + 0x34),
               (uVar7 & 0xffff) < 0xe)) {
              uVar12 = (ulong)uVar7 & 0xffff;
              uVar1 = (short)uVar40 - *(ushort *)(param_1 + 0x32);
              if (*(short *)(param_1 + uVar32 * 2 + uVar12 * 0xe0 + (ulong)uVar1 * 0x10 + 0x36) !=
                  -1) {
                lVar24 = uVar12 * 0x70 + (ulong)uVar1 * 8;
                pVVar19 = param_1 + uVar32 + lVar24 + 0xc76;
                VVar4 = param_1[uVar32 + lVar24 + 0xc76];
LAB_007441c8:
                *pVVar19 = (VehicleNavigationAgent)((byte)VVar4 & 0xef);
              }
            }
            else {
              lVar24 = uVar34 + uVar11 * *(ushort *)(param_1 + 0x30);
              lVar26 = *(long *)(param_1 + 0x28);
              if (*(short *)(lVar26 + lVar24 * 6) != -1) {
                uVar7 = (uint)uVar32 & 0xffff;
                VVar4 = *(VehicleNavigationAgent *)(lVar26 + lVar24 * 6 + 4);
                if (uVar7 == (byte)VVar4 >> 5) {
                  lVar25 = 0;
                }
                else {
                  if ((*(short *)(lVar26 + lVar24 * 6 + 2) == -1) ||
                     (VVar4 = *(VehicleNavigationAgent *)(lVar26 + lVar24 * 6 + 5),
                     uVar7 != (byte)VVar4 >> 5)) goto LAB_007441d0;
                  lVar25 = 1;
                }
                pVVar19 = (VehicleNavigationAgent *)(lVar26 + lVar24 * 6 + lVar25 + 4);
                goto LAB_007441c8;
              }
            }
          }
        }
LAB_007441d0:
        uVar32 = uVar32 + 1;
        uVar41 = uVar41 + 0x100000000;
      } while (uVar32 != 8);
      puVar37 = puVar37 + 8;
      puVar39 = puVar39 + 0x10;
      lVar21 = lVar21 + 1;
      uVar40 = uVar40 + 1;
    } while (lVar21 != 0xe);
    puVar36 = puVar36 + 0x70;
    lVar18 = lVar18 + 1;
    puVar38 = puVar38 + 0xe0;
  } while (lVar18 != 0xe);
  uVar11 = VehicleNavigationAgent::isStartBlocked();
  if ((uVar11 & 1) == 0) {
    uVar40 = 0;
    local_1300 = 0;
    fVar42 = INFINITY;
LAB_00744484:
    do {
      if (((uVar40 == *(uint *)(this + 200)) || (*(long *)(this + 0x98) == *(long *)(this + 0xa0)))
         || (((byte)this[0xcc] & 1) != 0)) break;
      uVar11 = **(ulong **)(this + 0x98);
      PriorityQueue<Candidate,unsigned_int,std::__ndk1::less<Candidate>,std::__ndk1::vector<std::__ndk1::pair<Candidate,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<Candidate,unsigned_int*>>>>
      ::pop();
      NVar31 = (NodeId)(uVar11 >> 0x10);
      uVar7 = NVar31 - *(ushort *)(param_1 + 0x32);
      if (((uVar7 & 0xffff) < 0xe) &&
         (uVar8 = (int)(uVar11 >> 0x20) - (uint)*(ushort *)(param_1 + 0x34), (uVar8 & 0xffff) < 0xe)
         ) {
        uVar32 = (ulong)uVar8 & 0xffff;
        if (*(short *)(param_1 +
                      (uVar11 >> 0x30) * 2 + (ulong)(ushort)uVar7 * 0x10 + uVar32 * 0xe0 + 0x36) !=
            -1) {
          lVar18 = (uVar11 >> 0x30) + ((ulong)uVar7 & 0xffff) * 8 + uVar32 * 0x70;
          pVVar35 = param_1 + lVar18 + 0xc76;
          VVar4 = param_1[lVar18 + 0xc76];
LAB_007445a4:
          *pVVar35 = (VehicleNavigationAgent)((byte)VVar4 & 0xef);
        }
      }
      else {
        lVar21 = *(long *)(param_1 + 0x28);
        lVar18 = (uVar11 >> 0x20 & 0xffff) * (ulong)*(ushort *)(param_1 + 0x30) +
                 (uVar11 >> 0x10 & 0xffff);
        if (*(short *)(lVar21 + lVar18 * 6) != -1) {
          VVar4 = *(VehicleNavigationAgent *)(lVar21 + lVar18 * 6 + 4);
          uVar5 = (ushort)(uVar11 >> 0x30);
          if (uVar5 == (byte)VVar4 >> 5) {
            lVar24 = 0;
          }
          else {
            if ((*(short *)(lVar21 + lVar18 * 6 + 2) == -1) ||
               (VVar4 = *(VehicleNavigationAgent *)(lVar21 + lVar18 * 6 + 5),
               uVar5 != (byte)VVar4 >> 5)) goto LAB_007445ac;
            lVar24 = 1;
          }
          pVVar35 = (VehicleNavigationAgent *)(lVar21 + lVar18 * 6 + lVar24 + 4);
          goto LAB_007445a4;
        }
      }
LAB_007445ac:
      if ((uVar40 & 0xf) == 0) {
        fVar42 = (float)VehicleNavigationAgent::computeMinCostStartToGoal();
      }
      fVar46 = INFINITY;
      if ((((uint)uVar11 ^ 0xffffffff) & 0xffff) != 0) {
        fVar46 = (float)((uint)uVar11 & 0xffff | 0x49800000) + -1048576.0;
      }
      if (fVar42 < fVar46) {
        puVar23 = *(undefined8 **)(this + 0x98);
        uVar32 = *(long *)(this + 0xa0) - (long)puVar23;
        uVar11 = uVar32 >> 4 & 0xffffffff;
        if (uVar11 == 0) {
          puVar13 = (undefined8 *)0x0;
          puVar15 = (undefined8 *)0x0;
          iVar17 = (int)(uVar32 >> 4);
        }
        else {
          puVar13 = (undefined8 *)operator_new(uVar11 * 8);
          puVar15 = puVar13 + uVar11;
          uVar41 = uVar11 - 1 & 0x1fffffffffffffff;
          puVar20 = puVar13;
          if (uVar41 < 3) {
LAB_00744658:
            do {
              puVar22 = puVar20 + 1;
              *puVar20 = 0xffffffffffff0000;
              puVar20 = puVar22;
            } while (puVar22 != puVar15);
          }
          else {
            uVar41 = uVar41 + 1;
            puVar20 = puVar13 + 2;
            uVar12 = uVar41 & 0x3ffffffffffffffc;
            uVar34 = uVar12;
            do {
              puVar20[-1] = 0xffffffffffff0000;
              puVar20[-2] = 0xffffffffffff0000;
              puVar20[1] = 0xffffffffffff0000;
              *puVar20 = 0xffffffffffff0000;
              puVar20 = puVar20 + 4;
              uVar34 = uVar34 - 4;
            } while (uVar34 != 0);
            puVar20 = puVar13 + uVar12;
            if (uVar41 != uVar12) goto LAB_00744658;
          }
          iVar17 = (int)(uVar32 >> 4);
        }
        if (iVar17 != 0) {
          if ((uVar11 < 5) ||
             ((puVar13 < puVar23 + uVar11 * 2 + -1 && (puVar23 < puVar13 + uVar11)))) {
            lVar18 = 0;
          }
          else {
            uVar41 = 4;
            if ((uVar32 >> 4 & 3) != 0) {
              uVar41 = uVar32 >> 4 & 3;
            }
            lVar18 = uVar11 - uVar41;
            puVar20 = puVar13 + 2;
            lVar21 = uVar41 - uVar11;
            puVar22 = puVar23 + 4;
            do {
              uVar43 = *puVar22;
              uVar44 = puVar22[2];
              lVar21 = lVar21 + 4;
              uVar45 = puVar22[-4];
              puVar20[-1] = puVar22[-2];
              puVar20[-2] = uVar45;
              puVar20[1] = uVar44;
              *puVar20 = uVar43;
              puVar20 = puVar20 + 4;
              puVar22 = puVar22 + 8;
            } while (lVar21 != 0);
          }
          lVar21 = lVar18 - uVar11;
          puVar23 = puVar23 + lVar18 * 2;
          puVar20 = puVar13 + lVar18;
          do {
            bVar10 = lVar21 != -1;
            lVar21 = lVar21 + 1;
            *puVar20 = *puVar23;
            puVar23 = puVar23 + 2;
            puVar20 = puVar20 + 1;
          } while (bVar10);
        }
                    /* try { // try from 00744710 to 0074471b has its CatchHandler @ 00744748 */
        std::__ndk1::vector<Candidate,std::__ndk1::allocator<Candidate>>::assign<Candidate*>
                  ((vector<Candidate,std::__ndk1::allocator<Candidate>> *)(param_1 + 0x10),
                   (Candidate *)puVar13,(Candidate *)puVar15);
        if (puVar13 != (undefined8 *)0x0) {
          operator_delete(puVar13);
        }
        local_1300 = 1;
        if (fVar42 < fVar46) break;
        goto LAB_00744484;
      }
      updateSuccessors(this,param_1,NVar31);
      uVar40 = uVar40 + 1;
    } while (fVar46 <= fVar42);
  }
  else {
    local_1300 = 0;
  }
  lVar18 = *(long *)(this + 0x98);
  lVar21 = *(long *)(this + 0xa0);
  if (lVar18 != lVar21) {
    uVar11 = (lVar21 - lVar18) - 0x10;
    lVar24 = lVar18;
    if (0xf < uVar11) {
      uVar11 = (uVar11 >> 4) + 1;
      uVar41 = uVar11 & 0x1ffffffffffffffe;
      lVar24 = lVar18 + uVar41 * 0x10;
      puVar23 = (undefined8 *)(lVar18 + 0x18);
      uVar32 = uVar41;
      do {
        uVar32 = uVar32 - 2;
        puVar30 = (undefined4 *)*puVar23;
        *(undefined4 *)puVar23[-2] = 0xffffffff;
        *puVar30 = 0xffffffff;
        puVar23 = puVar23 + 4;
      } while (uVar32 != 0);
      if (uVar11 == uVar41) goto LAB_007443e4;
    }
    do {
      lVar26 = lVar24 + 0x10;
      **(undefined4 **)(lVar24 + 8) = 0xffffffff;
      lVar24 = lVar26;
    } while (lVar26 != lVar21);
  }
LAB_007443e4:
  *(long *)(this + 0xa0) = lVar18;
  *(undefined4 *)(param_1 + 0x1384) = local_1300;
  if (*(long *)(lVar9 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


