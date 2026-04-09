// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DestructionShape
// Entry Point: 009225e8
// Size: 532 bytes
// Signature: undefined __thiscall ~DestructionShape(DestructionShape * this)


/* DestructionShape::~DestructionShape() */

void __thiscall DestructionShape::~DestructionShape(DestructionShape *this)

{
  bool bVar1;
  UpdateManager *this_00;
  void *pvVar2;
  long lVar3;
  DestructionShape *pDVar4;
  DestructionShape **ppDVar5;
  DestructionShape **ppDVar6;
  long lVar7;
  
  *(undefined ***)this = &PTR__DestructionShape_00fdfcf8;
  *(undefined ***)(this + 0x158) = &PTR__DestructionShape_00fdfd88;
  *(undefined ***)(this + 0x160) = &PTR__DestructionShape_00fdfdb0;
  *(undefined ***)(this + 0x200) = &PTR__DestructionShape_00fdfde0;
  *(undefined ***)(this + 0x210) = &PTR__DestructionShape_00fdfe08;
  *(undefined ***)(this + 0x218) = &PTR__DestructionShape_00fdfe30;
                    /* try { // try from 00922634 to 0092263f has its CatchHandler @ 009227fc */
  this_00 = (UpdateManager *)UpdateManager::getInstance();
  UpdateManager::removeUpdateable(this_00,(Updateable *)(this + 0x218));
  if (*(long **)(this + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x108) + 8))();
  }
  *(undefined8 *)(this + 0x108) = 0;
  ppDVar6 = *(DestructionShape ***)(this + 0x278);
  while (ppDVar6 != (DestructionShape **)(this + 0x280)) {
    pDVar4 = ppDVar6[5];
    if (pDVar4 == this) {
      pDVar4 = ppDVar6[6];
    }
                    /* try { // try from 00922704 to 00922707 has its CatchHandler @ 00922800 */
    std::__ndk1::
    __tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
    ::__erase_unique<DestructionShape::InterShapeJointToAdd>
              ((__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
                *)(pDVar4 + 0x278),(InterShapeJointToAdd *)(ppDVar6 + 4));
    ppDVar5 = (DestructionShape **)ppDVar6[1];
    if ((DestructionShape **)ppDVar6[1] == (DestructionShape **)0x0) {
      ppDVar5 = ppDVar6 + 2;
      bVar1 = (DestructionShape **)*(DestructionShape **)*ppDVar5 != ppDVar6;
      ppDVar6 = (DestructionShape **)*ppDVar5;
      if (bVar1) {
        do {
          pDVar4 = *ppDVar5;
          ppDVar5 = (DestructionShape **)(pDVar4 + 0x10);
          ppDVar6 = (DestructionShape **)*ppDVar5;
        } while (*ppDVar6 != pDVar4);
      }
    }
    else {
      do {
        ppDVar6 = ppDVar5;
        ppDVar5 = (DestructionShape **)*ppDVar6;
      } while ((DestructionShape **)*ppDVar6 != (DestructionShape **)0x0);
    }
  }
  std::__ndk1::
  __tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
  ::destroy((__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
             *)(this + 0x278),*(__tree_node **)(this + 0x280));
  *(DestructionShape **)(this + 0x278) = this + 0x280;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  free(*(void **)(this + 0x340));
  *(undefined8 *)(this + 0x340) = 0;
  if (*(void **)(this + 0x348) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x348));
  }
  lVar7 = *(long *)(this + 0x228);
  *(undefined8 *)(this + 0x348) = 0;
  if (lVar7 != 0) {
    lVar3 = *(long *)(lVar7 + -8);
    if (lVar3 != 0) {
      lVar3 = lVar3 * 0x30;
      do {
        pvVar2 = *(void **)(lVar7 + lVar3 + -0x28);
        if (pvVar2 != (void *)0x0) {
          *(void **)(lVar7 + lVar3 + -0x20) = pvVar2;
          operator_delete(pvVar2);
        }
        lVar3 = lVar3 + -0x30;
      } while (lVar3 != 0);
    }
    operator_delete__((long *)(lVar7 + -8));
  }
  *(undefined8 *)(this + 0x228) = 0;
  if (*(long **)(this + 0x3b8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x3b8) + 8))();
  }
  if (*(long **)(this + 0x3c8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x3c8) + 8))();
  }
  pvVar2 = *(void **)(this + 0x390);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x398) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x378);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x380) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x360);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x368) = pvVar2;
    operator_delete(pvVar2);
  }
  std::__ndk1::
  __tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
  ::destroy((__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
             *)(this + 0x278),*(__tree_node **)(this + 0x280));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,DestructionShape::InterShapeJoint>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,DestructionShape::InterShapeJoint>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,DestructionShape::InterShapeJoint>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,DestructionShape::InterShapeJoint>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,DestructionShape::InterShapeJoint>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,DestructionShape::InterShapeJoint>>>
             *)(this + 0x260),*(__tree_node **)(this + 0x268));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,DestructionShape::JointInfo>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,DestructionShape::JointInfo>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,DestructionShape::JointInfo>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,DestructionShape::JointInfo>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,DestructionShape::JointInfo>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,DestructionShape::JointInfo>>>
             *)(this + 0x248),*(__tree_node **)(this + 0x250));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
             *)(this + 0x230),*(__tree_node **)(this + 0x238));
  GsShape::~GsShape((GsShape *)this);
  return;
}


