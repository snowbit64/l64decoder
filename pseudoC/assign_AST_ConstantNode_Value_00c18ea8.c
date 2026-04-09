// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign<AST_ConstantNode::Value*>
// Entry Point: 00c18ea8
// Size: 600 bytes
// Signature: type __thiscall assign<AST_ConstantNode::Value*>(vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>> * this, Value * param_1, Value * param_2)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<AST_ConstantNode::Value*>::value&&is_constructible<AST_ConstantNode::Value,
   std::__ndk1::iterator_traits<AST_ConstantNode::Value*>::reference>::value, void>::type
   std::__ndk1::vector<AST_ConstantNode::Value, SHC_STLPoolAllocator<AST_ConstantNode::Value>
   >::assign<AST_ConstantNode::Value*>(AST_ConstantNode::Value*, AST_ConstantNode::Value*) */

type __thiscall
std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
assign<AST_ConstantNode::Value*>
          (vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>> *this,
          Value *param_1,Value *param_2)

{
  size_t __n;
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  Value *pVVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *__dest;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar3 = *(ulong *)(this + 0x10);
  uVar9 = (long)param_2 - (long)param_1;
  __dest = *(void **)this;
  uVar10 = (long)uVar9 >> 3;
  if ((ulong)((long)(uVar3 - (long)__dest) >> 3) < uVar10) {
    if (__dest != (void *)0x0) {
      uVar3 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (-1 < (long)uVar9) {
      if (uVar10 <= (ulong)((long)uVar3 >> 2)) {
        uVar10 = (long)uVar3 >> 2;
      }
      if (0x7ffffffffffffff7 < uVar3) {
        uVar10 = 0x1fffffffffffffff;
      }
      if (uVar10 >> 0x3d == 0) {
        puVar2 = (undefined8 *)
                 SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(this + 0x18),uVar10 * 8);
        *(undefined8 **)this = puVar2;
        *(undefined8 **)(this + 8) = puVar2;
        *(undefined8 **)(this + 0x10) = puVar2 + uVar10;
        puVar7 = puVar2;
        if (param_1 != param_2) {
          uVar10 = uVar9 - 8;
          puVar4 = puVar2;
          if ((0x17 < uVar10) &&
             ((param_1 + (uVar10 & 0xfffffffffffffff8) + 8 <= puVar2 ||
              ((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>> *)
               ((long)puVar2 + (uVar9 & 0xfffffffffffffff8)) <= param_1)))) {
            puVar7 = (undefined8 *)(param_1 + 0x10);
            uVar10 = (uVar10 >> 3) + 1;
            puVar4 = puVar2 + 2;
            uVar9 = uVar10 & 0x3ffffffffffffffc;
            param_1 = param_1 + uVar9 * 8;
            uVar3 = uVar9;
            do {
              puVar6 = puVar7 + -1;
              uVar11 = puVar7[-2];
              uVar13 = puVar7[1];
              uVar12 = *puVar7;
              puVar7 = puVar7 + 4;
              uVar3 = uVar3 - 4;
              puVar4[-1] = *puVar6;
              puVar4[-2] = uVar11;
              puVar4[1] = uVar13;
              *puVar4 = uVar12;
              puVar4 = puVar4 + 4;
            } while (uVar3 != 0);
            puVar7 = puVar2 + uVar9;
            puVar4 = puVar2 + uVar9;
            if (uVar10 == uVar9) goto LAB_00c190d8;
          }
          do {
            puVar6 = (undefined8 *)((long)param_1 + 8);
            puVar7 = puVar4 + 1;
            *puVar4 = *(undefined8 *)param_1;
            puVar4 = puVar7;
            param_1 = (Value *)puVar6;
          } while (puVar6 != (undefined8 *)param_2);
        }
        goto LAB_00c190d8;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar9 = *(long *)(this + 8) - (long)__dest;
  uVar3 = (long)uVar9 >> 3;
  puVar4 = (undefined8 *)(param_1 + (uVar9 & 0xfffffffffffffff8));
  puVar6 = puVar4;
  if (uVar10 <= uVar3) {
    puVar6 = (undefined8 *)param_2;
  }
  __n = (long)puVar6 - (long)param_1;
  puVar2 = (undefined8 *)this;
  if (__n != 0) {
    puVar2 = (undefined8 *)memmove(__dest,param_1,__n);
  }
  if (uVar3 < uVar10) {
    puVar7 = *(undefined8 **)(this + 8);
    if (puVar6 != (undefined8 *)param_2) {
      pVVar5 = param_2 + (-8 - (long)(param_1 + (uVar9 & 0xfffffffffffffff8)));
      puVar6 = puVar7;
      if (((Value *)0x17 < pVVar5) &&
         ((param_1 + (uVar3 + ((ulong)pVVar5 >> 3)) * 8 + 8 <= puVar7 ||
          ((undefined8 *)((long)puVar7 + ((ulong)pVVar5 & 0xfffffffffffffff8) + 8) <= puVar4)))) {
        uVar10 = ((ulong)pVVar5 >> 3) + 1;
        uVar9 = uVar10 & 0x3ffffffffffffffc;
        puVar6 = puVar7 + uVar9;
        puVar4 = puVar4 + uVar9;
        puVar8 = (undefined8 *)(param_1 + uVar3 * 8 + 0x10);
        puVar7 = puVar7 + 2;
        uVar3 = uVar9;
        do {
          puVar1 = puVar8 + -1;
          uVar11 = puVar8[-2];
          uVar13 = puVar8[1];
          uVar12 = *puVar8;
          puVar8 = puVar8 + 4;
          uVar3 = uVar3 - 4;
          puVar7[-1] = *puVar1;
          puVar7[-2] = uVar11;
          puVar7[1] = uVar13;
          *puVar7 = uVar12;
          puVar7 = puVar7 + 4;
        } while (uVar3 != 0);
        puVar7 = puVar6;
        if (uVar10 == uVar9) goto LAB_00c190d8;
      }
      do {
        puVar8 = puVar4 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = *puVar4;
        puVar6 = puVar7;
        puVar4 = puVar8;
      } while (puVar8 != (undefined8 *)param_2);
    }
  }
  else {
    puVar7 = (undefined8 *)((long)__dest + __n);
  }
LAB_00c190d8:
  *(undefined8 **)(this + 8) = puVar7;
  return (type)puVar2;
}


