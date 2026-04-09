// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00920c24
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>,std::__ndk1::__map_value_compare<SharedParticleSystemDesc,std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>,std::__ndk1::less<SharedParticleSystemDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<SharedParticleSystemDesc, unsigned int>,
   std::__ndk1::__map_value_compare<SharedParticleSystemDesc,
   std::__ndk1::__value_type<SharedParticleSystemDesc, unsigned int>,
   std::__ndk1::less<SharedParticleSystemDesc>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<SharedParticleSystemDesc, unsigned int> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<SharedParticleSystemDesc, unsigned
   int>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>,std::__ndk1::__map_value_compare<SharedParticleSystemDesc,std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>,std::__ndk1::less<SharedParticleSystemDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>>>
::destroy(__tree<std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>,std::__ndk1::__map_value_compare<SharedParticleSystemDesc,std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>,std::__ndk1::less<SharedParticleSystemDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SharedParticleSystemDesc,unsigned_int>>>
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


