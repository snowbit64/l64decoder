// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MeshSplitGeometry
// Entry Point: 0097ab18
// Size: 324 bytes
// Signature: undefined __thiscall MeshSplitGeometry(MeshSplitGeometry * this, char * param_1, IndexedTriangleSet * param_2, Vector3 * param_3, float param_4, Brep * param_5, uint param_6, Brep * * param_7, uint param_8)


/* MeshSplitGeometry::MeshSplitGeometry(char const*, IndexedTriangleSet*, Vector3 const&, float,
   Brep*, unsigned int, Brep**, unsigned int) */

void __thiscall
MeshSplitGeometry::MeshSplitGeometry
          (MeshSplitGeometry *this,char *param_1,IndexedTriangleSet *param_2,Vector3 *param_3,
          float param_4,Brep *param_5,uint param_6,Brep **param_7,uint param_8)

{
  long *this_00;
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  IndexedTriangleSetGeometry::IndexedTriangleSetGeometry
            ((IndexedTriangleSetGeometry *)this,param_1,param_2,param_3,param_4);
  this_00 = (long *)(this + 0x178);
  *(undefined8 *)(this + 0x180) = 0;
  *this_00 = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined ***)this = &PTR__MeshSplitGeometry_00fe0800;
  *(undefined ***)(this + 0x10) = &PTR__MeshSplitGeometry_00fe0898;
  *(undefined ***)(this + 0x58) = &PTR__MeshSplitGeometry_00fe08b8;
  *(undefined ***)(this + 0x168) = &PTR_removeCollisionRef_00fe08e8;
  *(Brep **)(this + 0x170) = param_5;
  *(ulong *)(this + 0x30) = *(ulong *)(this + 0x30) & 0xffffffe3ffffffff | 0x400;
                    /* try { // try from 0097aba0 to 0097abab has its CatchHandler @ 0097ac60 */
  std::__ndk1::vector<Brep*,std::__ndk1::allocator<Brep*>>::assign<Brep**>
            ((vector<Brep*,std::__ndk1::allocator<Brep*>> *)this_00,param_7,param_7 + param_6);
                    /* try { // try from 0097abac to 0097abb3 has its CatchHandler @ 0097ac64 */
  ScenegraphPhysicsContextManager::getInstance();
  ScenegraphPhysicsContextManager::getContext();
  FUN_00f276d0(1,*(long *)(this + 0x170) + 8);
  lVar1 = *(long *)(this + 0x178);
  lVar2 = *(long *)(this + 0x180);
  uVar6 = lVar2 - lVar1 >> 3;
  uVar4 = uVar6 & 0xffffffff;
  uVar5 = *(long *)(this + 0x198) - *(long *)(this + 400) >> 2;
  if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
    if (uVar4 < uVar5) {
      *(ulong *)(this + 0x198) = *(long *)(this + 400) + uVar4 * 4;
    }
  }
  else {
                    /* try { // try from 0097abec to 0097abf3 has its CatchHandler @ 0097ac5c */
    std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
              ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(this + 400),
               uVar4 - uVar5);
  }
  if ((int)uVar6 != 0) {
    uVar4 = 0;
    do {
      FUN_00f276d0(1,*(long *)(*this_00 + uVar4 * 8) + 8);
                    /* try { // try from 0097ac24 to 0097ac2b has its CatchHandler @ 0097ac68 */
      uVar3 = Bt2ScenegraphPhysicsContext::getNextConvexMeshId();
      *(undefined4 *)(*(long *)(this + 400) + uVar4 * 4) = uVar3;
      uVar4 = uVar4 + 1;
    } while (((ulong)(lVar2 - lVar1) >> 3 & 0xffffffff) != uVar4);
  }
  *(uint *)(this + 0x1a8) = param_8;
  return;
}


