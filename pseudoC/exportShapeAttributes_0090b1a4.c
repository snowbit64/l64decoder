// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exportShapeAttributes
// Entry Point: 0090b1a4
// Size: 1624 bytes
// Signature: undefined __cdecl exportShapeAttributes(GsShape * param_1, set * param_2, FileOutputStream * param_3)


/* WARNING: Type propagation algorithm not settling */
/* I3DSave::exportShapeAttributes(GsShape*, std::__ndk1::set<TransformGroup*,
   std::__ndk1::less<TransformGroup*>, std::__ndk1::allocator<TransformGroup*> >&,
   FileOutputStream&) */

void I3DSave::exportShapeAttributes(GsShape *param_1,set *param_2,FileOutputStream *param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  AdsBrockerManager *this;
  uint *puVar7;
  uint **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  set *psVar11;
  set **ppsVar12;
  set **ppsVar13;
  uint *puVar14;
  set **ppsVar15;
  size_t sVar16;
  uint *puVar17;
  uint *puVar18;
  long lVar19;
  ulong uVar20;
  float fVar21;
  RawTransformGroup **local_98;
  uint local_8c;
  FileOutputStream *local_88;
  uint *local_80;
  uint *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_88 = param_3;
  uVar5 = I3DLoadUtil::hasGeometryShapeMaterials(*(Geometry **)(param_1 + 0x170));
  if ((uVar5 & 1) != 0) {
    uVar5 = (ulong)*(ushort *)(param_1 + 0x196);
    local_80 = (uint *)0x0;
    local_78 = (uint *)0x0;
    local_70 = (uint *)0x0;
    if (*(ushort *)(param_1 + 0x196) == 0) {
      puVar6 = (uint *)0x0;
      puVar18 = (uint *)0x0;
    }
    else {
      lVar19 = 0;
      puVar14 = (uint *)0x0;
      uVar20 = 0;
      puVar7 = (uint *)0x0;
      puVar17 = (uint *)0x0;
      do {
        plVar1 = (long *)(param_1 + 0x178);
        if ((int)uVar5 != 1) {
          plVar1 = (long *)(*(long *)(param_1 + 0x178) + lVar19);
        }
        uVar4 = *(uint *)(*plVar1 + 0x18);
        if (puVar17 < puVar14) {
          puVar18 = puVar17 + 1;
          *puVar17 = uVar4;
          puVar6 = puVar7;
          local_78 = puVar18;
        }
        else {
          sVar16 = (long)puVar17 - (long)puVar7;
          uVar10 = ((long)sVar16 >> 2) + 1;
          if (uVar10 >> 0x3e != 0) {
                    /* try { // try from 0090b7d0 to 0090b7e3 has its CatchHandler @ 0090b824 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar9 = (long)puVar14 - (long)puVar7 >> 1;
          if (uVar10 <= uVar9) {
            uVar10 = uVar9;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar14 - (long)puVar7)) {
            uVar10 = 0x3fffffffffffffff;
          }
          if (uVar10 == 0) {
            puVar6 = (uint *)0x0;
          }
          else {
            if (uVar10 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 0090b298 to 0090b29b has its CatchHandler @ 0090b808 */
            puVar6 = (uint *)operator_new(uVar10 << 2);
          }
          puVar18 = puVar6 + ((long)sVar16 >> 2) + 1;
          puVar6[(long)sVar16 >> 2] = uVar4;
          if (0 < (long)sVar16) {
            memcpy(puVar6,puVar7,sVar16);
          }
          puVar14 = puVar6 + uVar10;
          local_80 = puVar6;
          local_78 = puVar18;
          local_70 = puVar14;
          if (puVar7 != (uint *)0x0) {
            operator_delete(puVar7);
            uVar5 = (ulong)*(ushort *)(param_1 + 0x196);
          }
        }
        uVar20 = uVar20 + 1;
        lVar19 = lVar19 + 8;
        puVar7 = puVar6;
        puVar17 = puVar18;
      } while (uVar20 < uVar5);
    }
    uVar4 = (uint)((ulong)((long)puVar18 - (long)puVar6) >> 2);
    puVar18 = (uint *)0x0;
    if (uVar4 != 0) {
      puVar18 = puVar6;
    }
                    /* try { // try from 0090b308 to 0090b31f has its CatchHandler @ 0090b800 */
    I3DWriter::writeUint32ListAttribute((I3DWriter *)&local_88,"materialIds",",",puVar18,uVar4);
    if (puVar6 != (uint *)0x0) {
      operator_delete(puVar6);
    }
  }
  uVar4 = *(uint *)(param_1 + 400);
  if ((uVar4 >> 8 & 1) != 0) {
    I3DWriter::writeBoolAttribute((I3DWriter *)&local_88,"castsShadows",true);
    uVar4 = *(uint *)(param_1 + 400);
  }
  if ((uVar4 >> 9 & 1) != 0) {
    I3DWriter::writeBoolAttribute((I3DWriter *)&local_88,"receiveShadows",true);
    uVar4 = *(uint *)(param_1 + 400);
  }
  if ((uVar4 >> 10 & 1) != 0) {
    I3DWriter::writeBoolAttribute((I3DWriter *)&local_88,"nonRenderable",true);
    uVar4 = *(uint *)(param_1 + 400);
  }
  if ((uVar4 >> 0xb & 1) == 0) {
    I3DWriter::writeBoolAttribute((I3DWriter *)&local_88,"distanceBlending",false);
    uVar4 = *(uint *)(param_1 + 400);
  }
  if ((uVar4 >> 0xc & 1) != 0) {
    I3DWriter::writeBoolAttribute((I3DWriter *)&local_88,"occluder",true);
    uVar4 = *(uint *)(param_1 + 400);
  }
  if ((uVar4 >> 0x18 & 1) != 0) {
    I3DWriter::writeBoolAttribute((I3DWriter *)&local_88,"terrainDecal",true);
    uVar4 = *(uint *)(param_1 + 400);
  }
  if ((uVar4 >> 7 & 1) == 0) {
    I3DWriter::writeBoolAttribute((I3DWriter *)&local_88,"renderedInViewports",false);
    uVar4 = *(uint *)(param_1 + 400);
  }
  if ((uVar4 >> 6 & 1) != 0) {
    I3DWriter::writeBoolAttribute((I3DWriter *)&local_88,"doubleSided",true);
    uVar4 = *(uint *)(param_1 + 400);
  }
  if ((uVar4 >> 0x19 & 1) != 0) {
    I3DWriter::writeBoolAttribute((I3DWriter *)&local_88,"materialHolder",true);
    uVar4 = *(uint *)(param_1 + 400);
  }
  uVar3 = uVar4 >> 0xe & 0xff;
  if (uVar3 != 0) {
    I3DWriter::writeUint32Attribute((I3DWriter *)&local_88,"buildNavMeshMask",uVar3);
    uVar4 = *(uint *)(param_1 + 400);
  }
  if ((uVar4 >> 0xd & 1) != 0) {
    this = (AdsBrockerManager *)AdsBrockerManager::getInstance();
    uVar4 = AdsBrockerManager::getShapeAdPlacementId(this,param_1);
    if (uVar4 != 0) {
      I3DWriter::writeUint32Attribute((I3DWriter *)&local_88,"adPlacementId",uVar4);
    }
  }
  uVar4 = *(uint *)(param_1 + 400) >> 0x16 & 3;
  if (uVar4 != 0) {
    I3DWriter::writeUint32Attribute((I3DWriter *)&local_88,"decalLayer",uVar4);
  }
  if (((byte)param_1[0x12] >> 2 & 1) != 0) {
    I3DWriter::writeUint32Attribute
              ((I3DWriter *)&local_88,"splitType",*(uint *)(param_1 + 0x210) & 0x3f);
    ppuVar8 = *(uint ***)(param_1 + 0x200);
    local_80 = *ppuVar8;
    local_78 = (uint *)CONCAT44((float)((ulong)local_80 >> 0x20) +
                                (float)((ulong)ppuVar8[1] >> 0x20),
                                SUB84(local_80,0) + SUB84(ppuVar8[1],0));
    local_70 = (uint *)CONCAT44(local_70._4_4_,*(undefined4 *)(ppuVar8 + 2));
    I3DWriter::writeFloatVectorAttribute((I3DWriter *)&local_88,"splitUvs",(float *)&local_80,5);
  }
  local_8c = 0;
  local_98 = (RawTransformGroup **)0x0;
  GsShape::getBindBones(param_1,&local_98,&local_8c);
  if (local_8c != 0) {
    ppsVar15 = (set **)(param_2 + 8);
    if ((set **)*ppsVar15 != (set **)0x0) {
      uVar4 = 0;
      do {
        psVar11 = (set *)local_98[uVar4];
        ppsVar12 = ppsVar15;
        ppsVar13 = (set **)*ppsVar15;
        do {
          if (ppsVar13[4] >= psVar11) {
            ppsVar12 = ppsVar13;
          }
          ppsVar13 = (set **)ppsVar13[ppsVar13[4] < psVar11];
        } while (ppsVar13 != (set **)0x0);
        if ((ppsVar12 == ppsVar15) || (psVar11 < ppsVar12[4])) goto LAB_0090b698;
        uVar4 = uVar4 + 1;
      } while (uVar4 != local_8c);
      puVar6 = (uint *)0x0;
      uVar5 = 0;
      local_80 = (uint *)0x0;
      local_78 = (uint *)0x0;
      local_70 = (uint *)0x0;
      puVar18 = (uint *)0x0;
      puVar14 = (uint *)0x0;
      do {
        uVar4 = *(uint *)(local_98[uVar5] + 0x18);
        if (puVar14 < puVar6) {
          puVar17 = puVar14 + 1;
          *puVar14 = uVar4;
          puVar7 = puVar18;
          local_78 = puVar17;
        }
        else {
          sVar16 = (long)puVar14 - (long)puVar18;
          uVar20 = ((long)sVar16 >> 2) + 1;
          if (uVar20 >> 0x3e != 0) {
                    /* try { // try from 0090b7e4 to 0090b7f7 has its CatchHandler @ 0090b80c */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar10 = (long)puVar6 - (long)puVar18 >> 1;
          if (uVar20 <= uVar10) {
            uVar20 = uVar10;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar6 - (long)puVar18)) {
            uVar20 = 0x3fffffffffffffff;
          }
          if (uVar20 == 0) {
            puVar7 = (uint *)0x0;
          }
          else {
            if (uVar20 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 0090b544 to 0090b547 has its CatchHandler @ 0090b804 */
            puVar7 = (uint *)operator_new(uVar20 << 2);
          }
          puVar17 = puVar7 + ((long)sVar16 >> 2) + 1;
          puVar7[(long)sVar16 >> 2] = uVar4;
          if (0 < (long)sVar16) {
            memcpy(puVar7,puVar18,sVar16);
          }
          puVar6 = puVar7 + uVar20;
          local_80 = puVar7;
          local_78 = puVar17;
          local_70 = puVar6;
          if (puVar18 != (uint *)0x0) {
            operator_delete(puVar18);
          }
        }
        uVar5 = uVar5 + 1;
        puVar18 = puVar7;
        puVar14 = puVar17;
      } while (uVar5 < local_8c);
                    /* try { // try from 0090b66c to 0090b687 has its CatchHandler @ 0090b7fc */
      I3DWriter::writeUint32ListAttribute
                ((I3DWriter *)&local_88,"skinBindNodeIds"," ",puVar7,
                 (uint)((ulong)((long)puVar17 - (long)puVar7) >> 2));
      if (puVar7 != (uint *)0x0) {
        operator_delete(puVar7);
      }
    }
  }
LAB_0090b698:
  if (((byte)param_1[0x12] >> 1 & 1) != 0) {
    fVar21 = (float)DestructionShape::getInnerJointsBreakForce();
    I3DWriter::writeFloatAttribute((I3DWriter *)&local_88,"innerJointsBreakForce",fVar21);
    fVar21 = (float)DestructionShape::getInnerJointsBreakTorque();
    I3DWriter::writeFloatAttribute((I3DWriter *)&local_88,"innerJointsBreakTorque",fVar21);
    fVar21 = (float)DestructionShape::getWorldJointsBreakForce();
    I3DWriter::writeFloatAttribute((I3DWriter *)&local_88,"worldJointsBreakForce",fVar21);
    fVar21 = (float)DestructionShape::getWorldJointsBreakTorque();
    I3DWriter::writeFloatAttribute((I3DWriter *)&local_88,"worldJointsBreakTorque",fVar21);
    fVar21 = (float)DestructionShape::getWorldJointsYOffset();
    I3DWriter::writeFloatAttribute((I3DWriter *)&local_88,"worldJointsYOffset",fVar21);
    fVar21 = (float)DestructionShape::getBreakThreshold();
    I3DWriter::writeFloatAttribute((I3DWriter *)&local_88,"breakThreshold",fVar21);
    fVar21 = (float)DestructionShape::getAngularBreakThresholdAngle();
    fVar21 = (float)MathUtil::radianToDegree(fVar21);
    I3DWriter::writeFloatAttribute((I3DWriter *)&local_88,"angularBreakThreshold",fVar21);
    fVar21 = (float)DestructionShape::getRenderUpdateThreshold();
    I3DWriter::writeFloatAttribute((I3DWriter *)&local_88,"renderUpdateThreshold",fVar21);
    fVar21 = (float)DestructionShape::getMaxDamage();
    I3DWriter::writeFloatAttribute((I3DWriter *)&local_88,"maxDamage",fVar21);
    fVar21 = (float)DestructionShape::getDensity();
    if (fVar21 != 1.0) {
      I3DWriter::writeFloatAttribute((I3DWriter *)&local_88,"density",fVar21);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


