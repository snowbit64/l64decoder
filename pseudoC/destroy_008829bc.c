// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 008829bc
// Size: 80 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<State*,std::__ndk1::vector<std::__ndk1::pair<StateTransition*,State*>,std::__ndk1::allocator<std::__ndk1::pair<StateTransition*,State*>>>>,std::__ndk1::__map_value_compare<State*,std::__ndk1::__value_type<State*,std::__ndk1::vector<std::__ndk1::pair<StateTransition*,State*>,std::__ndk1::allocator<std::__ndk1::pair<StateTransition*,State*>>>>,std::__ndk1::less<State*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<State*,std::__ndk1::vector<std::__ndk1::pair<StateTransition*,State*>,std::__ndk1::allocator<std::__ndk1::pair<StateTransition*,State*>>>>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<State*,
   std::__ndk1::vector<std::__ndk1::pair<StateTransition*, State*>,
   std::__ndk1::allocator<std::__ndk1::pair<StateTransition*, State*> > > >,
   std::__ndk1::__map_value_compare<State*, std::__ndk1::__value_type<State*,
   std::__ndk1::vector<std::__ndk1::pair<StateTransition*, State*>,
   std::__ndk1::allocator<std::__ndk1::pair<StateTransition*, State*> > > >,
   std::__ndk1::less<State*>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<State*,
   std::__ndk1::vector<std::__ndk1::pair<StateTransition*, State*>,
   std::__ndk1::allocator<std::__ndk1::pair<StateTransition*, State*> > > > >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<State*,
   std::__ndk1::vector<std::__ndk1::pair<StateTransition*, State*>,
   std::__ndk1::allocator<std::__ndk1::pair<StateTransition*, State*> > > >, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<State*,std::__ndk1::vector<std::__ndk1::pair<StateTransition*,State*>,std::__ndk1::allocator<std::__ndk1::pair<StateTransition*,State*>>>>,std::__ndk1::__map_value_compare<State*,std::__ndk1::__value_type<State*,std::__ndk1::vector<std::__ndk1::pair<StateTransition*,State*>,std::__ndk1::allocator<std::__ndk1::pair<StateTransition*,State*>>>>,std::__ndk1::less<State*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<State*,std::__ndk1::vector<std::__ndk1::pair<StateTransition*,State*>,std::__ndk1::allocator<std::__ndk1::pair<StateTransition*,State*>>>>>>
::destroy(__tree<std::__ndk1::__value_type<State*,std::__ndk1::vector<std::__ndk1::pair<StateTransition*,State*>,std::__ndk1::allocator<std::__ndk1::pair<StateTransition*,State*>>>>,std::__ndk1::__map_value_compare<State*,std::__ndk1::__value_type<State*,std::__ndk1::vector<std::__ndk1::pair<StateTransition*,State*>,std::__ndk1::allocator<std::__ndk1::pair<StateTransition*,State*>>>>,std::__ndk1::less<State*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<State*,std::__ndk1::vector<std::__ndk1::pair<StateTransition*,State*>,std::__ndk1::allocator<std::__ndk1::pair<StateTransition*,State*>>>>>>
          *this,__tree_node *param_1)

{
  void *pvVar1;
  
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    pvVar1 = *(void **)(param_1 + 0x28);
    if (pvVar1 != (void *)0x0) {
      *(void **)(param_1 + 0x30) = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(param_1);
    return;
  }
  return;
}


