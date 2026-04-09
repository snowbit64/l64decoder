// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load
// Entry Point: 0071cdcc
// Size: 2768 bytes
// Signature: undefined __thiscall load(TrafficVehicle * this, uint param_1, uint param_2, TrafficVehicleSource * param_3, VehicleColors * param_4, VehicleSharedContext * param_5, TransformGroup * param_6, bool param_7, bool param_8, bool param_9, RandomGenerator * param_10, uint param_11)


/* TrafficVehicle::load(unsigned int, unsigned int, TrafficVehicle::TrafficVehicleSource*,
   TrafficVehicle::VehicleColors*, TrafficVehicle::VehicleSharedContext*, TransformGroup*, bool,
   bool, bool, RandomGenerator*, unsigned int) */

void __thiscall
TrafficVehicle::load
          (TrafficVehicle *this,uint param_1,uint param_2,TrafficVehicleSource *param_3,
          VehicleColors *param_4,VehicleSharedContext *param_5,TransformGroup *param_6,bool param_7,
          bool param_8,bool param_9,RandomGenerator *param_10,uint param_11)

{
  uint uVar1;
  int iVar2;
  TrafficVehicleSource TVar3;
  long lVar4;
  long *plVar5;
  ScenegraphNode *pSVar6;
  CustomShader *this_00;
  ulong uVar7;
  AudioSource *pAVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  TrafficVehicleSource *pTVar12;
  long lVar13;
  long **pplVar14;
  GsShape *pGVar15;
  long **pplVar16;
  long **pplVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  float fVar23;
  uint local_94;
  ulong local_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  uVar19 = (ulong)param_1;
  *(VehicleSharedContext **)(this + 0x48) = param_5;
  this[0x218] = (TrafficVehicle)param_8;
  this[0x219] = (TrafficVehicle)param_9;
  plVar5 = (long *)CloneUtil::cloneScenegraphNode
                             (*(ScenegraphNode **)
                               ((VehicleSource *)(param_3 + (ulong)param_1 * 0x310) + 0x10),false,
                              false,(MeshSplitFileState *)0x0);
  pSVar6 = *(ScenegraphNode **)plVar5[5];
  *(ScenegraphNode **)(this + 0x50) = pSVar6;
  ScenegraphNode::setVisibility(pSVar6,false);
  (**(code **)(*(long *)param_6 + 0x18))(param_6,*(undefined8 *)(this + 0x50),0xffffffff);
  (**(code **)(*plVar5 + 8))(plVar5);
  lVar13 = *(long *)(this + 0x48);
  uVar1 = *(uint *)(*(long *)(this + 0x50) + 0x18);
  pplVar14 = (long **)(lVar13 + 0x70);
  pplVar16 = (long **)*pplVar14;
  pplVar17 = pplVar14;
  if (pplVar16 == (long **)0x0) {
LAB_0071cee4:
    plVar5 = *pplVar14;
  }
  else {
    pplVar14 = (long **)(lVar13 + 0x70);
    do {
      while (pplVar17 = pplVar16, *(uint *)(pplVar17 + 4) <= uVar1) {
        if (uVar1 <= *(uint *)(pplVar17 + 4)) goto LAB_0071cee4;
        pplVar14 = pplVar17 + 1;
        pplVar16 = (long **)*pplVar14;
        if ((long **)*pplVar14 == (long **)0x0) goto LAB_0071cee4;
      }
      pplVar14 = pplVar17;
      pplVar16 = (long **)*pplVar17;
    } while ((long **)*pplVar17 != (long **)0x0);
    plVar5 = *pplVar17;
  }
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)operator_new(0x30);
    *(uint *)(plVar5 + 4) = uVar1;
    plVar5[5] = (long)this;
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar17;
    *pplVar14 = plVar5;
    if (**(long **)(lVar13 + 0x68) != 0) {
      *(long *)(lVar13 + 0x68) = **(long **)(lVar13 + 0x68);
      plVar5 = *pplVar14;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(lVar13 + 0x70),(__tree_node_base *)plVar5);
    *(long *)(lVar13 + 0x78) = *(long *)(lVar13 + 0x78) + 1;
  }
  fVar23 = *(float *)(param_3 + uVar19 * 0x310 + 0x88);
  fVar20 = *(float *)(param_3 + uVar19 * 0x310 + 0x8c);
  uVar21 = PCGRand::getRandomFloatInclusive();
  fVar20 = (float)NEON_fmadd(fVar20 - fVar23,uVar21,fVar23);
  setVehicleColorAndDirt
            (param_4 + uVar19 * 0x114,*(TransformGroup **)(this + 0x50),
             (VehicleSource *)(param_3 + (ulong)param_1 * 0x310),fVar20,param_10);
  uVar21 = PCGRand::getRandomFloatInclusive();
  this[0x1d8] = (TrafficVehicle)0x0;
  uVar21 = NEON_fmadd(uVar21,0x469c4000,0);
  *(undefined4 *)(this + 0x1d4) = uVar21;
  iVar2 = *(int *)(param_3 + uVar19 * 0x310 + 0x124);
  *(int *)(this + 0x5c) = iVar2;
  if (iVar2 != 0) {
    uVar18 = 0;
    do {
      pGVar15 = *(GsShape **)(this + 0x50);
      if ((pGVar15 != (GsShape *)0x0) &&
         (pTVar12 = param_3 + uVar18 * 8 + uVar19 * 0x310 + 0x94,
         *pTVar12 != (TrafficVehicleSource)0x0)) {
        do {
          local_90 = local_90 & 0xffffffff00000000;
          StringUtil::strtouint((char *)pTVar12,(uint *)&local_90);
          do {
            TVar3 = *pTVar12;
            if (TVar3 == (TrafficVehicleSource)0x0) break;
            pTVar12 = pTVar12 + 1;
          } while (TVar3 != (TrafficVehicleSource)0x7c);
          if ((uint)((ulong)(*(long *)(pGVar15 + 0x30) - *(long *)(pGVar15 + 0x28)) >> 3) <=
              (uint)local_90) {
            pGVar15 = (GsShape *)0x0;
            break;
          }
          pGVar15 = *(GsShape **)(*(long *)(pGVar15 + 0x28) + (local_90 & 0xffffffff) * 8);
          if ((pGVar15 == (GsShape *)0x0) || (*pTVar12 == (TrafficVehicleSource)0x0)) break;
        } while( true );
      }
      lVar13 = *(long *)(this + 0x50);
      *(GsShape **)(this + uVar18 * 0x28 + 0x60) = pGVar15;
      if ((lVar13 != 0) &&
         (pTVar12 = param_3 + uVar18 * 8 + uVar19 * 0x310 + 0xc4,
         *pTVar12 != (TrafficVehicleSource)0x0)) {
        do {
          local_90 = local_90 & 0xffffffff00000000;
          StringUtil::strtouint((char *)pTVar12,(uint *)&local_90);
          do {
            TVar3 = *pTVar12;
            if (TVar3 == (TrafficVehicleSource)0x0) break;
            pTVar12 = pTVar12 + 1;
          } while (TVar3 != (TrafficVehicleSource)0x7c);
          lVar13 = *(long *)(*(long *)(lVar13 + 0x28) + (local_90 & 0xffffffff) * 8);
        } while (lVar13 != 0 && *pTVar12 != (TrafficVehicleSource)0x0);
      }
      lVar11 = uVar18 * 4 + uVar19 * 0x310;
      *(long *)(this + uVar18 * 0x28 + 0x68) = lVar13;
      *(undefined4 *)(this + uVar18 * 0x28 + 0x70) = *(undefined4 *)(param_3 + lVar11 + 0xf4);
      *(undefined4 *)(this + uVar18 * 0x28 + 0x74) = *(undefined4 *)(param_3 + lVar11 + 0x10c);
      if ((*(byte *)(lVar13 + 0x41) >> 3 & 1) != 0) {
        TransformGroup::updateEulerFromMatrix();
      }
      uVar10 = *(undefined8 *)(lVar13 + 0x130);
      pGVar15 = *(GsShape **)(this + uVar18 * 0x28 + 0x60);
      *(undefined4 *)(this + uVar18 * 0x28 + 0x80) = *(undefined4 *)(lVar13 + 0x138);
      *(undefined8 *)(this + uVar18 * 0x28 + 0x78) = uVar10;
      if (((byte)pGVar15[0x11] >> 3 & 1) != 0) {
        plVar5 = (long *)(pGVar15 + 0x178);
        if (*(short *)(pGVar15 + 0x196) != 1) {
          plVar5 = *(long **)(pGVar15 + 0x178);
        }
        lVar13 = *plVar5;
        if ((lVar13 != 0) &&
           (this_00 = (CustomShader *)GsMaterial::getCustomShader(), this_00 != (CustomShader *)0x0)
           ) {
          uVar1 = *(uint *)(lVar13 + 0x88);
          local_94 = 0;
          uVar7 = CustomShader::getParameterIndex(this_00,uVar1,"RDT",&local_94);
          if ((uVar7 & 1) != 0) {
            uStack_88 = *(undefined8 *)
                         (*(long *)(*(long *)(*(long *)(this_00 + 0x110) + (ulong)uVar1 * 0xe0 +
                                             0x40) + (ulong)local_94 * 8) + 0x38);
            local_90 = (ulong)(uint)fVar20 << 0x20;
            GsShape::setCustomShaderParameter(pGVar15,"RDT",(float *)&local_90);
          }
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(uint *)(this + 0x5c));
  }
  *(undefined8 *)(this + 0x224) = *(undefined8 *)(param_3 + uVar19 * 0x310 + 0x128);
  pTVar12 = param_3 + uVar19 * 0x310 + 0x141;
  if (((byte)param_3[uVar19 * 0x310 + 0x140] & 1) != 0) {
    pTVar12 = *(TrafficVehicleSource **)(param_3 + uVar19 * 0x310 + 0x150);
  }
  uVar10 = Node::getNodeFromReference(*(Node **)(this + 0x50),(char *)pTVar12);
  *(undefined8 *)(this + 0x188) = uVar10;
  lVar13 = *(long *)(this + 0x50);
  pTVar12 = param_3 + uVar19 * 0x310 + 0x189;
  if (((byte)param_3[uVar19 * 0x310 + 0x188] & 1) != 0) {
    pTVar12 = *(TrafficVehicleSource **)(param_3 + uVar19 * 0x310 + 0x198);
  }
  if ((lVar13 != 0) && (*pTVar12 != (TrafficVehicleSource)0x0)) {
    do {
      local_90 = local_90 & 0xffffffff00000000;
      StringUtil::strtouint((char *)pTVar12,(uint *)&local_90);
      do {
        TVar3 = *pTVar12;
        if (TVar3 == (TrafficVehicleSource)0x0) break;
        pTVar12 = pTVar12 + 1;
      } while (TVar3 != (TrafficVehicleSource)0x7c);
      if ((uint)((ulong)(*(long *)(lVar13 + 0x30) - *(long *)(lVar13 + 0x28)) >> 3) <=
          (uint)local_90) {
        lVar13 = 0;
        break;
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0x28) + (local_90 & 0xffffffff) * 8);
      if ((lVar13 == 0) || (*pTVar12 == (TrafficVehicleSource)0x0)) break;
    } while( true );
  }
  lVar11 = *(long *)(this + 0x50);
  *(long *)(this + 0x198) = lVar13;
  *(undefined4 *)(this + 0x1a0) = *(undefined4 *)(param_3 + uVar19 * 0x310 + 0x1a0);
  RawTransformGroup::updateWorldTransformation();
  fVar20 = *(float *)(lVar11 + 0xf0);
  lVar13 = *(long *)(this + 0x188);
  RawTransformGroup::updateWorldTransformation();
  *(float *)(this + 0x21c) = ABS(fVar20 - *(float *)(lVar13 + 0xf0));
  pTVar12 = param_3 + uVar19 * 0x310 + 0x159;
  if (((byte)param_3[uVar19 * 0x310 + 0x158] & 1) != 0) {
    pTVar12 = *(TrafficVehicleSource **)(param_3 + uVar19 * 0x310 + 0x168);
  }
  pSVar6 = (ScenegraphNode *)Node::getNodeFromReference(*(Node **)(this + 0x50),(char *)pTVar12);
  *(ScenegraphNode **)(this + 400) = pSVar6;
  if (pSVar6 != (ScenegraphNode *)0x0) {
    ScenegraphNode::setVisibility(pSVar6,(bool)this[0x1d8]);
    pSVar6 = *(ScenegraphNode **)(this + 0x50);
    pTVar12 = param_3 + uVar19 * 0x310 + 0x1a9;
    if (((byte)param_3[uVar19 * 0x310 + 0x1a8] & 1) != 0) {
      pTVar12 = *(TrafficVehicleSource **)(param_3 + uVar19 * 0x310 + 0x1b8);
    }
    while ((pSVar6 != (ScenegraphNode *)0x0 && (*pTVar12 != (TrafficVehicleSource)0x0))) {
      local_90 = local_90 & 0xffffffff00000000;
      StringUtil::strtouint((char *)pTVar12,(uint *)&local_90);
      do {
        TVar3 = *pTVar12;
        if (TVar3 == (TrafficVehicleSource)0x0) break;
        pTVar12 = pTVar12 + 1;
      } while (TVar3 != (TrafficVehicleSource)0x7c);
      if ((uint)((ulong)(*(long *)(pSVar6 + 0x30) - *(long *)(pSVar6 + 0x28)) >> 3) <=
          (uint)local_90) goto LAB_0071d334;
      pSVar6 = *(ScenegraphNode **)(*(long *)(pSVar6 + 0x28) + (local_90 & 0xffffffff) * 8);
    }
    if (pSVar6 != (ScenegraphNode *)0x0) {
      ScenegraphNode::setVisibility(pSVar6,false);
    }
LAB_0071d334:
    if (((*(float *)(this + 0x1a0) != 0.0) &&
        (pGVar15 = *(GsShape **)(this + 0x198), pGVar15 != (GsShape *)0x0)) &&
       (((byte)pGVar15[0x11] >> 3 & 1) != 0)) {
      uStack_88 = 0;
      fVar20 = 0.0;
      if (this[0x1d8] != (TrafficVehicle)0x0) {
        fVar20 = *(float *)(this + 0x1a0);
      }
      local_90 = (ulong)(uint)fVar20;
      GsShape::setCustomShaderParameter(pGVar15,"lightControl",(float *)&local_90);
    }
  }
  lVar13 = *(long *)(this + 0x50);
  pTVar12 = param_3 + uVar19 * 0x310 + 0x1c1;
  if (((byte)param_3[uVar19 * 0x310 + 0x1c0] & 1) != 0) {
    pTVar12 = *(TrafficVehicleSource **)(param_3 + uVar19 * 0x310 + 0x1d0);
  }
  do {
    if ((lVar13 == 0) || (*pTVar12 == (TrafficVehicleSource)0x0)) goto LAB_0071d3f8;
    local_90 = local_90 & 0xffffffff00000000;
    StringUtil::strtouint((char *)pTVar12,(uint *)&local_90);
    do {
      TVar3 = *pTVar12;
      if (TVar3 == (TrafficVehicleSource)0x0) break;
      pTVar12 = pTVar12 + 1;
    } while (TVar3 != (TrafficVehicleSource)0x7c);
    if ((uint)((ulong)(*(long *)(lVar13 + 0x30) - *(long *)(lVar13 + 0x28)) >> 3) <= (uint)local_90)
    break;
    lVar13 = *(long *)(*(long *)(lVar13 + 0x28) + (local_90 & 0xffffffff) * 8);
  } while( true );
  lVar13 = 0;
LAB_0071d3f8:
  *(long *)(this + 0x1a8) = lVar13;
  lVar13 = *(long *)(this + 0x50);
  pTVar12 = param_3 + uVar19 * 0x310 + 0x1e1;
  if (((byte)param_3[uVar19 * 0x310 + 0x1e0] & 1) != 0) {
    pTVar12 = *(TrafficVehicleSource **)(param_3 + uVar19 * 0x310 + 0x1f0);
  }
  do {
    if ((lVar13 == 0) || (*pTVar12 == (TrafficVehicleSource)0x0)) goto LAB_0071d478;
    local_90 = local_90 & 0xffffffff00000000;
    StringUtil::strtouint((char *)pTVar12,(uint *)&local_90);
    do {
      TVar3 = *pTVar12;
      if (TVar3 == (TrafficVehicleSource)0x0) break;
      pTVar12 = pTVar12 + 1;
    } while (TVar3 != (TrafficVehicleSource)0x7c);
    if ((uint)((ulong)(*(long *)(lVar13 + 0x30) - *(long *)(lVar13 + 0x28)) >> 3) <= (uint)local_90)
    break;
    lVar13 = *(long *)(*(long *)(lVar13 + 0x28) + (local_90 & 0xffffffff) * 8);
  } while( true );
  lVar13 = 0;
LAB_0071d478:
  *(long *)(this + 0x1b0) = lVar13;
  lVar13 = *(long *)(this + 0x50);
  pTVar12 = param_3 + uVar19 * 0x310 + 0x201;
  if (((byte)param_3[uVar19 * 0x310 + 0x200] & 1) != 0) {
    pTVar12 = *(TrafficVehicleSource **)(param_3 + uVar19 * 0x310 + 0x210);
  }
  do {
    if ((lVar13 == 0) || (*pTVar12 == (TrafficVehicleSource)0x0)) goto LAB_0071d4f8;
    local_90 = local_90 & 0xffffffff00000000;
    StringUtil::strtouint((char *)pTVar12,(uint *)&local_90);
    do {
      TVar3 = *pTVar12;
      if (TVar3 == (TrafficVehicleSource)0x0) break;
      pTVar12 = pTVar12 + 1;
    } while (TVar3 != (TrafficVehicleSource)0x7c);
    if ((uint)((ulong)(*(long *)(lVar13 + 0x30) - *(long *)(lVar13 + 0x28)) >> 3) <= (uint)local_90)
    {
      lVar13 = 0;
LAB_0071d4f8:
      *(long *)(this + 0x1b8) = lVar13;
      *(undefined8 *)(this + 0x1c0) = *(undefined8 *)(param_3 + uVar19 * 0x310 + 0x1d8);
      *(undefined4 *)(this + 0x1cc) = *(undefined4 *)(param_3 + uVar19 * 0x310 + 0x1f8);
      *(undefined4 *)(this + 0x1d0) = *(undefined4 *)(param_3 + uVar19 * 0x310 + 0x218);
      pTVar12 = param_3 + uVar19 * 0x310 + 0x171;
      if (((byte)param_3[uVar19 * 0x310 + 0x170] & 1) != 0) {
        pTVar12 = *(TrafficVehicleSource **)(param_3 + uVar19 * 0x310 + 0x180);
      }
      pSVar6 = (ScenegraphNode *)Node::getNodeFromReference(*(Node **)(this + 0x50),(char *)pTVar12)
      ;
      if (pSVar6 != (ScenegraphNode *)0x0) {
        ScenegraphNode::setVisibility(pSVar6,true);
      }
      if (param_3[uVar19 * 0x310 + 0x21c] != (TrafficVehicleSource)0x0) {
        pAVar8 = (AudioSource *)operator_new(0x298);
        pTVar12 = param_3 + uVar19 * 0x310 + 0x221;
        if (((byte)param_3[uVar19 * 0x310 + 0x220] & 1) != 0) {
          pTVar12 = *(TrafficVehicleSource **)(param_3 + uVar19 * 0x310 + 0x230);
        }
                    /* try { // try from 0071d590 to 0071d5a7 has its CatchHandler @ 0071d8a0 */
        AudioSource::AudioSource
                  (pAVar8,"AITrafficMotor",(char *)pTVar12,
                   *(float *)(param_3 + uVar19 * 0x310 + 600),
                   *(float *)(param_3 + uVar19 * 0x310 + 0x25c),
                   *(float *)(param_3 + uVar19 * 0x310 + 0x23c),0,param_11,1);
        *(AudioSource **)(this + 0x240) = pAVar8;
        ScenegraphNode::setVisibility((ScenegraphNode *)pAVar8,false);
        (**(code **)(**(long **)(this + 0x50) + 0x18))
                  (*(long **)(this + 0x50),*(undefined8 *)(this + 0x240),0xffffffff);
        iVar2 = *(int *)(param_3 + uVar19 * 0x310 + 0x2c8);
        *(int *)(this + 0x2a8) = iVar2;
        memcpy(this + 0x248,param_3 + uVar19 * 0x310 + 0x268,(long)iVar2 << 2);
        memcpy(this + 0x268,param_3 + uVar19 * 0x310 + 0x288,(long)*(int *)(this + 0x2a8) << 2);
        memcpy(this + 0x288,param_3 + uVar19 * 0x310 + 0x2a8,(long)*(int *)(this + 0x2a8) << 2);
        *(undefined8 *)(this + 0x2ac) = *(undefined8 *)(param_3 + uVar19 * 0x310 + 0x260);
        uVar22 = *(undefined8 *)(param_3 + uVar19 * 0x310 + 0x240);
        uVar10 = *(undefined8 *)(param_3 + uVar19 * 0x310 + 0x238);
        *(undefined8 *)(this + 700) = uVar22;
        *(undefined8 *)(this + 0x2b4) = uVar10;
        *(undefined8 *)(this + 0x2e8) = *(undefined8 *)(param_3 + uVar19 * 0x310 + 0x248);
        fVar20 = *(float *)(param_3 + uVar19 * 0x310 + 0x250);
        *(float *)(this + 0x2f0) = fVar20;
        fVar23 = *(float *)(param_3 + uVar19 * 0x310 + 0x254);
        *(float *)(this + 0x2f4) = fVar23;
        Sample::setFrequencyFilter(1.0,(float)((ulong)uVar22 >> 0x20),0.0,fVar20,0.0,fVar23);
      }
      if (param_3[uVar19 * 0x310 + 0x2cc] != (TrafficVehicleSource)0x0) {
        pAVar8 = (AudioSource *)operator_new(0x298);
        pTVar12 = param_3 + uVar19 * 0x310 + 0x2d1;
        if (((byte)param_3[uVar19 * 0x310 + 0x2d0] & 1) != 0) {
          pTVar12 = *(TrafficVehicleSource **)(param_3 + uVar19 * 0x310 + 0x2e0);
        }
                    /* try { // try from 0071d6a4 to 0071d6bb has its CatchHandler @ 0071d89c */
        AudioSource::AudioSource
                  (pAVar8,"AITrafficHonk",(char *)pTVar12,
                   *(float *)(param_3 + uVar19 * 0x310 + 0x308),
                   *(float *)(param_3 + uVar19 * 0x310 + 0x30c),
                   *(float *)(param_3 + uVar19 * 0x310 + 0x2ec),0,param_11,1);
        *(AudioSource **)(this + 0x2c8) = pAVar8;
        ScenegraphNode::setVisibility((ScenegraphNode *)pAVar8,false);
        (**(code **)(**(long **)(this + 0x50) + 0x18))
                  (*(long **)(this + 0x50),*(undefined8 *)(this + 0x2c8),0xffffffff);
        uVar21 = PCGRand::getRandomFloatInclusive();
        uVar21 = NEON_fmadd(uVar21,0x453b8000,0x44fa0000);
        *(undefined4 *)(this + 0x2d0) = uVar21;
        uVar21 = PCGRand::getRandomFloatInclusive();
        uVar21 = NEON_fmadd(uVar21,0x44fa0000,0x447a0000);
        *(undefined4 *)(this + 0x2d4) = uVar21;
        uVar22 = *(undefined8 *)(param_3 + uVar19 * 0x310 + 0x2f0);
        uVar10 = *(undefined8 *)(param_3 + uVar19 * 0x310 + 0x2e8);
        *(undefined8 *)(this + 0x2e0) = uVar22;
        *(undefined8 *)(this + 0x2d8) = uVar10;
        *(undefined8 *)(this + 0x2f8) = *(undefined8 *)(param_3 + uVar19 * 0x310 + 0x2f8);
        fVar20 = *(float *)(param_3 + uVar19 * 0x310 + 0x300);
        *(float *)(this + 0x300) = fVar20;
        fVar23 = *(float *)(param_3 + uVar19 * 0x310 + 0x304);
        *(float *)(this + 0x304) = fVar23;
        Sample::setFrequencyFilter(1.0,(float)((ulong)uVar22 >> 0x20),0.0,fVar20,0.0,fVar23);
      }
      *(undefined8 *)(this + 0x348) = *(undefined8 *)(param_3 + uVar19 * 0x310 + 0x130);
      *(undefined4 *)(this + 0x350) = *(undefined4 *)(param_3 + uVar19 * 0x310 + 0x138);
      puVar9 = (undefined8 *)operator_new(0x160);
      uVar10 = *(undefined8 *)(this + 0x50);
      uVar22 = *(undefined8 *)(*(long *)(this + 0x48) + 0x44);
      uVar21 = *(undefined4 *)(*(long *)(this + 0x48) + 0x4c);
      puVar9[0x2b] = uVar10;
      *(undefined8 *)((long)puVar9 + 0x11c) = uVar22;
      *puVar9 = &PTR__IPhysicsEntityReport_00fda520;
      *(undefined4 *)(puVar9 + 0x23) = uVar21;
      *(undefined2 *)(puVar9 + 0x25) = 0;
      *(undefined4 *)((long)puVar9 + 0x124) = 0x7f7fffff;
      *(undefined4 *)(puVar9 + 0x1d) = 0x7f7fffff;
      *(undefined4 *)((long)puVar9 + 0x114) = 0xffffffff;
      *(undefined *)((long)puVar9 + 0x12a) = 0;
      *(undefined2 *)((long)puVar9 + 0xec) = 0;
      *(undefined8 *)((long)puVar9 + 0x134) = 0x8000007f7fffff;
      *(undefined8 *)((long)puVar9 + 300) = 0x7f7fffff7f7fffff;
      *(undefined8 *)((long)puVar9 + 0x144) = 0;
      *(undefined8 *)((long)puVar9 + 0x13c) = 0x80000000800000;
      *(undefined *)((long)puVar9 + 0xee) = 0;
      puVar9[0x1f] = 0x8000007f7fffff;
      puVar9[0x1e] = 0x7f7fffff7f7fffff;
      puVar9[0x21] = 0;
      puVar9[0x20] = 0x80000000800000;
      *(undefined4 *)(puVar9 + 0x22) = 0;
      *(undefined8 **)(this + 0x28) = puVar9;
      *(undefined8 *)((long)puVar9 + 0x14c) = 0xffffffff00000000;
      puVar9 = (undefined8 *)operator_new(0xf8);
      puVar9[0x1e] = uVar10;
      *(undefined *)((long)puVar9 + 0xec) = 0;
      *(undefined4 *)(puVar9 + 0x1d) = 0;
      *(undefined8 **)(this + 0x30) = puVar9;
      *puVar9 = &PTR__IPhysicsEntityReport_00fda588;
      puVar9 = (undefined8 *)operator_new(0xf8);
      *puVar9 = &PTR__IPhysicsEntityReport_00fda588;
      puVar9[0x1e] = uVar10;
      *(undefined *)((long)puVar9 + 0xec) = 0;
      this[0x40] = (TrafficVehicle)0x1;
      this[0x21a] = (TrafficVehicle)0x1;
      *(undefined4 *)(puVar9 + 0x1d) = 0;
      *(undefined8 **)(this + 0x38) = puVar9;
      if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0x28) + (local_90 & 0xffffffff) * 8);
  } while( true );
}


