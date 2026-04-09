// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateParkedVehicles
// Entry Point: 0071af04
// Size: 1324 bytes
// Signature: undefined __cdecl updateParkedVehicles(float param_1)


/* TrafficSystem::updateParkedVehicles(float) */

void TrafficSystem::updateParkedVehicles(float param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  TrafficSystem *in_x0;
  long lVar5;
  long *plVar6;
  ScenegraphNode *pSVar7;
  TransformGroup *pTVar8;
  Bt2ScenegraphPhysicsContext *this;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  TrafficSystem **ppTVar15;
  TrafficSystem **ppTVar16;
  TrafficSystem *pTVar17;
  uint uVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  ScenegraphNode *this_00;
  VehicleSource *pVVar22;
  TrafficSystem *pTVar23;
  ulong uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 in_register_00005004;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined8 local_1d0 [8];
  TrafficSystem *local_190 [16];
  TrafficSystem *local_110 [16];
  long local_90;
  
  lVar27 = CONCAT44(in_register_00005004,param_1);
  lVar4 = tpidr_el0;
  local_90 = *(long *)(lVar4 + 0x28);
  puVar1 = (uint *)(in_x0 + 0x4300);
  uVar2 = *(uint *)(in_x0 + 0x4304);
  if (uVar2 <= *puVar1 || in_x0[0xb0] == (TrafficSystem)0x0) goto LAB_0071b3f4;
  uVar3 = *(uint *)(in_x0 + 0x11fc);
  uVar10 = (ulong)uVar3;
  *puVar1 = 0;
  if (uVar3 == 0) {
    if (uVar2 != 0) goto LAB_0071b3f4;
  }
  else {
    lVar14 = 0;
    uVar18 = 0;
    do {
      if (*(long *)(in_x0 + lVar14 + 0x4318) != 0) {
        uVar18 = uVar18 + 1;
        *puVar1 = uVar18;
      }
      lVar14 = lVar14 + 0x98;
    } while (uVar10 * 0x98 - lVar14 != 0);
    if (uVar18 != uVar2) goto LAB_0071b3f4;
    if (uVar3 != 0) {
      if (uVar3 < 4) {
        uVar13 = 0;
      }
      else {
        lVar14 = 3;
        lVar27 = 2;
        uVar13 = uVar10 & 0xfffffffc;
        lVar28 = 1;
        lVar12 = 0;
        uVar30 = 0x300000002;
        uVar29 = 0x100000000;
        ppTVar15 = local_110;
        ppTVar16 = local_190;
        puVar19 = local_1d0;
        uVar24 = uVar13;
        do {
          uVar24 = uVar24 - 4;
          lVar20 = lVar27 * 0x114;
          lVar21 = lVar12 * 0x114;
          lVar9 = lVar14 * 0x114;
          lVar5 = lVar28 * 0x114;
          puVar19[1] = uVar30;
          *puVar19 = uVar29;
          ppTVar15[1] = in_x0 + lVar28 * 0x98 + 0x4308;
          *ppTVar15 = in_x0 + lVar12 * 0x98 + 0x4308;
          ppTVar15[3] = in_x0 + lVar14 * 0x98 + 0x4308;
          ppTVar15[2] = in_x0 + lVar27 * 0x98 + 0x4308;
          lVar27 = lVar27 + 4;
          lVar14 = lVar14 + 4;
          lVar12 = lVar12 + 4;
          lVar28 = lVar28 + 4;
          uVar29 = CONCAT44((int)((ulong)uVar29 >> 0x20) + 4,(int)uVar29 + 4);
          uVar30 = CONCAT44((int)((ulong)uVar30 >> 0x20) + 4,(int)uVar30 + 4);
          ppTVar16[1] = in_x0 + lVar5 + 0xb8;
          *ppTVar16 = in_x0 + lVar21 + 0xb8;
          ppTVar16[3] = in_x0 + lVar9 + 0xb8;
          ppTVar16[2] = in_x0 + lVar20 + 0xb8;
          ppTVar15 = ppTVar15 + 4;
          ppTVar16 = ppTVar16 + 4;
          puVar19 = puVar19 + 2;
        } while (uVar24 != 0);
        if (uVar13 == uVar10) goto LAB_0071b0fc;
      }
      pTVar17 = in_x0 + uVar13 * 0x98 + 0x4308;
      pTVar23 = in_x0 + uVar13 * 0x114 + 0xb8;
      do {
        uVar24 = uVar13 + 1;
        *(int *)((long)local_1d0 + uVar13 * 4) = (int)uVar13;
        local_110[uVar13] = pTVar17;
        pTVar17 = pTVar17 + 0x98;
        local_190[uVar13] = pTVar23;
        pTVar23 = pTVar23 + 0x114;
        uVar13 = uVar24;
      } while (uVar10 != uVar24);
    }
  }
LAB_0071b0fc:
  lVar14 = *(long *)(in_x0 + 0xa8);
  if (lVar14 != 0) {
    lVar12 = *(long *)(lVar14 + 0x28);
    uVar10 = *(long *)(lVar14 + 0x30) - lVar12;
    if ((int)(uVar10 >> 3) != 0) {
      uVar24 = 0;
      do {
        lVar14 = *(long *)(lVar12 + uVar24 * 8);
        if ((*(byte *)(lVar14 + 0x10) >> 5 & 1) != 0) {
          fVar25 = (float)PCGRand::getRandomFloatExclusive();
          if (*(uint *)(in_x0 + 0x4304) != 0) {
            uVar13 = 0;
            do {
              if (fVar25 <= *(float *)(in_x0 + uVar13 * 4 + 0x7210)) goto LAB_0071b184;
              uVar13 = uVar13 + 1;
            } while (*(uint *)(in_x0 + 0x4304) != uVar13);
          }
          uVar13 = 0;
LAB_0071b184:
          uVar11 = uVar13 & 0xffffffff;
          pVVar22 = (VehicleSource *)local_110[uVar11];
          plVar6 = (long *)CloneUtil::cloneScenegraphNode
                                     (*(ScenegraphNode **)(pVVar22 + 0x10),false,false,
                                      (MeshSplitFileState *)0x0);
          this_00 = *(ScenegraphNode **)plVar6[5];
          ScenegraphNode::setVisibility(this_00,true);
          uVar13 = (ulong)*(uint *)((long)local_1d0 + (uVar13 & 0xffffffff) * 4);
          pTVar23 = in_x0 + uVar13 * 0x310 + 0x1359;
          if (((byte)in_x0[uVar13 * 0x310 + 0x1358] & 1) != 0) {
            pTVar23 = *(TrafficSystem **)(in_x0 + uVar13 * 0x310 + 0x1368);
          }
          pSVar7 = (ScenegraphNode *)Node::getNodeFromReference((Node *)this_00,(char *)pTVar23);
          ScenegraphNode::setVisibility(pSVar7,false);
          fVar31 = *(float *)(pVVar22 + 0x88);
          fVar25 = *(float *)(pVVar22 + 0x8c);
          uVar26 = PCGRand::getRandomFloatInclusive();
          fVar25 = (float)NEON_fmadd(fVar25 - fVar31,uVar26,fVar31);
          TrafficVehicle::setVehicleColorAndDirt
                    ((VehicleColors *)local_190[uVar11],(TransformGroup *)this_00,pVVar22,fVar25,
                     (RandomGenerator *)(in_x0 + 0x98));
          pTVar23 = in_x0 + uVar13 * 0x310 + 0x1371;
          if (((byte)in_x0[uVar13 * 0x310 + 0x1370] & 1) != 0) {
            pTVar23 = *(TrafficSystem **)(in_x0 + uVar13 * 0x310 + 0x1380);
          }
          pSVar7 = (ScenegraphNode *)Node::getNodeFromReference((Node *)this_00,(char *)pTVar23);
          ScenegraphNode::setVisibility(pSVar7,false);
          uVar26 = PCGRand::getRandomFloatInclusive();
          uVar32 = NEON_fmadd(uVar26,0x40c90fdb,0);
          uVar26 = PCGRand::getRandomFloatInclusive();
          local_1d8 = 0;
          uStack_1dc = NEON_fmadd(uVar26,0x3f20d97c,0xbea0d97c);
          local_1e0 = uVar32;
          if (*(int *)(in_x0 + uVar13 * 0x310 + 0x1324) != 0) {
            puVar1 = (uint *)(in_x0 + uVar13 * 0x310 + 0x1324);
            pTVar8 = (TransformGroup *)
                     Node::getNodeFromReference
                               ((Node *)this_00,(char *)(in_x0 + uVar13 * 0x310 + 0x12c4));
            TrafficVehicle::setDirt(pTVar8,fVar25);
            TransformGroup::setRotation(pTVar8,(Vector3 *)&local_1e0);
            if (1 < *puVar1) {
              pTVar8 = (TransformGroup *)
                       Node::getNodeFromReference
                                 ((Node *)this_00,(char *)(in_x0 + uVar13 * 0x310 + 0x12cc));
              TrafficVehicle::setDirt(pTVar8,fVar25);
              TransformGroup::setRotation(pTVar8,(Vector3 *)&local_1e0);
              if (2 < *puVar1) {
                pTVar23 = in_x0 + uVar13 * 0x310 + 0x12d4;
                uVar13 = 2;
                do {
                  pTVar8 = (TransformGroup *)
                           Node::getNodeFromReference((Node *)this_00,(char *)pTVar23);
                  TrafficVehicle::setDirt(pTVar8,fVar25);
                  uVar13 = uVar13 + 1;
                  pTVar23 = pTVar23 + 8;
                } while (uVar13 < *puVar1);
              }
            }
          }
          assignLicensePlate(in_x0,(TransformGroup *)this_00,
                             (basic_string *)(in_x0 + uVar11 * 0x310 + 0x1258),
                             (basic_string *)(in_x0 + uVar11 * 0x310 + 0x1270));
          (**(code **)(**(long **)(in_x0 + 0x68) + 0x18))
                    (*(long **)(in_x0 + 0x68),this_00,0xffffffff);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 8))();
          }
          RawTransformGroup::updateWorldTransformation();
          RawTransformGroup::setTransformation
                    ((RawTransformGroup *)this_00,(Matrix4x4 *)(lVar14 + 0xb8),0);
          ScenegraphPhysicsContextManager::getInstance();
          this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
          lVar27 = Bt2ScenegraphPhysicsContext::enqueueAddTransformGroup
                             (this,(TransformGroup *)this_00);
        }
        uVar24 = uVar24 + 1;
        if (uVar24 == (uVar10 >> 3 & 0xffffffff)) break;
        lVar12 = *(long *)(*(long *)(in_x0 + 0xa8) + 0x28);
      } while( true );
    }
  }
LAB_0071b3f4:
  if (*(long *)(lVar4 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar27);
}


