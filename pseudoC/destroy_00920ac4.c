// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00920ac4
// Size: 80 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>,std::__ndk1::__map_value_compare<IndexedTriangleSet*,std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>,std::__ndk1::less<IndexedTriangleSet*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<IndexedTriangleSet*, SceneSave::I3DShapeObject>,
   std::__ndk1::__map_value_compare<IndexedTriangleSet*,
   std::__ndk1::__value_type<IndexedTriangleSet*, SceneSave::I3DShapeObject>,
   std::__ndk1::less<IndexedTriangleSet*>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<IndexedTriangleSet*, SceneSave::I3DShapeObject>
   > >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<IndexedTriangleSet*,
   SceneSave::I3DShapeObject>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>,std::__ndk1::__map_value_compare<IndexedTriangleSet*,std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>,std::__ndk1::less<IndexedTriangleSet*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>>>
::destroy(__tree<std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>,std::__ndk1::__map_value_compare<IndexedTriangleSet*,std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>,std::__ndk1::less<IndexedTriangleSet*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    if (((byte)param_1[0x28] & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x38));
    }
    operator_delete(param_1);
    return;
  }
  return;
}


