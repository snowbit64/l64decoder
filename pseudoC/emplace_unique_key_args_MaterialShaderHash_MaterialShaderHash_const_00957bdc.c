// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<MaterialShaderHash,MaterialShaderHash_const&>
// Entry Point: 00957bdc
// Size: 292 bytes
// Signature: pair __thiscall __emplace_unique_key_args<MaterialShaderHash,MaterialShaderHash_const&>(__tree<MaterialShaderHash,std::__ndk1::less<MaterialShaderHash>,std::__ndk1::allocator<MaterialShaderHash>> * this, MaterialShaderHash * param_1, MaterialShaderHash * param_2)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<MaterialShaderHash,
   std::__ndk1::__tree_node<MaterialShaderHash, void*>*, long>, bool>
   std::__ndk1::__tree<MaterialShaderHash, std::__ndk1::less<MaterialShaderHash>,
   std::__ndk1::allocator<MaterialShaderHash> >::__emplace_unique_key_args<MaterialShaderHash,
   MaterialShaderHash const&>(MaterialShaderHash const&, MaterialShaderHash const&) */

pair __thiscall
std::__ndk1::
__tree<MaterialShaderHash,std::__ndk1::less<MaterialShaderHash>,std::__ndk1::allocator<MaterialShaderHash>>
::__emplace_unique_key_args<MaterialShaderHash,MaterialShaderHash_const&>
          (__tree<MaterialShaderHash,std::__ndk1::less<MaterialShaderHash>,std::__ndk1::allocator<MaterialShaderHash>>
           *this,MaterialShaderHash *param_1,MaterialShaderHash *param_2)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar5 = (undefined8 *)(this + 8);
  puVar6 = (undefined8 *)*puVar5;
  puVar4 = puVar5;
  if (puVar6 != (undefined8 *)0x0) {
    uVar1 = *(ulong *)param_1;
    puVar5 = (undefined8 *)(this + 8);
    do {
      while( true ) {
        puVar7 = puVar6;
        uVar2 = puVar7[4];
        bVar3 = *(ulong *)(param_1 + 8) < (ulong)puVar7[5];
        if (uVar1 != uVar2) {
          bVar3 = uVar1 < uVar2;
        }
        puVar4 = puVar7;
        if (!bVar3) break;
        puVar5 = puVar7;
        puVar6 = (undefined8 *)*puVar7;
        if ((undefined8 *)*puVar7 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)*puVar7;
          goto joined_r0x00957c7c;
        }
      }
      bVar3 = (ulong)puVar7[5] < *(ulong *)(param_1 + 8);
      if (uVar1 != uVar2) {
        bVar3 = uVar2 < uVar1;
      }
      if (!bVar3) break;
      puVar5 = puVar7 + 1;
      puVar6 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
  }
  puVar6 = (undefined8 *)*puVar5;
  puVar7 = puVar5;
joined_r0x00957c7c:
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)operator_new(0x30);
    uVar9 = *(undefined8 *)(param_2 + 8);
    uVar8 = *(undefined8 *)param_2;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = puVar4;
    puVar6[5] = uVar9;
    puVar6[4] = uVar8;
    *puVar7 = puVar6;
    puVar4 = puVar6;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar4 = (undefined8 *)*puVar7;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar4);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return (pair)puVar6;
}


