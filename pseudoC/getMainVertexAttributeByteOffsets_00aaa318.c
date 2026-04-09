// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMainVertexAttributeByteOffsets
// Entry Point: 00aaa318
// Size: 184 bytes
// Signature: undefined __thiscall getMainVertexAttributeByteOffsets(VertexDeclarationDesc * this, uint * param_1, uint * param_2, uint * param_3)


/* VertexDeclarationDesc::getMainVertexAttributeByteOffsets(unsigned int&, unsigned int&, unsigned
   int&) const */

void __thiscall
VertexDeclarationDesc::getMainVertexAttributeByteOffsets
          (VertexDeclarationDesc *this,uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  long local_18;
  
  lVar2 = tpidr_el0;
  lVar4 = 0;
  local_18 = *(long *)(lVar2 + 0x28);
  *param_1 = 0xffffffff;
  *param_2 = 0xffffffff;
  *param_3 = 0xffffffff;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  do {
    uVar1 = *(uint *)((long)&local_30 + (ulong)*(uint *)(this + lVar4 * 4 + 0x44) * 4);
    *(uint *)((long)&local_30 + (ulong)*(uint *)(this + lVar4 * 4 + 0x44) * 4) =
         uVar1 + (&VERTEX_ELEMENT_TYPE_SIZES)[*(uint *)(this + lVar4 * 4 + 0x18)];
    iVar3 = (int)lVar4;
    puVar5 = param_1;
    if (((iVar3 == 0) || (puVar5 = param_3, iVar3 == 9)) || (puVar5 = param_2, iVar3 == 2)) {
      *puVar5 = uVar1;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0xb);
  if (*(long *)(lVar2 + 0x28) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


