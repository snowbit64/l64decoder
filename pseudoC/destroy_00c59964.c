// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00c59964
// Size: 56 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<SHC_String, GsTSymbol*>,
   std::__ndk1::__map_value_compare<SHC_String, std::__ndk1::__value_type<SHC_String, GsTSymbol*>,
   std::__ndk1::less<SHC_String>, true>, SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,
   GsTSymbol*> > >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<SHC_String,
   GsTSymbol*>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
::destroy(__tree<std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::__map_value_compare<SHC_String,std::__ndk1::__value_type<SHC_String,GsTSymbol*>,std::__ndk1::less<SHC_String>,true>,SHC_STLPoolAllocator<std::__ndk1::__value_type<SHC_String,GsTSymbol*>>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    do {
      destroy(this,*(__tree_node **)param_1);
      param_1 = *(__tree_node **)((long)param_1 + 8);
    } while ((__tree_node **)param_1 != (__tree_node **)0x0);
  }
  return;
}


