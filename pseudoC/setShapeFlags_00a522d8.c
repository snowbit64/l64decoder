// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setShapeFlags
// Entry Point: 00a522d8
// Size: 308 bytes
// Signature: undefined __thiscall setShapeFlags(GsShape * this, uint param_1)


/* GsShape::setShapeFlags(unsigned int) */

void __thiscall GsShape::setShapeFlags(GsShape *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  void **ppvVar4;
  
  if (*(uint *)(this + 400) != param_1) {
    uVar1 = *(uint *)(this + 400) ^ param_1;
    *(uint *)(this + 400) = param_1;
    if (((param_1 & 1) == 0) && (*(undefined8 **)(this + 0x1f8) != (undefined8 *)0x0)) {
      ScenegraphNode::removeWorldTransformationDirtyListener
                (*(ScenegraphNode **)**(undefined8 **)(this + 0x1f8),
                 (WorldTransformationDirtyListener *)(this + 0x160));
      ppvVar4 = *(void ***)(this + 0x1f8);
      if (ppvVar4 != (void **)0x0) {
        if (*ppvVar4 != (void *)0x0) {
          operator_delete__(*ppvVar4);
        }
        *ppvVar4 = (void *)0x0;
        if (ppvVar4[1] != (void *)0x0) {
          operator_delete__(ppvVar4[1]);
        }
        ppvVar4[1] = (void *)0x0;
        if (ppvVar4[2] != (void *)0x0) {
          operator_delete__(ppvVar4[2]);
        }
        ppvVar4[2] = (void *)0x0;
        if (ppvVar4[3] != (void *)0x0) {
          operator_delete__(ppvVar4[3]);
        }
        operator_delete(ppvVar4);
      }
      *(undefined8 *)(this + 0x1f8) = 0;
    }
    if ((uVar1 & 0x1001400) != 0) {
      uVar2 = *(uint *)(this + 0x40);
      *(uint *)(this + 0x40) = uVar2 | 0x4000;
      if (((uVar2 >> 0xf & 1) == 0) &&
         (((uVar2 & 0x82000) != 0 ||
          (((uint)((*(uint *)(this + 400) & 0x1001400) != 0x400) & uVar2 >> 1) != 0)))) {
        *(uint *)(this + 0x40) = uVar2 | 0xc000;
        CullingManager::addDirtyShape
                  ((CullingManager *)CullingManager::s_cullingManagerInstance,this);
      }
    }
    if (((((param_1 & uVar1) >> 0xc & 1) != 0) && (*(long *)(this + 0x170) != 0)) &&
       (lVar3 = Geometry::getCollisionProxyMesh(), lVar3 != 0)) {
      lVar3 = Geometry::getCollisionProxyMesh();
      *(uint *)(lVar3 + 0x8c) = *(uint *)(lVar3 + 0x8c) | 0x200;
    }
  }
  return;
}


