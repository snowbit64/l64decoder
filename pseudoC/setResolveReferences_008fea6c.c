// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setResolveReferences
// Entry Point: 008fea6c
// Size: 12 bytes
// Signature: undefined __thiscall setResolveReferences(I3DLoad * this, bool param_1, map * param_2)


/* I3DLoad::setResolveReferences(bool, std::__ndk1::map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::pair<TransformGroup*, bool>, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const,
   std::__ndk1::pair<TransformGroup*, bool> > > >*) */

void __thiscall I3DLoad::setResolveReferences(I3DLoad *this,bool param_1,map *param_2)

{
  this[0x70] = (I3DLoad)param_1;
  *(map **)(this + 0x78) = param_2;
  return;
}


