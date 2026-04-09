// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBindBonesFromShape
// Entry Point: 00a52700
// Size: 236 bytes
// Signature: undefined __thiscall setBindBonesFromShape(GsShape * this, GsShape * param_1)


/* GsShape::setBindBonesFromShape(GsShape*) */

undefined8 __thiscall GsShape::setBindBonesFromShape(GsShape *this,GsShape *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  size_t __n;
  
  if (param_1 == this) {
LAB_00a527d0:
    uVar2 = 1;
  }
  else {
    puVar3 = *(undefined8 **)(this + 0x1f8);
    if ((puVar3 != (undefined8 *)0x0) && (*(long *)(param_1 + 0x1f8) != 0)) {
      uVar1 = *(uint *)(puVar3 + 4);
      if (uVar1 == *(uint *)(*(long *)(param_1 + 0x1f8) + 0x20)) {
        ScenegraphNode::removeWorldTransformationDirtyListener
                  (*(ScenegraphNode **)*puVar3,(WorldTransformationDirtyListener *)(this + 0x160));
        memcpy(**(void ***)(this + 0x1f8),**(void ***)(param_1 + 0x1f8),(ulong)uVar1 << 3);
        memcpy(*(void **)(*(long *)(this + 0x1f8) + 8),*(void **)(*(long *)(param_1 + 0x1f8) + 8),
               (ulong)uVar1 << 6);
        __n = (ulong)(uVar1 << 3) << 2;
        memcpy(*(void **)(*(long *)(this + 0x1f8) + 0x10),
               *(void **)(*(long *)(param_1 + 0x1f8) + 0x10),__n);
        memcpy(*(void **)(*(long *)(this + 0x1f8) + 0x18),
               *(void **)(*(long *)(param_1 + 0x1f8) + 0x18),__n);
        ScenegraphNode::addWorldTransformationDirtyListener
                  (*(ScenegraphNode **)**(undefined8 **)(this + 0x1f8),
                   (WorldTransformationDirtyListener *)(this + 0x160));
        goto LAB_00a527d0;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


