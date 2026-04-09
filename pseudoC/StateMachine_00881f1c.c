// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~StateMachine
// Entry Point: 00881f1c
// Size: 256 bytes
// Signature: undefined __thiscall ~StateMachine(StateMachine * this)


/* StateMachine::~StateMachine() */

void __thiscall StateMachine::~StateMachine(StateMachine *this)

{
  void *pvVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  __tree_node **pp_Var5;
  ulong uVar6;
  
  pp_Var5 = (__tree_node **)(this + 0x20);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<State*,std::__ndk1::vector<std::__ndk1::pair<StateTransition*,State*>,std::__ndk1::allocator<std::__ndk1::pair<StateTransition*,State*>>>>,std::__ndk1::__map_value_compare<State*,std::__ndk1::__value_type<State*,std::__ndk1::vector<std::__ndk1::pair<StateTransition*,State*>,std::__ndk1::allocator<std::__ndk1::pair<StateTransition*,State*>>>>,std::__ndk1::less<State*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<State*,std::__ndk1::vector<std::__ndk1::pair<StateTransition*,State*>,std::__ndk1::allocator<std::__ndk1::pair<StateTransition*,State*>>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<State*,std::__ndk1::vector<std::__ndk1::pair<StateTransition*,State*>,std::__ndk1::allocator<std::__ndk1::pair<StateTransition*,State*>>>>,std::__ndk1::__map_value_compare<State*,std::__ndk1::__value_type<State*,std::__ndk1::vector<std::__ndk1::pair<StateTransition*,State*>,std::__ndk1::allocator<std::__ndk1::pair<StateTransition*,State*>>>>,std::__ndk1::less<State*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<State*,std::__ndk1::vector<std::__ndk1::pair<StateTransition*,State*>,std::__ndk1::allocator<std::__ndk1::pair<StateTransition*,State*>>>>>>
             *)(this + 0x18),*pp_Var5);
  pvVar1 = *(void **)(this + 0x50);
  *(__tree_node ***)(this + 0x18) = pp_Var5;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar1 != *(void **)(this + 0x48)) {
    uVar6 = 0;
    pvVar4 = *(void **)(this + 0x48);
    pvVar3 = pvVar1;
    do {
      pvVar1 = pvVar4;
      plVar2 = *(long **)((long)pvVar1 + uVar6 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        pvVar1 = *(void **)(this + 0x48);
        pvVar3 = *(void **)(this + 0x50);
      }
      uVar6 = (ulong)((int)uVar6 + 1);
      pvVar4 = pvVar1;
    } while (uVar6 < (ulong)((long)pvVar3 - (long)pvVar1 >> 3));
  }
  pvVar3 = *(void **)(this + 0x30);
  pvVar4 = *(void **)(this + 0x38);
  if (pvVar4 != pvVar3) {
    uVar6 = 0;
    do {
      plVar2 = *(long **)((long)pvVar3 + uVar6 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        pvVar3 = *(void **)(this + 0x30);
        pvVar4 = *(void **)(this + 0x38);
      }
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < (ulong)((long)pvVar4 - (long)pvVar3 >> 3));
    pvVar1 = *(void **)(this + 0x48);
    pvVar4 = pvVar3;
  }
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar1;
    operator_delete(pvVar1);
    pvVar4 = *(void **)(this + 0x30);
  }
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar4;
    operator_delete(pvVar4);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<State*,std::__ndk1::vector<std::__ndk1::pair<StateTransition*,State*>,std::__ndk1::allocator<std::__ndk1::pair<StateTransition*,State*>>>>,std::__ndk1::__map_value_compare<State*,std::__ndk1::__value_type<State*,std::__ndk1::vector<std::__ndk1::pair<StateTransition*,State*>,std::__ndk1::allocator<std::__ndk1::pair<StateTransition*,State*>>>>,std::__ndk1::less<State*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<State*,std::__ndk1::vector<std::__ndk1::pair<StateTransition*,State*>,std::__ndk1::allocator<std::__ndk1::pair<StateTransition*,State*>>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<State*,std::__ndk1::vector<std::__ndk1::pair<StateTransition*,State*>,std::__ndk1::allocator<std::__ndk1::pair<StateTransition*,State*>>>>,std::__ndk1::__map_value_compare<State*,std::__ndk1::__value_type<State*,std::__ndk1::vector<std::__ndk1::pair<StateTransition*,State*>,std::__ndk1::allocator<std::__ndk1::pair<StateTransition*,State*>>>>,std::__ndk1::less<State*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<State*,std::__ndk1::vector<std::__ndk1::pair<StateTransition*,State*>,std::__ndk1::allocator<std::__ndk1::pair<StateTransition*,State*>>>>>>
             *)(this + 0x18),*pp_Var5);
  return;
}


