// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00ab82dc
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>,std::__ndk1::__map_value_compare<VertexDeclarationDesc,std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>,ComparerUtil::VertexDeclarationDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<VertexDeclarationDesc,
   VulkanVertexDeclaration::Shared>, std::__ndk1::__map_value_compare<VertexDeclarationDesc,
   std::__ndk1::__value_type<VertexDeclarationDesc, VulkanVertexDeclaration::Shared>,
   ComparerUtil::VertexDeclarationDescComparer, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<VertexDeclarationDesc,
   VulkanVertexDeclaration::Shared> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<VertexDeclarationDesc,
   VulkanVertexDeclaration::Shared>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>,std::__ndk1::__map_value_compare<VertexDeclarationDesc,std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>,ComparerUtil::VertexDeclarationDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>>>
::destroy(__tree<std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>,std::__ndk1::__map_value_compare<VertexDeclarationDesc,std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>,ComparerUtil::VertexDeclarationDescComparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VertexDeclarationDesc,VulkanVertexDeclaration::Shared>>>
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


