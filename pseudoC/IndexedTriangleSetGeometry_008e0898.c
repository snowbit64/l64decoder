// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IndexedTriangleSetGeometry
// Entry Point: 008e0898
// Size: 484 bytes
// Signature: undefined __thiscall IndexedTriangleSetGeometry(IndexedTriangleSetGeometry * this, char * param_1, IndexedTriangleSet * param_2, Vector3 * param_3, float param_4)


/* IndexedTriangleSetGeometry::IndexedTriangleSetGeometry(char const*, IndexedTriangleSet*, Vector3
   const&, float) */

void __thiscall
IndexedTriangleSetGeometry::IndexedTriangleSetGeometry
          (IndexedTriangleSetGeometry *this,char *param_1,IndexedTriangleSet *param_2,
          Vector3 *param_3,float param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  BoundingVolume *pBVar4;
  BoundingSphere *this_00;
  
  Geometry::Geometry((Geometry *)this,param_1,false);
                    /* try { // try from 008e08d0 to 008e08d7 has its CatchHandler @ 008e0aa0 */
  Streamable::Streamable((Streamable *)(this + 0x58));
  *(undefined ***)this = &PTR__IndexedTriangleSetGeometry_00fde4e8;
  *(undefined ***)(this + 0x10) = &PTR__IndexedTriangleSetGeometry_00fde550;
  *(undefined ***)(this + 0x58) = &PTR__IndexedTriangleSetGeometry_00fde570;
  *(ulong *)(this + 0x30) = *(ulong *)(this + 0x30) & 0xffffffe3ffffffff | 1;
                    /* try { // try from 008e0910 to 008e09f3 has its CatchHandler @ 008e0aa8 */
  iVar1 = TriangleSet::getNumVertices();
  if ((iVar1 == 0) || (iVar1 = IndexedTriangleSet::getNumIndices(), iVar1 == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008e0a44 to 008e0a4f has its CatchHandler @ 008e0a7c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Mesh \'%s\' has zero triangles.\n",param_1);
  }
  IndexedTriangleSet::optimize();
  uVar2 = TriangleSet::getAttributes();
  uVar3 = IndexedTriangleSetGeometryUtil::getVertexDeclarationAttributes(uVar2 | 2);
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0x148) = 1;
  *(undefined4 *)(this + 0x38) = uVar3;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x68) = uVar3;
  *(undefined8 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = uVar3;
  *(undefined8 *)(this + 0x7c) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = uVar3;
  *(undefined8 *)(this + 0x8c) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = uVar3;
  *(undefined8 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0x3f80000000000000;
  if (param_4 == 0.0) {
    pBVar4 = (BoundingVolume *)TriangleSet::createBoundingVolume();
    Geometry::setBoundingVolume((Geometry *)this,pBVar4);
  }
  else {
    this_00 = (BoundingSphere *)operator_new(0x20);
                    /* try { // try from 008e09f8 to 008e0a03 has its CatchHandler @ 008e0a90 */
    BoundingSphere::BoundingSphere(this_00,param_3,param_4);
                    /* try { // try from 008e0a04 to 008e0a1b has its CatchHandler @ 008e0aa8 */
    Geometry::setBoundingVolume((Geometry *)this,(BoundingVolume *)this_00);
  }
  Geometry::setCollisionProxyMesh((Geometry *)this,param_2);
  return;
}


