// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVertexDeclarationDesc
// Entry Point: 00ad8f7c
// Size: 52 bytes
// Signature: undefined __thiscall getVertexDeclarationDesc(VulkanVertexDeclaration * this, VertexDeclarationDesc * param_1)


/* VulkanVertexDeclaration::getVertexDeclarationDesc(VertexDeclarationDesc&) const */

undefined8 __thiscall
VulkanVertexDeclaration::getVertexDeclarationDesc
          (VulkanVertexDeclaration *this,VertexDeclarationDesc *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = *(long *)(this + 8);
  uVar4 = *(undefined8 *)(lVar1 + 0x174);
  uVar3 = *(undefined8 *)(lVar1 + 0x18c);
  uVar2 = *(undefined8 *)(lVar1 + 0x184);
  uVar6 = *(undefined8 *)(lVar1 + 0x16c);
  uVar5 = *(undefined8 *)(lVar1 + 0x164);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x17c);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar6;
  *(undefined8 *)param_1 = uVar5;
  uVar4 = *(undefined8 *)(lVar1 + 0x1b4);
  uVar3 = *(undefined8 *)(lVar1 + 0x1cc);
  uVar2 = *(undefined8 *)(lVar1 + 0x1c4);
  uVar8 = *(undefined8 *)(lVar1 + 0x19c);
  uVar7 = *(undefined8 *)(lVar1 + 0x194);
  uVar6 = *(undefined8 *)(lVar1 + 0x1ac);
  uVar5 = *(undefined8 *)(lVar1 + 0x1a4);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar1 + 0x1bc);
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  return 1;
}


