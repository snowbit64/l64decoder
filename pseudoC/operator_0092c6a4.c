// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator[]
// Entry Point: 0092c6a4
// Size: 256 bytes
// Signature: undefined __thiscall operator[](map<unsigned_int,SceneSave::ShapeCooking,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int_const,SceneSave::ShapeCooking>>> * this, uint * param_1)


/* std::__ndk1::map<unsigned int, SceneSave::ShapeCooking, std::__ndk1::less<unsigned int>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned int const, SceneSave::ShapeCooking> >
   >::operator[](unsigned int const&) */

undefined8 * __thiscall
std::__ndk1::
map<unsigned_int,SceneSave::ShapeCooking,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int_const,SceneSave::ShapeCooking>>>
::operator[](map<unsigned_int,SceneSave::ShapeCooking,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int_const,SceneSave::ShapeCooking>>>
             *this,uint *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)(this + 8);
  puVar5 = (undefined8 *)*puVar4;
  puVar2 = puVar4;
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(this + 8);
    do {
      while (puVar2 = puVar5, *param_1 < *(uint *)(puVar2 + 4)) {
        puVar4 = puVar2;
        puVar5 = (undefined8 *)*puVar2;
        if ((undefined8 *)*puVar2 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)*puVar2;
          goto joined_r0x0092c76c;
        }
      }
      if (*param_1 <= *(uint *)(puVar2 + 4)) break;
      puVar4 = puVar2 + 1;
      puVar5 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
  puVar5 = (undefined8 *)*puVar4;
joined_r0x0092c76c:
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x40);
    puVar5[7] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = puVar2;
    uVar1 = *param_1;
    puVar5[6] = 0;
    puVar5[5] = puVar5 + 6;
    *puVar4 = puVar5;
    plVar3 = *(long **)this;
    *(uint *)(puVar5 + 4) = uVar1;
    puVar2 = puVar5;
    if (*plVar3 != 0) {
      *(long *)this = *plVar3;
      puVar2 = (undefined8 *)*puVar4;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar2);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return puVar5 + 5;
}


