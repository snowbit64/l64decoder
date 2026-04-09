// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGeometry
// Entry Point: 00a51358
// Size: 580 bytes
// Signature: undefined __thiscall setGeometry(GsShape * this, Geometry * param_1)


/* GsShape::setGeometry(Geometry*) */

void __thiscall GsShape::setGeometry(GsShape *this,Geometry *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  void **ppvVar5;
  long *this_00;
  
  this_00 = *(long **)(this + 0x170);
  if (this_00 == (long *)param_1) {
    return;
  }
  if (this_00 != (long *)0x0) {
    uVar3 = *(uint *)(this_00 + 6);
    if ((uVar3 >> 5 & 1) != 0) {
      DynamicGeometry::removeBoundingVolumeDirtyListener
                ((DynamicGeometry *)this_00,(BoundingVolumeDirtyListener *)(this + 0x158));
      this_00 = *(long **)(this + 0x170);
      uVar3 = *(uint *)(this_00 + 6);
    }
    if ((uVar3 >> 1 & 1) != 0) {
      ParticleSystem::setParentShape((ParticleSystem *)this_00,(GsShape *)0x0);
      ParticleSystem::setEffectiveVisibility((ParticleSystem *)this_00,false);
      this_00 = *(long **)(this + 0x170);
    }
    iVar1 = FUN_00f27700(0xffffffff,this_00 + 1);
    if (iVar1 < 2) {
      (**(code **)(*this_00 + 0x10))(this_00);
    }
  }
  *(Geometry **)(this + 0x170) = param_1;
  if (param_1 == (Geometry *)0x0) {
    uVar3 = *(uint *)(this + 400);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x30);
    if ((uVar3 >> 5 & 1) != 0) {
      DynamicGeometry::addBoundingVolumeDirtyListener
                ((DynamicGeometry *)param_1,(BoundingVolumeDirtyListener *)(this + 0x158));
      param_1 = *(Geometry **)(this + 0x170);
      uVar3 = *(uint *)((ParticleSystem *)param_1 + 0x30);
    }
    if ((uVar3 >> 1 & 1) != 0) {
      ParticleSystem::setParentShape((ParticleSystem *)param_1,this);
      ParticleSystem::setEffectiveVisibility
                ((ParticleSystem *)param_1,(bool)((byte)(*(uint *)(this + 0x40) >> 1) & 1));
    }
    if ((((byte)this[0x191] >> 4 & 1) != 0) &&
       (lVar2 = Geometry::getCollisionProxyMesh(), lVar2 != 0)) {
      lVar2 = Geometry::getCollisionProxyMesh();
      *(uint *)(lVar2 + 0x8c) = *(uint *)(lVar2 + 0x8c) | 0x200;
    }
    FUN_00f276d0(1,*(long *)(this + 0x170) + 8);
    uVar3 = *(uint *)(this + 400);
    if (*(long *)(this + 0x170) != 0) {
      uVar4 = *(uint *)(*(long *)(this + 0x170) + 0x34);
      if ((uVar4 & 1) == 0) {
        uVar3 = uVar3 & 0xfffffffc;
      }
      else if ((uVar4 >> 1 & 1) == 0) {
        uVar3 = uVar3 & 0xfffffffc | 1;
      }
      else {
        uVar3 = uVar3 | 3;
      }
      uVar4 = uVar4 & 0x1c;
      goto LAB_00a514a8;
    }
  }
  uVar4 = 0;
  uVar3 = uVar3 & 0xfffffffc;
LAB_00a514a8:
  setShapeFlags(this,uVar3 & 0xffffffe3 | uVar4);
  if (*(undefined8 **)(this + 0x1f8) != (undefined8 *)0x0) {
    ScenegraphNode::removeWorldTransformationDirtyListener
              (*(ScenegraphNode **)**(undefined8 **)(this + 0x1f8),
               (WorldTransformationDirtyListener *)(this + 0x160));
    ppvVar5 = *(void ***)(this + 0x1f8);
    if (ppvVar5 != (void **)0x0) {
      if (*ppvVar5 != (void *)0x0) {
        operator_delete__(*ppvVar5);
      }
      *ppvVar5 = (void *)0x0;
      if (ppvVar5[1] != (void *)0x0) {
        operator_delete__(ppvVar5[1]);
      }
      ppvVar5[1] = (void *)0x0;
      if (ppvVar5[2] != (void *)0x0) {
        operator_delete__(ppvVar5[2]);
      }
      ppvVar5[2] = (void *)0x0;
      if (ppvVar5[3] != (void *)0x0) {
        operator_delete__(ppvVar5[3]);
      }
      operator_delete(ppvVar5);
    }
    *(undefined8 *)(this + 0x1f8) = 0;
  }
  uVar3 = *(uint *)(this + 0x40);
  *(uint *)(this + 0x40) = uVar3 | 0x5000;
  if (((uVar3 >> 0xf & 1) == 0) &&
     (((uVar3 & 0x82000) != 0 ||
      (((uint)((*(uint *)(this + 400) & 0x1001400) != 0x400) & uVar3 >> 1) != 0)))) {
    *(uint *)(this + 0x40) = uVar3 | 0xd000;
    CullingManager::addDirtyShape((CullingManager *)CullingManager::s_cullingManagerInstance,this);
    return;
  }
  return;
}


