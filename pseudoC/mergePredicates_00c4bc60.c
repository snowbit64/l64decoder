// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mergePredicates
// Entry Point: 00c4bc60
// Size: 16 bytes
// Signature: undefined __thiscall mergePredicates(IR_Section * this, IR_Section * param_1)


/* IR_Section::mergePredicates(IR_Section const&) */

type __thiscall IR_Section::mergePredicates(IR_Section *this,IR_Section *param_1)

{
  type tVar1;
  
  tVar1 = std::__ndk1::vector<IR_Section::Predicate,std::__ndk1::allocator<IR_Section::Predicate>>::
          insert<std::__ndk1::__wrap_iter<IR_Section::Predicate_const*>>
                    ((vector<IR_Section::Predicate,std::__ndk1::allocator<IR_Section::Predicate>> *)
                     (this + 0x40),(__wrap_iter)*(undefined8 *)(this + 0x40),
                     (__wrap_iter)*(undefined8 *)(param_1 + 0x40),
                     (__wrap_iter)*(undefined8 *)(param_1 + 0x48));
  return tVar1;
}


