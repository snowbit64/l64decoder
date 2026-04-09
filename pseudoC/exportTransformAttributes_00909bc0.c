// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exportTransformAttributes
// Entry Point: 00909bc0
// Size: 2468 bytes
// Signature: undefined __cdecl exportTransformAttributes(TransformGroup * param_1, map * param_2, map * param_3, FileOutputStream * param_4)


/* WARNING: Type propagation algorithm not settling */
/* I3DSave::exportTransformAttributes(TransformGroup*, std::__ndk1::map<TransformGroup*,
   I3DSave::I3DTransformPoseObject, std::__ndk1::less<TransformGroup*>,
   std::__ndk1::allocator<std::__ndk1::pair<TransformGroup* const, I3DSave::I3DTransformPoseObject>
   > >&, std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, SceneSave::SerializeFile,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, SceneSave::SerializeFile> >
   >&, FileOutputStream&) */

void I3DSave::exportTransformAttributes
               (TransformGroup *param_1,map *param_2,map *param_3,FileOutputStream *param_4)

{
  uint uVar1;
  long lVar2;
  __tree_iterator _Var3;
  size_t __n;
  long lVar4;
  Bt2PhysicsJointObject *this;
  ulong uVar5;
  char *pcVar6;
  map **ppmVar7;
  map **ppmVar8;
  uint uVar9;
  uint uVar10;
  map **ppmVar11;
  uint uVar12;
  void *__dest;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  FileOutputStream *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  void *local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  local_c8 = param_4;
  I3DWriter::writeUtf8StringAttribute((I3DWriter *)&local_c8,"name",*(char **)(param_1 + 8),true);
  uVar10 = *(uint *)(param_1 + 0x40);
  if ((uVar10 >> 0xb & 1) == 0) {
    local_98 = *(map **)(param_1 + 0x130);
    local_90 = *(float *)(param_1 + 0x138);
    uVar12 = uVar10;
LAB_00909c5c:
    fVar16 = *(float *)(param_1 + 0x13c);
    fVar15 = *(float *)(param_1 + 0x140);
    fVar14 = *(float *)(param_1 + 0x144);
  }
  else {
    TransformGroup::updateEulerFromMatrix();
    uVar12 = *(uint *)(param_1 + 0x40);
    local_98 = *(map **)(param_1 + 0x130);
    local_90 = *(float *)(param_1 + 0x138);
    if ((uVar12 >> 0xb & 1) == 0) goto LAB_00909c5c;
    TransformGroup::updateEulerFromMatrix();
    uVar12 = *(uint *)(param_1 + 0x40);
    fVar16 = *(float *)(param_1 + 0x13c);
    fVar15 = *(float *)(param_1 + 0x140);
    fVar14 = *(float *)(param_1 + 0x144);
    if ((uVar12 >> 0xb & 1) != 0) {
      TransformGroup::updateEulerFromMatrix();
      uVar12 = *(uint *)(param_1 + 0x40);
    }
  }
  local_a8 = *(map **)(param_1 + 0x148);
  local_a0 = *(float *)(param_1 + 0x150);
  pcVar6 = "";
  if (*(char **)(param_1 + 0x100) != (char *)0x0) {
    pcVar6 = *(char **)(param_1 + 0x100);
  }
  if (*pcVar6 == '\0') {
    uVar9 = 0;
  }
  else {
    __n = strlen(pcVar6);
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      __dest = (void *)((ulong)&local_c0 | 1);
      local_c0 = CONCAT71(local_c0._1_7_,(char)((int)__n << 1));
      if (__n != 0) goto LAB_00909cf0;
    }
    else {
      uVar5 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar5);
      local_c0 = uVar5 | 1;
      local_b8 = __n;
      local_b0 = __dest;
LAB_00909cf0:
      memcpy(__dest,pcVar6,__n);
    }
    *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00909d04 to 00909d0f has its CatchHandler @ 0090a564 */
    _Var3 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                        *)param_3,(basic_string *)&local_c0);
    if (param_3 + 8 == (map *)(ulong)_Var3) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)((map *)(ulong)_Var3 + 0x38);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
  }
  ppmVar11 = (map **)(param_2 + 8);
  ppmVar8 = (map **)*ppmVar11;
  uVar12 = uVar12 & 1;
  ppmVar7 = ppmVar11;
  if (ppmVar8 != (map **)0x0) {
    do {
      if ((TransformGroup *)ppmVar8[4] >= param_1) {
        ppmVar7 = ppmVar8;
      }
      ppmVar8 = (map **)ppmVar8[(TransformGroup *)ppmVar8[4] < param_1];
    } while (ppmVar8 != (map **)0x0);
    if (((ppmVar7 != ppmVar11) && ((TransformGroup *)ppmVar7[4] <= param_1)) &&
       (*(long *)(param_1 + 0x110) != 0)) {
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x110) + 0x20) + 0xc);
      if ((uVar1 & 1) != 0) {
        local_98 = ppmVar7[5];
        local_90 = *(float *)(ppmVar7 + 6);
      }
      if ((uVar1 >> 1 & 1) != 0) {
        fVar16 = *(float *)((long)ppmVar7 + 0x34);
        fVar15 = *(float *)(ppmVar7 + 7);
        fVar14 = *(float *)((long)ppmVar7 + 0x3c);
      }
      if ((uVar1 >> 2 & 1) != 0) {
        local_a8 = ppmVar7[8];
        local_a0 = *(float *)(ppmVar7 + 9);
      }
      if ((uVar1 >> 3 & 1) != 0) {
        uVar12 = (uint)(*(map *)((long)ppmVar7 + 0x4c) != (map)0x0);
      }
    }
  }
  if ((uVar10 >> 7 & 1) != 0) {
    I3DWriter::writeBoolAttribute((I3DWriter *)&local_c8,"lockedgroup",true);
  }
  if ((((float)local_98 != 0.0) || (local_98._4_4_ != 0.0)) || (local_90 != 0.0)) {
    I3DWriter::writeFloatVectorAttribute((I3DWriter *)&local_c8,"translation",(float *)&local_98,3);
  }
  uVar13 = MathUtil::radianToDegree(fVar16);
  local_c0 = CONCAT44(local_c0._4_4_,uVar13);
  fVar16 = (float)MathUtil::radianToDegree(fVar15);
  local_c0._4_4_ = fVar16;
  fVar16 = (float)MathUtil::radianToDegree(fVar14);
  local_b8 = CONCAT44(local_b8._4_4_,fVar16);
  if ((((float)local_c0 != 0.0) || (local_c0._4_4_ != 0.0)) || (fVar16 != 0.0)) {
    I3DWriter::writeFloatVectorAttribute((I3DWriter *)&local_c8,"rotation",(float *)&local_c0,3);
  }
  if ((((float)local_a8 != 1.0) || (local_a8._4_4_ != 1.0)) || (local_a0 != 1.0)) {
    I3DWriter::writeFloatVectorAttribute((I3DWriter *)&local_c8,"scale",(float *)&local_a8,3);
  }
  if (uVar9 != 0) {
    I3DWriter::writeUint32Attribute((I3DWriter *)&local_c8,"referenceId",uVar9);
  }
  if (uVar12 == 0) {
    I3DWriter::writeBoolAttribute((I3DWriter *)&local_c8,"visibility",false);
  }
  if ((((byte)param_1[0x11] & 0xa0) != 0) ||
     (lVar4 = RawTransformGroup::getPhysicsObject(), (*(byte *)(lVar4 + 8) >> 3 & 1) == 0)) {
    lVar4 = RawTransformGroup::getPhysicsObject();
    if ((*(byte *)(lVar4 + 8) >> 4 & 1) != 0) {
      I3DWriter::writeBoolAttribute((I3DWriter *)&local_c8,"joint",true);
      this = (Bt2PhysicsJointObject *)RawTransformGroup::getPhysicsObject();
      uVar10 = *(uint *)(this + 8);
      if ((uVar10 >> 6 & 1) != 0) {
        I3DWriter::writeBoolAttribute((I3DWriter *)&local_c8,"projection",true);
        fVar16 = (float)Bt2PhysicsJointObject::getProjDistance();
        I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"projDistance",fVar16);
        fVar16 = (float)Bt2PhysicsJointObject::getProjAngle();
        I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"projAngle",fVar16);
        uVar10 = *(uint *)(this + 8);
      }
      uVar12 = uVar10;
      if ((uVar10 >> 7 & 1) != 0) {
        I3DWriter::writeBoolAttribute((I3DWriter *)&local_c8,"xAxisDrive",true);
        uVar12 = *(uint *)(this + 8);
      }
      uVar9 = uVar12 & 0x100;
      if ((uVar12 >> 8 & 1) != 0) {
        I3DWriter::writeBoolAttribute((I3DWriter *)&local_c8,"yAxisDrive",true);
        uVar12 = *(uint *)(this + 8);
      }
      uVar1 = uVar12 & 0x200;
      if ((uVar12 >> 9 & 1) != 0) {
        I3DWriter::writeBoolAttribute((I3DWriter *)&local_c8,"zAxisDrive",true);
        uVar12 = *(uint *)(this + 8);
      }
      if ((uVar12 >> 10 & 1) != 0) {
        I3DWriter::writeBoolAttribute((I3DWriter *)&local_c8,"drivePos",true);
      }
      if ((uVar9 | uVar10 & 0x80 | uVar1) != 0) {
        fVar16 = (float)Bt2PhysicsJointObject::getDriveForceLimit();
        I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"driveForceLimit",fVar16);
        fVar16 = (float)Bt2PhysicsJointObject::getDriveSpring();
        I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"driveSpring",fVar16);
        fVar16 = (float)Bt2PhysicsJointObject::getDriveDamping();
        I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"driveDamping",fVar16);
      }
      if (((byte)this[9] >> 3 & 1) != 0) {
        I3DWriter::writeBoolAttribute((I3DWriter *)&local_c8,"breakableJoint",true);
      }
      fVar16 = (float)Bt2PhysicsJointObject::getBreakForce();
      if (fVar16 != 100000.0) {
        I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"jointBreakForce",fVar16);
      }
      fVar16 = (float)Bt2PhysicsJointObject::getBreakTorque();
      if (fVar16 != 100000.0) {
        I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"jointBreakTorque",fVar16);
      }
      uVar5 = Bt2PhysicsJointObject::getIsRotLimited(this,0);
      if ((uVar5 & 1) != 0) {
        fVar16 = (float)Bt2PhysicsJointObject::getRotMin(this,0);
        I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"rotMinX",fVar16);
        fVar16 = (float)Bt2PhysicsJointObject::getRotMax(this,0);
        I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"rotMaxX",fVar16);
      }
      uVar5 = Bt2PhysicsJointObject::getIsTransLimited(this,0);
      if ((uVar5 & 1) != 0) {
        fVar16 = (float)Bt2PhysicsJointObject::getTransMin(this,0);
        I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"transMinX",fVar16);
        fVar16 = (float)Bt2PhysicsJointObject::getTransMax(this,0);
        I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"transMaxX",fVar16);
      }
      uVar5 = Bt2PhysicsJointObject::getIsRotLimited(this,1);
      if ((uVar5 & 1) != 0) {
        fVar16 = (float)Bt2PhysicsJointObject::getRotMin(this,1);
        I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"rotMinY",fVar16);
        fVar16 = (float)Bt2PhysicsJointObject::getRotMax(this,1);
        I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"rotMaxY",fVar16);
      }
      uVar5 = Bt2PhysicsJointObject::getIsTransLimited(this,1);
      if ((uVar5 & 1) != 0) {
        fVar16 = (float)Bt2PhysicsJointObject::getTransMin(this,1);
        I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"transMinY",fVar16);
        fVar16 = (float)Bt2PhysicsJointObject::getTransMax(this,1);
        I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"transMaxY",fVar16);
      }
      uVar5 = Bt2PhysicsJointObject::getIsRotLimited(this,2);
      if ((uVar5 & 1) != 0) {
        fVar16 = (float)Bt2PhysicsJointObject::getRotMin(this,2);
        I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"rotMinZ",fVar16);
        fVar16 = (float)Bt2PhysicsJointObject::getRotMax(this,2);
        I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"rotMaxZ",fVar16);
      }
      uVar5 = Bt2PhysicsJointObject::getIsTransLimited(this,2);
      if ((uVar5 & 1) != 0) {
        fVar16 = (float)Bt2PhysicsJointObject::getTransMin(this,2);
        I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"transMinZ",fVar16);
        fVar16 = (float)Bt2PhysicsJointObject::getTransMax(this,2);
        I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"transMaxZ",fVar16);
      }
    }
    goto LAB_0090a460;
  }
  lVar4 = RawTransformGroup::getPhysicsObject();
  uVar10 = *(uint *)(lVar4 + 8);
  if ((uVar10 >> 6 & 1) == 0) {
    if ((uVar10 >> 7 & 1) != 0) {
      pcVar6 = "dynamic";
      goto LAB_0090a314;
    }
    if ((uVar10 >> 8 & 1) != 0) {
      pcVar6 = "kinematic";
      goto LAB_0090a314;
    }
  }
  else {
    pcVar6 = "static";
LAB_0090a314:
    I3DWriter::writeBoolAttribute((I3DWriter *)&local_c8,pcVar6,true);
  }
  if ((*(uint *)(lVar4 + 8) >> 9 & 1) == 0) {
    if ((*(uint *)(lVar4 + 8) >> 10 & 1) != 0) {
      pcVar6 = "compoundChild";
      goto LAB_0090a524;
    }
    uVar10 = *(uint *)(lVar4 + 8);
  }
  else {
    pcVar6 = "compound";
LAB_0090a524:
    I3DWriter::writeBoolAttribute((I3DWriter *)&local_c8,pcVar6,true);
    uVar10 = *(uint *)(lVar4 + 8);
  }
  if ((uVar10 >> 0xb & 1) == 0) {
    I3DWriter::writeBoolAttribute((I3DWriter *)&local_c8,"collision",false);
    uVar10 = *(uint *)(lVar4 + 8);
  }
  if ((uVar10 >> 0xc & 1) != 0) {
    I3DWriter::writeBoolAttribute((I3DWriter *)&local_c8,"trigger",true);
  }
  if (*(uint *)(lVar4 + 0x58) != 0xff) {
    I3DWriter::writeUint32Attribute((I3DWriter *)&local_c8,"collisionMask",*(uint *)(lVar4 + 0x58));
  }
  if (*(float *)(lVar4 + 0x5c) != 0.0) {
    I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"restitution",*(float *)(lVar4 + 0x5c));
  }
  if (*(float *)(lVar4 + 0x60) != 0.5) {
    I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"staticFriction",*(float *)(lVar4 + 0x60))
    ;
  }
  if (*(float *)(lVar4 + 100) != 0.5) {
    I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"dynamicFriction",*(float *)(lVar4 + 100))
    ;
  }
  if (*(float *)(lVar4 + 0x6c) != 0.0) {
    I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"linearDamping",*(float *)(lVar4 + 0x6c));
  }
  if (*(float *)(lVar4 + 0x70) != 0.01) {
    I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"angularDamping",*(float *)(lVar4 + 0x70))
    ;
  }
  if (*(float *)(lVar4 + 0x68) != -1.0) {
    I3DWriter::writeFloatAttribute
              ((I3DWriter *)&local_c8,"rollingFriction",*(float *)(lVar4 + 0x68));
  }
  if (*(float *)(lVar4 + 0x74) != 1.0) {
    I3DWriter::writeFloatAttribute((I3DWriter *)&local_c8,"density",*(float *)(lVar4 + 0x74));
  }
  if (*(uint *)(lVar4 + 0x8c) != 4) {
    I3DWriter::writeUint32Attribute
              ((I3DWriter *)&local_c8,"solverIterationCount",*(uint *)(lVar4 + 0x8c));
  }
LAB_0090a460:
  if (*(float *)(param_1 + 0x118) != 1000000.0) {
    I3DWriter::writeFloatAttribute
              ((I3DWriter *)&local_c8,"clipDistance",*(float *)(param_1 + 0x118));
  }
  if (*(float *)(param_1 + 0x11c) != 0.0) {
    I3DWriter::writeFloatAttribute
              ((I3DWriter *)&local_c8,"minClipDistance",*(float *)(param_1 + 0x11c));
  }
  if ((((byte)param_1[0x41] >> 2 & 1) != 0) && (*(uint *)(param_1 + 0x120) != 0)) {
    I3DWriter::writeUint32Attribute((I3DWriter *)&local_c8,"objectMask",*(uint *)(param_1 + 0x120));
  }
  I3DWriter::writeUint32Attribute((I3DWriter *)&local_c8,"nodeId",*(uint *)(param_1 + 0x18));
  if (*(long *)(lVar2 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


