// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkOvertake
// Entry Point: 0071f884
// Size: 1328 bytes
// Signature: undefined checkOvertake(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TrafficVehicle::checkOvertake() */

void TrafficVehicle::checkOvertake(void)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  bool bVar6;
  TrafficVehicle *in_x0;
  Bt2ScenegraphPhysicsContext *pBVar7;
  bool bVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  float *pfVar14;
  long *plVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float *local_88;
  float *local_80;
  undefined8 local_78;
  float *local_70;
  float *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar9 = *(long *)(in_x0 + 0x380);
  if (lVar9 != 0) {
    lVar12 = *(long *)(in_x0 + 0x28);
    if (*(char *)(lVar12 + 0xec) == '\0') {
      bVar6 = false;
      fVar17 = -1.0;
    }
    else if (*(char *)(lVar12 + 0xee) == '\0') {
      plVar11 = (long *)(*(long *)(in_x0 + 0x48) + 0x70);
      plVar15 = (long *)*plVar11;
      if (plVar15 == (long *)0x0) {
LAB_0071f928:
        iVar10 = *(int *)(in_x0 + 0x378);
        fVar17 = -1.0;
joined_r0x0071f934:
        if (iVar10 == 2) {
          bVar6 = true;
          goto LAB_0071f9a4;
        }
      }
      else {
        uVar3 = *(uint *)(lVar12 + 0x114);
        plVar13 = plVar11;
        do {
          if (*(uint *)(plVar15 + 4) >= uVar3) {
            plVar13 = plVar15;
          }
          plVar15 = (long *)plVar15[*(uint *)(plVar15 + 4) < uVar3];
        } while (plVar15 != (long *)0x0);
        if ((plVar13 == plVar11) || (uVar3 < *(uint *)(plVar13 + 4))) goto LAB_0071f928;
        lVar12 = plVar13[5];
        uVar16 = NEON_fmadd(*(undefined4 *)(lVar12 + 0x178),*(undefined4 *)(in_x0 + 0x178),
                            *(float *)(lVar12 + 0x17c) * *(float *)(in_x0 + 0x17c));
        fVar19 = (float)NEON_fmadd(*(undefined4 *)(lVar12 + 0x180),*(undefined4 *)(in_x0 + 0x180),
                                   uVar16);
        fVar17 = *(float *)(lVar12 + 0x220);
        if (fVar19 <= 0.0) {
          iVar10 = *(int *)(in_x0 + 0x378);
          goto joined_r0x0071f934;
        }
        if (*(float *)(lVar12 + 0x224) < *(float *)(in_x0 + 0x224)) {
          bVar6 = *(char *)(lVar12 + 0x234) == '\0';
          goto LAB_0071f9a4;
        }
      }
      bVar6 = false;
    }
    else {
      bVar6 = true;
      fVar17 = -1.0;
    }
LAB_0071f9a4:
    if ((bVar6) || (*(float *)(in_x0 + 0x3a0) <= 0.0)) {
      fVar19 = *(float *)(lVar9 + 0xc);
      if (((bVar6) ||
          (((*(int *)(in_x0 + 0x378) == 2 ||
            ((0.0194 < *(float *)(*(long *)(in_x0 + 0x1e8) + 0x44) && fVar19 == 1.0) &&
             *(float *)(lVar9 + 8) < 0.0)) ||
           (*(float *)(in_x0 + 0x390) < *(float *)(in_x0 + 0x214))))) &&
         (*(int *)(*(long *)(in_x0 + 0x30) + 0xe8) == 0)) {
        fVar17 = (float)calculateOvertakeDistance(in_x0,bVar6,fVar17,fVar19 == 1.0);
        *(float *)(in_x0 + 0x39c) = fVar17;
        fVar18 = (float)Spline::getLength();
        fVar17 = fVar17 / fVar18 + *(float *)(in_x0 + 0x214);
        if (*(float *)(*(long *)(in_x0 + 0x380) + 4) <= fVar17) {
          bVar5 = 0;
          if (fVar19 == 1.0) goto LAB_0071faec;
LAB_0071fac4:
          iVar10 = *(int *)(in_x0 + 0x378);
          if (iVar10 == 2) {
            *(undefined4 *)(in_x0 + 0x37c) = 3;
            goto LAB_0071fb00;
          }
          *(undefined4 *)(in_x0 + 0x37c) = 1;
LAB_0071fb34:
          if (!(bool)(iVar10 == 0 & bVar5)) goto LAB_0071fc9c;
          bVar8 = false;
        }
        else {
          pfVar1 = *(float **)(*(long *)(in_x0 + 0x1e8) + 0x58);
          pfVar2 = *(float **)(*(long *)(in_x0 + 0x1e8) + 0x60);
          if (pfVar1 == pfVar2) {
            bVar5 = 1;
          }
          else {
            do {
              pfVar14 = pfVar1 + 1;
              bVar5 = 0;
              if (*(float *)(in_x0 + 0x214) < *pfVar1 && *pfVar1 < fVar17) break;
              bVar5 = 1;
              pfVar1 = pfVar14;
            } while (pfVar14 != pfVar2);
          }
          if (fVar19 != 1.0) goto LAB_0071fac4;
LAB_0071faec:
          iVar10 = *(int *)(in_x0 + 0x378);
          *(undefined4 *)(in_x0 + 0x37c) = 4;
          if (iVar10 != 2) goto LAB_0071fb34;
LAB_0071fb00:
          bVar8 = true;
          if (!(bool)(!bVar6 & bVar5)) {
            *(undefined4 *)(in_x0 + 0x3a4) = 1;
            *(float *)(in_x0 + 0x39c) = *(float *)(in_x0 + 0x39c) * 0.5;
          }
        }
        local_70 = (float *)0x0;
        local_68 = (float *)0x0;
        local_60 = 0;
        local_88 = (float *)0x0;
        local_80 = (float *)0x0;
        local_78 = 0;
                    /* try { // try from 0071fb60 to 0071fb73 has its CatchHandler @ 0071fdb8 */
        generateOvertakeCollider
                  (in_x0,0.0,*(float *)(in_x0 + 0x39c),bVar8,(vector *)&local_70,(vector *)&local_88
                  );
                    /* try { // try from 0071fb74 to 0071fb7b has its CatchHandler @ 0071fdc0 */
        ScenegraphPhysicsContextManager::getInstance();
        pBVar7 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
        uVar3 = *(uint *)(*(long *)(in_x0 + 0x48) + 0x4c) |
                *(uint *)(*(long *)(in_x0 + 0x48) + 0x44);
                    /* try { // try from 0071fbc0 to 0071fbdf has its CatchHandler @ 0071fdb4 */
        VehicleCollisionDistanceUtil::getCollisionDistance
                  ((int)((ulong)((long)local_68 - (long)local_70) >> 2) * -0x55555555,local_70,
                   local_88,*(float *)(in_x0 + 0x348),*(float *)(in_x0 + 0x34c),pBVar7,
                   *(PhysicsReport **)(in_x0 + 0x30),uVar3,true,false,true,
                   (long)local_68 - (long)local_70 == 0x18);
        if (*(int *)(in_x0 + 0x378) == 0) {
          local_68 = local_70;
          fVar19 = *(float *)(in_x0 + 0x39c);
          local_80 = local_88;
                    /* try { // try from 0071fc04 to 0071fc7b has its CatchHandler @ 0071fdbc */
          fVar17 = (float)Spline::getLength();
          generateOvertakeCollider
                    (in_x0,(fVar19 + -20.0) / fVar17,20.0,true,(vector *)&local_70,
                     (vector *)&local_88);
          VehicleCollisionDistanceUtil::getCollisionDistance
                    ((int)((ulong)((long)local_68 - (long)local_70) >> 2) * -0x55555555,local_70,
                     local_88,*(float *)(in_x0 + 0x348),*(float *)(in_x0 + 0x34c),pBVar7,
                     *(PhysicsReport **)(in_x0 + 0x38),uVar3,true,false,true,
                     (long)local_68 - (long)local_70 == 0x18);
        }
        if (local_88 != (float *)0x0) {
          local_80 = local_88;
          operator_delete(local_88);
        }
        if (local_70 != (float *)0x0) {
          local_68 = local_70;
          operator_delete(local_70);
        }
      }
LAB_0071fc9c:
      lVar9 = *(long *)(in_x0 + 0x30);
      if ((*(int *)(lVar9 + 0xe8) == 2) &&
         (lVar12 = *(long *)(in_x0 + 0x38), *(int *)(lVar12 + 0xe8) != 1)) {
        *(undefined4 *)(lVar9 + 0xe8) = 0;
        bVar6 = false;
        if (*(int *)(lVar12 + 0xe8) == 2) {
          bVar6 = *(char *)(lVar12 + 0xec) != '\0';
        }
        *(undefined4 *)(lVar12 + 0xe8) = 0;
        if (*(float *)(in_x0 + 0x390) < *(float *)(in_x0 + 0x214)) {
          *(undefined4 *)(in_x0 + 0x390) = 0x3f800000;
        }
        if (!(bool)(*(char *)(lVar9 + 0xec) != '\0' | bVar6)) {
          fVar17 = (float)Spline::getLength();
          *(undefined4 *)(in_x0 + 0x3a4) = 0;
          fVar19 = *(float *)(in_x0 + 0x220) * 2000.0;
          if (fVar19 <= 12.0) {
            fVar19 = 12.0;
          }
          *(int *)(in_x0 + 0x378) = *(int *)(in_x0 + 0x37c);
          fVar18 = 8.0;
          if (0.0001 <= *(float *)(in_x0 + 0x220)) {
            fVar18 = fVar19;
          }
          *(float *)(in_x0 + 0x388) = *(float *)(in_x0 + 0x214);
          *(float *)(in_x0 + 0x38c) = *(float *)(in_x0 + 0x214) + fVar18 / fVar17;
          if (*(int *)(in_x0 + 0x37c) == 1) {
            *(undefined4 *)(in_x0 + 0x3a0) = 0x44bb8000;
          }
        }
      }
      uVar16 = *(undefined4 *)(in_x0 + 0x3a4);
      goto LAB_0071fd80;
    }
  }
  uVar16 = 0;
LAB_0071fd80:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar16);
  }
  return;
}


