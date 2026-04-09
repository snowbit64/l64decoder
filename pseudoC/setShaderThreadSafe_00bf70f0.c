// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setShaderThreadSafe
// Entry Point: 00bf70f0
// Size: 12 bytes
// Signature: undefined __thiscall setShaderThreadSafe(CompiledShaderArchive * this, __map_iterator param_1, uint param_2)


/* CompiledShaderArchive::setShaderThreadSafe(std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,
   unsigned int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId, unsigned
   int>, void*>*, long> >, unsigned int) */

undefined8 __thiscall
CompiledShaderArchive::setShaderThreadSafe
          (CompiledShaderArchive *this,__map_iterator param_1,uint param_2)

{
  *(uint *)((ulong)param_1 + 0x30) = param_2;
  return 1;
}


