// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildOptimizedBvh
// Entry Point: 00f58c24
// Size: 288 bytes
// Signature: undefined buildOptimizedBvh(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btBvhTriangleMeshShape::buildOptimizedBvh() */

void btBvhTriangleMeshShape::buildOptimizedBvh(void)

{
  bool bVar1;
  long in_x0;
  undefined8 *this;
  btStridingMeshInterface *pbVar2;
  
  if (*(char *)(in_x0 + 0x59) != '\0') {
    (**(code **)**(undefined8 **)(in_x0 + 0x48))();
    if (*(long *)(in_x0 + 0x48) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
  }
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  this = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0xf8,0x10);
  *(undefined *)(this + 8) = 0;
  *(undefined4 *)(this + 7) = 0x11c;
  *(undefined *)(this + 0xc) = 1;
  this[0xb] = 0;
  *(undefined8 *)((long)this + 0x4c) = 0;
  *(undefined *)(this + 0x10) = 1;
  this[0xf] = 0;
  *(undefined8 *)((long)this + 0x6c) = 0;
  *(undefined *)(this + 0x14) = 1;
  this[0x13] = 0;
  *(undefined8 *)((long)this + 0x8c) = 0;
  *(undefined *)(this + 0x18) = 1;
  this[0x17] = 0;
  *(undefined8 *)((long)this + 0xac) = 0;
  *(undefined4 *)(this + 0x19) = 0;
  *(undefined8 *)((long)this + 0xd4) = 0;
  pbVar2 = *(btStridingMeshInterface **)(in_x0 + 0x40);
  *(undefined *)(this + 0x1d) = 1;
  this[2] = 0xff7fffff;
  this[1] = 0xff7fffffff7fffff;
  bVar1 = *(bool *)(in_x0 + 0x58);
  this[0x1c] = 0;
  *(undefined4 *)(this + 0x1e) = 0;
  *this = &PTR__btOptimizedBvh_0101ace8;
  this[4] = 0x7f7fffff;
  this[3] = 0x7f7fffff7f7fffff;
  *(undefined8 **)(in_x0 + 0x48) = this;
  btOptimizedBvh::build
            ((btOptimizedBvh *)this,pbVar2,bVar1,(btVector3 *)(in_x0 + 0x20),
             (btVector3 *)(in_x0 + 0x30));
  *(undefined *)(in_x0 + 0x59) = 1;
  return;
}


