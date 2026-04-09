// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<Vector3,Vector3_const&>
// Entry Point: 00b68390
// Size: 316 bytes
// Signature: pair __thiscall __emplace_unique_key_args<Vector3,Vector3_const&>(__tree<Vector3,Vector3Comparator,std::__ndk1::allocator<Vector3>> * this, Vector3 * param_1, Vector3 * param_2)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<Vector3, std::__ndk1::__tree_node<Vector3,
   void*>*, long>, bool> std::__ndk1::__tree<Vector3, Vector3Comparator,
   std::__ndk1::allocator<Vector3> >::__emplace_unique_key_args<Vector3, Vector3 const&>(Vector3
   const&, Vector3 const&) */

pair __thiscall
std::__ndk1::__tree<Vector3,Vector3Comparator,std::__ndk1::allocator<Vector3>>::
__emplace_unique_key_args<Vector3,Vector3_const&>
          (__tree<Vector3,Vector3Comparator,std::__ndk1::allocator<Vector3>> *this,Vector3 *param_1,
          Vector3 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  puVar4 = (undefined8 *)(this + 8);
  puVar5 = (undefined8 *)*puVar4;
  puVar2 = puVar4;
  if (puVar5 == (undefined8 *)0x0) {
LAB_00b6843c:
    puVar5 = (undefined8 *)*puVar4;
  }
  else {
    fVar6 = *(float *)param_1;
    fVar7 = *(float *)(param_1 + 4);
    puVar4 = (undefined8 *)(this + 8);
    do {
      while( true ) {
        puVar2 = puVar5;
        fVar8 = *(float *)((long)puVar2 + 0x1c);
        if (fVar6 == fVar8) break;
        if (fVar6 < fVar8) goto LAB_00b68408;
        if (fVar6 <= fVar8) goto LAB_00b6843c;
LAB_00b68424:
        puVar4 = puVar2 + 1;
        puVar5 = (undefined8 *)*puVar4;
        if ((undefined8 *)*puVar4 == (undefined8 *)0x0) goto LAB_00b6843c;
      }
      fVar8 = *(float *)(puVar2 + 4);
      if (fVar7 == fVar8) {
        if (*(float *)(param_1 + 8) < *(float *)((long)puVar2 + 0x24)) goto LAB_00b68408;
        if (*(float *)((long)puVar2 + 0x24) < *(float *)(param_1 + 8)) goto LAB_00b68424;
        goto LAB_00b6843c;
      }
      if (fVar8 <= fVar7) {
        if (fVar8 < fVar7) goto LAB_00b68424;
        goto LAB_00b6843c;
      }
LAB_00b68408:
      puVar4 = puVar2;
      puVar5 = (undefined8 *)*puVar2;
    } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
    puVar5 = (undefined8 *)*puVar2;
  }
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x28);
    uVar3 = *(undefined8 *)param_2;
    *puVar5 = 0;
    puVar5[1] = 0;
    uVar1 = *(undefined4 *)(param_2 + 8);
    puVar5[2] = puVar2;
    *(undefined8 *)((long)puVar5 + 0x1c) = uVar3;
    *(undefined4 *)((long)puVar5 + 0x24) = uVar1;
    *puVar4 = puVar5;
    puVar2 = puVar5;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar2 = (undefined8 *)*puVar4;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar2);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return (pair)puVar5;
}


