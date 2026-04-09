// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addAttribute
// Entry Point: 00ad8f3c
// Size: 64 bytes
// Signature: undefined __cdecl addAttribute(VkVertexInputAttributeDescription * param_1, unsigned_int * param_2, VERTEX_ELEMENT_TYPE param_3, uint param_4, uint param_5)


/* VulkanVertexDeclaration::addAttribute(VkVertexInputAttributeDescription&, unsigned int (&) [5],
   VertexDeclarationDesc::VERTEX_ELEMENT_TYPE, unsigned int, unsigned int) */

void VulkanVertexDeclaration::addAttribute
               (VkVertexInputAttributeDescription *param_1,unsigned_int *param_2,
               VERTEX_ELEMENT_TYPE param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  *(uint *)param_1 = param_5;
  *(uint *)(param_1 + 4) = param_4;
  lVar3 = (ulong)param_4 * 4;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + lVar3);
  iVar1 = (&VertexDeclarationDesc::VERTEX_ELEMENT_TYPE_SIZES)[param_3];
  iVar2 = *(int *)(param_2 + lVar3);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(ATTRIBUTE_FORMATS + (long)(int)param_3 * 4);
  *(int *)(param_2 + lVar3) = iVar2 + iVar1;
  return;
}


