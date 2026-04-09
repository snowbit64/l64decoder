// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<DestructionShape::InterShapeJointToAdd,DestructionShape::InterShapeJointToAdd_const&>
// Entry Point: 009268c8
// Size: 364 bytes
// Signature: pair __thiscall __emplace_unique_key_args<DestructionShape::InterShapeJointToAdd,DestructionShape::InterShapeJointToAdd_const&>(__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>> * this, InterShapeJointToAdd * param_1, InterShapeJointToAdd * param_2)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<DestructionShape::InterShapeJointToAdd,
   std::__ndk1::__tree_node<DestructionShape::InterShapeJointToAdd, void*>*, long>, bool>
   std::__ndk1::__tree<DestructionShape::InterShapeJointToAdd,
   std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,
   std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>
   >::__emplace_unique_key_args<DestructionShape::InterShapeJointToAdd,
   DestructionShape::InterShapeJointToAdd const&>(DestructionShape::InterShapeJointToAdd const&,
   DestructionShape::InterShapeJointToAdd const&) */

pair __thiscall
std::__ndk1::
__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
::
__emplace_unique_key_args<DestructionShape::InterShapeJointToAdd,DestructionShape::InterShapeJointToAdd_const&>
          (__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
           *this,InterShapeJointToAdd *param_1,InterShapeJointToAdd *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar7 = (undefined8 *)(this + 8);
  puVar8 = (undefined8 *)*puVar7;
  puVar4 = puVar7;
  if (puVar8 != (undefined8 *)0x0) {
    uVar2 = *(ulong *)(param_1 + 8);
    uVar3 = *(ulong *)(param_1 + 0x10);
    uVar1 = *(uint *)param_1;
    puVar7 = (undefined8 *)(this + 8);
    do {
      while( true ) {
        puVar4 = puVar8;
        uVar6 = puVar4[5];
        if (uVar6 <= uVar2) break;
LAB_00926928:
        puVar7 = puVar4;
        puVar8 = (undefined8 *)*puVar4;
        if ((undefined8 *)*puVar4 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)*puVar4;
          goto joined_r0x009269a8;
        }
      }
      if (uVar2 == uVar6) {
        uVar6 = puVar4[6];
        if (uVar3 < uVar6) goto LAB_00926928;
        if (uVar3 == uVar6) {
          if ((uVar1 < *(uint *)(puVar4 + 4)) ||
             ((uVar1 == *(uint *)(puVar4 + 4) &&
              (*(uint *)(param_1 + 4) < *(uint *)((long)puVar4 + 0x24))))) goto LAB_00926928;
          if ((uVar3 <= uVar6) &&
             ((uVar3 != uVar6 ||
              ((uVar1 <= *(uint *)(puVar4 + 4) &&
               ((*(uint *)(puVar4 + 4) != uVar1 ||
                (*(uint *)(param_1 + 4) <= *(uint *)((long)puVar4 + 0x24))))))))) break;
        }
        else if (uVar3 <= uVar6) break;
      }
      else if (uVar2 <= uVar6) break;
      puVar7 = puVar4 + 1;
      puVar8 = (undefined8 *)*puVar7;
    } while ((undefined8 *)*puVar7 != (undefined8 *)0x0);
  }
  puVar8 = (undefined8 *)*puVar7;
joined_r0x009269a8:
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)operator_new(0x48);
    uVar10 = *(undefined8 *)(param_2 + 8);
    uVar9 = *(undefined8 *)param_2;
    uVar12 = *(undefined8 *)(param_2 + 0x18);
    uVar11 = *(undefined8 *)(param_2 + 0x10);
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = puVar4;
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    puVar8[5] = uVar10;
    puVar8[4] = uVar9;
    puVar8[7] = uVar12;
    puVar8[6] = uVar11;
    puVar8[8] = uVar5;
    *puVar7 = puVar8;
    puVar4 = puVar8;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar4 = (undefined8 *)*puVar7;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar4);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return (pair)puVar8;
}


