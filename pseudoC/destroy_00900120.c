// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00900120
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<Geometry*,MeshSplitGeometry*>,std::__ndk1::__map_value_compare<Geometry*,std::__ndk1::__value_type<Geometry*,MeshSplitGeometry*>,std::__ndk1::less<Geometry*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<Geometry*,MeshSplitGeometry*>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<Geometry*, MeshSplitGeometry*>,
   std::__ndk1::__map_value_compare<Geometry*, std::__ndk1::__value_type<Geometry*,
   MeshSplitGeometry*>, std::__ndk1::less<Geometry*>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<Geometry*, MeshSplitGeometry*> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<Geometry*, MeshSplitGeometry*>,
   void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<Geometry*,MeshSplitGeometry*>,std::__ndk1::__map_value_compare<Geometry*,std::__ndk1::__value_type<Geometry*,MeshSplitGeometry*>,std::__ndk1::less<Geometry*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<Geometry*,MeshSplitGeometry*>>>
::destroy(__tree<std::__ndk1::__value_type<Geometry*,MeshSplitGeometry*>,std::__ndk1::__map_value_compare<Geometry*,std::__ndk1::__value_type<Geometry*,MeshSplitGeometry*>,std::__ndk1::less<Geometry*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<Geometry*,MeshSplitGeometry*>>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    operator_delete(param_1);
    return;
  }
  return;
}


