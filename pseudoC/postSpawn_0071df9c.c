// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: postSpawn
// Entry Point: 0071df9c
// Size: 684 bytes
// Signature: undefined postSpawn(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TrafficVehicle::postSpawn() */

void TrafficVehicle::postSpawn(void)

{
  long lVar1;
  TrafficVehicle *in_x0;
  Bt2ScenegraphPhysicsContext *this;
  ScenegraphNode *pSVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  float fStack_64;
  undefined4 local_60;
  undefined4 local_58;
  float fStack_54;
  undefined4 local_50;
  float local_48;
  undefined4 local_44;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(in_x0 + 0x238) = 0;
  *(undefined4 *)(in_x0 + 0x1c8) = 0;
  (**(code **)(**(long **)(*(long *)(in_x0 + 0x1e8) + 8) + 0x10))
            (*(undefined4 *)(in_x0 + 0x214),*(long **)(*(long *)(in_x0 + 0x1e8) + 8),&local_58,
             &local_68);
  lVar3 = **(long **)(in_x0 + 0x1e8);
  RawTransformGroup::updateWorldTransformation();
  uVar4 = NEON_fmadd(local_58,*(undefined4 *)(lVar3 + 0xb8),fStack_54 * *(float *)(lVar3 + 200));
  fVar5 = (float)NEON_fmadd(local_50,*(undefined4 *)(lVar3 + 0xd8),uVar4);
  *(float *)(in_x0 + 0x16c) = fVar5 + *(float *)(lVar3 + 0xe8);
  uVar4 = NEON_fmadd(local_58,*(undefined4 *)(lVar3 + 0xbc),fStack_54 * *(float *)(lVar3 + 0xcc));
  fVar5 = (float)NEON_fmadd(local_50,*(undefined4 *)(lVar3 + 0xdc),uVar4);
  *(float *)(in_x0 + 0x170) = *(float *)(lVar3 + 0xec) + fVar5;
  uVar4 = NEON_fmadd(local_58,*(undefined4 *)(lVar3 + 0xc0),fStack_54 * *(float *)(lVar3 + 0xd0));
  fVar5 = (float)NEON_fmadd(local_50,*(undefined4 *)(lVar3 + 0xe0),uVar4);
  *(float *)(in_x0 + 0x174) = *(float *)(lVar3 + 0xf0) + fVar5;
  lVar3 = **(long **)(in_x0 + 0x1e8);
  RawTransformGroup::updateWorldTransformation();
  uVar4 = NEON_fmadd(local_68,*(undefined4 *)(lVar3 + 0xb8),fStack_64 * *(float *)(lVar3 + 200));
  fVar6 = (float)NEON_fmadd(local_60,*(undefined4 *)(lVar3 + 0xd8),uVar4);
  *(float *)(in_x0 + 0x178) = fVar6;
  uVar4 = NEON_fmadd(local_68,*(undefined4 *)(lVar3 + 0xbc),fStack_64 * *(float *)(lVar3 + 0xcc));
  fVar5 = (float)NEON_fmadd(local_60,*(undefined4 *)(lVar3 + 0xdc),uVar4);
  *(float *)(in_x0 + 0x17c) = fVar5;
  uVar4 = NEON_fmadd(local_68,*(undefined4 *)(lVar3 + 0xc0),fStack_64 * *(float *)(lVar3 + 0xd0));
  fVar7 = (float)NEON_fmadd(local_60,*(undefined4 *)(lVar3 + 0xe0),uVar4);
  uVar4 = NEON_fmadd(fVar6,fVar6,fVar5 * fVar5);
  fVar9 = (float)NEON_fmadd(fVar7,fVar7,uVar4);
  fVar8 = 1.0;
  if (1e-06 < fVar9) {
    fVar8 = 1.0 / SQRT(fVar9);
  }
  *(undefined8 *)(in_x0 + 0x354) = *(undefined8 *)(in_x0 + 0x16c);
  *(float *)(in_x0 + 0x178) = fVar6 * fVar8;
  *(float *)(in_x0 + 0x17c) = fVar5 * fVar8;
  *(float *)(in_x0 + 0x180) = fVar7 * fVar8;
  *(undefined4 *)(in_x0 + 0x35c) = *(undefined4 *)(in_x0 + 0x174);
  local_78 = 0;
  local_70 = 0;
  updatePosition(in_x0,(Vector3 *)&local_78,1.0,1.0,true,(Vector3 *)(in_x0 + 0x16c),
                 (Vector3 *)(in_x0 + 0x178),false);
  ScenegraphNode::setVisibility(*(ScenegraphNode **)(in_x0 + 0x50),true);
  if (in_x0[0x58] == (TrafficVehicle)0x0) {
    ScenegraphPhysicsContextManager::getInstance();
    this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    Bt2ScenegraphPhysicsContext::enqueueAddTransformGroup(this,*(TransformGroup **)(in_x0 + 0x50));
    in_x0[0x58] = (TrafficVehicle)0x1;
  }
  lVar3 = *(long *)(*(long *)(in_x0 + 0x1e8) + 0x10);
  if (lVar3 != 0) {
    *(uint *)(lVar3 + 0xc) = *(uint *)(lVar3 + 0xc) | *(uint *)(*(long *)(in_x0 + 0x1e8) + 0x18);
  }
  pSVar2 = *(ScenegraphNode **)(in_x0 + 0x1a8);
  *(undefined4 *)(in_x0 + 0x210) = 2;
  if (pSVar2 != (ScenegraphNode *)0x0) {
    if (*(float *)(in_x0 + 0x1c0) == 0.0) {
      ScenegraphNode::setVisibility(pSVar2,false);
      pSVar2 = *(ScenegraphNode **)(in_x0 + 0x240);
      goto joined_r0x0071e1f0;
    }
    if (((byte)pSVar2[0x11] >> 3 & 1) != 0) {
      local_48 = *(float *)(in_x0 + 0x1c4);
      local_40 = 0;
      local_44 = 0;
      GsShape::setCustomShaderParameter((GsShape *)pSVar2,"lightControl",&local_48);
    }
  }
  pSVar2 = *(ScenegraphNode **)(in_x0 + 0x240);
joined_r0x0071e1f0:
  if (pSVar2 != (ScenegraphNode *)0x0) {
    ScenegraphNode::setVisibility(pSVar2,true);
  }
  *(int *)(*(long *)(in_x0 + 0x1e8) + 0x4c) = *(int *)(*(long *)(in_x0 + 0x1e8) + 0x4c) + 1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


