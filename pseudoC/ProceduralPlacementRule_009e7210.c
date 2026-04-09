// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementRule
// Entry Point: 009e7210
// Size: 96 bytes
// Signature: undefined __thiscall ~ProceduralPlacementRule(ProceduralPlacementRule * this)


/* ProceduralPlacementRule::~ProceduralPlacementRule() */

void __thiscall ProceduralPlacementRule::~ProceduralPlacementRule(ProceduralPlacementRule *this)

{
  *(undefined ***)this = &PTR__ProceduralPlacementRule_00fe2a70;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>>>
             *)(this + 0xa8),*(__tree_node **)(this + 0xb0));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>>>
             *)(this + 0x90),*(__tree_node **)(this + 0x98));
  ProceduralPlacementRuleDesc::~ProceduralPlacementRuleDesc
            ((ProceduralPlacementRuleDesc *)(this + 0x20));
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
  operator_delete(this);
  return;
}


