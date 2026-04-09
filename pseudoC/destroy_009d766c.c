// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 009d766c
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>*>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<unsigned int,
   std::__ndk1::vector<PoissonDiskUtil::Point, std::__ndk1::allocator<PoissonDiskUtil::Point> >*>,
   std::__ndk1::__map_value_compare<unsigned int, std::__ndk1::__value_type<unsigned int,
   std::__ndk1::vector<PoissonDiskUtil::Point, std::__ndk1::allocator<PoissonDiskUtil::Point> >*>,
   std::__ndk1::less<unsigned int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<unsigned
   int, std::__ndk1::vector<PoissonDiskUtil::Point, std::__ndk1::allocator<PoissonDiskUtil::Point>
   >*> > >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned int,
   std::__ndk1::vector<PoissonDiskUtil::Point, std::__ndk1::allocator<PoissonDiskUtil::Point> >*>,
   void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>*>>>
::destroy(__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::vector<PoissonDiskUtil::Point,std::__ndk1::allocator<PoissonDiskUtil::Point>>*>>>
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


