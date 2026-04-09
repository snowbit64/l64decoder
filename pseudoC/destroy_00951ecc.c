// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00951ecc
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<GsMaterial*,std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,void*>*,long>>>,std::__ndk1::__map_value_compare<GsMaterial*,std::__ndk1::__value_type<GsMaterial*,std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,void*>*,long>>>,std::__ndk1::less<GsMaterial*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<GsMaterial*,std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,void*>*,long>>>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<GsMaterial*,
   std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<MaterialDesc,
   GsMaterial*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<MaterialDesc, GsMaterial*>,
   void*>*, long> > >, std::__ndk1::__map_value_compare<GsMaterial*,
   std::__ndk1::__value_type<GsMaterial*,
   std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<MaterialDesc,
   GsMaterial*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<MaterialDesc, GsMaterial*>,
   void*>*, long> > >, std::__ndk1::less<GsMaterial*>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<GsMaterial*,
   std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<MaterialDesc,
   GsMaterial*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<MaterialDesc, GsMaterial*>,
   void*>*, long> > > > >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<GsMaterial*,
   std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<MaterialDesc,
   GsMaterial*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<MaterialDesc, GsMaterial*>,
   void*>*, long> > >, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<GsMaterial*,std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,void*>*,long>>>,std::__ndk1::__map_value_compare<GsMaterial*,std::__ndk1::__value_type<GsMaterial*,std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,void*>*,long>>>,std::__ndk1::less<GsMaterial*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<GsMaterial*,std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,void*>*,long>>>>>
::destroy(__tree<std::__ndk1::__value_type<GsMaterial*,std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,void*>*,long>>>,std::__ndk1::__map_value_compare<GsMaterial*,std::__ndk1::__value_type<GsMaterial*,std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,void*>*,long>>>,std::__ndk1::less<GsMaterial*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<GsMaterial*,std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,void*>*,long>>>>>
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


