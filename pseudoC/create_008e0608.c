// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: create
// Entry Point: 008e0608
// Size: 560 bytes
// Signature: undefined __cdecl create(float param_1, float param_2, float param_3, float param_4, vector * param_5, TransformGroup * param_6, TransformGroup * param_7, vector * param_8, GsMaterial * param_9, TransformGroup * param_10, vector * param_11, uint * param_12, float * param_13)


/* TensionBeltGeometryUtil::create(float, float, float, float,
   std::__ndk1::vector<TensionBeltGeometryUtil::Attacher,
   std::__ndk1::allocator<TensionBeltGeometryUtil::Attacher> > const&, TransformGroup*,
   TransformGroup*, std::__ndk1::vector<std::__ndk1::pair<GsShape*,
   std::__ndk1::pair<std::__ndk1::pair<float, float>, std::__ndk1::pair<float, float> > >,
   std::__ndk1::allocator<std::__ndk1::pair<GsShape*, std::__ndk1::pair<std::__ndk1::pair<float,
   float>, std::__ndk1::pair<float, float> > > > > const&, GsMaterial*, TransformGroup*,
   std::__ndk1::vector<std::__ndk1::pair<Vector3, Vector3>,
   std::__ndk1::allocator<std::__ndk1::pair<Vector3, Vector3> > > const&, unsigned int&, float&) */

long * TensionBeltGeometryUtil::create
                 (float param_1,float param_2,float param_3,float param_4,vector *param_5,
                 TransformGroup *param_6,TransformGroup *param_7,vector *param_8,GsMaterial *param_9
                 ,TransformGroup *param_10,vector *param_11,uint *param_12,float *param_13)

{
  ulong __n;
  long lVar1;
  TransformGroup **__s;
  IndexedTriangleSet *pIVar2;
  IndexedTriangleSetGeometry *this;
  long *this_00;
  MaterialManager *this_01;
  StreamManager *this_02;
  ulong uVar3;
  TransformGroup **ppTVar4;
  Vector3 aVStack_98 [16];
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  uVar3 = (*(long *)(param_5 + 8) - *(long *)param_5 >> 2) * -0x5555555555555555;
  if ((int)uVar3 == 0) {
    __s = (TransformGroup **)0x0;
  }
  else {
    __n = (uVar3 & 0xffffffff) << 3;
    __s = (TransformGroup **)operator_new__(__n);
    memset(__s,0,__n);
  }
  pIVar2 = (IndexedTriangleSet *)
           createBeltMesh(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                          __s,param_11,param_12,param_13);
  this = (IndexedTriangleSetGeometry *)operator_new(0x168);
                    /* try { // try from 008e0704 to 008e071b has its CatchHandler @ 008e0844 */
  IndexedTriangleSetGeometry::IndexedTriangleSetGeometry(this,"BeltGeometry",pIVar2,aVStack_98,0.0);
  this_00 = (long *)operator_new(0x200);
                    /* try { // try from 008e0728 to 008e0737 has its CatchHandler @ 008e0838 */
  GsShape::GsShape((GsShape *)this_00,"BeltShape",(Geometry *)this);
  GsShape::setShapeFlags((GsShape *)this_00,*(uint *)(this_00 + 0x32) | 0x300);
  if (param_9 == (GsMaterial *)0x0) {
    this_01 = (MaterialManager *)MaterialManager::getInstance();
    param_9 = (GsMaterial *)MaterialManager::getDefaultMaterial(this_01,1);
  }
  else {
    GsMaterial::validateTextures(param_9,1);
  }
  GsShape::addMaterial((GsShape *)this_00,param_9);
  if ((int)uVar3 != 0) {
    uVar3 = uVar3 & 0xffffffff;
    ppTVar4 = __s;
    do {
      if (*ppTVar4 != (TransformGroup *)0x0) {
        (**(code **)(*this_00 + 0x18))(this_00,*ppTVar4,0xffffffff);
      }
      ppTVar4 = ppTVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  this_02 = (StreamManager *)StreamManager::getInstance();
  StreamManager::addStreamable(this_02,(Streamable *)(this + 0x58),1);
  (**(code **)(*(long *)param_10 + 0x18))(param_10,this_00,0xffffffff);
  if (__s != (TransformGroup **)0x0) {
    operator_delete__(__s);
  }
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


