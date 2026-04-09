// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 009001a0
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<MeshSplitGeometry*,GsShape*>,std::__ndk1::__map_value_compare<MeshSplitGeometry*,std::__ndk1::__value_type<MeshSplitGeometry*,GsShape*>,std::__ndk1::less<MeshSplitGeometry*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MeshSplitGeometry*,GsShape*>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<MeshSplitGeometry*, GsShape*>,
   std::__ndk1::__map_value_compare<MeshSplitGeometry*,
   std::__ndk1::__value_type<MeshSplitGeometry*, GsShape*>, std::__ndk1::less<MeshSplitGeometry*>,
   true>, std::__ndk1::allocator<std::__ndk1::__value_type<MeshSplitGeometry*, GsShape*> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<MeshSplitGeometry*, GsShape*>,
   void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<MeshSplitGeometry*,GsShape*>,std::__ndk1::__map_value_compare<MeshSplitGeometry*,std::__ndk1::__value_type<MeshSplitGeometry*,GsShape*>,std::__ndk1::less<MeshSplitGeometry*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MeshSplitGeometry*,GsShape*>>>
::destroy(__tree<std::__ndk1::__value_type<MeshSplitGeometry*,GsShape*>,std::__ndk1::__map_value_compare<MeshSplitGeometry*,std::__ndk1::__value_type<MeshSplitGeometry*,GsShape*>,std::__ndk1::less<MeshSplitGeometry*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MeshSplitGeometry*,GsShape*>>>
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


