// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readTransformGroup
// Entry Point: 009315e8
// Size: 2616 bytes
// Signature: undefined __cdecl readTransformGroup(I3DReader * param_1, I3DLoad * param_2, TransformGroup * param_3, bool param_4, bool param_5, bool param_6, bool param_7)


/* I3DSceneGraphFactory::readTransformGroup(I3DReader&, I3DLoad*, TransformGroup*, bool, bool, bool,
   bool) */

void I3DSceneGraphFactory::readTransformGroup
               (I3DReader *param_1,I3DLoad *param_2,TransformGroup *param_3,bool param_4,
               bool param_5,bool param_6,bool param_7)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  Bt2PhysicsRBObject *this;
  Bt2PhysicsJointObject *this_00;
  char **ppcVar6;
  long *plVar7;
  long **pplVar8;
  long **pplVar9;
  long **pplVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float local_f4;
  float fStack_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  float local_a0 [2];
  undefined8 local_98;
  float local_90 [2];
  undefined8 local_88;
  float local_80 [2];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  pcVar5 = (char *)ExpatUtil::getAttr("lockedgroup",*(char ***)param_1);
  if (pcVar5 == (char *)0x0) {
    bVar2 = false;
  }
  else {
    iVar3 = strcasecmp(pcVar5,"false");
    bVar2 = iVar3 != 0;
  }
  ScenegraphNode::setLockedGroup((ScenegraphNode *)param_3,bVar2);
  local_80[0] = 0.0;
  local_88 = 0;
  local_90[0] = 0.0;
  local_98 = 0;
  local_a8 = 0x3f8000003f800000;
  local_a0[0] = 1.0;
  pcVar5 = (char *)ExpatUtil::getAttr("translation",*(char ***)param_1);
  if (pcVar5 != (char *)0x0) {
    pcVar5 = (char *)StringUtil::atof(pcVar5,(float *)&local_88);
    pcVar5 = (char *)StringUtil::atof(pcVar5,(float *)((ulong)&local_88 | 4));
    StringUtil::atof(pcVar5,local_80);
  }
  pcVar5 = (char *)ExpatUtil::getAttr("rotation",*(char ***)param_1);
  if (pcVar5 != (char *)0x0) {
    pcVar5 = (char *)StringUtil::atof(pcVar5,(float *)&local_98);
    pcVar5 = (char *)StringUtil::atof(pcVar5,(float *)((ulong)&local_98 | 4));
    StringUtil::atof(pcVar5,local_90);
  }
  pcVar5 = (char *)ExpatUtil::getAttr("scale",*(char ***)param_1);
  if (pcVar5 != (char *)0x0) {
    pcVar5 = (char *)StringUtil::atof(pcVar5,(float *)&local_a8);
    pcVar5 = (char *)StringUtil::atof(pcVar5,(float *)((ulong)&local_a8 | 4));
    StringUtil::atof(pcVar5,local_a0);
  }
  pcVar5 = (char *)ExpatUtil::getAttr("visibility",*(char ***)param_1);
  if (pcVar5 == (char *)0x0) {
    bVar2 = true;
  }
  else {
    iVar3 = strcasecmp(pcVar5,"false");
    bVar2 = iVar3 != 0;
  }
  uVar12 = MathUtil::degreeToRadian((float)local_98);
  uVar13 = MathUtil::degreeToRadian(local_98._4_4_);
  local_b0 = MathUtil::degreeToRadian(local_90[0]);
  local_c8 = local_a8;
  local_c0 = local_a0[0];
  local_d8 = local_88;
  local_d0 = local_80[0];
  local_b8 = uVar12;
  uStack_b4 = uVar13;
  TransformGroup::setTRSTransformation
            (param_3,(Vector3 *)&local_d8,(Vector3 *)&local_b8,(Vector3 *)&local_c8);
  ScenegraphNode::setVisibility((ScenegraphNode *)param_3,bVar2);
  if (param_4) {
    pcVar5 = (char *)ExpatUtil::getAttr("static",*(char ***)param_1);
    if ((pcVar5 == (char *)0x0) || (iVar3 = strcasecmp(pcVar5,"false"), iVar3 == 0)) {
      pcVar5 = (char *)ExpatUtil::getAttr("dynamic",*(char ***)param_1);
      if ((pcVar5 == (char *)0x0) || (iVar3 = strcasecmp(pcVar5,"false"), iVar3 == 0)) {
        pcVar5 = (char *)ExpatUtil::getAttr("kinematic",*(char ***)param_1);
        if (pcVar5 == (char *)0x0) {
          uVar4 = 0;
        }
        else {
          iVar3 = strcasecmp(pcVar5,"false");
          uVar4 = 0;
          if (iVar3 != 0) {
            uVar4 = 0x108;
          }
        }
      }
      else {
        uVar4 = 0x88;
      }
    }
    else {
      uVar4 = 0x48;
    }
    pcVar5 = (char *)ExpatUtil::getAttr("compound",*(char ***)param_1);
    if ((pcVar5 == (char *)0x0) || (iVar3 = strcasecmp(pcVar5,"false"), iVar3 == 0)) {
      pcVar5 = (char *)ExpatUtil::getAttr("compoundChild",*(char ***)param_1);
      if (pcVar5 != (char *)0x0) {
        iVar3 = strcasecmp(pcVar5,"false");
        if (iVar3 != 0) {
          uVar4 = uVar4 | 0x408;
        }
      }
    }
    else {
      uVar4 = uVar4 | (uVar4 >> 3 & 1) << 9;
    }
    if ((uVar4 >> 3 & 1) != 0) {
      this = (Bt2PhysicsRBObject *)operator_new(0x90);
                    /* try { // try from 009318b8 to 009318bf has its CatchHandler @ 00932024 */
      Bt2PhysicsRBObject::Bt2PhysicsRBObject(this,param_3);
      RawTransformGroup::setPhysicsObject((RawTransformGroup *)param_3,(PhysicsObject *)this);
      *(uint *)(this + 8) = *(uint *)(this + 8) | uVar4;
      Bt2PhysicsRBObject::raiseDirtyFlags(this,uVar4);
      pcVar5 = (char *)ExpatUtil::getAttr("collision",*(char ***)param_1);
      if ((pcVar5 != (char *)0x0) && (iVar3 = strcasecmp(pcVar5,"false"), iVar3 == 0)) {
        *(uint *)(this + 8) = *(uint *)(this + 8) & 0xfffff7ff;
        Bt2PhysicsRBObject::raiseDirtyFlags(this,0x800);
      }
      pcVar5 = (char *)ExpatUtil::getAttr("trigger",*(char ***)param_1);
      if ((pcVar5 != (char *)0x0) && (iVar3 = strcasecmp(pcVar5,"false"), iVar3 != 0)) {
        *(uint *)(this + 8) = *(uint *)(this + 8) | 0x1000;
        Bt2PhysicsRBObject::raiseDirtyFlags(this,0x1000);
      }
      pcVar5 = (char *)ExpatUtil::getAttr("collisionMask",*(char ***)param_1);
      if (pcVar5 != (char *)0x0) {
        uVar4 = StringUtil::strtouint(pcVar5);
        Bt2PhysicsRBObject::setCollisionMask(this,uVar4);
      }
      pcVar5 = (char *)ExpatUtil::getAttr("restitution",*(char ***)param_1);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,&local_dc);
        Bt2PhysicsRBObject::setRestitution(this,local_dc);
      }
      pcVar5 = (char *)ExpatUtil::getAttr("staticFriction",*(char ***)param_1);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,&local_e0);
        Bt2PhysicsRBObject::setStaticFriction(this,local_e0);
      }
      pcVar5 = (char *)ExpatUtil::getAttr("dynamicFriction",*(char ***)param_1);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,&local_e4);
        Bt2PhysicsRBObject::setDynamicFriction(this,local_e4);
      }
      pcVar5 = (char *)ExpatUtil::getAttr("linearDamping",*(char ***)param_1);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,&local_e8);
        Bt2PhysicsRBObject::setLinearDamping(this,local_e8);
      }
      pcVar5 = (char *)ExpatUtil::getAttr("angularDamping",*(char ***)param_1);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,&local_ec);
        Bt2PhysicsRBObject::setAngularDamping(this,local_ec);
      }
      pcVar5 = (char *)ExpatUtil::getAttr("rollingFriction",*(char ***)param_1);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,&fStack_f0);
        Bt2PhysicsRBObject::setRollingFriction(this,local_ec);
      }
      pcVar5 = (char *)ExpatUtil::getAttr("density",*(char ***)param_1);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,&local_f4);
        Bt2PhysicsRBObject::setDensity(this,local_f4);
      }
      pcVar5 = (char *)ExpatUtil::getAttr("solverIterationCount",*(char ***)param_1);
      if (pcVar5 != (char *)0x0) {
        uVar4 = StringUtil::strtouint(pcVar5);
        Bt2PhysicsRBObject::setSolverIterationCount(this,uVar4);
      }
    }
  }
  if (((param_7) &&
      (pcVar5 = (char *)ExpatUtil::getAttr("joint",*(char ***)param_1), pcVar5 != (char *)0x0)) &&
     (iVar3 = strcasecmp(pcVar5,"false"), iVar3 != 0)) {
    this_00 = (Bt2PhysicsJointObject *)operator_new(0x90);
                    /* try { // try from 00931af0 to 00931af7 has its CatchHandler @ 00932020 */
    Bt2PhysicsJointObject::Bt2PhysicsJointObject(this_00,param_3);
    RawTransformGroup::setPhysicsObject((RawTransformGroup *)param_3,(PhysicsObject *)this_00);
    pcVar5 = (char *)ExpatUtil::getAttr("projection",*(char ***)param_1);
    if ((pcVar5 != (char *)0x0) && (iVar3 = strcasecmp(pcVar5,"false"), iVar3 != 0)) {
      ppcVar6 = *(char ***)param_1;
      *(uint *)(this_00 + 8) = *(uint *)(this_00 + 8) | 0x40;
      pcVar5 = (char *)ExpatUtil::getAttr("projDistance",ppcVar6);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,&local_dc);
        Bt2PhysicsJointObject::setProjDistance(this_00,local_dc);
      }
      pcVar5 = (char *)ExpatUtil::getAttr("projAngle",*(char ***)param_1);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,&local_e0);
        Bt2PhysicsJointObject::setProjAngle(this_00,local_e0);
      }
    }
    pcVar5 = (char *)ExpatUtil::getAttr("xAxisDrive",*(char ***)param_1);
    if ((pcVar5 == (char *)0x0) || (iVar3 = strcasecmp(pcVar5,"false"), iVar3 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      *(uint *)(this_00 + 8) = *(uint *)(this_00 + 8) | 0x80;
    }
    pcVar5 = (char *)ExpatUtil::getAttr("yAxisDrive",*(char ***)param_1);
    if ((pcVar5 != (char *)0x0) && (iVar3 = strcasecmp(pcVar5,"false"), iVar3 != 0)) {
      bVar2 = true;
      *(uint *)(this_00 + 8) = *(uint *)(this_00 + 8) | 0x100;
    }
    pcVar5 = (char *)ExpatUtil::getAttr("zAxisDrive",*(char ***)param_1);
    if ((pcVar5 != (char *)0x0) && (iVar3 = strcasecmp(pcVar5,"false"), iVar3 != 0)) {
      bVar2 = true;
      *(uint *)(this_00 + 8) = *(uint *)(this_00 + 8) | 0x200;
    }
    pcVar5 = (char *)ExpatUtil::getAttr("drivePos",*(char ***)param_1);
    if ((pcVar5 != (char *)0x0) && (iVar3 = strcasecmp(pcVar5,"false"), iVar3 != 0)) {
      *(uint *)(this_00 + 8) = *(uint *)(this_00 + 8) | 0x400;
    }
    if (bVar2) {
      pcVar5 = (char *)ExpatUtil::getAttr("driveForceLimit",*(char ***)param_1);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,&local_dc);
        Bt2PhysicsJointObject::setDriveForceLimit(this_00,local_dc);
      }
      pcVar5 = (char *)ExpatUtil::getAttr("driveSpring",*(char ***)param_1);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,&local_e0);
        Bt2PhysicsJointObject::setDriveSpring(this_00,local_e0);
      }
      pcVar5 = (char *)ExpatUtil::getAttr("driveDamping",*(char ***)param_1);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,&local_e4);
        Bt2PhysicsJointObject::setDriveDamping(this_00,local_e4);
      }
    }
    pcVar5 = (char *)ExpatUtil::getAttr("breakableJoint",*(char ***)param_1);
    if ((pcVar5 != (char *)0x0) && (iVar3 = strcasecmp(pcVar5,"false"), iVar3 != 0)) {
      ppcVar6 = *(char ***)param_1;
      *(uint *)(this_00 + 8) = *(uint *)(this_00 + 8) | 0x800;
      pcVar5 = (char *)ExpatUtil::getAttr("jointBreakForce",ppcVar6);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,&local_dc);
        Bt2PhysicsJointObject::setBreakForce(this_00,local_dc);
      }
      pcVar5 = (char *)ExpatUtil::getAttr("jointBreakTorque",*(char ***)param_1);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,&local_e0);
        Bt2PhysicsJointObject::setBreakTorque(this_00,local_e0);
      }
    }
    lVar11 = 0;
    do {
      pcVar5 = (char *)ExpatUtil::getAttr((char *)((long)&DAT_00519b60 +
                                                  (long)(int)(&DAT_00519b60)[lVar11]),
                                          *(char ***)param_1);
      uVar4 = (uint)lVar11;
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,&local_dc);
        Bt2PhysicsJointObject::setRotMin(this_00,uVar4,local_dc);
        Bt2PhysicsJointObject::setIsRotLimited(this_00,uVar4,true);
      }
      pcVar5 = (char *)ExpatUtil::getAttr((char *)((long)&DAT_00519b6c +
                                                  (long)(int)(&DAT_00519b6c)[lVar11]),
                                          *(char ***)param_1);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,&local_e0);
        Bt2PhysicsJointObject::setRotMax(this_00,uVar4,local_e0);
        Bt2PhysicsJointObject::setIsRotLimited(this_00,uVar4,true);
      }
      pcVar5 = (char *)ExpatUtil::getAttr((char *)((long)&DAT_00519b78 +
                                                  (long)(int)(&DAT_00519b78)[lVar11]),
                                          *(char ***)param_1);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,&local_e4);
        Bt2PhysicsJointObject::setTransMin(this_00,uVar4,local_e4);
        Bt2PhysicsJointObject::setIsTransLimited(this_00,uVar4,true);
      }
      pcVar5 = (char *)ExpatUtil::getAttr((char *)((long)&DAT_00519b84 +
                                                  (long)(int)(&DAT_00519b84)[lVar11]),
                                          *(char ***)param_1);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,&local_e8);
        Bt2PhysicsJointObject::setTransMax(this_00,uVar4,local_e8);
        Bt2PhysicsJointObject::setIsTransLimited(this_00,uVar4,true);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 != 3);
  }
  pcVar5 = (char *)ExpatUtil::getAttr("clipDistance",*(char ***)param_1);
  if (pcVar5 != (char *)0x0) {
    StringUtil::atof(pcVar5,&local_dc);
    fVar14 = 0.0;
    if (0.0 < local_dc) {
      fVar14 = local_dc;
    }
    RawTransformGroup::setClipDistance((RawTransformGroup *)param_3,fVar14);
  }
  pcVar5 = (char *)ExpatUtil::getAttr("minClipDistance",*(char ***)param_1);
  if (pcVar5 != (char *)0x0) {
    StringUtil::atof(pcVar5,&local_e0);
    fVar14 = 0.0;
    if (0.0 < local_e0) {
      fVar14 = local_e0;
    }
    RawTransformGroup::setMinClipDistance((RawTransformGroup *)param_3,fVar14);
  }
  pcVar5 = (char *)ExpatUtil::getAttr("objectMask",*(char ***)param_1);
  if (pcVar5 != (char *)0x0) {
    uVar4 = StringUtil::strtouint(pcVar5);
    RawTransformGroup::setObjectMask((RawTransformGroup *)param_3,uVar4);
  }
  readVisibilityCondition(param_3,param_1);
  pcVar5 = (char *)ExpatUtil::getAttr("nodeId",*(char ***)param_1);
  if ((pcVar5 != (char *)0x0) && (uVar4 = StringUtil::strtouint(pcVar5), param_6)) {
    pplVar8 = (long **)(param_2 + 0x138);
    pplVar9 = *(long ***)(param_2 + 0x138);
    pplVar10 = pplVar8;
    while (pplVar9 != (long **)0x0) {
      while (pplVar10 = pplVar9, uVar4 < *(uint *)(pplVar10 + 4)) {
        pplVar8 = pplVar10;
        pplVar9 = (long **)*pplVar10;
        if ((long **)*pplVar10 == (long **)0x0) {
          plVar7 = *pplVar10;
          goto joined_r0x00931f88;
        }
      }
      if (uVar4 <= *(uint *)(pplVar10 + 4)) break;
      pplVar8 = pplVar10 + 1;
      pplVar9 = (long **)*pplVar8;
    }
    plVar7 = *pplVar8;
joined_r0x00931f88:
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)operator_new(0x30);
      *(uint *)(plVar7 + 4) = uVar4;
      plVar7[5] = (long)param_3;
      *plVar7 = 0;
      plVar7[1] = 0;
      plVar7[2] = (long)pplVar10;
      *pplVar8 = plVar7;
      if (**(long **)(param_2 + 0x130) != 0) {
        *(long *)(param_2 + 0x130) = **(long **)(param_2 + 0x130);
        plVar7 = *pplVar8;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(param_2 + 0x138),(__tree_node_base *)plVar7);
      *(long *)(param_2 + 0x140) = *(long *)(param_2 + 0x140) + 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


