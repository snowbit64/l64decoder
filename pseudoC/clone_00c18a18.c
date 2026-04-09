// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00c18a18
// Size: 572 bytes
// Signature: undefined __thiscall clone(AST_AggregateNode * this, SHC_PoolAllocator * param_1)


/* AST_AggregateNode::clone(SHC_PoolAllocator&) */

undefined8 * __thiscall AST_AggregateNode::clone(AST_AggregateNode *this,SHC_PoolAllocator *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar5 = (undefined8 *)SHC_PoolAllocator::allocate(param_1,0x88);
  uVar4 = *(undefined4 *)(this + 0x48);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR___cxa_pure_virtual_00fed450;
  uVar17 = *(undefined8 *)(this + 0x30);
  uVar6 = *(undefined8 *)(this + 0x28);
  uVar19 = *(undefined8 *)(this + 0x20);
  uVar18 = *(undefined8 *)(this + 0x18);
  uVar21 = *(undefined8 *)(this + 0x40);
  uVar20 = *(undefined8 *)(this + 0x38);
  *(undefined4 *)(puVar5 + 9) = uVar4;
  *puVar5 = &PTR_traverse_00fed8e8;
  puVar5[4] = uVar19;
  puVar5[3] = uVar18;
  puVar5[8] = uVar21;
  puVar5[7] = uVar20;
  puVar5[6] = uVar17;
  puVar5[5] = uVar6;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[10] = 0;
  puVar5[0xd] = param_1;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  SHC_Type::copyType((SHC_Type *)(puVar5 + 3),(SHC_Type *)(this + 0x18),param_1);
  pbVar8 = *(byte **)(this + 0x70);
  if (pbVar8 == (byte *)0x0) {
    uVar6 = 0;
  }
  else {
    pbVar10 = *(byte **)(pbVar8 + 0x10);
    if ((*pbVar8 & 1) == 0) {
      pbVar10 = pbVar8 + 1;
    }
    uVar6 = SHC_String::New((char *)pbVar10,param_1);
  }
  pbVar8 = *(byte **)(this + 0x78);
  puVar5[0xe] = uVar6;
  if (pbVar8 == (byte *)0x0) {
    uVar6 = 0;
  }
  else {
    pbVar10 = *(byte **)(pbVar8 + 0x10);
    if ((*pbVar8 & 1) == 0) {
      pbVar10 = pbVar8 + 1;
    }
    uVar6 = SHC_String::New((char *)pbVar10,param_1);
  }
  pbVar8 = *(byte **)(this + 0x80);
  puVar5[0xf] = uVar6;
  if (pbVar8 == (byte *)0x0) {
    uVar6 = 0;
  }
  else {
    pbVar10 = *(byte **)(pbVar8 + 0x10);
    if ((*pbVar8 & 1) == 0) {
      pbVar10 = pbVar8 + 1;
    }
    uVar6 = SHC_String::New((char *)pbVar10,param_1);
  }
  lVar11 = *(long *)(this + 0x50);
  lVar16 = *(long *)(this + 0x58);
  puVar5[0x10] = uVar6;
  if (lVar16 != lVar11) {
    uVar15 = 0;
    do {
      plVar7 = *(long **)(lVar11 + uVar15 * 8);
      if (plVar7 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar7 + 8))(plVar7,param_1);
      }
      puVar2 = (undefined8 *)puVar5[0xb];
      if (puVar2 < (undefined8 *)puVar5[0xc]) {
        *puVar2 = uVar6;
        puVar5[0xb] = puVar2 + 1;
      }
      else {
        lVar11 = puVar5[10];
        lVar16 = (long)puVar2 - lVar11 >> 3;
        uVar1 = lVar16 + 1;
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar9 = (long)(undefined8 *)puVar5[0xc] - lVar11;
        uVar12 = (long)uVar9 >> 2;
        if (uVar1 <= uVar12) {
          uVar1 = uVar12;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = SHC_PoolAllocator::allocate((SHC_PoolAllocator *)puVar5[0xd],uVar1 << 3);
        }
        puVar2 = (undefined8 *)(lVar11 + lVar16 * 8);
        *puVar2 = uVar6;
        puVar3 = (undefined8 *)puVar5[10];
        puVar14 = (undefined8 *)puVar5[0xb];
        puVar13 = puVar2;
        while (puVar14 != puVar3) {
          puVar14 = puVar14 + -1;
          puVar13 = puVar13 + -1;
          *puVar13 = *puVar14;
        }
        puVar5[10] = puVar13;
        puVar5[0xb] = puVar2 + 1;
        puVar5[0xc] = lVar11 + uVar1 * 8;
      }
      lVar11 = *(long *)(this + 0x50);
      uVar15 = (ulong)((int)uVar15 + 1);
    } while (uVar15 < (ulong)(*(long *)(this + 0x58) - lVar11 >> 3));
  }
  return puVar5;
}


