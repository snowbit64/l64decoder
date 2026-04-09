// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00c15c2c
// Size: 384 bytes
// Signature: undefined __thiscall __append(vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>> * this, ulong param_1)


/* std::__ndk1::vector<AST_ConstantNode::Value, SHC_STLPoolAllocator<AST_ConstantNode::Value>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::__append
          (vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>> *this,
          ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  void *__s;
  undefined8 *__s_00;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  __s = *(void **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)__s >> 3)) {
    if (param_1 != 0) {
      memset(__s,0,param_1 * 8);
      __s = (void *)((long)__s + param_1 * 8);
    }
    *(void **)(this + 8) = __s;
    return;
  }
  lVar13 = (long)__s - *(long *)this >> 3;
  uVar1 = lVar13 + param_1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar7 = *(long *)(this + 0x10) - *(long *)this;
  uVar8 = (long)uVar7 >> 2;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0x7ffffffffffffff7 < uVar7) {
    uVar1 = 0x1fffffffffffffff;
  }
  if (uVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(this + 0x18),uVar1 << 3);
  }
  __s_00 = (undefined8 *)(lVar6 + lVar13 * 8);
  memset(__s_00,0,param_1 * 8);
  puVar3 = *(undefined8 **)this;
  puVar9 = *(undefined8 **)(this + 8);
  puVar2 = __s_00 + param_1;
  lVar4 = (long)puVar9 - (long)puVar3;
  if (lVar4 != 0) {
    uVar7 = lVar4 - 8;
    puVar10 = puVar9;
    if ((0x17 < uVar7) &&
       ((uVar8 = uVar7 >> 3 ^ 0xffffffffffffffff,
        puVar9 <= (undefined8 *)(lVar6 + (lVar13 + uVar8) * 8) || (__s_00 <= puVar9 + uVar8)))) {
      uVar7 = (uVar7 >> 3) + 1;
      puVar12 = (undefined8 *)(lVar6 + lVar13 * 8 + -0x10);
      uVar11 = uVar7 & 0x3ffffffffffffffc;
      __s_00 = __s_00 + -uVar11;
      puVar10 = puVar9 + -uVar11;
      puVar9 = puVar9 + -2;
      uVar8 = uVar11;
      do {
        puVar5 = puVar9 + -1;
        uVar16 = puVar9[-2];
        uVar15 = puVar9[1];
        uVar14 = *puVar9;
        puVar9 = puVar9 + -4;
        uVar8 = uVar8 - 4;
        puVar12[-1] = *puVar5;
        puVar12[-2] = uVar16;
        puVar12[1] = uVar15;
        *puVar12 = uVar14;
        puVar12 = puVar12 + -4;
      } while (uVar8 != 0);
      if (uVar7 == uVar11) goto LAB_00c15d88;
    }
    do {
      puVar10 = puVar10 + -1;
      __s_00 = __s_00 + -1;
      *__s_00 = *puVar10;
    } while (puVar10 != puVar3);
  }
LAB_00c15d88:
  *(undefined8 **)this = __s_00;
  *(undefined8 **)(this + 8) = puVar2;
  *(ulong *)(this + 0x10) = lVar6 + uVar1 * 8;
  return;
}


