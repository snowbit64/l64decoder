// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btBvhTriangleMeshShape
// Entry Point: 00f58020
// Size: 284 bytes
// Signature: undefined __thiscall btBvhTriangleMeshShape(btBvhTriangleMeshShape * this, btStridingMeshInterface * param_1, bool param_2, bool param_3)


/* btBvhTriangleMeshShape::btBvhTriangleMeshShape(btStridingMeshInterface*, bool, bool) */

void __thiscall
btBvhTriangleMeshShape::btBvhTriangleMeshShape
          (btBvhTriangleMeshShape *this,btStridingMeshInterface *param_1,bool param_2,bool param_3)

{
  btBvhTriangleMeshShape bVar1;
  undefined8 *this_00;
  btStridingMeshInterface *pbVar2;
  
  btTriangleMeshShape::btTriangleMeshShape((btTriangleMeshShape *)this,param_1);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  this[0x58] = (btBvhTriangleMeshShape)param_2;
  this[0x59] = (btBvhTriangleMeshShape)0x0;
  *(undefined4 *)(this + 8) = 0x15;
  *(undefined ***)this = &PTR__btBvhTriangleMeshShape_01019ef0;
  if (param_3) {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    this_00 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0xf8,0x10);
    *(undefined *)(this_00 + 8) = 0;
    *(undefined4 *)(this_00 + 7) = 0x11c;
    *(undefined *)(this_00 + 0xc) = 1;
    this_00[0xb] = 0;
    *(undefined8 *)((long)this_00 + 0x4c) = 0;
    *(undefined *)(this_00 + 0x10) = 1;
    this_00[0xf] = 0;
    *(undefined8 *)((long)this_00 + 0x6c) = 0;
    *(undefined *)(this_00 + 0x14) = 1;
    this_00[0x13] = 0;
    *(undefined8 *)((long)this_00 + 0x8c) = 0;
    *(undefined *)(this_00 + 0x18) = 1;
    this_00[0x17] = 0;
    *(undefined8 *)((long)this_00 + 0xac) = 0;
    *(undefined4 *)(this_00 + 0x19) = 0;
    *(undefined8 *)((long)this_00 + 0xd4) = 0;
    pbVar2 = *(btStridingMeshInterface **)(this + 0x40);
    *(undefined *)(this_00 + 0x1d) = 1;
    this_00[2] = 0xff7fffff;
    this_00[1] = 0xff7fffffff7fffff;
    bVar1 = this[0x58];
    this_00[0x1c] = 0;
    *(undefined4 *)(this_00 + 0x1e) = 0;
    *this_00 = &PTR__btOptimizedBvh_0101ace8;
    this_00[4] = 0x7f7fffff;
    this_00[3] = 0x7f7fffff7f7fffff;
    *(undefined8 **)(this + 0x48) = this_00;
    btOptimizedBvh::build
              ((btOptimizedBvh *)this_00,pbVar2,(bool)bVar1,(btVector3 *)(this + 0x20),
               (btVector3 *)(this + 0x30));
    this[0x59] = (btBvhTriangleMeshShape)0x1;
  }
  return;
}


