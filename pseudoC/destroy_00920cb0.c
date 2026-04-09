// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00920cb0
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<Bt2PhysicsCookedDataSet::CookingId,std::__ndk1::less<Bt2PhysicsCookedDataSet::CookingId>,std::__ndk1::allocator<Bt2PhysicsCookedDataSet::CookingId>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<Bt2PhysicsCookedDataSet::CookingId,
   std::__ndk1::less<Bt2PhysicsCookedDataSet::CookingId>,
   std::__ndk1::allocator<Bt2PhysicsCookedDataSet::CookingId>
   >::destroy(std::__ndk1::__tree_node<Bt2PhysicsCookedDataSet::CookingId, void*>*) */

void __thiscall
std::__ndk1::
__tree<Bt2PhysicsCookedDataSet::CookingId,std::__ndk1::less<Bt2PhysicsCookedDataSet::CookingId>,std::__ndk1::allocator<Bt2PhysicsCookedDataSet::CookingId>>
::destroy(__tree<Bt2PhysicsCookedDataSet::CookingId,std::__ndk1::less<Bt2PhysicsCookedDataSet::CookingId>,std::__ndk1::allocator<Bt2PhysicsCookedDataSet::CookingId>>
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


