// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btScaledBvhTriangleMeshShape
// Entry Point: 00f696a8
// Size: 56 bytes
// Signature: undefined __thiscall btScaledBvhTriangleMeshShape(btScaledBvhTriangleMeshShape * this, btBvhTriangleMeshShape * param_1, btVector3 * param_2)


/* btScaledBvhTriangleMeshShape::btScaledBvhTriangleMeshShape(btBvhTriangleMeshShape*, btVector3
   const&) */

void __thiscall
btScaledBvhTriangleMeshShape::btScaledBvhTriangleMeshShape
          (btScaledBvhTriangleMeshShape *this,btBvhTriangleMeshShape *param_1,btVector3 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 8) = 0x23;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0xffffffff;
  *(undefined ***)this = &PTR__btScaledBvhTriangleMeshShape_0101b038;
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)param_2;
  *(btBvhTriangleMeshShape **)(this + 0x30) = param_1;
  *(undefined4 *)(this + 8) = 0x16;
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined8 *)(this + 0x20) = uVar1;
  return;
}


