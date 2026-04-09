// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~I3DLoad
// Entry Point: 008fde9c
// Size: 496 bytes
// Signature: undefined __thiscall ~I3DLoad(I3DLoad * this)


/* I3DLoad::~I3DLoad() */

void __thiscall I3DLoad::~I3DLoad(I3DLoad *this)

{
  I3DLoad IVar1;
  void *pvVar2;
  I3DMaterialPoolFactory *this_00;
  I3DShapePoolFactory *this_01;
  I3DIndexedMeshSetFactory *this_02;
  I3DSceneGraphFactory *this_03;
  I3DAnimationSetsFactory *this_04;
  I3DDynamicsPoolFactory *this_05;
  I3DUserAttributesFactory *this_06;
  
  this_00 = *(I3DMaterialPoolFactory **)(this + 0x268);
  *(undefined ***)this = &PTR__I3DLoad_00fdfae8;
  if (this_00 != (I3DMaterialPoolFactory *)0x0) {
    I3DMaterialPoolFactory::~I3DMaterialPoolFactory(this_00);
    operator_delete(this_00);
  }
  this_01 = *(I3DShapePoolFactory **)(this + 0x270);
  if (this_01 != (I3DShapePoolFactory *)0x0) {
    I3DShapePoolFactory::~I3DShapePoolFactory(this_01);
    operator_delete(this_01);
  }
  this_02 = *(I3DIndexedMeshSetFactory **)(this + 0x278);
  if (this_02 != (I3DIndexedMeshSetFactory *)0x0) {
    I3DIndexedMeshSetFactory::~I3DIndexedMeshSetFactory(this_02);
    operator_delete(this_02);
  }
  this_03 = *(I3DSceneGraphFactory **)(this + 0x280);
  if (this_03 != (I3DSceneGraphFactory *)0x0) {
    I3DSceneGraphFactory::~I3DSceneGraphFactory(this_03);
    operator_delete(this_03);
  }
  this_04 = *(I3DAnimationSetsFactory **)(this + 0x288);
  if (this_04 != (I3DAnimationSetsFactory *)0x0) {
    I3DAnimationSetsFactory::~I3DAnimationSetsFactory(this_04);
    operator_delete(this_04);
  }
  this_05 = *(I3DDynamicsPoolFactory **)(this + 0x290);
  if (this_05 != (I3DDynamicsPoolFactory *)0x0) {
    I3DDynamicsPoolFactory::~I3DDynamicsPoolFactory(this_05);
    operator_delete(this_05);
  }
  this_06 = *(I3DUserAttributesFactory **)(this + 0x298);
  if (this_06 != (I3DUserAttributesFactory *)0x0) {
    I3DUserAttributesFactory::~I3DUserAttributesFactory(this_06);
    operator_delete(this_06);
  }
  if (((byte)this[0x228] & 1) == 0) {
    IVar1 = this[0x210];
  }
  else {
    operator_delete(*(void **)(this + 0x238));
    IVar1 = this[0x210];
  }
  if (((byte)IVar1 & 1) == 0) {
    IVar1 = this[0x1f8];
  }
  else {
    operator_delete(*(void **)(this + 0x220));
    IVar1 = this[0x1f8];
  }
  if (((byte)IVar1 & 1) == 0) {
    pvVar2 = *(void **)(this + 0x1e0);
  }
  else {
    operator_delete(*(void **)(this + 0x208));
    pvVar2 = *(void **)(this + 0x1e0);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1e8) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x1c8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1d0) = pvVar2;
    operator_delete(pvVar2);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<MeshSplitGeometry*,GsShape*>,std::__ndk1::__map_value_compare<MeshSplitGeometry*,std::__ndk1::__value_type<MeshSplitGeometry*,GsShape*>,std::__ndk1::less<MeshSplitGeometry*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MeshSplitGeometry*,GsShape*>>>
  ::destroy((__tree<std::__ndk1::__value_type<MeshSplitGeometry*,GsShape*>,std::__ndk1::__map_value_compare<MeshSplitGeometry*,std::__ndk1::__value_type<MeshSplitGeometry*,GsShape*>,std::__ndk1::less<MeshSplitGeometry*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MeshSplitGeometry*,GsShape*>>>
             *)(this + 400),*(__tree_node **)(this + 0x198));
  std::__ndk1::
  __tree<MeshSplitGeometry*,std::__ndk1::less<MeshSplitGeometry*>,std::__ndk1::allocator<MeshSplitGeometry*>>
  ::destroy((__tree<MeshSplitGeometry*,std::__ndk1::less<MeshSplitGeometry*>,std::__ndk1::allocator<MeshSplitGeometry*>>
             *)(this + 0x178),*(__tree_node **)(this + 0x180));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<Geometry*,MeshSplitGeometry*>,std::__ndk1::__map_value_compare<Geometry*,std::__ndk1::__value_type<Geometry*,MeshSplitGeometry*>,std::__ndk1::less<Geometry*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<Geometry*,MeshSplitGeometry*>>>
  ::destroy((__tree<std::__ndk1::__value_type<Geometry*,MeshSplitGeometry*>,std::__ndk1::__map_value_compare<Geometry*,std::__ndk1::__value_type<Geometry*,MeshSplitGeometry*>,std::__ndk1::less<Geometry*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<Geometry*,MeshSplitGeometry*>>>
             *)(this + 0x160),*(__tree_node **)(this + 0x168));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,NavigationMesh*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,NavigationMesh*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,NavigationMesh*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,NavigationMesh*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,NavigationMesh*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,NavigationMesh*>>>
             *)(this + 0x148),*(__tree_node **)(this + 0x150));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,TransformGroup*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,TransformGroup*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,TransformGroup*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,TransformGroup*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,TransformGroup*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,TransformGroup*>>>
             *)(this + 0x130),*(__tree_node **)(this + 0x138));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,TransformGroup*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,TransformGroup*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,TransformGroup*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,TransformGroup*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,TransformGroup*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,TransformGroup*>>>
             *)(this + 0x118),*(__tree_node **)(this + 0x120));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,GsShape*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,GsShape*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,GsShape*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,GsShape*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,GsShape*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,GsShape*>>>
             *)(this + 0x100),*(__tree_node **)(this + 0x108));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,GsMaterial*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,GsMaterial*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,GsMaterial*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,GsMaterial*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,GsMaterial*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,GsMaterial*>>>
             *)(this + 0xe8),*(__tree_node **)(this + 0xf0));
  pvVar2 = *(void **)(this + 0xd0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xd8) = pvVar2;
    operator_delete(pvVar2);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,Geometry*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,Geometry*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,Geometry*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,Geometry*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,Geometry*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,Geometry*>>>
             *)(this + 0xb8),*(__tree_node **)(this + 0xc0));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,GsMaterial*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,GsMaterial*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,GsMaterial*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,GsMaterial*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,GsMaterial*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,GsMaterial*>>>
             *)(this + 0xa0),*(__tree_node **)(this + 0xa8));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,I3DLoad::FileData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,I3DLoad::FileData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,I3DLoad::FileData>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,I3DLoad::FileData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,I3DLoad::FileData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,I3DLoad::FileData>>>
             *)(this + 0x88),*(__tree_node **)(this + 0x90));
  std::__ndk1::__deque_base<TransformGroup*,std::__ndk1::allocator<TransformGroup*>>::~__deque_base
            ((__deque_base<TransformGroup*,std::__ndk1::allocator<TransformGroup*>> *)(this + 0x40))
  ;
  pvVar2 = *(void **)(this + 0x18);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar2;
    operator_delete(pvVar2);
  }
  Streamable::~Streamable((Streamable *)this);
  return;
}


