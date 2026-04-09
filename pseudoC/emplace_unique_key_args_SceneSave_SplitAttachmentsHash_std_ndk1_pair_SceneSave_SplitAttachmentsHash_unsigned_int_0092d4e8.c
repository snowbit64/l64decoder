// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<SceneSave::SplitAttachmentsHash,std::__ndk1::pair<SceneSave::SplitAttachmentsHash,unsigned_int>>
// Entry Point: 0092d4e8
// Size: 308 bytes
// Signature: pair __thiscall __emplace_unique_key_args<SceneSave::SplitAttachmentsHash,std::__ndk1::pair<SceneSave::SplitAttachmentsHash,unsigned_int>>(__tree<std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash,unsigned_int>,std::__ndk1::__map_value_compare<SceneSave::SplitAttachmentsHash,std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash,unsigned_int>,std::__ndk1::less<SceneSave::SplitAttachmentsHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash,unsigned_int>>> * this, SplitAttachmentsHash * param_1, pair * param_2)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash,
   unsigned int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash, unsigned
   int>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash, unsigned int>,
   std::__ndk1::__map_value_compare<SceneSave::SplitAttachmentsHash,
   std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash, unsigned int>,
   std::__ndk1::less<SceneSave::SplitAttachmentsHash>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash, unsigned int> >
   >::__emplace_unique_key_args<SceneSave::SplitAttachmentsHash,
   std::__ndk1::pair<SceneSave::SplitAttachmentsHash, unsigned int>
   >(SceneSave::SplitAttachmentsHash const&, std::__ndk1::pair<SceneSave::SplitAttachmentsHash,
   unsigned int>&&) */

pair __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash,unsigned_int>,std::__ndk1::__map_value_compare<SceneSave::SplitAttachmentsHash,std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash,unsigned_int>,std::__ndk1::less<SceneSave::SplitAttachmentsHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash,unsigned_int>>>
::
__emplace_unique_key_args<SceneSave::SplitAttachmentsHash,std::__ndk1::pair<SceneSave::SplitAttachmentsHash,unsigned_int>>
          (__tree<std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash,unsigned_int>,std::__ndk1::__map_value_compare<SceneSave::SplitAttachmentsHash,std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash,unsigned_int>,std::__ndk1::less<SceneSave::SplitAttachmentsHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SceneSave::SplitAttachmentsHash,unsigned_int>>>
           *this,SplitAttachmentsHash *param_1,pair *param_2)

{
  pair pVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar7 = (undefined8 *)(this + 8);
  puVar8 = (undefined8 *)*puVar7;
  puVar3 = puVar7;
  if (puVar8 != (undefined8 *)0x0) {
    uVar4 = *(ulong *)param_1;
    puVar7 = (undefined8 *)(this + 8);
    do {
      while( true ) {
        puVar9 = puVar8;
        uVar6 = puVar9[4];
        bVar2 = *(uint *)(param_1 + 8) < *(uint *)(puVar9 + 5);
        if (uVar4 != uVar6) {
          bVar2 = uVar4 < uVar6;
        }
        puVar3 = puVar9;
        if (!bVar2) break;
        puVar7 = puVar9;
        puVar8 = (undefined8 *)*puVar9;
        if ((undefined8 *)*puVar9 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)*puVar9;
          goto joined_r0x0092d590;
        }
      }
      bVar2 = *(uint *)(puVar9 + 5) < *(uint *)(param_1 + 8);
      if (uVar4 != uVar6) {
        bVar2 = uVar6 < uVar4;
      }
      if (!bVar2) break;
      puVar7 = puVar9 + 1;
      puVar8 = (undefined8 *)*puVar7;
    } while ((undefined8 *)*puVar7 != (undefined8 *)0x0);
  }
  puVar8 = (undefined8 *)*puVar7;
  puVar9 = puVar7;
joined_r0x0092d590:
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)operator_new(0x38);
    uVar11 = *(undefined8 *)(param_2 + 2);
    uVar10 = *(undefined8 *)param_2;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = puVar3;
    pVar1 = param_2[4];
    puVar8[5] = uVar11;
    puVar8[4] = uVar10;
    *puVar9 = puVar8;
    plVar5 = *(long **)this;
    *(pair *)(puVar8 + 6) = pVar1;
    puVar3 = puVar8;
    if (*plVar5 != 0) {
      *(long *)this = *plVar5;
      puVar3 = (undefined8 *)*puVar9;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar3);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return (pair)puVar8;
}


